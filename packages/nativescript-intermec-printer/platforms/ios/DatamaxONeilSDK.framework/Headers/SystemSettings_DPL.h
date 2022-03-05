//
//  SystemSettings_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"
#import "DPL_Definitions.h"


/** Menu mode values */
typedef NS_ENUM(NSInteger, MenuModeValue) {
    /** UserMode*/
    MenuModeValueUser = 85,
    
    /** Advance Mode*/
    MenuModeValueAdvanced = 65,
    
    /** Unknown Value*/
    MenuModeValueUnknown = 999
};

/** Start of Print Emulation values*/
typedef NS_ENUM(NSInteger, StartOfPrintEmulationValue) {
    /** Unknown Value*/
    StartOfPrintEmulationValueUnknown = 999,
    
    /** Allegro */
    StartOfPrintEmulationValueAllegro = 65,
    
    /** Prodigy Plus*/
    StartOfPrintEmulationValueProdigyPlus = 76,
    
    /** Prodigy*/
    StartOfPrintEmulationValueProdigy = 80,
    
    /** Disable*/
    StartOfPrintEmulationValueDisable = 68
};

/** Memory Module values*/
typedef NS_ENUM(NSInteger, MemoryModuleValue) {
    /** Unknown Value*/
    MemoryModuleValueUnknown = 999,
    
    /** D Module */
    MemoryModuleValueD = 68,
    
    /** G Module */
    MemoryModuleValueG = 71,
    
    /** X Module */
    MemoryModuleValueX = 88,
    
    /** Y Module */
    MemoryModuleValueY = 89
};

/** Image Mode */
typedef NS_ENUM(NSInteger, ImageModeValue) {
    
    /** Unknown Value*/
    ImageModeValueUnknown = 999,
    
    /** Single Label*/
    ImageModeValueSingleLabel = 83,
    
    /** Multiple Label*/
    ImageModeValueMultipleLabel = 77
};

/** Display Mode */
typedef NS_ENUM(NSInteger, DisplayModeValue) {
    /** Unknown Value*/
    DisplayModeValueUnknown = 999,
    
    /** Standard*/
    DisplayModeValueStandard = 83,
    
    /** Enhanced*/
    DisplayModeValueEnhanced = 69
};

/**
 * Legacy Emulation
 */
typedef NS_ENUM(NSInteger, LegacyEmulationValue) {
    
    /**
     *  Unknown
     */
    LegacyEmulationValueUnknown = 999,

    /**
     *  None
     */
    LegacyEmulationValueNone = 78,
    /**
     *  Allegro
     */
    LegacyEmulationValueAllegro = 65,
    /**
     *  Prodigy Plus
     */
    LegacyEmulationValueProdigyPlus = 76,
    /**
     *  Prodigy
     */
    LegacyEmulationValueProdigy = 80,
    /**
     *  Prodigy Max
     */
    LegacyEmulationValueProdigyMax = 77,
    /**
     *  XL
     */
    LegacyEmulationValueXL = 88,
    /**
     *  Disable
     */
    LegacyEmulationValueDisable = 68
    
};

/**
 * Fault Handling Level Values
 */
typedef NS_ENUM(NSInteger, FaultHandlingLevelValue) {
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    FaultHandlingLevelValueUnknown = 999,
    
    /**
     *  No reprint
     */
    FaultHandlingLevelValueNoReprint = 0,
    
    /**
     * Standard.
     */
    FaultHandlingLevelValueStandard = 1,
    
    /**
     * Void and Retry
     */
    FaultHandlingLevelValueVoidRetry = 2,
    
    /**
     * Delayed Scan Fault
     */
    FaultHandlingLevelValueDelayedScanFault = 3,
    
    /**
     *  Void Retry and Continue
     */
    FaultHandlingLevelValueVoidRetryCont = 4
};

/**
 * Font Emulation
 */
typedef NS_ENUM(NSInteger, FontEmulationValue) {
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    FontEmulationValueUnknown = 999,
    
    /**
     * No Substitution
     */
    FontEmulationValueNoSubstitution = 0,
    
    /**
     * Sub CG Times SA0
     */
    FontEmulationValueSubCGTimesSA0 = 1,
    
    /**
     * Sub User S50
     */
    FontEmulationValueSubUserS50 = 2
};

