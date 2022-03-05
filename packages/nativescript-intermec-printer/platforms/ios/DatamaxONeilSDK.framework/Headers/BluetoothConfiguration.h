//
//  BluetoothConfiguration.h
//  
//
//  Created by Dmitriy Bozko on 11/14/13.
//
//

#import "PrinterState.h"

/**
 * This class handles the data from an {BL?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Device's authentication setting.</td></tr>
 *    <tr><td>AD</td><td>Unique MAC address of the Bluetooth device.</td></tr>
 *    <tr><td>B</td><td>Device's bondable setting</td></tr>
 *    <tr><td>C</td><td>Device's connectable setting</td></tr>
 *    <tr><td>CL</td><td>Device class for the Bluetooth device.</td></tr>
 *    <tr><td>D</td><td>Device's discoverability setting</td></tr>
 *    <tr><td>E</td><td>Device's encryption setting.</td></tr>
 *    <tr><td>F</td><td>Friendly name of the Bluetooth device.</td></tr>
 *    <tr><td>I</td><td>How long before the device will automatically disconnect.</td></tr>
 *    <tr><td>P</td><td>Device's passkey configuration.</td></tr>
 *    <tr><td>PR</td><td>Bluetooth profiles supported.</td></tr>
 *    <tr><td>PWR</td><td>Is the Bluetooth module powered.</td></tr>
 *    <tr><td>SN</td><td>Service name of the Bluetooth device.</td></tr>
 *    <tr><td>W</td><td>How long is the watchdog period for Bluetooth</td></tr>
 * </table>
 */
@interface BluetoothConfiguration : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;


/**
 * Indicates if getAuthentication parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAuthentication may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAuthentication
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAuthentication_IsPresent;

/**
 * Device's authentication setting.
 * <p>
 * The return value for this parameter is only valid if getAuthentication_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAuthentication_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getAuthentication;

/**
 * Set the authentication value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAuthentication: (bool) value;

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
 * Device's bondable setting.
 * <p>
 * The return value for this parameter is only valid if getBondable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBondable_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getBondable;

/**
 * Set the bondable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setBondable: (bool) value;

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
 * Device's connectable setting.
 * <p>
 * The return value for this parameter is only valid if getConnectable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectable_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getConnectable;

/**
 * Set the connectable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setConnectable: (bool) value;

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
 * Device's discoverability setting.
 * <p>
 * The return value for this parameter is only valid if getDiscoverable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDiscoverable_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getDiscoverable;

/**
 * Set the discoverable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDiscoverable: (bool) value;

/**
 * Indicates if getEncryption parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEncryption may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryption
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEncryption_IsPresent;

/**
 * Device's encryption setting.
 * <p>
 * The return value for this parameter is only valid if getEncryption_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryption_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getEncryption;

/**
 * Set the encryption value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setEncryption: (bool) value;

/**
 * Indicates if getFriendlyName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFriendlyName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFriendlyName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFriendlyName_IsPresent;

/**
 * Friendly name of the Bluetooth device.
 * <p>
 * The return value for this parameter is only valid if getFriendlyName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFriendlyName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getFriendlyName;

/**
 * Set the friendly name value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setFriendlyName: (NSString *) value;

/**
 * Indicates if getInactivityTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getInactivityTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getInactivityTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getInactivityTimeout_IsPresent;

/**
 * How long before the device will automatically disconnect.
 * <p>
 * The return value for this parameter is only valid if getInactivityTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getInactivityTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getInactivityTimeout;

/**
 * Set the inactivity timeout value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setInactivityTimeout: (long) value;

/**
 * Indicates if getPasskey parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPasskey may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPasskey
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPasskey_IsPresent;

/**
 * Device's passkey configuration.
 * <p>
 * The return value for this parameter is only valid if getPasskey_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPasskey_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPasskey;

/**
 * Set the device's passkey value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPasskey: (NSString *) value;

/**
 * Indicates if getProfile parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getProfile may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProfile
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getProfile_IsPresent;

/**
 * Bluetooth profiles supported.
 * <p>
 * The return value for this parameter is only valid if getProfile_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProfile_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getProfile;

/**
 * Indicates if getPower parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPower may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPower
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPower_IsPresent;

/**
 * Is the Bluetooth module powered.
 * <p>
 * The return value for this parameter is only valid if getPower_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPower_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPower;

/**
 * Indicates if getServiceName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getServiceName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServiceName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getServiceName_IsPresent;

/**
 * Service name of the Bluetooth device.
 * <p>
 * The return value for this parameter is only valid if getServiceName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getServiceName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getServiceName;

/**
 * Indicates if getWatchdogPeriod parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getWatchdogPeriod may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWatchdogPeriod
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getWatchdogPeriod_IsPresent;

/**
 * How long is the watchdog period for Bluetooth?
 * <p>
 * The return value for this parameter is only valid if getWatchdogPeriod_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWatchdogPeriod_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getWatchdogPeriod;

/**
 * Set the watchdog period value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setWatchdogPeriod: (bool) value;

@end
