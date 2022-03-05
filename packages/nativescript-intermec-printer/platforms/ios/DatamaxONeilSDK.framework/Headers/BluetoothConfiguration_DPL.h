//
//  BluetoothConfiguration_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/** Authentication type format values */
typedef NS_ENUM(NSInteger, AuthenticationTypeValue) {
    
    /** CompliantToHost */
    AuthenticationTypeValueCompliantToHost = 0,
    
    /** ForceAuthentication */
    AuthenticationTypeValueForceAuthentication = 1,
    
    /**Unknown */
    AuthenticationTypeValueUnknown = 999
    
};

/**
 * This class handles the Bluetooth Configuration data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Bluetooth Device Name</td></tr>
 *    <tr><td>2</td><td>Bluetooth Service Name</td></tr>
 *    <tr><td>3</td><td>Discoverable</td></tr>
 *    <tr><td>4</td><td>Connectable</td></tr>
 *    <tr><td>5</td><td>Bondable</td></tr>
 *    <tr><td>6</td><td>Authentication Type</td></tr>
 *    <tr><td>7</td><td>Encryption</td></tr>
 *    <tr><td>8</td><td>PassKey</td></tr>
 *    <tr><td>9</td><td>Inactive Disconnect TIme</td></tr>
 *    <tr><td>10</td><td>Power Down Time</td></tr>
 *    <tr><td>11</td><td>Bluetooth Device Address</td></tr>
 *    <tr><td>12</td><td>Enable Bluetooth</td></tr>
 * </table>
 */

@interface BluetoothConfiguration_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's Bluetooth Device Name
 *  @return printer's Bluetooth Device Name
 */
-(NSString *)getBluetoothDeviceName;

/**
 *  This sets the printer's Bluetooth Device Name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBluetoothDeviceName: (NSString *) value;

/**
 *  This gets the printer's Bluetooth Service Name
 *  @return printer's Bluetooth Service Name
 */
-(NSString *)getBluetoothServiceName;

/**
 *  This determines if printer is discoverable or not
 *  @return true if printer is discoverable and false if not
 */
-(bool)getDiscoverable;

/**
 *  This sets if printer is discoverable or not.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDiscoverable: (bool) value;

/**
 *  This determines if printer is connectable or not
 *  @return true if printer is connectable and false if not
 */
-(bool)getConnectable;

/**
 *  This sets if printer is connectable or not.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setConnectable: (bool) value;

/**
 *  This determines if printer is bondable or not
 *  @return true if printer is bondable and false if not
 */
-(bool)getBondable;

/**
 *  This sets if printer is bondable or not.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBondable: (bool) value;

/**
 * This gets the printer's authentication type. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Compliant to Host</td></tr>
 *    <tr><td>1</td><td>Force Authentication</td></tr>
 *    <tr><td>2</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's authentication type
 */
-(AuthenticationTypeValue)getAuthenticationType;

/**
 * This sets the printer's authentication type. Possible values:
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Compliant to Host</td></tr>
 *    <tr><td>1</td><td>Force Authentication</td></tr>
 *    <tr><td>999</td><td>Unknown</td></tr>
 * </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAuthenticationType: (AuthenticationTypeValue) value;

/**
 *  This determines if encryption is enable or disable
 *  @return true if encryption is enable and false if disable
 */
-(bool)getEncryption;

/**
 *  This sets whether encryption is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEncryption: (bool) value;

/**
 *  This sets the printer's Bluetooth Passkey (WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPassKey: (NSString *) value;

/**
 *  This gets the printer's inactivity disconnect time
 *  @return printer's inactivity disconnect time
 */
-(long)getInactiveDisconnectTime;

/**
 *  This sets the printer's inactivity disconnect time
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setInactiveDisconnectTime: (long) value;

/**
 *  This gets the printer's power down time
 *  @return printer's power down time
 */
-(long)getPowerDownTime;

/**
 *  This sets the printer's power down time
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPowerDownTime: (long) value;

/**
 *  This gets the printer's Bluetooth Device Address
 *  @return printer's Bluetooth Device Address
 */
-(NSString *)getBluetoothDeviceAddress;

/**
 *  This determines if Bluetooth is enable or not
 *  @return true if bluetooth is enable and false if disable
 */
-(bool)getBluetoothEnable;

/**
 *  This sets whether bluetooth is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBluetoothEnable: (bool) value;


@end
