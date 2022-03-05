//
//  NetworkGeneralSettings_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/16/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/** Primary Interface Type values */
typedef NS_ENUM(NSInteger, PrimaryInterfaceValue) {
    
    /** Unknown */
    PrimaryInterfaceValueUnknown,
    
    /** WiredEthernet */
    PrimaryInterfaceValueWiredEthernet,
    
    /** WIFI */
    PrimaryInterfaceValueWIFI,
    
    /** Bluetooth*/
    PrimaryInterfaceValueBluetooth,
    
    /** None */
    PrimaryInterfaceValueNone
};

/**
 * This class handles the Network General Settings data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Primary Interface</td></tr>
 *    <tr><td>2</td><td>Network Password for WEB and TELNET</td></tr>
 *    <tr><td>3</td><td>SNMP Enable</td></tr>
 *    <tr><td>4</td><td>Telnet Enable</td></tr>
 *    <tr><td>5</td><td>FTP Enable</td></tr>
 *    <tr><td>6</td><td>HTTP Enable</td></tr>
 *    <tr><td>7</td><td>LPD Enable</td></tr>
 *    <tr><td>8</td><td>NetBIOS Enable</td></tr>
 *    <tr><td>9</td><td>Netcenter Enable</td></tr>
 *    <tr><td>10</td><td>Gratuitous ARP Period</td></tr>
 *    <tr><td>24</td><td>WIFI Type</td></tr>
 *    <tr><td>25</td><td>Connected State</td></tr>
 *    <tr><td>26</td><td>IP Acquired</td></tr>
 *    <tr><td>27</td><td>Network Ready</td></tr>
 * </table>
 */
@interface NetworkGeneralSettings_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * This gets the printer's primary interface. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>E</td><td>Wired Ethernet</td></tr>
 *    <tr><td>W</td><td>WIFI</td></tr>
 *    <tr><td>B</td><td>Bluetooth</td></tr>
 *    <tr><td>N</td><td>None</td></tr>
 * </table>
 *  @return printer's primary interface
 */
-(NSString *)getPrimaryInterface;

/**
 *  This gets the printer's WEB/TELNET network password
 *
 *  @return printer's WEB/TELNET network password
 */
-(NSString *)getNetworkPassword;

/**
 *  This determines if SNMP is enable or disable
 *
 *  @return true if SNMP is enable and false if disable
 */
-(bool)getSNMPEnable;

/**
 *  This determines if Telnet is enable or disable
 *
 *  @return true if Telnet is enable and false if disable
 */
-(bool)getTelnetEnable;

/**
 *  This determines if FTP is enable or disable
 *
 *  @return true if FTP is enable and false if disable
 */
-(bool)getFTPEnable;

/**
 *  This determines if HTTP is enable or disable
 *
 *  @return true if HTTP is enable and false if disable
 */
-(bool)getHTTPEnable;
/**
 *  This determines if LPD is enable or disable
 *
 *  @return true if LPD is enable and false if disable
 */
-(bool)getLPDEnable;

/**
 *  This determines if NetBIOS is enable or disable
 *
 *  @return true if NetBIOS is enable and false if disable
 */
-(bool)getNetBIOSEnable;

/**
 *  This determines if Netcenter is enable or disable
 *
 *  @return true if Netcenter is enable and false if disable
 */
-(bool)getNetcenterEnable;

/**
 *  This gets the printer's Gratuitous ARP period
 *
 *  @return printer's Gratuitous ARP period
 */
-(long)getGratuitousARPPeriod;

/**
 * This gets the printer's WiFi type. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>1</td><td>DPAC 1</td></tr>
 *    <tr><td>2</td><td>Silex</td></tr>
 *    <tr><td>3</td><td>DPAC 2</td></tr>
 *    <tr><td>4</td><td>DO1</td></tr>
 *    <tr><td>5</td><td>General</td></tr>
 * </table>
 *  @return printer's WiFi type
 */
-(WiFiModuleValue)getWiFiType;

/**
 *  This gets whether printer is connected to network or not
 *  @return string containing printer's connected state
 */
-(NSString *)getConnectedState;

/**
 *  This gets whether printer was able to acquire IP address or not
 *  @return string containing whether IP address was acquired
 */
-(NSString *)getIPAcquired;

/**
 *  This gets whether network is ready
 *  @return string containing whether network is ready
 */
-(NSString *)getNetworkReady;
@end