/**
 * Input Mode
 */
typedef NS_ENUM(NSInteger, InputModeValue) {
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    InputModeValueUnknown = 999,
    
    /**
     * DPL
     */
    InputModeValueDPL = 0,
    
    /**
     * Line
     */
    InputModeValueLine = 1,
    
    /**
     * DTPL
     */
    InputModeValueDTPL = 2,
    
    /**
     * PL-Z
     */
    InputModeValuePLZ = 3,
    
    /**
     * PL-I
     */
    InputModeValuePLI = 5,
    
    /**
     * PL-B
     */
    InputModeValuePLB = 7,
    
    /**
     * PL-E
     */
    InputModeValuePLE = 8,
    
    /**
     * Auto
     */
    InputModeValueAuto = 9,
    
    /**
     * CPCL
     */
    InputModeValueCPCL = 10,
    
    /**
     * EZ-Print
     */
    InputModeValueEZPrint = 11,

};

/** Label Store Level*/
typedef NS_ENUM(NSInteger, LabelStoreLevelValue) {
    /** Fields */
    LabelStoreLevelValueFields = 70,
    
    /** States and Fields*/
    LabelStoreLevelValueStatesFields = 83,
    
    /** Unknown Value*/
    LabelStoreLevelValueUnknown = 999
};

/**
 * BackLight mode.
 */
typedef NS_ENUM(NSInteger, BacklightModeValue) {
    /**
     * Always off
     */
    BacklightModeValueAlwaysOff = 0,
    /**
     * Always On
     */
    BacklightModeValueAlwaysOn = 1,
    /**
     * On When AC is present
     */
    BacklightModeValueOnWhenACPresent = 2,
    /**
     * On when battery is charging
     */
    BacklightModeValueOnWhenCharging = 3,
    
    /**
     *  Auto On
     */
    BacklightModeValueAutoOn = 4,
    
    /**
     *  Auto On, On When AC is present
     */
    BacklightModeValueOnWhenACPresentAutoOn = 5,
    
    /**
     *  Auto On, On when battery is charging
     */
    BacklightModeValueOnWhenChargingAutoOn = 6,
    
    /**
    *  Unknown
    */
    BacklightModeValueUnknown = 999,
};

/** Encrypted File Algorithm Values*/
typedef NS_ENUM(NSInteger, EncryptedFileAlgorithmValue) {
    /** Unknown Value*/
    EncryptedFileAlgorithmValueUnknown = 999,
    
    /** None */
    EncryptedFileAlgorithmValueNone = 0,
    
    /** BlowFish */
    EncryptedFileAlgorithmValueBlowFish = 1,
    
    /** Des */
    EncryptedFileAlgorithmValueDes = 2,
    
    /** Rc4 */
    EncryptedFileAlgorithmValueRc4 = 3,
};

/** Encrypte File Algorithm Values*/
typedef NS_ENUM(NSInteger, LabelRotationValue) {
    /** Unknown Value*/
    LabelRotationValueUnknown = 999,
    
    /** None */
    LabelRotationValueRotate_0 = 0,
    
    /** BlowFish */
    LabelRotationValueRotate_90 = 2,
    
    /** Des */
    LabelRotationValueRotate_180 = 1,
    
    /** Rc4 */
    LabelRotationValueRotate_270 = 3,
};

