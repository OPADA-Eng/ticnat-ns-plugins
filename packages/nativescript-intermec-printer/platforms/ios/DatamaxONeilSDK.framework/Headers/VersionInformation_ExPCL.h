//
//  VersionInformation_ExPCL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Datamax-O'Neil on 12/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_ExPCL.h"

/**
 * This class handles the data from an <ESC>P( and <ESC>P) query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>F</td><td>Firmware Version</td></tr>
 *    <tr><td>H</td><td>Hardware Controller Version</td></tr>
 * </table>
 */
@interface VersionInformation_ExPCL : PrinterState_ExPCL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_ExPCL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getFirmwareVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFirmwareVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFirmwareVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFirmwareVersion_IsPresent;

/**
 * Firmware Version
 * <p>
 * The return value for this parameter is only valid if getFirmwareVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFirmwareVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getFirmwareVersion;

/**
 * Indicates if getHardwareControllerVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getHardwareControllerVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHardwareControllerVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getHardwareControllerVersion_IsPresent;

/**
 * Hardware Controller Version
 * <p>
 * The return value for this parameter is only valid if getHardwareControllerVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHardwareControllerVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getHardwareControllerVersion;

@end
