//
//  NetworkEthernetSettings_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/16/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/** PHY mode values */
typedef NS_ENUM(NSInteger, PHYModeValue) {
    
    /** Auto */
    PHYModeValueAuto = 0,
    
    /** 10BaseT Half Duplex */
    PHYModeValue10BaseTHalfDuplex= 1,
    
    /** 10BaseT Full Duplex */
    PHYModeValue10BaseTFullDuplex = 2,
    
    /** 100BaseT Half Duplex*/
    PHYModeValue100BaseTHalfDuplex = 3,
    
    /** 100BaseT Full Duplex*/
    PHYModeValue100BaseTFullDuplex = 4,
    
    /** Unknown*/
    PHYModeValueUnknown = 999
};

/** PHY Advertise mode values */
typedef NS_ENUM(NSInteger, PHYAdvertiseModeValue) {
    
    /** Auto */
    PHYAdvertiseModeValueAuto = 0,
    
    /** All Capabilities */
    PHYAdvertiseModeValueAllCapabilities = 1,
    
    /** Unknown*/
    PHYAdvertiseModeValueUnknown = 999
};

/** PHY Capabilities to Advertise values */
typedef NS_ENUM(NSInteger, PHYCapabilitiesToAdvertiseValue) {
    
    /** Always */
    PHYCapabilitiesToAdvertiseValueAlways = 0,

    /** Unknown*/
    PHYCapabilitiesToAdvertiseValueUnknown = 999
};
/** DHCP values */
typedef NS_ENUM(NSInteger, DHCPEnableValue) {
    
    /** Unknown */
    DHCPEnableValueUnknown = 999, 
    
    /** Static */
    DHCPEnableValueStatic = 78, //N
    
    /** BootP */
    DHCPEnableValueBootP = 66, //B
    
    /** DHCP*/
    DHCPEnableValueDHCP = 89 //Y
    
};

/**
 * This class handles the network ethernet settings data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>IP Address Method(DHCP Enable)</td></tr>
 *    <tr><td>2</td><td>Static Printer IP Address</td></tr>
 *    <tr><td>3</td><td>Static Printer Subnet Mask</td></tr>
 *    <tr><td>4</td><td>Static Printer Default Gateway Address</td></tr>
 *    <tr><td>5</td><td>PHY Mode</td></tr>
 *    <tr><td>6</td><td>PHY Advertise Mode</td></tr>
 *    <tr><td>7</td><td>PHY Capability to Advertise</td></tr>
 *    <tr><td>8</td><td>MTU</td></tr>
 *    <tr><td>9</td><td>Printer TCP Port</td></tr>
 *    <tr><td>10</td><td>Default MTU</td></tr>
 *    <tr><td>11</td><td>Static Primary WINS Server IP</td></tr>
 *    <tr><td>12</td><td>Static Secondary WINS Server IP</td></tr>
 *    <tr><td>13</td><td>Static Primary DNS Server IP</td></tr>
 *    <tr><td>14</td><td>Static Secondary DNS Server IP</td></tr>
 *    <tr><td>15</td><td>SNMP TRAP IP Address</td></tr>
 *    <tr><td>16</td><td>SNMP Server IP Address</td></tr>
 *    <tr><td>17</td><td>NetBIOS Enable</td></tr>
 *    <tr><td>18</td><td>NetBIOS Name</td></tr>
 *    <tr><td>19</td><td>Domain Name</td></tr>
 *    <tr><td>20</td><td>UDP Port</td></tr>
 *    <tr><td>21</td><td>Inactivity Timeout</td></tr>
 *    <tr><td>22</td><td>Ethernet MAC Address</td></tr>
 * </table>
 */
@interface NetworkEthernetSettings_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * This gets the printer's IP Address Method(DHCP Enable). Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>Static</td></tr>
 *    <tr><td>B</td><td>BootP</td></tr>
 *    <tr><td>Y</td><td>DHCP</td></tr>
 * </table>
 *  @return printer's IP Address Method
 */