/**
 * This class handles the system settings data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>UM</td><td>Unit Measure</td></tr>
 *    <tr><td>ES</td><td>ESC Sequence Enable</td></tr>
 *    <tr><td>AS</td><td>Single Byte Symbol Set</td></tr>
 *    <tr><td>DS</td><td>Double Byte Symbol Set</td></tr>
 *    <tr><td>NS</td><td>Disable Symbol Set Value Selection</td></tr>
 *    <tr><td>MM</td><td>Menu Mode</td></tr>
 *    <tr><td>SE</td><td>Start of Print Emulation</td></tr>
 *    <tr><td>IL</td><td>Image Mode</td></tr>
 *    <tr><td>LS</td><td>menu Language</td></tr>
 *    <tr><td>GD</td><td>Display Mode</td></tr>
 *    <tr><td>IM</td><td>Internal Module Size</td></tr>
 *    <tr><td>SC</td><td>Scalable Font Cache</td></tr>
 *    <tr><td>LE</td><td>Legacy Emulation</td></tr>
 *    <tr><td>EC</td><td>Column Emulation</td></tr>
 *    <tr><td>ER</td><td>Row Emulation</td></tr>
 *    <tr><td>FHL</td><td>Fault Handling Level</td></tr>
 *    <tr><td>FHD</td><td>Fault Handling Void Distance</td></tr>
 *    <tr><td>FHR</td><td>Fault Handling Retry Counts</td></tr>
 *    <tr><td>FE</td><td>Font Emulation</td></tr>
 *    <tr><td>EM</td><td>Input Mode</td></tr>
 *    <tr><td>AT</td><td>Emulations Used for Auto Input Mode</td></tr> 
 *    <tr><td>ED</td><td>User Emulation Mode</td></tr>
 *    <tr><td>RW</td><td>Retract Delay</td></tr>
 *    <tr><td>LR</td><td>Label Rotation</td></tr>
 *    <tr><td>LM</td><td>Label Store Level</td></tr>
 *    <tr><td>FB</td><td>Scalable FOnt Bolding</td></tr>
 *    <tr><td>DC</td><td>Dot Check on Startup</td></tr>
 *    <tr><td>DD</td><td>Dot Check on schedule</td></tr>
 *    <tr><td>DH</td><td>Dot Check Schedule</td></tr>
 *    <tr><td>FA</td><td>Format Attribute</td></tr>
 *    <tr><td>SR</td><td>Suppress Auto Reset</td></tr>
 *    <tr><td>BZ</td><td>Beeper State</td></tr>
 *    <tr><td>HT</td><td>Host Timeout</td></tr>
 *    <tr><td>ZT</td><td>Printer Sleep Timeout</td></tr>
 *    <tr><td>BM</td><td>Back light Mode</td></tr>
 *    <tr><td>BN</td><td>Back light Timer</td></tr>
 *    <tr><td>ZR</td><td>Radio Status</td></tr>
 *    <tr><td>PZ</td><td>Power Down Timeout</td></tr>
 *    <tr><td>RZ</td><td>RF Power Down Timeout</td></tr>
 *    <tr><td>UD</td><td>User Label Mode</td></tr>
 *    <tr><td>1</td><td>Startup Script File</td></tr>
 *    <tr><td>2</td><td>Run Once Script File</td></tr>
 *    <tr><td>3</td><td>Startup Configuration File</td></tr>
 *    <tr><td>4</td><td>Top Level Menu</td></tr>
 *    <tr><td>5</td><td>Beep Control Duration</td></tr>
 *    <tr><td>6</td><td>Beep Control Quantity</td></tr>
 *    <tr><td>7</td><td>Beep Now Duration</td></tr>
 *    <tr><td>8</td><td>Beep Now Quantity</td></tr>
 *    <tr><td>10</td><td>Periodic Script File</td></tr>
 *    <tr><td>11</td><td>Periodic Script Time Interval</td></tr>
 *    <tr><td>12</td><td>Web URL</td></tr>
 *    <tr><td>13</td><td>Save Last Image</td></tr>
 *    <tr><td>14</td><td>Enable File Dump</td></tr>
 *    <tr><td>15</td><td>Encrypted File Key</td></tr>
 *    <tr><td>16</td><td>Encrypted File Algorithm</td></tr>
 *    <tr><td>17</td><td>Shut down Temperature Low</td></tr>
 *    <tr><td>18</td><td>Shut down Temperature High</td></tr>
 * </table>
 */
@interface SystemSettings_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * This gets the printer's unit of measure. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>M</td><td>Metric</td></tr>
 *    <tr><td>I</td><td>Inch</td></tr>
 * </table>
 *  @return printer's unit of measure
 */
-(UnitMeasureValue)getUnitMeasure;

/**
 *  This sets the printer's unit of measure
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUnitMeasure: (UnitMeasureValue) value;

/**
 *  This gets whether escape sequences is enable or disable
 *  @return true if escape sequence is enable and false if disable
 */
-(bool)getEscapeSequences;

/**
 *  This sets whether escape sequences is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEscapeSequences: (bool) value;

/**
 *  This gets the printer's single byte symbol set
 *  @return single byte symbol set
 */
-(SingleByteSymbolSetValue)getSingleByteSymbolSet;

