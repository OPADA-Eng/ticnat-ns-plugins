//
//  Miscellaneous_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 *  Equipped option values for present sensor and cutter
 */
typedef NS_ENUM(NSInteger, EquippedOptionValue) {
    /**Unknown */
    EquippedOptionValueUnknown = 999,
    
    /**
     *  Auto(A)
     */
    EquippedOptionValueAuto = 65, //A
    
    /**
     *  Enable
     */
    EquippedOptionValueEnable = 69, //E
    
    /**
     *  Disabled(N)
     */
    EquippedOptionValueDisabled = 78, //N
};
/** Control Code values */
typedef NS_ENUM(NSInteger, ControlCodeValue) {
    
    /** Unknown Value*/
    ControlCodeValueUnknown = 999,
    
    /** Standard*/
    ControlCodeValueStandard = 83, //S
    
    /** Alternate*/
    ControlCodeValueAlternate = 49, //1
    
    /** Alternate-2 */
    ControlCodeValueAlternate2 = 50 //2
};

/** Start of Print Signal values */
typedef NS_ENUM(NSInteger, StartOfPrintSignalValue) {
    
    /** Unknown Value*/
    StartOfPrintSignalValueUnknown = 999,
    
    /** Active Low*/
    StartOfPrintSignalValueActiveLow = 3,
    
    /** Active High*/
    StartOfPrintSignalValueActiveHigh = 4
};

/** End of Print Signal/GPIO Slew values */
typedef NS_ENUM(NSInteger, EndOfPrintSignalValue) {
    
    /** Unknown Value*/
    EndOfPrintSignalValueStandard = 0,
    
    /** Low Pulse*/
    EndOfPrintSignalValueLowPulse = 1,
    
    /** High Pulse*/
    EndOfPrintSignalValueHighPulse = 2,
    
    /** Active Low*/
    EndOfPrintSignalValueActiveLow = 3,
    
    /** Active High*/
    EndOfPrintSignalValueActiveHigh = 4,
    
    /** Unknown */
    EndOfPrintSignalValueUnknown = 999
};

/** GPIO Backup label values */
typedef NS_ENUM(NSInteger, GPIOBackupLabelValue) {
    
    /** Disabled Value*/
    GPIOBackupLabelValueDisable = 0,
    
    /** Unknown */
    GPIOBackupLabelValueUnknown = 999,
    
    /** Active Low*/
    GPIOBackupLabelValueActiveLow = 3,
    
    /** Active High*/
    GPIOBackupLabelValueActiveHigh = 4
};

/** USB Mode values */
typedef NS_ENUM(NSInteger, USBModeValue) {
    
    /** Printer Class */
    USBModeValuePrinter = 0,
    
    /** CDC Class*/
    USBModeValueCDC = 1,
    
    /** Compsite (CDC/Printer class) */
    USBModeValueCompositeCP = 2,
    
    /** Mass Storage Class*/
    USBModeValueMassStorage = 3,
    
    /** Compsite (CDC/Printer/Mass Storage class)*/
    USBModeValueCompositeCPM = 4,
    
    /** Unknown */
    USBModeValueUnknown = 999
};

/** Display Mode For IP/Hostname values */
typedef NS_ENUM(NSInteger, DisplayModeForIPHostnameValue) {
    
    /** None */
    DisplayModeForIPHostnameValueNone = 0,
    
    /** IP */
    DisplayModeForIPHostnameValueIP = 1,
    
    /** Hostname */
    DisplayModeForIPHostnameValueHostname = 2,
    
    /** Fully Qualify Domain Name */
    DisplayModeForIPHostnameValueFullyQualifyDomainName = 3,
    
    /** IP/Hostname */
    DisplayModeForIPHostnameValueIPHostname = 4,
    
    /** IP/Fully Qualify Domain Name */
    DisplayModeForIPHostnameValueIPFullyQualifyDomainName = 5,
    
    /** Unknown */
    DisplayModeForIPHostnameValueUnknown = 999
};

