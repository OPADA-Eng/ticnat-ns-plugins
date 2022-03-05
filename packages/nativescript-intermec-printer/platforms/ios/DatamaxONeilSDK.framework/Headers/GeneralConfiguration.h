//
//  GeneralConfiguration.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/15/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {CF?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>A</td><td>White Space Advance Configuration</td></tr>
 *    <tr><td>B</td><td>Serial Baud Rate</td></tr>
 *    <tr><td>D</td><td>Printing Darkness Adjustment</td></tr>
 *    <tr><td>F</td><td>Form Feed Enabled</td></tr>
 *    <tr><td>G</td><td>Beep When Charger Connected</td></tr>
 *    <tr><td>H</td><td>Handshake type</td></tr>
 *    <tr><td>I</td><td>Lines Per Page</td></tr>
 *    <tr><td>J</td><td>Job Status Report</td></tr>
 *    <tr><td>L</td><td>Default Printing Protocol</td></tr>
 *    <tr><td>LT</td><td>Self Test Print Language</td></tr>
 *    <tr><td>M</td><td>Form Feed Centering</td></tr>
 *    <tr><td>N</td><td>Data Bits</td></tr>
 *    <tr><td>P</td><td>Serial Communication Parity</td></tr>
 *    <tr><td>PF</td><td>Formfeed Button Disabled</td></tr>
 *    <tr><td>PO</td><td>Power Button Disabled</td></tr>
 *    <tr><td>PR</td><td>RF Button Disabled</td></tr>
 *    <tr><td>QC</td><td>Number of times to add .25 volts or 0x19 to the QMark volt threshold.  The default is 0 and as this number increases the QMark is more difficult to detect, as it decreases the QMark is easier to detect.</td></tr>
 *    <tr><td>R</td><td>RF Power Timeout</td></tr>
 *    <tr><td>S</td><td>Sound Enabled</td></tr>
 *    <tr><td>T</td><td>System Timeout</td></tr>
 *    <tr><td>TP</td><td>Special Test Print Mode</td></tr>
 *    <tr><td>U</td><td>Paper Out Beep</td></tr>
 *    <tr><td>UC</td><td>What USB device class is the printer currently configured for.</td></tr>
 *    <tr><td>USB</td><td>Is USB the current communication method.</td></tr>
 *    <tr><td>DS</td><td>Deep Sleep.</td></tr>
 * </table>
 */
@interface GeneralConfiguration : PrinterState

/**
 * Serial Baud Rate
 */
typedef NS_ENUM(NSInteger, BaudRateValueEZ) {
    /**
     * The result was never set.
     */
    BaudRateValueEZUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    BaudRateValueEZUnknown = 999,
    
    /**
     * 1200 Baud
     */
    BaudRateValueEZ_1200 = 1200,
    
    /**
     * 2400 Baud
     */
    BaudRateValueEZ_2400 = 2400,
    
    /**
     * 4800 Baud
     */
    BaudRateValueEZ_4800 = 4800,
    
    /**
     * 9600 Baud
     */
    BaudRateValueEZ_9600 = 9600,
    
    /**
     * 19200 Baud
     */
    BaudRateValueEZ_19200 = 19200,
    
    /**
     * 38400 Baud
     */
    BaudRateValueEZ_38400 = 38400,
    
    /**
     * 57600 Baud
     */
    BaudRateValueEZ_57600 = 57600,
    
    /**
     * 115200 Baud
     */
    BaudRateValueEZ_115200 = 115200,
    
    /**
     * 230400 Baud
     */
    BaudRateValueEZ_230400 = 230400,
    
    /**
     * 460800 Baud
     */
    BaudRateValueEZ_460800 = 460800,
    
    /**
     * 921600 Baud
     */
    BaudRateValueEZ_921600 = 921600
};

/**
 * Handshake type
 */