/**
 *  This sets the printer's single byte symbol set
 *  @param value new value to setnot
 *  @return Success returns 0, fail returns -1
 */
-(int)setSingleByteSymbolSet: (SingleByteSymbolSetValue) value;

/**
 *  This gets the printer's double byte symbol set
 *  @return double byte symbol set
 */
-(DoubleByteSymbolSetValue)getDoubleByteSymbolSet;

/**
 *  This sets the printer's double byte symbol set
 *  @param value new value to setnot
 *  @return Success returns 0, fail returns -1
 */
-(int)setDoubleByteSymbolSet: (DoubleByteSymbolSetValue) value;

/**
 *  This gets whether symbol set selection is enable or disable
 *  @return true if symbol set selection is disable and false if enable
 */
-(bool)getSymbolSetSelection;

/**
 *  This sets whether symbol set selection is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSymbolSetSelection: (bool) value;

/**
 * This gets the printer's menu mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>U</td><td>User</td></tr>
 *    <tr><td>A</td><td>Advanced</td></tr>
 * </table>
 *  @return printer's menu mode
 */
-(MenuModeValue)getMenuMode;

/**
 *  This sets the printer's menu mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setMenuMode: (MenuModeValue) value;

/**
 * This gets the printer's start of print emulation. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Allegro</td></tr>
 *    <tr><td>L</td><td>Progidy Plus</td></tr>
 *    <tr><td>P</td><td>Prodigy</td></tr>
 *    <tr><td>D</td><td>Disable</td></tr>
 * </table>
 *  @return printer's start of print emulation
 */
-(StartOfPrintEmulationValue)getStartOfPrintEmulation;

/**
 *  This sets the printer's start of print emulation
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStartOfPrintEmulation: (StartOfPrintEmulationValue) value;

/**
 *  This gets the printer's default memory module
 *  @return printer's default memory module
 */
-(MemoryModuleValue)getDefaultModule;

/**
 *  This sets the printer's default memory module
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDefaultMemoryModule: (MemoryModuleValue) value;

/**
 * This gets the printer's image mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>M</td><td>Multiple Label</td></tr>
 *    <tr><td>S</td><td>Single Label</td></tr>
 * </table>
 *  @return printer's image mode
 */
-(ImageModeValue)getImageMode;

/**
 *  This sets the printer's image mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setImageMode: (ImageModeValue) value;

/**
 *  This gets the printer's menu language
 *  @return printer's menu language
 */
-(NSString *)getMenuLanguage;

/**
 * This sets the printer's menu language
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setMenuLanguage: (NSString *) value;

/**
 * This gets the printer's display mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>S</td><td>Standard</td></tr>
 *    <tr><td>E</td><td>Enhanced</td></tr>
 * </table>
 *  @return printer's display mode
 */
-(NSString *)getDisplayMode;

/**
 *  This gets the printer's internal module size
 *  @return printer's internal module size
 */
-(long)getInternalModuleSize;

/**
 *  This gets the printer's scalable font cache (READ-ONLY)
 *  @return printer's scalable font cache
 */
-(long)getScalableFontCache;

/**
 * This gets the printer's Legacy emulation. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>None</td></tr>
 *    <tr><td>A</td><td>Allegro</td></tr>
 *    <tr><td>L</td><td>Prodigy Plus</td></tr>
 *    <tr><td>P</td><td>Prodigy</td></tr>
 *    <tr><td>M</td><td>Prodigy Max</td></tr>
 *    <tr><td>X</td><td>XL</td></tr>
 *    <tr><td>D</td><td>Disable</td></tr>
 * </table>
 *  @return printer's Legacy emulation
 */
-(NSString *)getLegacyEmulation;

/**
 *  This gets the printer's column emulation
 *  @return printer's column emulation
 */
-(long)getColumnEmulation;

/**
 * This sets the printer's column emulation
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setColumnEmulation: (long) value;

/**
 *  This gets the printer's row emulation
 *  @return printer's row emulation
 */
-(long)getRowEmulation;

/**
 * This sets the printer's row emulation
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRowEmulation: (long) value;

/**
 * This gets the printer's fault handling level. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>No reprint</td></tr>
 *    <tr><td>1</td><td>Standard</td></tr>
 *    <tr><td>2</td><td>Void and retry</td></tr>
 *    <tr><td>3</td><td>Delayed Scan Fault</td></tr>
 *    <tr><td>4</td><td>Void, Retry and Continue</td></tr>
 * </table>
 *  @return printer's fault handling level
 */