/** LCD Orientation values */
typedef NS_ENUM(NSInteger, LCDOrientationValue) {
    
    /** Unknown Value*/
    LCDOrientationValueUnknown = 999,
    
    /** Normal*/
    LCDOrientationValueNormal = 0,
    
    /** Rotated 180 degree */
    LCDOrientationValueRotate_180 = 1
};

/** Image Rotation values*/
typedef NS_ENUM(NSInteger, ImageRotationValue) {
    /** Unknown Value*/
    ImageRotationValueUnknown = 999,
    
    /** Roate 0 degrees */
    ImageRotationValue_0 = 0,
    
    /** Rotate 90 degrees */
    ImageRotationValue_90 = 1,
    
    /** Rotate 180 degrees */
    ImageRotationValue_180 = 2,
    
    /** Rotate 270 degrees */
    ImageRotationValue_270 = 3
};

/**
 * This class handles the miscellaneous data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>DR</td><td>Delay Rate</td></tr>
 *    <tr><td>PS</td><td>Present Sensor Equipped</td></tr>
 *    <tr><td>CE</td><td>Cutter Equipped</td></tr>
 *    <tr><td>CC</td><td>Control code</td></tr>
 *    <tr><td>EQ</td><td>Start of Print Signal</td></tr>
 *    <tr><td>EP</td><td>End of Print Signal</td></tr>
 *    <tr><td>GS</td><td>GPIO Slew</td></tr>
 *    <tr><td>FM</td><td>Feedback Mode Enable</td></tr>
 *    <tr><td>CH</td><td>Communication Heat Commands Enable</td></tr>
 *    <tr><td>CS</td><td>Communication Speed Commands Enable</td></tr>
 *    <tr><td>CT</td><td>Communication TOF Commands Enable</td></tr>
 *    <tr><td>BP</td><td>British Pound Enable</td></tr>
 *    <tr><td>BL</td><td>GPIO Backup Label</td></tr>
 *    <tr><td>SV</td><td>Software Switch</td></tr>
 *    <tr><td>SM</td><td>Maximum Length Ignore Enable</td></tr>
 *    <tr><td>PM</td><td>Pause Mode Enable</td></tr>
 *    <tr><td>PE</td><td>Peel Mode Enable</td></tr>
 *    <tr><td>ZC</td><td>USB Mode</td></tr>
 *    <tr><td>WD</td><td>Windows Driver For EZ_RLE</td></tr>
 *    <tr><td>DN</td><td>Display Mode for IP Hostname</td></tr>
 *    <tr><td>HD</td><td>Hex Dump Mode Enable</td></tr>
 *    <tr><td>ZA</td><td>LCD Orientation</td></tr>
 *    <tr><td>IR</td><td>Image Rotation on Download</td></tr>
 * </table>
 */
@interface Miscellaneous_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's delay rate
 *
 *  @return printer's delay rate
 */
-(long)getDelayRate;

/**
 *  This sets the printer's delay rate
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDelayRate: (long) value;

/**
 * This gets the printer's present sensor equipped. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Auto A</td></tr>
 *    <tr><td>Y</td><td>Auto Y</td></tr>
 *    <tr><td>E</td><td>Enable</td></tr>
 *    <tr><td>N</td><td>Disable N</td></tr>
 *    <tr><td>D</td><td>Disable D</td></tr>
 * </table>
 *  @return printer's present sensor equipped
 */
-(EquippedOptionValue)getPresentSensorEquipped;//PS

/**
 *  This sets whether the present sensor is equipped on printer or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPresentSensorEquipped: (EquippedOptionValue) value;

/**
 * This gets the printer's cutter equipped. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Auto A</td></tr>
 *    <tr><td>Y</td><td>Auto Y</td></tr>
 *    <tr><td>E</td><td>Enable</td></tr>
 *    <tr><td>N</td><td>Disable N</td></tr>
 *    <tr><td>D</td><td>Disable D</td></tr>
 * </table>
 *  @return printer's cutter equipped
 */
-(EquippedOptionValue)getCutterEquipped;//CE

/**
 *  This sets whether the cutter is equipped on printer or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setCutterEquipped: (EquippedOptionValue) value;

/**
 * This gets the printer's control code. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>S</td><td>Standard</td></tr>
 *    <tr><td>1</td><td>Alternate</td></tr>
 *    <tr><td>2</td><td>Alternate 2</td></tr>
 * </table>
 *  @return printer's control code
 */
