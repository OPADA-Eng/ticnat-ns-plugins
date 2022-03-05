//
// ConnectionBase.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 * These are the different responses from the printer.  These responses are
 * sent in response to special configuration commands that can be sent to
 * the printer.  After these commands are sent the specific printer response
 * can queried for with waitResponse to translate them into human readable
 * values.
 */
typedef NS_ENUM(NSInteger, PrinterResponse) { 
	/** The result was either unrecognized or never set. */
	PrinterResponseUnknown,
    
    /** No response from printer */
    PrinterResponseNO_RESPONSE,

	/** The printer returned that it acknowledged the command. */
	PrinterResponseACK, 
	
	/** Error last data transferred was invalid */
	PrinterResponseNAK, 
	
	/** The printer is writing the last command. */
	PrinterResponseWRITING, 
	
	/** The printer is ready for the next block in the transfer. */
	PrinterResponseRESUME, 
	
	/** The transfer has been successfully completed. */
	PrinterResponseDONE 
};

/**
 *  The ConnectionDelegate protocol defines the methods implemented by ConnectionBase, Connection_TCP,
 *  and Connection_BluetoothEA objects
 */
@protocol ConnectionDelegate<NSObject>

/**
 *  This delegate receives this message when connection successfully opened. Use this
 *  to handle tasks after connection has been opened
 *  @param connection the current connection
 */
-(void)connectionDidOpen:(id)connection;

/**
 *  This delegate receives this message when connection resulted in an error.
 *  Use this to handle tasks after connection error occurred
 *  @param connection the current connection
 *  @param error Connection error that occurred
 */
-(void)connectionFailed:(id)connection withError:(NSError *)error;

/**
 *  This delegate receives this message whhen connection successfully closed.  Use this
 *  to handle tasks after connection has been closed.
 *  @param connection the current connection
 */
-(void)connectionDidClosed:(id)connection;

@end

/**
 * This class encapsulates all of the different connection methods into a 
 * single uniform base class.  The main purpose of this set of classes is
 * for communication with a Datamax-O'Neil Printer, but it can be used to connect
 * to any device that supports the protocols here in.
 * <br>
 * Using the ConnectionBase object type is a good way to make a generalized
 * set of routines that can accept any type of connection.
 */
@interface ConnectionBase : NSObject {
	
    /**
	 * Background thread that handles opening connection asynchronously
     *
	 */
	NSThread* openWorkerThread;
	/**
	 * MemoryStream to store received data in.  As data is read from the
	 * device it will be stored in here.  When the user requests a read
	 * the data will be taken from the start of this stream.  All of the
	 * unread data will then be shifted to the beginning of the stream
	 * and the read and write pointers are adjusted to match. 
	 */
	NSMutableData* dataRecvBuffer;

	/**
	 * Are we a server (or a client).  During the startup process clients
	 * simply connect to their target while servers must listen for incoming
	 * connections and then connect to it when it arrives.
	 */
	bool isServerMode;
	
	/**
	 * This hold the data to send.  Data to be sent to the target device
	 * is converted into a byte array and then stored here.  The data is
	 * then sent by the background thread.
	 */
	NSMutableData* dataStorageSend;
	
	/**
	 * Is the connection open.  This is true when the connection is open or
	 * listening and false if we have never connected or the connection is
	 * closed.
	 */
	bool isOpen;
	
	/**
	 * This flag is set to true when close is called.  This
	 * will cause any more external writes, reads, and opens to fail.
	 */
	bool isClosing;
    
    /**
     * This represents the current status of connection
     */
    int connectionStatus;
    
    /**
     *  This represents the timeout of the connection during connection attempt.
     *  This will override the default NSStream timeout value.
     */
    int connTimeout;
    
    /**
     *  This represents the error state of the current stream. If no error occurred, then streamError is nil.
     */
    NSError* streamError;
    
    /**
     *  This represents the last exception that occurred. If no exception occurred, then lastException is nil(read-only).
     */
    NSException *lastException;
    
    /**
     * Connection Run loop for background thread
     */
    NSRunLoop *connRunLoop;
}

/**
 *  The receiver's delegate.  The delegate must implement the ConnectionDelegate Protocol
 */
@property(nonatomic,weak) id<ConnectionDelegate> delegate;

/**
 *  This represents the error state of the current stream. If no error occurred, then streamError is nil.
 */
@property(readonly,retain) NSError* streamError;