-(FaultHandlingLevelValue)getFaultHandlingLevel;

/**
 * This sets the printer's fault handling level
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFaultHandlingLevel: (FaultHandlingLevelValue) value;

/**
 *  This gets the printer's fault handling void distance
 *  @return printer's fault handling void distance
 */
-(long)getFaultHandlingVoidDistance;

/**
 * This sets the printer's fault handling void distance
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFaultHandlingVoidDistance: (long) value;

/**
 *  This gets the printer's fault handling retry counts
 *  @return printer's fault handling retry counts
 */
-(long)getFaultHandlingRetryCount;

/**
 * This sets the printer's fault handling retry count
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFaultHandlingRetryCount: (long) value;

/**
 *  This gets the printer's fault handling backup flag
 *  @return true if fault handling backup is enabled and false if disabled
 */
-(bool)getFaultHandlingBackup;

/**
 *  This sets the printer's fault handling backup flag
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFaultHandlingBackup: (bool) value;

/**
 * This gets the printer's font emulation. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>No Substitution</td></tr>
 *    <tr><td>1</td><td>Sub CG Times SAO</td></tr>
 *    <tr><td>2</td><td>Sub User S50</td></tr>
 * </table>
 *  @return printer's font emulation
 */
-(FontEmulationValue)getFontEmulation;

/**
 * This sets the printer's fault handling level
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFontEmulation: (FontEmulationValue) value;

/**
 * This gets the printer's input mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>DPL</td></tr>
 *    <tr><td>1</td><td>Line</td></tr>
 *    <tr><td>2</td><td>DTPL</td></tr>
 *    <tr><td>3</td><td>PLZ</td></tr>
 *    <tr><td>5</td><td>PLI</td></tr>
 *    <tr><td>7</td><td>PLB</td></tr>
 *    <tr><td>8</td><td>PLE</td></tr>
 *    <tr><td>9</td><td>Auto</td></tr>
 *    <tr><td>10</td><td>CPCL</td></tr>
 *    <tr><td>11</td><td>EZ Print</td></tr>
 * </table>
 *  @return printer's input mode
 */
-(InputModeValue)getInputMode;

/**
 * This sets the printer's input mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setInputMode: (InputModeValue) value;

/**
 * This gets the printer's emulations to be used when auto input mode is selected
 *  @return printer's list containing emulations to be use for auto input mode
 */
-(NSArray*)getEmulationsUsedForAutoMode;

/**
 * This sets the printer's emulations to be used when auto input mode is selected
 *  @param values new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEmulationsUsedForAutoMode: (NSArray*) values;

/**
 * This gets the printer's user emulation mode.  Data that are not handle by Auto Input Mode
 * will be processed by user emulation mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>DPL</td></tr>
 *    <tr><td>1</td><td>Line</td></tr>
 *    <tr><td>2</td><td>DTPL</td></tr>
 *    <tr><td>3</td><td>PLZ</td></tr>
 *    <tr><td>5</td><td>PLI</td></tr>
 *    <tr><td>7</td><td>PLB</td></tr>
 *    <tr><td>8</td><td>PLE</td></tr>
 *    <tr><td>9</td><td>Auto</td></tr>
 *    <tr><td>10</td><td>CPCL</td></tr>
 *    <tr><td>11</td><td>EZ Print</td></tr>
 * </table>
 *  @return printer's user emulation mode
 */
-(InputModeValue)getUserEmulationMode;

/**
 * This sets the printer's user emulation mode.  Data that are not handle by Auto Input Mode
 * will be processed by user emulation Mode.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUserEmulationMode: (InputModeValue) value;

/**
 *  This gets the printer's retract delay ((1-255)*10ms)
 *  @return printer's retract delay
 */
-(long)getRetractDelay;

/**
 * This sets the printer's retract delay ((1-255)*10ms)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRetractDelay: (long) value;

/**
 *  This gets the printer's current label rotation
 *  @return true if label is rotated 180 degrees and false if not rotated
 */
-(LabelRotationValue)getLabelRotation;

