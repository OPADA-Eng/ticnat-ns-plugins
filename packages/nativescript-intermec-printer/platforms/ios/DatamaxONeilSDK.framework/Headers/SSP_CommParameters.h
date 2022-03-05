//
//  SSP_CommParameters.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {S2?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>Serial Baud Rate</td></tr>
 *    <tr><td>H</td><td>Handshake type</td></tr>
 *    <tr><td>N</td><td>Data Bits</td></tr>
 *    <tr><td>P</td><td>Serial Communication Parity</td></tr>
 * </table>
 */
@interface SSP_CommParameters : PrinterState

/**
 * Serial Baud Rate
 */
typedef NS_ENUM(NSInteger, SSPBaudValue) {
    /**
     * The result was never set.
     */
    SSPBaudValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    SSPBaudValueUnknown = 999,
    
    /**
     * 1200 Baud
     */
    SSPBaudValueBaud_1200 = 1200,
    
    /**
     * 2400 Baud
     */
    SSPBaudValueBaud_2400 = 2400,
    
    /**
     * 4800 Baud
     */
    SSPBaudValueBaud_4800 = 4800,
    
    /**
     * 9600 Baud
     */
    SSPBaudValueBaud_9600 = 9600,
    
    /**
     * 19200 Baud
     */
    SSPBaudValueBaud_19200 = 19200,
    
    /**
     * 38400 Baud
     */
    SSPBaudValueBaud_38400 = 38400,
    
    /**
     * 57600 Baud
     */
    SSPBaudValueBaud_57600 = 57600,
    
    /**
     * 115200 Baud
     */
    SSPBaudValueBaud_115200 = 115200,
    
    /**
     * 230400 Baud
     */
    SSPBaudValueBaud_230400 = 230400,
    
    /**
     * 460800 Baud
     */
    SSPBaudValueBaud_460800 = 460800,
    
    /**
     * 921600 Baud
     */
    SSPBaudValueBaud_921600 = 921600
};

/**
 * Handshake type
 */
typedef NS_ENUM(NSInteger, SSPHandshake) {
    /**
     * The result was never set.
     */
    SSPHandshakeUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    SSPHandshakeUnknown = 999,
    
    /**
     * No control is used for the handshake
     */
    SSPHandshakeNone = 78, //N
    
    /**
     * Request-to-Send (RTS) hardware flow control is used. RTS signals that data is available for transmission. If the input buffer becomes full, the RTS line will be set to false. The RTS line will be set to true when more room becomes available in the input buffer
     */
    SSPHandshakeHardware = 72,  //H
    
    /**
     * The XON/XOFF software control protocol is used. The XOFF control is sent to stop the transmission of data. The XON control is sent to resume the transmission. These software controls are used instead of Request to Send (RTS) and Clear to Send (CTS) hardware controls
     */
    SSPHandshakeSoftware = 83,  //S
    
    /**
     * Both the Request-to-Send (RTS) hardware control and the XON/XOFF software controls are used
     */
    SSPHandshakeBoth = 66 //B
};

/**
 * Serial Communication Parity
 */
typedef NS_ENUM(NSInteger, SSPParity) {
    /**
     * The result was never set.
     */
    SSPParityUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    SSPParityUnknown = 999,
    
    /**
     * No parity check occurs
     */
    SSPParityNone = 78, //N
    
    /**
     * Sets the parity bit so that the count of bits set is an even number
     */
    SSPParityEven = 69, //E
    
    /**
     * Sets the parity bit so that the count of bits set is an odd number
     */
    SSPParityOdd = 79 //O
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getBaudRate parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBaudRate may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBaudRate
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBaudRate_IsPresent;

/**
 * Serial Baud Rate
 * <p>
 * The return value for this parameter is only valid if getBaudRate_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBaudRate_IsPresent
 * @return The current value for the parameter.
 */
-(SSPBaudValue) getBaudRate;

/**
 * Indicates if getRS232Handshake parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232Handshake may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Handshake
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232Handshake_IsPresent;

/**
 * Handshake type
 * <p>
 * The return value for this parameter is only valid if getRS232Handshake_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Handshake_IsPresent
 * @return The current value for the parameter.
 */
-(SSPHandshake) getRS232Handshake;

/**
 * Indicates if getRS232DataBits parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232DataBits may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232DataBits
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232DataBits_IsPresent;

/**
 * Data Bits
 * <p>
 * The return value for this parameter is only valid if getRS232DataBits_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232DataBits_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRS232DataBits;

/**
 * Indicates if getRS232Parity parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232Parity may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Parity
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232Parity_IsPresent;

/**
 * Serial Communication Parity
 * <p>
 * The return value for this parameter is only valid if getRS232Parity_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Parity_IsPresent
 * @return The current value for the parameter.
 */
-(SSPParity) getRS232Parity;

@end
