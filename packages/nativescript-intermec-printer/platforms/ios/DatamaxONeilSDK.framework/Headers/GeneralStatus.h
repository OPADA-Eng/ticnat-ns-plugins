//
//  GeneralStatus.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/15/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {ST?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>Battery Temperature and Voltage Status</td></tr>
 *    <tr><td>E</td><td>Printer Error Status</td></tr>
 *    <tr><td>J</td><td>Paper Jam</td></tr>
 *    <tr><td>L</td><td>Head Lever Position</td></tr>
 *    <tr><td>P</td><td>Paper Present</td></tr>
 *    <tr><td>R</td><td>Remaining Ram</td></tr>
 *    <tr><td>S</td><td>Printer Status</td></tr>
 * </table>
 */
@interface GeneralStatus : PrinterState

/**
 * Battery Temperature and Voltage Status
 */
typedef NS_ENUM(NSInteger, BatteryStatusValue) {
    /**
     * The result was never set.
     */
    BatteryStatusValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    BatteryStatusValueUnknown = 999,
    
    /**
     * Battery is in good condition.
     */
    BatteryStatusValueAllOK = 79,
    
    /**
     * Battery temperature is out of range.
     */
    BatteryStatusValueTemperatureError = 84,
    
    /**
     * Battery voltage is out of range.
     */
    BatteryStatusValueVoltageError = 86
};

/**
 * Printer Error Status
 */
typedef NS_ENUM(NSInteger, ErrorStatusValue) {
    /**
     * The result was never set.
     */
    ErrorStatusValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    ErrorStatusValueUnknown = 999,
    
    /**
     * No error
     */
    ErrorStatusValueNone = 78,
    
    /**
     * Invalid command
     */
    ErrorStatusValueCommand = 99,
    
    /**
     * Invalid data
     */
    ErrorStatusValueData = 100,
    
    /**
     * Invalid global parameter
     */
    ErrorStatusValueGlobalParameter = 103,
    
    /**
     * Invalid name
     */
    ErrorStatusValueName = 110,
    
    /**
     * Invalid protocol
     */
    ErrorStatusValueESVProtocol = 112,
    
    /**
     * Invalid syntax
     */
    ErrorStatusValueSyntax = 115,
    
    /**
     * Invalid graphics file
     */
    ErrorStatusValuePCX_File = 120
};

/**
 * Printer Status
 */
typedef NS_ENUM(NSInteger, PrinterStatusValue) {
    /**
     * The result was never set.
     */
    PrinterStatusValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    PrinterStatusValueUnknown = 999,
    
    /**
     * Print job has completed.  This is only present when job statusing is turned on.
     */
    PrinterStatusValueComplete = 67,
    
    /**
     * Currently idle
     */
    PrinterStatusValueIdle = 73,
    
    /**
     * Print task killed
     */
    PrinterStatusValueKilled = 75,
    
    /**
     * Currently Printing
     */
    PrinterStatusValuePrinting = 80,
    
    /**
     * Printer timed out
     */
    PrinterStatusValueTimeOut = 84
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getBatteryTempandVoltageStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBatteryTempandVoltageStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryTempandVoltageStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBatteryTempandVoltageStatus_IsPresent;

/**
 * Battery Temperature and Voltage Status
 * <p>
 * The return value for this parameter is only valid if getBatteryTempandVoltageStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryTempandVoltageStatus_IsPresent
 * @return The current value for the parameter.
 */
-(BatteryStatusValue) getBatteryTempandVoltageStatus;

/**
 * Indicates if getErrorStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getErrorStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getErrorStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getErrorStatus_IsPresent;

/**
 * Printer Error Status
 * <p>
 * The return value for this parameter is only valid if getErrorStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getErrorStatus_IsPresent
 * @return The current value for the parameter.
 */
-(ErrorStatusValue) getErrorStatus;

/**
 * Indicates if getPaperJam parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPaperJam may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperJam
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPaperJam_IsPresent;

/**
 * Paper Jam
 * <p>
 * This is useful to determine if paper is jam in the printer. J = Head Jam, N = No head Jam
 * @see getPaperJam_IsPresent
 * @return The current value for the parameter.
 */
-(NSString*) getPaperJam;

/**
 * Indicates if getHeadLeverPosition parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getHeadLeverPosition may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHeadLeverPosition
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getHeadLeverPosition_IsPresent;

/**
 * Head Lever Position. Values: U = Up, D = Down
 * <p>
 * The return value for this parameter is only valid if getHeadLeverPosition_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHeadLeverPosition_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *)getHeadLeverPosition;//-(bool) getHeadLeverPosition;

/**
 * Indicates if getPaperPresent parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPaperPresent may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperPresent
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPaperPresent_IsPresent;


/**
 * Paper Present. Values: N = No paper, P = present
 * <p>
 * The return value for this parameter is only valid if getPaperPresent_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperPresent_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *)getPaperPresent;//-(bool) getPaperPresent;

/**
 * Indicates if getRemainingRAM parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRemainingRAM may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRemainingRAM
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRemainingRAM_IsPresent;

/**
 * Remaining Ram
 * <p>
 * The return value for this parameter is only valid if getRemainingRAM_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRemainingRAM_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRemainingRAM;

/**
 * Indicates if getPrinterStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterStatus_IsPresent;

/**
 * Printer Status
 * <p>
 * The return value for this parameter is only valid if getPrinterStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterStatus_IsPresent
 * @return The current value for the parameter.
 */
-(PrinterStatusValue) getPrinterStatus;

@end
