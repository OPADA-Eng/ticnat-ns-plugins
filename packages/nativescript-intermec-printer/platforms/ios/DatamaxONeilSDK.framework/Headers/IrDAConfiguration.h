//
//  IrDAConfiguration.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {IR?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>DV</td><td>Direct Version</td></tr>
 *    <tr><td>ID</td><td>IrDA Nickname</td></tr>
 *    <tr><td>IN</td><td>IrDA Name</td></tr>
 *    <tr><td>IV</td><td>IrDA Version</td></tr>
 *    <tr><td>P</td><td>IR Protocol</td></tr>
 * </table>
 */
@interface IrDAConfiguration : PrinterState

/**
 * IR Protocol
 */
typedef NS_ENUM(NSInteger, IrDAProtocolValue) {
    /**
     * The result was never set.
     */
    IrDAProtocolValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    IrDAProtocolValueUnknown = 999,
    
    /**
     * IrDA Off
     */
    IrDAProtocolValueOFF = 0,
    
    /**
     * No IrDA present
     */
    IrDAProtocolValueNone = 1,
    
    /**
     * Standard Protocol
     */
    IrDAProtocolValueIrDA = 2,
    
    /**
     * Amplitude Shift Key
     */
    IrDAProtocolValueASK = 3,
    
    /**
     * Amplitude Shift Key + CRC
     */
    IrDAProtocolValueASK_CRC = 4,
    
    /**
     * Direct
     */
    IrDAProtocolValueDirect = 5,
    
    /**
     * Direct + CRC
     */
    IrDAProtocolValueDirect_CRC = 6,
    
    /**
     * Pulse
     */
    IrDAProtocolValuePulse = 7,
    
    /**
     * Pulse + CRC
     */
    IrDAProtocolValuePulse_CRC = 8
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getDirectVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDirectVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDirectVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDirectVersion_IsPresent;

/**
 * Direct Version
 * <p>
 * The return value for this parameter is only valid if getDirectVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDirectVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDirectVersion;

/**
 * Indicates if getIrDANickname parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIrDANickname may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDANickname
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIrDANickname_IsPresent;

/**
 * IrDA Nickname
 * <p>
 * The return value for this parameter is only valid if getIrDANickname_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDANickname_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getIrDANickname;

/**
 * Indicates if getIrDAName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIrDAName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDAName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIrDAName_IsPresent;

/**
 * IrDA Name
 * <p>
 * The return value for this parameter is only valid if getIrDAName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDAName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getIrDAName;

/**
 * Indicates if getIrDAVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIrDAVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDAVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIrDAVersion_IsPresent;

/**
 * IrDA Version
 * <p>
 * The return value for this parameter is only valid if getIrDAVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIrDAVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getIrDAVersion;

/**
 * Indicates if getProtocol parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getProtocol may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProtocol
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getProtocol_IsPresent;

/**
 * IrDA Protocol value
 * <p>
 * The return value for this parameter is only valid if getProtocol_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProtocol_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *)getProtocol;//-(IrDAProtocolValue) getProtocol;

@end