/**
 *  This represents the last exception that occurred. If no exception occurred, then lastException is nil(read-only).
 */
@property(readonly,retain) NSException* lastException;

/**
 *  This represents the timeout of the connection during connection attempt.
 *  This will override the default NSStream timeout value.
 */
@property int connTimeout;

/**
 * Is the connection open.  This is true when the connection is open or
 * listening and false if we have never connected or the connection is
 * closed.
 */
@property(readonly) bool isOpen;

/**
 * This property is useful to determine if any data is available
 * to be read from the target device. It can also be used to wait
 * until 'enough' data is available to warrant proccessing.
 */
@property(readonly) long bytesAvailable;

/**
 * Are we a server (or a client).  During the startup process clients
 * simply connect to their target while servers must listen for incoming
 * connections and then connect to it when it arrives.
 */
@property(readonly) bool isServerMode;

/**
 * Are we a server (or a client).  During the startup process clients
 * simply connect to their target while servers must listen for incoming
 * connections and then connect to it when it arrives.
 */
@property(readonly) bool isClientMode;

/**
 * This represents the current status of connection
 */
@property(readonly) int connectionStatus;

/**
 * This flag is set to true when close is called.  This
 * will cause any more external writes, reads, and opens to fail.
 */
@property(readonly) bool isClosing;

/**
 * We only want connections to be able to be created from our static
 * methods. This will create a server-based or client-based connection.
 * @param isServer Is this a server-based or client-based connection
 * @param delegate delegate for ConnectionDelegate updates
 *
 * @return client-based connection object if false. server-based connection if true.
 */
-(id) initWithMode: (bool) isServer withDelegate:(id<ConnectionDelegate>) delegate;

/**
 * This will clear the data waiting in the read buffer.
 * <br>
 * Because the data is read off the device and can collect in the
 * recv buffer it is a good idea to clear the buffer if there is a
 * time period where extra data could have been returned, or other
 * circumstances that could case data to be returned late.  
 */
-(void) clearReadBuffer;

/**
 * This will clear the data waiting in the write buffer.
 * <br>
 * The main reason for this is when you are aborting your writing
 * attempts and want to make sure data is not queued to be written.
 * You may also call it before close to make sure the buffer is empty
 * and allow you to exit faster.
 */
-(void) clearWriteBuffer;

/**
 * This will return all of the current data read from the device in
 * the form of a string.
 *
 * @return A NSUTF8StringEncoding string containing the data received.
 */
-(NSString*) readString;

/**
 * This will return all of the current data read from the device in
 * the form of an string using the encoding indicated.
 * 
 * @param dataEncoding Encoding to use to convert the data from
 * the device with.
 * @return A string encoded as indicated containing the data received.
 */
-(NSString*) readString: (NSStringEncoding) dataEncoding;

/**
 * This will read data from the connection returning up to and including 
 * the end sequence if found.  If the end sequence isn't found by the time out
 * all of the data recieved up to that point will be returned.
 *
 * @param endSequence String to look for to signal we are done.
 * @param msecTimeout Number of milliseconds between reads that signals
 * a timeout.  A time of 0 means never timeout and a negative time
 * indicates to make the time out absolute.  So even if data is still
 * coming in it would terminate after msecTimeout total milliseconds.
 * @return A NSUTF8StringEncoding string containing the data received.
 */
-(NSString*) readStringUntil: (NSString*) endSequence waitFor: (long) msecTimeout;

/**
 * This will read data from the connection returning up to and including 
 * the end sequence if found.  If the end sequence isn't found by the time out
 * all of the data recieved up to that point will be returned.
 *
 * @param endSequence String to look for to signal we are done.
 * @param msecTimeout Number of milliseconds between reads that signals
 * a timeout.  A time of 0 means never timeout and a negative time
 * indicates to make the time out absolute.  So even if data is still
 * coming in it would terminate after msecTimeout total milliseconds.
 * @param dataEncoding Encoding to use to convert the data from
 * the device with.
 * @return A string encoded as indicated containing the data received.
 */
-(NSString*) readStringUntil: (NSString*) endSequence waitFor: (long) msecTimeout withEncoding: (NSStringEncoding) dataEncoding;