-(ControlCodeValue)getControlCode;//CC

/**
 *  This sets printer's control code
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setControlCode: (ControlCodeValue) value;

/**
 * This gets the printer's start of print signal. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Unknown</td></tr>
 *    <tr><td>3</td><td>Active Low</td></tr>
 *    <tr><td>4</td><td>Active High</td></tr>
 * </table>
 *  @return printer's start of print signal
 */
-(StartOfPrintSignalValue)getStartOfPrintSignal; //EQ

/**
 *  This sets printer's start of print signal
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStartOfPrintSignal: (StartOfPrintSignalValue) value;

/**
 * This gets the printer's end of print signal. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Standard</td></tr>
 *    <tr><td>1</td><td>Low Pulse</td></tr>
 *    <tr><td>2</td><td>High Pulse</td></tr>
 *    <tr><td>3</td><td>Active Low</td></tr>
 *    <tr><td>4</td><td>Active High</td></tr>
 *    <tr><td>5</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's end of print signal
 */
-(EndOfPrintSignalValue)getEndOfPrintSignal; //EP

/**
 *  This sets printer's start of print signal
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEndOfPrintSignal: (EndOfPrintSignalValue) value;

/**
 * This gets the printer's GPIO slew. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Standard</td></tr>
 *    <tr><td>1</td><td>Low Pulse</td></tr>
 *    <tr><td>2</td><td>High Pulse</td></tr>
 *    <tr><td>3</td><td>Active Low</td></tr>
 *    <tr><td>4</td><td>Active High</td></tr>
 *    <tr><td>5</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's GPIO slew
 */
-(EndOfPrintSignalValue)getGPIOSlew; //GS

/**
 *  This sets printer's GPIO slew
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGPIOSlew: (EndOfPrintSignalValue) value;

/**
 *  This determines if feedback mode is enable or disable
 *  @return true if feedback mode is enable and false if disable
 */
-(bool)getFeedbackMode;
//FM

/**
 *  This sets to enable or disable feedback mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFeedbackMode: (bool) value;

/**
 *  This determines if communication heat commands are enable or disable
 *
 *  @return true if the commands are enable and false if disable
 */
-(bool)getCommunicationHeatCommands;
 //CH

/**
 *  This sets whether to enable or disable communication heat commands
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setCommunicationHeatCommands: (bool) value;

/**
 *  This determines if communication speed commands are enable or disable
 *
 *  @return true if the commands are enable and false if disable
 */
-(bool)getCommunicationSpeedCommands;
 //CS

/**
 *  This sets whether to enable or disable communication speed commands
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setCommunicationSpeedCommands: (bool) value;

/**
 *  This determines if communication TOF commands are enable or disable
 *
 *  @return true if the commands are enable and false if disable
 */
-(bool)getCommunicationTOFCommands;
 //CT

/**
 *  This sets whether to enable or disable communication TOF commands
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setCommunicationTOFCommands: (bool) value;

/**
 *  This determines if british pound is enable or disable
 *
 *  @return true if british pound is enable and false if disable
 */
-(bool)getBritishPound;
 //BP

/**
 *  This sets whether to enable or disable british pound
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBritishPound: (bool) value;

/**
 * This gets the printer's GPIO Backup Label. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Disable</td></tr>
 *    <tr><td>1</td><td>Unknown</td></tr>
 *    <tr><td>3</td><td>Active Low</td></tr>
 *    <tr><td>4</td><td>Active High</td></tr>
 * </table>
 *  @return printer's GPIO backup label value
 */
-(GPIOBackupLabelValue)getGPIOBackupLabel; //BL

/**
 *  This sets printer's GPIO backup label
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setGPIOBackupLabel: (GPIOBackupLabelValue) value;

/**
 *  This determines if printer's control code should be ignore or not
 *
 *  @return true if control code will be ignore and false if we do not want to ignore.
 */
-(bool)getIgnoreControlCode;