typedef NS_ENUM(NSInteger, HandshakeValueEZ) {
    /**
     * The result was never set.
     */
    HandshakeValueEZUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    HandshakeValueEZUnknown = 999,
    
    /**
     * No control is used for the handshake
     */
    HandshakeValueEZNone = 78, //N
    
    /**
     * Request-to-Send (RTS) hardware flow control is used. RTS signals that data is available for transmission. If the input buffer becomes full, the RTS line will be set to false. The RTS line will be set to true when more room becomes available in the input buffer
     */
    HandshakeValueEZHardware = 72, //H
    
    /**
     * The XON/XOFF software control protocol is used. The XOFF control is sent to stop the transmission of data. The XON control is sent to resume the transmission. These software controls are used instead of Request to Send (RTS) and Clear to Send (CTS) hardware controls
     */
    HandshakeValueEZSoftware = 83, //S
    
    /**
     * Both the Request-to-Send (RTS) hardware control and the XON/XOFF software controls are used
     */
    HandshakeValueEZBoth = 66 //B
};

/**
 * Default Printing Protocol
 */
typedef NS_ENUM(NSInteger, EmulationProtocolValue) {
    /**
     * The result was never set.
     */
    EmulationProtocolValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    EmulationProtocolValueUnknown = 999,
    
    /**
     * O'Neil EZ print mode
     */
    EmulationProtocolValueEZ = 0,
    
    /**
     * O'Neil line printer mode
     */
    EmulationProtocolValueESC = 1,
    
    /**
     * CPCL Emulation
     */
    EmulationProtocolValueEMZ1 = 2,
    
    /**
     * COG Emulation
     */
    EmulationProtocolValueEMZ2 = 3,
    
    /**
     * ZPL Emulation
     */
    EmulationProtocolValueEMZ3 = 4,
    
    /**
     * ZPL Emulation(shifted 12dots to left)
     */
    EmulationProtocolValueEMZ4 = 5,
    
    /**
     * Custom Emulation
     */
    EmulationProtocolValueEMC1 = 6,
    
    /**
     * Custom Emulation
     */
    EmulationProtocolValueEMC2 = 7,
    
    /**
     * Custom Emulation
     */
    EmulationProtocolValueEMC3 = 8,
    
    /**
     * Custom Emulation
     */
    EmulationProtocolValueEMC4 = 9,
    
    /**
     * PGL Emulation
     */
    EmulationProtocolValueEMP1 = 10,
    
    /**
     * PCL Emulation
     */
    EmulationProtocolValueEMM1 = 11,
    
    /**
     * PK80 Impact Printer Emulation
     */
    EmulationProtocolValuePK80 = 12,
    
    /**
     * CPCL Emulation with true fonts
     */
    EmulationProtocolValueEMZ5 = 13,
    
    /**
     * TPCL Emulation
     */
    EmulationProtocolValueEMC6 = 14
};

/**
 * Serial Communication Parity
 */
typedef NS_ENUM(NSInteger, ParityValueEZ) {
    /**
     * The result was never set.
     */
    ParityValueEZUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    ParityValueEZUnknown = 999,
    
    /**
     * No parity check occurs
     */
    ParityValueEZNone = 78, //N
    
    /**
     * Sets the parity bit so that the count of bits set is an even number
     */
    ParityValueEZEven = 69, //E
    
    /**
     * Sets the parity bit so that the count of bits set is an odd number
     */
    ParityValueEZOdd = 79 //O
};

/**
 * Paper Out Beep
 */
typedef NS_ENUM(NSInteger, PaperOutBeepValue) {
    /**
     * The result was never set.
     */
    PaperOutBeepValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    PaperOutBeepValueUnknown = 999,
    
    /**
     * One Beep
     */
    PaperOutBeepValueOneBeep = 0,
    
    /**
     * Five beeps
     */
    PaperOutBeepValueFiveBeepsOnce = 1,
    
    /**
     * Five beeps repeated every 15s
     */
    PaperOutBeepValueFiveBeepsEvery15Sec = 2,
    
    /**
     * Five beeps repeated every 30s
     */
    PaperOutBeepValueFiveBeepsEvery30Sec = 3,
    
    /**
     * Five beeps repeated every 60s
     */
    PaperOutBeepValueFiveBeepsEvery60Sec = 4
};

/**
 * What USB device class is the printer currently configured for.
 */
