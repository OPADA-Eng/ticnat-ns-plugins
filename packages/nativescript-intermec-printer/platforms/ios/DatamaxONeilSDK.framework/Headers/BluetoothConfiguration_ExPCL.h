//
//  BluetoothConfiguration_ExPCL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Datamax-O'Neil on 12/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_ExPCL.h"

/**
 * This class handles the data from an Bluetooth AT Command query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>*AGLN</td><td>Local Name.</td></tr>
 *    <tr><td>*AGLC</td><td>Local COD.</td></tr>
 *    <tr><td>*AMPM</td><td>Power Save Mode.</td></tr>
 *    <tr><td>*AGSM</td><td>Security Mode.</td></tr>
 *    <tr><td>*AGDM</td><td>Discoverability Mode.</td></tr>
 *    <tr><td>*AGCM</td><td>Connectability Mode.</td></tr>
 *    <tr><td>*AGPM</td><td>Pairing Mode.</td></tr>
 *    <tr><td>*AILBA</td><td>Local Bluetooth Address.</td></tr>
 * </table>
 */

@interface BluetoothConfiguration_ExPCL : PrinterState_ExPCL
{
    
}
/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_ExPCL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getSecurity parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSecurity may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSecurity
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSecurity_IsPresent;

/**
 * Device's security setting.
 * <p>
 * The return value for this parameter is only valid if getSecurity_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSecurity_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getSecurity;

/**
 * Indicates if getBluetoothAddress parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBluetoothAddress may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBluetoothAddress
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBluetoothAddress_IsPresent;

/**
 * Unique MAC address of the Bluetooth device.
 * <p>
 * The return value for this parameter is only valid if getBluetoothAddress_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBluetoothAddress_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getBluetoothAddress;

/**
 * Indicates if getBondable parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBondable may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBondable
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBondable_IsPresent;

/**
 * Device's bondable setting
 * <p>
 * The return value for this parameter is only valid if getBondable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBondable_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getBondable;

/**
 * Indicates if getConnectable parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getConnectable may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectable
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getConnectable_IsPresent;

/**
 * Device's connectable setting
 * <p>
 * The return value for this parameter is only valid if getConnectable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectable_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getConnectable;

/**
 * Indicates if getDeviceClass parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDeviceClass may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDeviceClass
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDeviceClass_IsPresent;

/**
 * Device class for the Bluetooth device.
 * <p>
 * The return value for this parameter is only valid if getDeviceClass_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDeviceClass_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDeviceClass;

/**
 * Indicates if getDiscoverable parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDiscoverable may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDiscoverable
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDiscoverable_IsPresent;

/**
 * Device's discoverability setting
 * <p>
 * The return value for this parameter is only valid if getDiscoverable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDiscoverable_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDiscoverable;

/**
 * Indicates if getLocalClassicName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getLocalClassicName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getLocalClassicName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getLocalClassicName_IsPresent;

/**
 * Local name of the Bluetooth device.
 * <p>
 * The return value for this parameter is only valid if getLocalClassicName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getLocalClassicName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getLocalClassicName;

/**
 * Indicates if getPowerSave parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPowerSave may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSave
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPowerSave_IsPresent;

/**
 * Is the Bluetooth module PowerSaveed.
 * <p>
 * The return value for this parameter is only valid if getPowerSave_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSave_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPowerSave;

/**
 * Manufacturer of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getManufacturer;

/**
 * Model Number of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getModelNumber;

/**
 * Serial Number of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getSerialNumber;

/**
 * Local Name of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getLocalName;

/**
 * Bluetooth Firmware Version of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getBluetoothFirmwareVersion;

/**
 * Bluetooth Hardware Version of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getBluetoothHardwareVersion;

/**
 * Protocol name of the Bluetooth device.
 * @return The current value for the parameter.
 */
-(NSString *)getProtocolName;

@end
