//
//  PrinterInformation_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * This class handles the Printer Information data from an KcQQQ and v queries as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>ZN</td><td>Serial Number</td></tr>
 *    <tr><td>V1</td><td>Boot 1 Version</td></tr>
 *    <tr><td>P1</td><td>Boot 1 Part Number</td></tr>
 *    <tr><td>A1</td><td>Boot 1 Architecture</td></tr>
 *    <tr><td>V2</td><td>Boot 2 Version</td></tr>
 *    <tr><td>P2</td><td>Boot 2 Part Number</td></tr>
 *    <tr><td>A2</td><td>Boot 2 Architecture</td></tr>
 *    <tr><td>VER</td><td>Version Information</td></tr>
 *    <tr><td>A3</td><td>Firmware Architecture</td></tr>
 *    <tr><td>AVR_VER</td><td>AVR Version Information</td></tr>
 *    <tr><td>xAVR_VER</td><td>xAVR Version Information</td></tr>
 *    <tr><td>0</td><td>Firmware Version</td></tr>
 *    <tr><td>1</td><td>Build Date/Time</td></tr>
 *    <tr><td>2</td><td>Model Number</td></tr>
 *    <tr><td>3</td><td>Current Date</td></tr>
 *    <tr><td>4</td><td>Current Time</td></tr>
 *    <tr><td>5</td><td>Current Epoch Time</td></tr>
 *    <tr><td>6</td><td>Firmware Build</td></tr>
 *    <tr><td>7</td><td>External Power Connected</td></tr>
 *    <tr><td>8</td><td>Dot Density (dots/inch)</td></tr>
 *    <tr><td>9</td><td>Print Head Width</td></tr>
 *    <tr><td>A</td><td>Last Error String</td></tr>
 *    <tr><td>B</td><td>LCD Error String 1</td></tr>
 *    <tr><td>C</td><td>LCD Error String 2</td></tr>
 *    <tr><td>D</td><td>LCD Error Number</td></tr>
 *    <tr><td>E</td><td>Auto Update Error String</td></tr>
 *    <tr><td>F</td><td>Printer Model</td></tr>
 *    <tr><td>G</td><td>Absolute Counter</td></tr>
 *    <tr><td>H</td><td>Absolute Counter Date</td></tr>
 *    <tr><td>I</td><td>Resettable Counter</td></tr>
 *    <tr><td>J</td><td>Resettable Counter Date</td></tr>
 *    <tr><td>K</td><td>Error Script String</td></tr>
 *    <tr><td>L</td><td>Lua Current State</td></tr>
 * </table>
 */

@interface PrinterInformation_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This function gets the printer's serial number
 *  @return string containing the printer's serial number
 */
-(NSString *)getPrinterSerialNumber;

/**
 *  This function gets the printer's Boot 1 Version
 *  @return string containing the printer's Boot 1 Version
 */
-(NSString *)getBoot1Version;

/**
 *  This function gets the printer's Boot 1 Part Number
 *  @return string containing the printer's Boot 1 Part Number
 */
-(NSString *)getBoot1PartNumber;

/**
 *  This function gets the printer's Boot 1 Architecture
 *  @return string containing the printer's Boot 1 Architecture
 */
-(NSString *)getBoot1Architecture;

/**
 *  This function gets the printer's Boot 2 Version
 *  @return string containing the printer's Boot 2 Version
 */
-(NSString *)getBoot2Version;

/**
 *  This function gets the printer's Boot 2 Part Number
 *  @return string containing the printer's Boot 2 Part Number
 */
-(NSString *)getBoot2PartNumber;

/**
 *  This function gets the printer's Boot 2 Architecture
 *  @return string containing the printer's Boot 2 Architecture
 */
-(NSString *)getBoot2Architecture;

/**
 *  This function gets the printer's version information
 *  @return string containing the printer's version information
 */
-(NSString *)getVersionInformation;

/**
 *  This function gets the printer's Firmware Architecture
 *  @return string containing the printer's Firmware Architecture
 */
-(NSString *)getFirmwareArchitecture;

/**
 *  This function gets the printer's AVR version information
 *  @return string containing the printer's AVR version information
 */
-(NSString *)getAVRVersionInformation;

/**
 *  This function gets the printer's xAVR version information
 *  @return string containing the printer's xAVR version information
 */
-(NSString *)getXAVRVersionInformation;

/**
 *  This function gets the printer's firmware version
 *  @return string containing the printer's firmware version
 */
-(NSString *)getFirmwareVersion;

/**
 *  This function gets the printer's build date/time
 *  @return string containing the printer's build date/time
 */
-(NSString *)getBuildDateTime;

/**
 *  This function gets the printer's printer model number
 *  @return string containing the printer's printer model number
 */
-(NSString *)getModelNumber;

/**
 *  This function gets the printer's current date
 *  @return string containing the printer's current date
 */
-(NSString *)getCurrentDate;

/**
 *  This function gets the printer's current time
 *  @return string containing the printer's current time
 */
-(NSString *)getCurrentTime;

/**
 *  This function gets the printer's current EPOCH time
 *  @return string containing the printer's current EPOCH time
 */
-(NSString *)getCurrentEpochTime;

/**
 *  This function gets the printer's firmware build
 *  @return string containing the printer's firmware build
 */
-(NSString *)getFirmwareBuild;

/**
 *  This function gets whether external power is connected to printer or not
 *  @return true if external power is connected
 */
-(bool)getIsExternalPowerConnected;

/**
 *  This function gets the printer's dot density (dots/inch)
 *  @return dot density(dots/inch) of the printer
 */
-(long)getDotDensity;

/**
 *  This function gets the printer's print head width
 *  @return print head width of the printer
 */
-(long)getPrintHeadWidth;

/**
 *  This function gets the printer's last error string
 *  @return string containing the printer's last error string
 */
-(NSString *)getLastErrorString;

/**
 *  This function gets the printer's LCD error string 1
 *  @return string containing the printer's LCD error string 1
 */
-(NSString *)getLCDErrorString1;

/**
 *  This function gets the printer's LCD error string 2
 *  @return string containing the printer's LCD error string 2
 */
-(NSString *)getLCDErrorString2;

/**
 *  This function gets the printer's LCD error number
 *  @return string containing the printer's LCD error number
 */
-(NSString *)getLCDErrorNumber;

/**
 *  This function gets the printer's auto update error string
 *  @return string containing the printer's auto update error string
 */
-(NSString *)getAutoUpdateErrorString;

/**
 *  This function gets the printer's model
 *  @return string containing the printer's model
 */
-(NSString *)getPrinterModel;

/**
 *  This function gets the printer's absolute counter(odometer)
 *  @return a long value containing the printer's absolute counter(odometer)
 */
-(long)getAbsoluteCounter;

/**
 *  This function gets the printer's absolute counter date
 *  @return string containing the printer's absolute counter date
 */
-(NSString *)getAbsoluteCounterDate;

/**
 *  This function gets the printer's resettable counter(resettable odometer)
 *  @return a long value containing the printer's resettable counter(resettable odometer)
 */
-(long)getResettableCounter;

/**
 *  This function gets the printer's resettable counter date
 *  @return string containing the printer's resettable counter date
 */
-(NSString *)getResettableCounterDate;

/**
 *  This function gets the printer's error script string
 *  @return string containing the printer's error script string
 */
-(NSString *)getErrorScriptString;

/**
 *  This function gets the printer's Lua current state
 *  @return string containing the printer's Lua current state
 */
-(NSString *)getLuaCurrentState;
@end

