//
//  UpgradeData.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {CU?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>F</td><td>Path and File</td></tr>
 *    <tr><td>I</td><td>Server IP Address</td></tr>
 *    <tr><td>P</td><td>Server Port</td></tr>
 *    <tr><td>T</td><td>Data Type</td></tr>
 *    <tr><td>V</td><td>Description string form the latest upgrade package.</td></tr>
 * </table>
 */
@interface UpgradeData : PrinterState

/**
 * Upgrade Data Type Values
 */
typedef NS_ENUM(NSInteger, UpgradeDataType) {
    /**
     * The result was never set.
     */
    UpgradeDataTypeUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    UpgradeDataTypeUnknown = 999,
    
    /**
     * None
     */
    UpgradeDataTypeNone = 0,
    
    /**
     * TFTP
     */
    UpgradeDataTypeTFTP = 1,
    
    /**
     * Disable
     */
    UpgradeDataTypeDisable = 255
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getPathAndFile parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPathAndFile may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPathAndFile
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPathAndFile_IsPresent;

/**
 * Path and File
 * <p>
 * The return value for this parameter is only valid if getPathAndFile_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPathAndFile_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPathAndFile;

/**
 * Set the device's upgrade path and file
 * @param value new value to set.
 * @return Success returns 0, fail returns -1
 */
-(int) setPathAndFile: (NSString *) value;

/**
 * Indicates if getServerIPAddress parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getServerIPAddress may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServerIPAddress
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getServerIPAddress_IsPresent;

/**
 * Server IP Address
 * <p>
 * The return value for this parameter is only valid if getServerIPAddress_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServerIPAddress_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getServerIPAddress;

/**
 * Set the device's upgrade server IP Address
 * @param value new value to set.
 * @return Success returns 0, fail returns -1
 */
-(int) setServerIPAddress: (NSString *) value;

/**
 * Indicates if getServerPort parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getServerPort may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServerPort
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getServerPort_IsPresent;

/**
 * Server Port
 * <p>
 * The return value for this parameter is only valid if getServerPort_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServerPort_IsPresent
 * @return The current value for the parameter.
 */
-(long) getServerPort;

/**
 * Set the device's upgrade server port
 * @param value new value to set.
 * @return Success returns 0, fail returns -1
 */
-(int) setServerPort: (long) value;

/**
 * Indicates if getDataType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDataType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDataType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDataType_IsPresent;

/**
 * Data Type
 * <p>
 * The return value for this parameter is only valid if getDataType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDataType_IsPresent
 * @return The current value for the parameter.
 */
-(UpgradeDataType) getDataType;

/**
 * Set the device's upgrade data type
 * @param value new value to set.
 * @return Success returns 0, fail returns -1
 */
-(int) setDataType: (UpgradeDataType) value;

/**
 * Indicates if getVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getVersion_IsPresent;

/**
 * Description string form the latest upgrade package.
 * <p>
 * The return value for this parameter is only valid if getVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getVersion;

@end