/**
 *  This sets the printer's current label rotation
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setLabelRotation: (LabelRotationValue) value;

/**
 * This gets the printer's label store level. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>F</td><td>Fields</td></tr>
 *    <tr><td>S</td><td>State and Fields</td></tr>
 * </table>
 *  @return printer's label store level
 */
-(LabelStoreLevelValue)getLabelStoreLevel;

/**
 *  This sets the printer's label store level
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setLabelStoreLevel: (LabelStoreLevelValue) value;

/**
 *  This gets the printer's scalable font bolding
 *  @return printer's scalable font bolding
 */
-(long)getScalableFontBolding;

/**
 *  This gets whether dot check on startup  is enable or disable
 *  @return true if dot check on startup is enable and false if disable
 */
-(bool)getDotCheckOnStartup;

/**
 *  This gets whether dot check on schedule is enable or disable
 *  @return true if dot check on schedule is enable and false if disable
 */
-(bool)getDotCheckOnSchedule;

/**
 *  This gets the printer's dot check schedule
 *  @return printer's dot check schedule
 */
-(NSString *)getDotCheckSchedule;

/**
 * This gets the printer's format attribute. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>X</td><td>XOR</td></tr>
 *    <tr><td>O</td><td>Opaque</td></tr>
 *    <tr><td>T</td><td>Transparent</td></tr>
 * </table>
 *  @return printer's format attribute
 */
-(FormatAttributeValue)getFormatAttribute;

/**
 *  This sets the printer's format attribute
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFormatAttribute: (FormatAttributeValue) value;

/**
 *  This gets whether suppress auto reset is enable or disable
 *  @return true if suppress auto reset is enable and false if disable
 */
-(bool)getSuppressAutoReset;

/**
 *  This sets whether suppress auto reset is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSuppressAutoReset: (bool) value;

/**
 *  This gets whether the printer's beeper state is enable or disable
 *  @return printer's beeper state
 */
-(bool)getBeeperState;

/**
 *  This sets whether the printer's beeper state is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBeeperState: (bool) value;

/**
 *  This gets the printer's host timeout
 *  @return printer's host timeout
 */
-(long)getHostTimeout;

/**
 * This sets the printer's host timeout
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setHostTimeout: (long) value;

/**
 *  This gets the printer's sleep timeout
 *  @return printer's sleep timeout
 */
-(long)getPrinterSleepTimeout;

/**
 * This sets the printer's sleep timeout(0-9999, 0 = Off)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPrinterSleepTimeout: (long) value;

/**
 * This gets the printer's backlight mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Always Off</td></tr>
 *    <tr><td>1</td><td>Always On</td></tr>
 *    <tr><td>2</td><td>On when AC present</td></tr>
 *    <tr><td>3</td><td>On when battery charging</td></tr>
 *    <tr><td>4</td><td>Auto on</td></tr>
 *    <tr><td>5</td><td>Auto on, on when AC present</td></tr>
 *    <tr><td>6</td><td>Auto on, on when battery charging</td></tr>
 * </table>
 *  @return printer's backlight mode
 */
-(BacklightModeValue)getBacklightMode;

/**
 * This sets the printer's backlight mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBacklightMode: (BacklightModeValue) value;

/**
 *  This gets the printer's backlight timer
 *  @return printer's backlight timer
 */
-(long)getBacklightTimer;

/**
 * This sets the printer's backlight timer
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBacklightTimer: (long) value;

/**
 *  This gets whether radio is on or off
 *  @return true if radio is on and false if off
 */
-(bool)getRadioPowerState;

/**
 *  This sets whether radio status is on or off
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRadioPowerState: (bool) value;

/**
 *  This gets the printer's power down timeout
 *  @return printer's power down timeout
 */
-(long)getPowerDownTimeout;

/**
 * This sets the printer's power down timeout(0 - 20160 mins, 0 = never)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPowerDownTimeout: (long) value;


/**
 *  This gets the printer's RF power down timeout
 *  @return printer's RF power down timeout
 */
-(long)getRFPowerDownTimeout;

/**
 * This sets the printer's RF power down timeout(0 - 65535 mins, 0 = never)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRFPowerDownTimeout: (long) value;

/**
 *  This gets whether User Label Mode is enable or disable
 *  @return true if User Label Mode is enable and false if disable
 */
-(bool)getUserLabelMode;