/**
 *  This sets whether to enable or disable ignore control codes falg
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setIgnoreControlCode: (bool) value;

/**
 *  This determines if printer's software switch should be process or ignore
 *
 *  @return true if sofware will be process and false if ignore
 */
-(bool)getSoftwareSwitch;//SV - Y for process, N = ignore

/**
 *  This sets whether printer's software switch should be process or ignore
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSoftwareSwitch: (bool) value;

/**
 *  This determines if maximum length ignore should be ignore or not
 *
 *  @return true if max label length is ignore and false if we do not want ignore
 */
-(bool)getMaximumLengthIgnore;
//SM

/**
 *  This sets whether maximum length ignore should be ignore or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setMaximumLengthIgnore: (bool) value;

/**
 *  This determines if pause mode is enable or disable
 *  @return true if pause mode is enable and false if disable
 */
-(bool)getPauseMode;
 //PM

/**
 *  This sets whether pause mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPauseMode: (bool) value;

/**
 *  This determines if peel mode is enable or disable
 *
 *  @return true if peel mode  is enable and false if disable
 */
-(bool)getPeelMode;
 //PE

/**
 *  This sets whether peel mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPeelMode: (bool) value;

/**
 * This gets the printer's USB mode. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Printer Class</td></tr>
 *    <tr><td>1</td><td>CDC Class</td></tr>
 *    <tr><td>2</td><td>Composite (CDC/Printer Class)</td></tr>
 *    <tr><td>3</td><td>Mass Storage Class</td></tr>
 *    <tr><td>4</td><td>Composite (CDC/Printer/Mass Storage)</td></tr>
 *    <tr><td>5</td><td>Unknown</td></tr> * </table>
 *  @return printer's USB mode
 */
-(USBModeValue)getUSBMode;//ZC

/**
 *  This sets the printer's USB mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUSBMode: (USBModeValue) value;

/**
 *  This determines if Windows Driver for EZ RLE is enable or disable
 *
 *  @return true if it is enable and false if disable
 */
-(bool)getWindowsDriverForEZ_RLE;//WD

/**
 *  This sets Windows Driver for EZ-Print RLE is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWindowsDriverForEZ_RLE: (bool) value;

/**
 * This gets the printer's display mode for IP/Hostname. Possible values:
 *  <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>1</td><td>IP</td></tr>
 *    <tr><td>2</td><td>Hostname</td></tr>
 *    <tr><td>3</td><td>Fully Qualify Domain Name</td></tr>
 *    <tr><td>4</td><td>IP/Hostname</td></tr>
 *    <tr><td>5</td><td>IP/Fully Qualify Domain Name</td></tr>
 *    <tr><td>6</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's display mode for IP/Hostname
 */
-(DisplayModeForIPHostnameValue)getDisplayModeForIPHostname;

/**
 *  This sets the printer's display mode for IP/Hostname
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDisplayModeForIPHostname: (DisplayModeForIPHostnameValue) value;

/**
 *  This determines if Hex Dump Mode is enable or disable
 *
 *  @return true if Hex Dump Mode is enable and false if disable
 */
-(bool)getHexDumpMode;
 //HD

/**
 *  This sets whether Hex Dump Mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setHexDumpMode: (bool) value;

/**
 * This gets the printer's LCD orientation. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Normal</td></tr>
 *    <tr><td>1</td><td>Rotated 180 degrees</td></tr>
 *    <tr><td>999</td><td>Unknown</td></tr>
 * </table>
 *  @return printer's LCD orientation
 */
-(LCDOrientationValue)getLCDOrientation;

/**
 *  This sets the printer's LCD orientation
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setLCDOrientation: (LCDOrientationValue) value;

/**
 * This gets the printer's image rotation on download. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Normal</td></tr>
 *    <tr><td>1</td><td>90 degree</td></tr>
 *    <tr><td>2</td><td>180 degree</td></tr>
 *    <tr><td>3</td><td>270 degree</td></tr>
 * </table>
 *  @return printer's image rotation value
 */
-(ImageRotationValue)getImageRotation;

/**
 *  This sets the printer's image rotation on download
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setImageRotation: (ImageRotationValue) value;

@end