-(NSString *)getIPAddressMethod;

/**
 *  This gets the printer's IP address
 *
 *  @return printer's IP address
 */
-(NSString *)getPrinterIPAddress;

/**
 *  This gets the printer's Subnet Mask
 *
 *  @return printer's Subnet Mask
 */
-(NSString *)getPrinterSubnetMask;

/**
 *  This gets the printer's default gateway
 *
 *  @return printer's default gateway
 */
-(NSString *)getPrinterDefaultGateway;

/**
 * This gets the printer's PHY Mode. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>Auto</td><td>0</td></tr>
 *    <tr><td>10BaseT Half Duplex</td><td>1</td></tr>
 *    <tr><td>10BaseT Full Duplex</td><td>2</td></tr>
 *    <tr><td>100BaseT Half Duplex</td><td>3</td></tr>
 *    <tr><td>100BaseT Full Duplex</td><td>4</td></tr>
 * </table>
 *  @return printer's PHY mode.
 */
-(PHYModeValue)getPHYMode;

/**
 * This gets the printer's PHY Advertise Mode. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>Auto</td><td>0</td></tr>
 *    <tr><td>All Capabilities</td><td>1</td></tr>
 * </table>
 *  @return printer's PHY Advertise Mode
 */
-(PHYAdvertiseModeValue)getPHYAdvertiseMode;

/**
 * This gets the printer's PHY Capabilities to Advertise. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Always</td></tr>
 * </table>
 *  @return printer's PHY Capabilities to Advertise.
 */
-(PHYCapabilitiesToAdvertiseValue)getPHYCapabilitiesToAdvertise;

/**
 *  This gets the printer's MTU
 *
 *  @return printer's MTU
 */
-(long)getMTU;

/**
 *  This gets the printer's TCP port
 *
 *  @return printer's TCP port
 */
-(long)getPrinterTCPPort;

/**
 *  This gets the printer's default MTU size
 *
 *  @return printer's default MTU size
 */
-(long)getDefaultMTUSize;

/**
 *  This gets the printer's static primary WINS server IP
 *
 *  @return printer's static primary WINS server IP
 */
-(NSString *)getStaticPrimaryWINSServerIPAddress;

/**
 *  This gets the printer's secondary WINS server IP
 *
 *  @return printer's secondary WINS server IP
 */
-(NSString *)getStaticSecondaryWINSServerIPAddress;

/**
 *  This gets the printer's primary DNS server IP
 *
 *  @return printer's primary DNS server IP
 */
-(NSString *)getStaticPrimaryDNSServerIPAddress;

/**
 *  This gets the printer's secondary DNS server IP
 *
 *  @return printer's secondary DNS server IP
 */
-(NSString *)getStaticSecondaryDNSServerIPAddress;

/**
 *  This gets the printer's SNMP TRAP IP
 *
 *  @return printer's SNMP TRAP IP
 */
-(NSString *)getSnmpTrapIPAddress;

/**
 *  This gets the printer's SNMP Server IP
 *
 *  @return printer's SNMP ServerIP
 */
-(NSString *)getSnmpServerAddress;

/**
 *  This determines if NetBIOS is enable or disable
 *
 *  @return true if NetBIOS is enable and false if disable
 */
-(bool)getNetBIOSEnable;

/**
 *  This gets the printer's NetBIOS Name
 *
 *  @return printer's NetBIOS Name
 */
-(NSString *)getNetBIOSName;

/**
 *  This gets the printer's domain name
 *
 *  @return printer's domain name
 */
-(NSString *)getDomainName;

/**
 *  This gets the printer's UDP port
 *
 *  @return printer's UDP port
 */
-(long)getPrinterUDPPort;

/**
 *  This gets the printer's inactivity timeout
 *
 *  @return printer's inactivity timeout
 */
-(long)getInactivityTimeout;

/**
 *  This gets the printer's Ethernet MAC Address
 *
 *  @return printer's Ethernet MAC Address
 */
-(NSString *)getEthernetMACAddress;
@end
