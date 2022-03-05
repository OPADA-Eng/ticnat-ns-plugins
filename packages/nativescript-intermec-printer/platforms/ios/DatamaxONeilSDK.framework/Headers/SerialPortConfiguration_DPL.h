//
//  SerialPortConfiguration_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * Serial Baud Rate
 */
typedef NS_ENUM(NSInteger, BaudRateValueDPL) {
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    BaudRateValueDPLUnknown = 999,
    
    /**
     * 9600 Baud
     */
    BaudRateValueDPL_9600 = 96,
    
    /**
     * 115200 Baud
     */
    BaudRateValueDPL_115200 = 15,
    
    /**
     * 19200 Baud
     */
    BaudRateValueDPL_19200 = 19,
    
    /**
     * 38400 Baud
     */
    BaudRateValueDPL_38400 = 38,
    
    /**
     * 230400 Baud
     */
    BaudRateValueDPL_230400 = 23,
    
    /**
     * 460800 Baud
     */
    BaudRateValueDPL_460800 = 46,
    
    /**
     * 28800 Baud
     */
    BaudRateValueDPL_28800 = 28,
    
    /**
     * 57600 Baud
     */
    BaudRateValueDPL_57600 = 57
};

/**
 * Handshake type
 */
typedef NS_ENUM(NSInteger, HandshakeValueDPL) {
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    HandshakeValueDPLUnknown = 999,
    
    /**
     * No control is used for the handshake (N)
     */
    HandshakeValueDPLNone = 78,
    
    /**
     * Request-to-Send (H)(RTS) hardware flow control is used. RTS signals that data is available for transmission.
     * If the input buffer becomes full, the RTS line will be set to false.
     * The RTS line will be set to true when more room becomes available in the input buffer
     *
     */
    HandshakeValueDPLHardware = 72,
    
    /**
     * The XON/XOFF software control protocol is used.
     * The XOFF control is sent to stop the transmission of data.
     * The XON control is sent to resume the transmission.
     * These software controls are used instead of Request to Send (RTS) and Clear to Send (CTS) hardware controls
     */
    HandshakeValueDPLSoftware = 83,
    
    /**
     * Both the Request-to-Send (RTS) hardware control and the XON/XOFF software controls are used
     */
    HandshakeValueDPLBoth = 66
};

/**
 * Serial Communication Parity
 */
typedef NS_ENUM(NSInteger, ParityValueDPL) {
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    ParityValueDPLUnknown = 999,
    
    /**
     * No parity check occurs (N)
     */
    ParityValueDPLNone = 78,
    
    /**
     * Sets the parity bit so that the count of bits set is an even number (E)
     */
    ParityValueDPLEven = 69,
    
    /**
     * Sets the parity bit so that the count of bits set is an odd number (O)
     */
    ParityValueDPLOdd = 79
};


/**
 * This class handles the Serial Port Configuration data from an KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>SPAB</td><td>Serial Port A Baud Rate</td></tr>
 *    <tr><td>SPAp</td><td>Serial Port A Parity</td></tr>
 *    <tr><td>SPAP</td><td>Serial Port A Handshaking</td></tr>
 *    <tr><td>SPAS</td><td>Serial Port A Stop Bit</td></tr>
 *    <tr><td>SPAD</td><td>Serial Port A Data Bits</td></tr>
 * </table>
 */
@interface SerialPortConfiguration_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * This gets the printer's baud rate. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>96</td><td>9600</td></tr>
 *    <tr><td>15</td><td>115200</td></tr>
 *    <tr><td>19</td><td>19200</td></tr>
 *    <tr><td>38</td><td>38400</td></tr>
 *    <tr><td>23</td><td>230400</td></tr>
 *    <tr><td>46</td><td>460800</td></tr>
 *    <tr><td>28</td><td>28800</td></tr>
 *    <tr><td>57</td><td>57600</td></tr>
 * </table>
 *  @return printer's baud rate
 */
-(BaudRateValueDPL)getBaudRate;

/**
 *  This sets the printer's baud rate
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBaudRate: (BaudRateValueDPL) value;

/**
 * This gets the printer's parity. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>E</td><td>Even</td></tr>
 *    <tr><td>O</td><td>Odd</td></tr>
 *    <tr><td>N</td><td>None</td></tr>
 * </table>
 *  @return printer's parity
 */
-(ParityValueDPL)getParity;

/**
 *  This sets printer's parity
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setParity: (ParityValueDPL) value;

/**
 * This gets the printer's serial handshaking. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>B</td><td>Both</td></tr>
 *    <tr><td>H</td><td>Hardware</td></tr>
 *    <tr><td>S</td><td>Software</td></tr>
 *    <tr><td>N</td><td>None</td></tr>
 * </table>
 *  @return printer's serial handshaking
 */
-(HandshakeValueDPL)getHandshaking;

/**
 *  This sets printer's serial handshaking
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setHandshaking: (HandshakeValueDPL) value;

/**
 *  This gets the printer's stop bit
 *
 *  @return printer's stop bit
 */
-(long)getStopBit;

/**
 *  This sets printer's serial port stop bit (1, 2)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStopBit: (long) value;

/**
 *  This gets the printer's data bits
 *
 *  @return printer's data bits
 */
-(long)getDataBits;

/**
 *  This sets printer's serial port stop bit (7, 8)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDataBits: (long) value;

@end
