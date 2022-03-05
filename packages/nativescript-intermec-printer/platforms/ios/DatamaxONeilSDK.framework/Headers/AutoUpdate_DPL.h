//
//  AutoUpdate_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/** Wireless Upgrade Type values */
typedef NS_ENUM(NSInteger, WirelessUpgradeTypeValue) {
    
    /** Unknown */
    WirelessUpgradeTypeValueUnknown = 999,
    
    /** TFTP */
    WirelessUpgradeTypeValueTFTP= 1,
    
    /** AvalancheWavelink */
    WirelessUpgradeTypeValueAvalancheWavelink = 2,
    
    /** MSP*/
    WirelessUpgradeTypeValueMSP = 3,
    
    /** FTP*/
    WirelessUpgradeTypeValueFTP = 4,
    
    /** AirWatch */
    WirelessUpgradeTypeValueAirWatch = 5,
    
    /** FTPS */
    WirelessUpgradeTypeValueFTPS = 6,
    
    /** Disable */
    WirelessUpgradeTypeValueDisable = 255
};

/** Security credential file format values */
typedef NS_ENUM(NSInteger, SecurityCredentialFileFormatValue) {
    
    /** Default */
    SecurityCredentialFileFormatValueDefault = 0,
    
    /** CT*/
    SecurityCredentialFileFormatValueCT = 1,
    
    /**Unknown*/
    SecurityCredentialFileFormatValueUnknown = 999
    
};

/** Printing mode for status message values */
typedef NS_ENUM(NSInteger, StatusMessagePrintModeValue) {
    
    /** PrintNoRotate*/
    StatusMessagePrintModeValuePrintNoRotate = 1,
    
    /** PrintRotate */
    StatusMessagePrintModeValuePrintRotate = 2,
    
    /** Unknown */
    StatusMessagePrintModeValueUnknown = 999
};

/** Message Display Mode values */
typedef NS_ENUM(NSInteger, MessageDisplayModeValue) {
    
    /** Unknown */
    MessageDisplayModeValueUnknown = 999,
    
    /** Print Always */
    MessageDisplayModeValuePrintAlways = 0,
    
    /** Print on Error */
    MessageDisplayModeValuePrintOnError = 1,
    
    /** Print - Display Never*/
    MessageDisplayModeValueDisable = 2
};

/** Menu Mode Display values */
typedef NS_ENUM(NSInteger, MenuNameDisplayModeValue) {
    
    /** Unknown */
    MenuNameDisplayModeValueUnknown = 999,
    
    /** Display Always */
    MenuNameDisplayModeValueDisplayAlways = 0,
    
    /** Display on Error */
    MenuNameDisplayModeValueDisplayOnError = 1,
    
    /** Disable - Display Never*/
    MenuNameDisplayModeValueDisable = 2
};

/** Print Server Connection Mode values */
typedef NS_ENUM(NSInteger, ConnectionModeValue) {
    
    /** Unknown */
    ConnectionModeValueUnknown = 999,
    
    /** HTTP */
    ConnectionModeValueHTTP = 0,
    
    /** HTTPS */
    ConnectionModeValueHTTPS = 1
};

/**
 * This class handles the Auto Update data from the [STX] KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1 summary= "">
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Wireless Update Upgrade Type</td></tr>
 *    <tr><td>2</td><td>Configuration File Name</td></tr>
 *    <tr><td>3</td><td>TFTP Server IP Address</td></tr>
 *    <tr><td>5</td><td>Upgrade Package Version</td></tr>
 *    <tr><td>6</td><td>Beeper Enable</td></tr>
 *    <tr><td>7</td><td>Security Credential File Format</td></tr>
 *    <tr><td>8</td><td>Status Message Print Mode</td></tr>
 *    <tr><td>10</td><td>FTP User Name</td></tr>
 *    <tr><td>11</td><td>FTP Password(WRITE-ONLY)</td></tr>
 *    <tr><td>12</td><td>FTP Server Name or Address</td></tr>
 *    <tr><td>13</td><td>FTP Server Port</td></tr>
 *    <tr><td>14</td><td>Print Message Stored Label for Auto Update Proces</td></tr>
 *    <tr><td>15</td><td>Print Message Mode after Auto Update Process</td></tr>
 *    <tr><td>16</td><td>Displayed Menu Name after Auto Update Process</td></tr>
 *    <tr><td>17</td><td>Menu Name Display Mode after Auto Update Process</td></tr>
 *    <tr><td>18</td><td>FTP Feedback Template File</td></tr>
 *    <tr><td>19</td><td>FTP Feedback File Enable</td></tr>
 *    <tr><td>20</td><td>FTP Feedback File Subdirectory</td></tr>
 *    <tr><td>21</td><td>Print Server IP Address</td></tr>
 *    <tr><td>22</td><td>Print Server Name</td></tr>
 *    <tr><td>23</td><td>Print Server Port</td></tr>
 *    <tr><td>24</td><td>Print Server Connection Mode</td></tr>
 * </table>
 */