/**
 *  This sets whether User Label Mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUserLabelMode: (bool) value;

/**
 *  This gets the printer's startup script file name
 *  @return printer's startup script file name
 */
-(NSString *)getStartupScriptFile;

/**
 *  This sets the printer's startup script file name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStartupScriptFile: (NSString *) value;

/**
 *  This gets the printer's run once script file name
 *  @return printer's run once script file name
 */
-(NSString *)getRunOnceScriptFile;

/**
 *  This sets the printer's run once script file name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRunOnceScriptFile: (NSString *) value;

/**
 *  This gets the printer's startup configuration file name
 *  @return printer's startup configuration file name
 */
-(NSString *)getStartupConfigurationFile;

/**
 *  This sets the printer's startup configuration file name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStartupConfigurationFile: (NSString *) value;

/**
 *  This gets the printer's top level menu name
 *  @return printer's top level menu
 */
-(NSString *)getTopLevelMenuName;

/**
 *  This sets the printer's top level menu name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setTopLevelMenuName: (NSString *) value;

/**
 *  This gets the printer's beep control duration
 *  @return printer's beep control duration
 */
-(long)getBeepControlDuration;

/**
 *  This sets the printer's beep control duration
 *  Valid values: 0 - 65535
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBeepControlDuration: (long) value;

/**
 *  This gets the printer's beep control quantity
 *  @return printer's beep control quantity
 */
-(long)getBeepControlQuantity;

/**
 *  This sets the printer's beep control quantity
 *  Valid values: 0 - 255
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBeepControlQuantity: (long) value;

/**
 *  This gets the printer's beep now duration
 *  @return printer's beep now duration
 */
-(long)getBeepNowDuration;

/**
 *  This sets the printer's beep now duration
 *  Valid values: 0 - 65535
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBeepNowDuration: (long) value;

/**
 *  This gets the printer's beep now quantity
 *  @return printer's beep now quantity
 */
-(long)getBeepNowQuantity;

/**
 *  This sets the printer's beep now quantity
 *  Valid values: 0 - 255
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBeepNowQuantity: (long) value;

/**
 *  This gets the printer's periodic script name
 *  @return printer's periodic script name
 */
-(NSString *)getPeriodicScriptName;

/**
 *  This sets the printer's periodic script name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPeriodicScriptName: (NSString *) value;

/**
 *  This gets the printer's periodic script time interval
 *  @return printer's periodic script time interval
 */
-(long)getPeriodicScriptTimeInterval;

/**
 *  This sets the printer's periodic script time interval
 *  Valid values: 0 - 65535
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPeriodicScriptTimeInterval: (long) value;

/**
 *  This gets the printer's web URL
 *  @return printer's web URL
 */
-(NSString *)getWebURL;

/**
 *  This sets the printer's web URL
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWebURL: (NSString *) value;

/**
 *  This gets whether the save last image property is enable or disable
 *  @return true if save last image property is enable
 */
-(bool)getSaveLastImage;

/**
 *  This sets whether to enable or disable the save last image property
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSaveLastImage: (bool) value;

/**
 *  This gets whether the file dump is enable or disable
 *  @return true if file dump is enable is enable
 */
-(bool)getFileDump;

/**
 *  This sets whether to enable or disable file dump
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setFileDump: (bool) value;

/**
 *  This sets the encrypted file key(WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEncryptedFileKey: (NSString *) value;

/**
 *  This gets the printer's encrypted file algorithm
 *  @return printer's encrypted file algorithm
 */
-(EncryptedFileAlgorithmValue)getEncryptedFileAlgorithm;

/**
 *  This sets the printer's encrypted file algorithm
 *  Valid Values: 'None','BlowFish', 'Des', and 'Rc4'
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEncryptedFileAlgorithm: (EncryptedFileAlgorithmValue) value;

/**
 *  This gets the printer's shutdown temperature low
 *  @return printer's shutdown temperature low
 */
-(long)getShutdownTempLow;

/**
 *  This sets the printer's shutdown temperature low
 *  Valid values: -20 - 100
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setShutdownTempLow: (long) value;

/**
 *  This gets the printer's shutdown temperature high
 *  @return printer's shutdown temperature high
 */
-(long)getShutdownTempHigh;

/**
 *  This sets the printer's shutdown temperature high
 *  Valid values: -20 - 100
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setShutdownTempHigh: (long) value;


@end
