//
//  AvalancheEnabler_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**  Connectivity Type values */
typedef NS_ENUM(NSInteger, ConnectivityTypeValue) {
    
    /** None */
    ConnectivityTypeValueNone = 0,
    
    /** TCPIP*/
    ConnectivityTypeValueTCPIP = 1,
    
    /**Unknown*/
    ConnectivityTypeValueUnknown = 999
    
};

/** Update mode values */
typedef NS_ENUM(NSInteger, UpdateModeValue) {
    
    /** Unknown */
    UpdateModeValueUnknown = 999,
    
    /** None (n) */
    UpdateModeValueNone= 110,
    
    /** StartUp (s)*/
    UpdateModeValueStartUp = 115,
    
    /** Interval (i)*/
    UpdateModeValueInterval = 105,
    
    /** StartUp/Interval (b)*/
    UpdateModeValueStartUpInterval = 98
};

/**
 * This class handles the Avalanche Enable Settings data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Avalanche Enabler Active</td></tr>
 *    <tr><td>2</td><td>Agent IP Address</td></tr>
 *    <tr><td>3</td><td>Agent Port Number</td></tr>
 *    <tr><td>4</td><td>Agent DNS Name</td></tr>
 *    <tr><td>5</td><td>Connectivity Type</td></tr>
 *    <tr><td>6</td><td>Printer Name</td></tr>
 *    <tr><td>7</td><td>Printer Model</td></tr>
 *    <tr><td>8</td><td>Update Mode</td></tr>
 *    <tr><td>9</td><td>Update Interval</td></tr>
 *    <tr><td>10</td><td>Print Status Result Enable</td></tr>
 *    <tr><td>11</td><td>Update Package Name</td></tr>
 *    <tr><td>12</td><td>Remove Old Updates Prior to Update</td></tr>
 *    <tr><td>13</td><td>Upgrade Package Version</td></tr>
 * </table>
 */
@interface AvalancheEnabler_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's Avalanche Enabler Active flag
 *  @return true if Avalanche Enabler is active and false if inactive
 */
-(bool)getAvalancheEnablerActive;

/**
 *  This sets the printer's Avalanche Enabler Active flag
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAvalancheEnablerActive: (bool) value;

/**
 *  This gets the printer's Agent IP Address
 *  @return printer's Agent IP Address
 */
-(NSString *)getAgentIPAddress;

/**
 *  This sets the printer's Agent IP Address
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAgentIPAddress: (NSString *) value;

/**
 *  This gets the printer's Agent Port Number
 *  @return printer's Agent Port Number
 */
-(long)getAgentPort;

/**
 *  This sets the printer's Agent Port Number
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAgentPort: (long) value;

/**
 *  This gets the printer's Agent DNS Name
 *  @return printer's Agent DNS Name
 */
-(NSString *)getAgentDNSName;

/**
 *  This sets the printer's Agent DNS Name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAgentDNSName: (NSString *) value;

/**
 * This gets the printer's Connectivity Type. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>2</td><td>TCP/IP</td></tr>
 *    <tr><td>3</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's Connectivity Type
 */
-(ConnectivityTypeValue) getConnectivityType;

/**
 * This sets the printer's Connectivity Type. Possible values:
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>2</td><td>TCP/IP</td></tr>
 *    <tr><td>3</td><td>Unknown</td></tr>
 *  </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setConnectivityType: (ConnectivityTypeValue) value;

/**
 *  This gets the printer's name
 *  @return printer's name
 */
-(NSString *)getPrinterName;

/**
 *  This sets the printer's name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPrinterName: (NSString *) value;

/**
 *  This gets the printer's model
 *  @return printer's model
 */
-(NSString *)getPrinterModel;

/**
 *  This sets the printer's model
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPrinterModel: (NSString *) value;

/**
 * This gets the printer's update mode. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>n</td><td>None</td></tr>
 *    <tr><td>s</td><td>StartUp</td></tr>
 *    <tr><td>i</td><td>Interval</td></tr>
 *    <tr><td>b</td><td>Both startup and interval</td></tr>
 * </table>
 *  @return printer's update mode
 */
-(UpdateModeValue)getUpdateMode;

/**
 *  This sets the printer's update mode. Possible values:
 *  <table border=1 summary="">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>n</td><td>None</td></tr>
 *    <tr><td>s</td><td>StartUp</td></tr>
 *    <tr><td>i</td><td>Interval</td></tr>
 *    <tr><td>b</td><td>Both startup and interval</td></tr>
 *  </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUpdateMode: (UpdateModeValue) value;

/**
 *  This gets the printer's update interval
 *  @return printer's update interval
 */
-(long)getUpdateInterval;

/**
 *  This sets the printer's update interval in minutes
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUpdateInterval: (long) value;

/**
 *  This gets the printer's print status result flag
 *  @return true if print status result is enabled and false if disabled
 */
-(bool)getPrintStatusResult;

/**
 *  This sets the printer's print status result flag
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPrintStatusResult: (bool) value;

/**
 *  This gets the printer's update package name 
 *  @return printer's update package name
 */
-(NSString *)getUpdatePackageName;

/**
 *  This sets the printer's update package name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUpdatePackageName: (NSString *) value;

/**
 *  This gets is useful to determine if printer will remove old updates prior to updating.
 *  @return true if flag is enabled and false if disabled
 */
-(bool)getRemoveOldUpdatesBeforeUpdate;

/**
 *  This sets if printer will remove old updates prior to updating.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRemoveOldUpdatesBeforeUpdate: (bool) value;

/**
 *  This gets the printer's update package version
 *  @return printer's update package version
 */
-(NSString *)getUpdatePackageVersion;

@end
