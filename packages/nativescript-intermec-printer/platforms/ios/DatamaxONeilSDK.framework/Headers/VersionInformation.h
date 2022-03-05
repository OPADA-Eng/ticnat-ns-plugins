//
//  VersionInformation.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {VR?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>Boot Version</td></tr>
 *    <tr><td>C</td><td>Comm Controller Version</td></tr>
 *    <tr><td>D</td><td>Download Version</td></tr>
 *    <tr><td>F</td><td>Firmware Version</td></tr>
 *    <tr><td>H</td><td>Hardware Controller Version</td></tr>
 *    <tr><td>S1-SCR</td><td>SCR Version</td></tr>
 *    <tr><td>T</td><td>Build Timestamp</td></tr>
 * </table>
 */
@interface VersionInformation : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getBootVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBootVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBootVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBootVersion_IsPresent;

/**
 * Boot Version
 * <p>
 * The return value for this parameter is only valid if getBootVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBootVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getBootVersion;

/**
 * Indicates if getCommControllerVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCommControllerVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCommControllerVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCommControllerVersion_IsPresent;

/**
 * Comm Controller Version
 * <p>
 * The return value for this parameter is only valid if getCommControllerVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCommControllerVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getCommControllerVersion;

/**
 * Indicates if getDownloadVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDownloadVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDownloadVersion_IsPresent;

/**
 * Download Version
 * <p>
 * The return value for this parameter is only valid if getDownloadVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDownloadVersion;

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

/**
 * Indicates if getSCRVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSCRVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSCRVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSCRVersion_IsPresent;

/**
 * SCR Version
 * <p>
 * The return value for this parameter is only valid if getSCRVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSCRVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getSCRVersion;

/**
 * Indicates if getBuildTimestamp parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBuildTimestamp may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBuildTimestamp
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBuildTimestamp_IsPresent;

/**
 * Build Timestamp
 * <p>
 * The return value for this parameter is only valid if getBuildTimestamp_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBuildTimestamp_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getBuildTimestamp;

@end