typedef NS_ENUM(NSInteger, USBClassType) {
    /**
     * The result was never set.
     */
    USBClassTypeUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    USBClassTypeUnknown = 999,
    
    /**
     * USB CDC class only
     */
    USBClassTypeCDC = 0,
    
    /**
     * USB Printer class only
     */
    USBClassTypePrinter = 1,
    
    /**
     * USB CDC as well as Printer class at the same time
     */
    USBClassTypePrinterCDC = 2,
    
    /**
     * USB Obsolete     
     */
    USBClassTypePrinterCDC_IAD_Obsolete = 3,
    
    /**
     * USB DEX
     */
    USBClassTypeDEX = 4
};

typedef NS_ENUM(NSInteger, DarknessAdjustmentValues) {
    /**
     * The result was never set.
     */
    DarknessAdjustmentValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    DarknessAdjustmentValuesUnknown = 999,
    
    /**
     * -25% (Very Sensitive)
     */
    DarknessAdjustmentValuesNegative_Twenty_Five = -25,
    
    /**
     * -20%
     */
    DarknessAdjustmentValuesNegative_Twenty = -20,
    
    /**
     * -15%
     */
    DarknessAdjustmentValuesNegative_Fifteen = -15,
    
    /**
     * -10%
     */
    DarknessAdjustmentValuesNegative_Ten = 10,
    
    /**
     * -5%
     */
    DarknessAdjustmentValuesNegative_Five = -5,
    
    /**
     * Default
     */
    DarknessAdjustmentValuesDefault = 0,
    
    /**
     * 5%
     */
    DarknessAdjustmentValuesFive = 5,
    
    /**
     * 10%
     */
    DarknessAdjustmentValuesTen = 10,
    
    /**
     * 15%
     */
    DarknessAdjustmentValuesFifteen = 15,
    
    /**
     * 20%
     */
    DarknessAdjustmentValuesTwenty = 20,
    
    /**
     * 25%
     */
    DarknessAdjustmentValuesTwenty_Five = 25,
    
    /**
     * 30%
     */
    DarknessAdjustmentValuesThirty = 30,
    
    /**
     * 35%
     */
    DarknessAdjustmentValuesThirty_Five = 35
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getWhiteSpaceAdvance parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getWhiteSpaceAdvance may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWhiteSpaceAdvance
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getWhiteSpaceAdvance_IsPresent;

/**
 * White Space Advance Configuration
 * <p>
 * The return value for this parameter is only valid if getWhiteSpaceAdvance_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWhiteSpaceAdvance_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getWhiteSpaceAdvance;

/**
 * Set the white space advance value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setWhiteSpaceAdvance: (bool) value;

/**
 * Indicates if getBaudRate parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBaudRate may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBaudRate
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBaudRate_IsPresent;

/**
 * Serial Baud Rate
 * <p>
 * The return value for this parameter is only valid if getBaudRate_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBaudRate_IsPresent
 * @return The current value for the parameter.
 */
-(BaudRateValueEZ) getBaudRate;

/**
 * Set the baud rate  value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setBaudRate: (BaudRateValueEZ) value;

/**
 * Indicates if getDarknessAdjustment parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDarknessAdjustment may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDarknessAdjustment
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDarknessAdjustment_IsPresent;

/**
 * Printing Darkness Adjustment
 * <p>
 * The return value for this parameter is only valid if getDarknessAdjustment_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDarknessAdjustment_IsPresent
 * @return The current value for the parameter.
 */
-(DarknessAdjustmentValues) getDarknessAdjustment;

/**
 * Set the darkness adjustment value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDarknessAdjustment: (DarknessAdjustmentValues) value;

/**
 * Indicates if getFormFeed parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFormFeed may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormFeed
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFormFeed_IsPresent;

/**
 * Form Feed Enabled
 * <p>
 * The return value for this parameter is only valid if getFormFeed_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormFeed_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getFormFeed;

/**
 * Set the form feed enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setFormFeed: (bool) value;

/**
 * Indicates if getChargerBeep parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getChargerBeep may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getChargerBeep
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getChargerBeep_IsPresent;

/**
 * Beep When Charger Connected
 * <p>
 * The return value for this parameter is only valid if getChargerBeep_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getChargerBeep_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getChargerBeep;

/**
 * Set the charger beep enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setChargerBeep: (bool) value;

/**
 * Indicates if getRS232Handshake parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232Handshake may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Handshake
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232Handshake_IsPresent;

/**
 * Handshake type
 * <p>
 * The return value for this parameter is only valid if getRS232Handshake_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Handshake_IsPresent
 * @return The current value for the parameter.
 */
-(HandshakeValueEZ) getRS232Handshake;

/**
 * Set the serial handshake value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRS232HandShake: (HandshakeValueEZ) value;

/**
 * Indicates if getLinesPerPage parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getLinesPerPage may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getLinesPerPage
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getLinesPerPage_IsPresent;

/**
 * Lines Per Page
 * <p>
 * The return value for this parameter is only valid if getLinesPerPage_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getLinesPerPage_IsPresent
 * @return The current value for the parameter.
 */
-(long) getLinesPerPage;

/**
 * Indicates if getEZPrintJobStatusReport parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEZPrintJobStatusReport may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEZPrintJobStatusReport
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEZPrintJobStatusReport_IsPresent;

/**
 * Job Status Report
 * <p>
 * The return value for this parameter is only valid if getEZPrintJobStatusReport_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEZPrintJobStatusReport_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getEZPrintJobStatusReport;

/**
 * Set the print job status enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setEZPrintJobStatusReport: (bool) value;

/**
 * Indicates if getDefaultProtocol parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDefaultProtocol may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDefaultProtocol
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDefaultProtocol_IsPresent;

/**
 * Default Printing Protocol
 * <p>
 * This gets the default printing protocol(input mode) of the printer.
 * @return The current value for the parameter.
 */
-(EmulationProtocolValue) getDefaultProtocol;

/**
 * Set the default protocol(print mode) value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDefaultProtocol: (EmulationProtocolValue) value;

/**
 * Indicates if getSelfTestPrintLanguage parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSelfTestPrintLanguage may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSelfTestPrintLanguage
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSelfTestPrintLanguage_IsPresent;

/**
 * Self Test Print Language
 * <p>
 * The return value for this parameter is only valid if getSelfTestPrintLanguage_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSelfTestPrintLanguage_IsPresent
 * @return The current value for the parameter.
 */
-(long) getSelfTestPrintLanguage;

/**
 * Set the self test print language value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSelfTestPrintLanguage: (long) value;

/**
 * Indicates if getFormFeedCentering parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFormFeedCentering may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormFeedCentering
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFormFeedCentering_IsPresent;

/**
 * Form Feed Centering
 * <p>
 * The return value for this parameter is only valid if getFormFeedCentering_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormFeedCentering_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getFormFeedCentering;

/**
 * Set the form feed centering value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setFormFeedCentering: (bool) value;

/**
 * Indicates if getRS232DataBits parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232DataBits may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232DataBits
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232DataBits_IsPresent;

/**
 * Data Bits
 * <p>
 * The return value for this parameter is only valid if getRS232DataBits_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232DataBits_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRS232DataBits;

/**
 * Set the serial data bits value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRS232DataBits: (long) value;

/**
 * Indicates if getRS232Parity parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRS232Parity may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Parity
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRS232Parity_IsPresent;

/**
 * Serial Communication Parity
 * <p>
 * The return value for this parameter is only valid if getRS232Parity_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRS232Parity_IsPresent
 * @return The current value for the parameter.
 */
-(ParityValueEZ) getRS232Parity;

/**
 * Set the serial parity value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRS232Parity: (ParityValueEZ) value;

/**
 * Indicates if getFormfeedButtonDisabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFormfeedButtonDisabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormfeedButtonDisabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFormfeedButtonDisabled_IsPresent;

/**
 * Formfeed Button Disabled
 * <p>
 * The return value for this parameter is only valid if getFormfeedButtonDisabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFormfeedButtonDisabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getFormfeedButtonDisabled;

/**
 * Set the form feed button disabled value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setFormfeedButtonDisabled: (bool) value;

/**
 * Indicates if getPowerButtonDisabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPowerButtonDisabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerButtonDisabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPowerButtonDisabled_IsPresent;

/**
 * Power Button Disabled
 * <p>
 * The return value for this parameter is only valid if getPowerButtonDisabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerButtonDisabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPowerButtonDisabled;

/**
 * Set the power button disabled value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPowerButtonDisabled: (bool) value;


/**
 * Indicates if getRFButtonDisabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRFButtonDisabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRFButtonDisabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRFButtonDisabled_IsPresent;

/**
 * RF Button Disabled
 * <p>
 * The return value for this parameter is only valid if getRFButtonDisabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRFButtonDisabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getRFButtonDisabled;

/**
 * Set the radio button disabled value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRFButtonDisabled: (bool) value;

/**
 * Indicates if getQStopMultiplier parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getQStopMultiplier may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQStopMultiplier
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getQStopMultiplier_IsPresent;

/**
 * Number of times to add .25 volts or 0x19 to the QMark volt threshold.  The default is 0 and as this number increases the QMark is more difficult to detect, as it decreases the QMark is easier to detect.
 * <p>
 * The return value for this parameter is only valid if getQStopMultiplier_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQStopMultiplier_IsPresent
 * @return The current value for the parameter.
 */
-(long) getQStopMultiplier;

/**
 * Set the QStop Multiplier value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setQStopMultiplier: (long) value;

/**
 * Indicates if getRFPowerTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRFPowerTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRFPowerTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRFPowerTimeout_IsPresent;

/**
 * RF Power Timeout
 * <p>
 * The return value for this parameter is only valid if getRFPowerTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRFPowerTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRFPowerTimeout;

/**
 * Set the RF Power Timeout
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRFPowerTimeout: (long) value;

/**
 * Indicates if getSoundEnabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSoundEnabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSoundEnabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSoundEnabled_IsPresent;

/**
 * Sound Enabled
 * <p>
 * The return value for this parameter is only valid if getSoundEnabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSoundEnabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getSoundEnabled;

/**
 * Set the sound enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSoundEnabled: (bool) value;

/**
 * Indicates if getSystemTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSystemTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSystemTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSystemTimeout_IsPresent;

/**
 * System Timeout
 * <p>
 * The return value for this parameter is only valid if getSystemTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSystemTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getSystemTimeout;

/**
 * Set the system power timeout value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSystemTimeout: (long) value;

/**
 * Indicates if getSpecialTestPrint parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSpecialTestPrint may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSpecialTestPrint
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSpecialTestPrint_IsPresent;

/**
 * Special Test Print Mode
 * <p>
 * The return value for this parameter is only valid if getSpecialTestPrint_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSpecialTestPrint_IsPresent
 * @return The current value for the parameter.
 */
-(long) getSpecialTestPrint;

/**
 * Set the special test print value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSpecialTestPrint: (long) value;

/**
 * Indicates if getPaperOutBeep parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPaperOutBeep may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperOutBeep
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPaperOutBeep_IsPresent;

/**
 * Paper Out Beep, Values: 0 = One Beep, 1 = Five Beeps Once, 2 = Five Beeps Every 15s, 3 = Five Beeps Every 30s, 4 = Five Beeps Every 60s
 * <p>
 * The return value for this parameter is only valid if getPaperOutBeep_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperOutBeep_IsPresent
 * @return The current value for the parameter.
 */
-(PaperOutBeepValue) getPaperOutBeep;

/**
 * Set the paper out beep  value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPaperOutBeep: (PaperOutBeepValue) value;

/**
 * Indicates if getUSBClass parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUSBClass may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUSBClass
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUSBClass_IsPresent;

/**
 * What USB device class is the printer currently configured for. Values: 0 = CDC Class, 1 = Printer Class, 2 = CDC/Printer, 3 = Obsolete, 4 =DEX
 * <p>
 * The return value for this parameter is only valid if getUSBClass_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUSBClass_IsPresent
 * @return The current value for the parameter.
 */
-(USBClassType) getUSBClass;

/**
 * Set the USB class value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setUSBClass: (USBClassType) value;

/**
 * Indicates if getUsingUSB parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUsingUSB may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsingUSB
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUsingUSB_IsPresent;

/**
 * Is USB the current communication method.
 * <p>
 * The return value for this parameter is only valid if getUsingUSB_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsingUSB_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getUsingUSB;

/**
 * Indicates if getDeepSleep parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDeepSleep may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDeepSleep
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDeepSleep_IsPresent;

/**
 * Deep Sleep Configuration
 * <p>
 * The return value for this parameter is only valid if getDeepSleep_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDeepSleep_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getDeepSleep;

@end