/**
 * This will read lines from the connection returning up to and including
 * a line containing the end sequence if found.
 * If the line with start sequence isn't found by the time out
 * all of the data recieved up to that point will be returned.
 *
 * @param endSequence String to look for to signal last line.
 * @param msecTimeout Number of milliseconds between reads that signals
 * a timeout.  A time of 0 means never timeout and a negative time
 * indicates to make the time out absolute.  So even if data is still
 * coming in it would terminate after msecTimeout total milliseconds.
 * @return A NSUTF8StringEncoding string containing the data received.
 */
-(NSString*) readLineUntil: (NSString*) endSequence waitFor: (long) msecTimeout;

/**
 * This will read lines from the connection returning up to and including
 * a line containing the end sequence if found.
 * If the line with start sequence isn't found by the time out
 * all of the data recieved up to that point will be returned.
 *
 * @param endSequence String to look for to signal last line.
 * @param msecTimeout Number of milliseconds between reads that signals
 * a timeout.  A time of 0 means never timeout and a negative time
 * indicates to make the time out absolute.  So even if data is still
 * coming in it would terminate after msecTimeout total milliseconds.
 * @param dataEncoding Encoding to use to convert the data from
 * the device with.
 * @return A string encoded as indicated containing the data received.
 */
-(NSString*) readLineUntil: (NSString*) endSequence waitFor: (long) msecTimeout withEncoding: (NSStringEncoding) dataEncoding;

/**
 * This will write  the current data read from the device into the buffer
 * up to the provided length.
 *
 * @param buffer Byte array to write data into.
 * @param length Maximum number of bytes to write into buffer.
 * @return Number of bytes read.
 */
-(int) readBytes: (unsigned char *) buffer maxBufferSize: (long) length;

/**
 * This will read the current data from the device into a NSData object.
 * @return NSData object holding the data read.
 */
-(NSData*) readData;

/**
 *  This will write the specified byte to the printer
 *  @param byte The byte to write
 */
-(void) writeByte: (unsigned char) byte;

/**
 * This will write the string to the device in the form of a
 * NSUTF8StringEncoding encoded string.
 *
 * @param text String to write.
 */
-(void) writeString: (NSString*) text;

/**
 * This will write the string to the device in the form of a
 * string using the provided encoding.
 *
 * @param text String to write.
 * @param dataEncoding Encoding used to encode the data written to printer.
 */
-(void) writeString: (NSString*) text withEncoding: (NSStringEncoding) dataEncoding;

/**
 * This will write the data to the device.
 *
 * @param buffer Byte array to write data from.
 */
-(void) writeData: (NSData*) buffer;

/**
 * This will write the data to the device from buffer up to the length indicated.
 *
 * @param buffer Byte array to write data from.
 * @param length Number of bytes to write.
 */
-(void) writeBytes: (unsigned char*) buffer count: (long) length;

/**
 * This will open the current connection if not open.  This method utilizes run loops
 * to constantly capture all stream events until the connection is close.
 * Note: This method should be called in the main thread or a different from
 * the thread that handles connection operations such as read, write, etc..
 */
-(void) open;

/**
 * This function will wait, up to the given timeout in milliseconds, for the
 * sending queue to be empty.  The function will return true if the
 * queue is empty, or false if it wasn't empty by the end of the time
 * out.
 * <br>
 * Note: while the sending queue might me empty the printer might not
 * have processed the data yet.  So closing the connection might cause
 * it to kill the stack and lose unprocessed data.  Use a printer
 * query determine when it is safe to kill a connection not this function.
 *
 * @param timeout_msec Number of milliseconds to wait for the sending buffer.
 * @return True if write buffer is empty false otherwise.
 */
-(bool) waitForEmptyBuffer: (int) timeout_msec;

/**
 * This will close the current connection if open.
 * <br>
 * This should be called to clean up the connection object and 
 * background threads associated with the communication.  Close
 * will first wait for all queued items to be sent.  Then it will
 * close the connection and terminate the threads.  After the 
 * connection is closed the read and write buffers will be cleared.
 */
-(void) close;

/**
 * This gets the current connection status of the connection.
 * @return Message containing the current status of connection
 */
-(NSString*) getConnectionStatusString;

/**
 * This gets the current connection status of the connection.
 * @return ID of the current status of connection
 */
-(int) getConnectionStatusID;

/**
 *  This the last stream error that occurred.
 *  @return the stream error. nil if no error
 */
-(NSError*) getLastStreamError;

/**
 *  This the last error that occurred.
 *  @return the last error. nil if no error
 */
-(NSString*) getLastException;

@end