@interface AutoUpdate_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * This gets the printer's Wireless Upgrade Type. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Unknown</td></tr>
 *    <tr><td>1</td><td>TFTP</td></tr>
 *    <tr><td>2</td><td>Avalanche Wavelink</td></tr>
 *    <tr><td>3</td><td>MSP</td></tr>
 *    <tr><td>4</td><td>FTP</td></tr>
 *    <tr><td>255</td><td>Disable</td></tr>
 * </table>
 *  @return printer's wireless upgrade type
 */
-(WirelessUpgradeTypeValue)getWirelessUpgradeType;

/**
 * This sets the printer's Wireless Upgrade Type. Possible values:
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Unknown</td></tr>
 *    <tr><td>1</td><td>TFTP</td></tr>
 *    <tr><td>2</td><td>Avalanche Wavelink</td></tr>
 *    <tr><td>3</td><td>MSP</td></tr>
 *    <tr><td>4</td><td>FTP</td></tr>
 *    <tr><td>255</td><td>Disable</td></tr>
 * </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setWirelessUpgradeType: (WirelessUpgradeTypeValue) value;

/**
 *  This gets the printer's configuration file name
 *
 *  @return printer's configuration file name
 */
-(NSString *)getConfigurationFileName;

/**
 * This sets the printer's configuration file name (255 chars. max)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setConfigurationFileName: (NSString *) value;

/**
 *  This gets the printer's TFTP Server IP Address
 *
 *  @return printer's TFTP Server IP Address
 */
-(NSString *)getTFTPServerIPAddress;

/**
 * This sets the printer's TFTP Server IP Address
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setTFTPServerIPAddress: (NSString *) value;

/**
 *  This gets the printer's Upgrade Package Version
 *
 *  @return printer's Upgrade Package Version
 */
-(NSString *)getUpgradePackageVersion;

/**
 * This sets the printer's Upgrade Package Version
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setUpgradePackageVersion: (NSString *) value;


/**
 *  This gets the printer's Beeper Enable flag
 *
 *  @return true if beeper is enabled and false if disabled
 */
-(bool)getBeeper;

/**
 *  This sets the printer's Beeper Enable flag
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setBeeper: (bool) value;

/**
 * This gets the printer's Security Credential File Format. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Default</td></tr>
 *    <tr><td>1</td><td>CT</td></tr>
 *    <tr><td>2</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's Security Credentail File Format
 */
-(SecurityCredentialFileFormatValue)getSecurityCredentialFileFormat;

/**
 * This sets the printer's Security Credential File Format. Possible values:
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Default</td></tr>
 *    <tr><td>1</td><td>CT</td></tr>
 *    <tr><td>999</td><td>Unknown</td></tr>
 * </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setSecurityCredentialFileFormat: (SecurityCredentialFileFormatValue) value;

/**
 * This gets the printer's status message print mode. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Do Not Print</td></tr>
 *    <tr><td>1</td><td>Print No Rotate</td></tr>
 *    <tr><td>2</td><td>Print Rotate</td></tr>
 *    <tr><td>3</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's status message print mode
 */
-(StatusMessagePrintModeValue)getStatusMessagePrintMode;

