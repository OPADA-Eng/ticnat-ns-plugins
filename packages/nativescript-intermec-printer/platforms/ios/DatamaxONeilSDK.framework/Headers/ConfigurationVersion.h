//
//  ConfigurationVersion.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/15/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {CV?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>T</td><td>Upgrade Type</td></tr>
 *    <tr><td>V</td><td>Upgrade Version</td></tr>
 * </table>
 */
@interface ConfigurationVersion : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getUpgradeType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUpgradeType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpgradeType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUpgradeType_IsPresent;

/**
 * Upgrade Type.
 * <p>
 * The return value for this parameter is only valid if getUpgradeType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpgradeType_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getUpgradeType;

/**
 * Indicates if getUpgradeVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUpgradeVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpgradeVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUpgradeVersion_IsPresent;

/**
 * Upgrade Version.
 * <p>
 * The return value for this parameter is only valid if getUpgradeVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpgradeVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getUpgradeVersion;

@end