/**
 * This sets the printer's printing mode for status message. Possible values:
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Do Not Print</td></tr>
 *    <tr><td>1</td><td>Print No Rotate</td></tr>
 *    <tr><td>2</td><td>Print Rotate</td></tr>
 *    <tr><td>3</td><td>Unknown</td></tr>
 * </table>
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setStatusMessagePrintMode: (StatusMessagePrintModeValue) value;

/**
 *  This gets the printer's FTP User Name.
 *  @return printer's FTP User Name
 */
-(NSString *)getFTPUsername;

/**
 * This sets the printer's FTP User Name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPUsername: (NSString *) value;

/**
 * This sets the printer's FTP Password (WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPPassword: (NSString *) value;

/**
 *  This gets the printer's FTP Server Name
 *  @return printer's FTP Server Name
 */
-(NSString *)getFTPServerName;

/**
 * This sets the printer's FTP Server Name or Address
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPServerName: (NSString *) value;

/**
 *  This gets the printer's FTP Server Port
 *  @return printer's FTP Server Port
 */
-(long)getFTPServerPort;

/**
* This sets the printer's FTP Server Port
*  @param value new value to set
*  @return Success returns 0, fail returns -1
*/
-(int) setFTPServerPort: (long) value;

/**
 *  This gets the printer's Print Message Stored Label for Auto Update Process
 *  @return printer's Print Message Stored Label for Auto Update Process
 */
-(NSString *) getPrintMessageStoredLabel;

/**
 * This sets the printer's Print Message Stored Label for Auto Update Process
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintMessageStoredLabel: (NSString *) value;
/**
 *  This gets the printer's print message mode after Auto Update Process
 *  @return printer's print message mode after Auto Update Process
 */
-(MessageDisplayModeValue) getPrintMessageMode;

/**
 * This sets the printer's print message mode after Auto Update Process
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintMessageMode: (MessageDisplayModeValue) value;

/**
 *  This gets the printer's menu name to be displayed after auto update process
 *  @return printer's menu name to be displayed after auto update process
 */
-(NSString *) getMenuNameDisplayed;

/**
 * This sets the printer's menu name to be displayed after auto update process
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setMenuNameDisplayed: (NSString *) value;

/**
 *  This gets the printer's menu name display mode after auto update process
 *  @return printer's menu name display mode after auto update process
 */
-(MenuNameDisplayModeValue) getMenuNameDisplayMode;

/**
 * This sets the printer's menu name display mode after auto update process
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setMenuNameDisplayMode: (MenuNameDisplayModeValue) value;

/**
 *  This gets the printer's FTP Feedback Template File
 *  @return printer's FTP Feedback Template File
 */
-(NSString *) getFTPFeedbackTemplateFile;

/**
 * This sets the printer's FTP Feedback Template File
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPFeedbackTemplateFile: (NSString *) value;

/**
 *  This gets the printer's FTP Feedback File Mode
 *  @return printer's FTP Feedback Template File
 */
-(bool) getFTPFeedbackFileMode;

/**
 * This sets the printer's FTP Feedback File Mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPFeedbackFileMode: (bool) value;

/**
 *  This gets the printer's FTP Feedback File Subdirectory
 *  @return printer's FTP Feedback File Subdirectory
 */
-(NSString *) getFTPFeedbackFileSubdirectory;

/**
 * This sets the printer's FTP Feedback File Subdirectory
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFTPFeedbackFileSubdirectory: (NSString *) value;

/**
 *  This gets the printer's Print Server IP Address
 *  @return printer's Print Server IP Address
 */
-(NSString *) getPrintServerAddress;

/**
 * This sets the printer's Print Server IP Address
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintServerAddress: (NSString *) value;

/**
 *  This gets the printer's Print Server Name
 *  @return printer's Print Server Name
 */
-(NSString *) getPrintServerName;

/**
 * This sets the printer's Print Server Name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintServerName: (NSString *) value;

/**
 *  This gets the printer's Print Server Port
 *  @return printer's Print Server Port
 */
-(long) getPrintServerPort;

/**
 * This sets the printer's Print Server Port
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintServerPort: (long) value;

/**
 *  This gets the printer's print server connection mode
 *  @return printer's print server connection mode
 */
-(ConnectionModeValue) getPrintServerConnectionMode;

/**
 * This sets the printer's print server connection mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintServerConnectionMode: (ConnectionModeValue) value;

@end
