//
//  GeneralStatus_ExPCL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Datamax-O'Neil on 12/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_ExPCL.h"

/**
 * This class handles the data from an <ESC>S query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><td>E</td><td>Printer Error</td></tr>
 *    <tr><td>L</td><td>Head Lever Latched</td></tr>
 *    <tr><td>P</td><td>Paper Present</td></tr>
 *    <tr><td>B</td><td>Battery Status</td></tr>
 *    <tr><td>H</td><td>Head Temperature Acceptable</td></tr>
 *    <tr><td>S</td><td>Text Queue Status</td></tr>
 * </table>
 */
@interface GeneralStatus_ExPCL : PrinterState_ExPCL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_ExPCL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getPrinterError parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterError may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterError
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterError_IsPresent;

/**
 * Printer Error. Values: Y = error exist, N = no errors
 * <p>
 * The return value for this parameter is only valid if getPrinterError_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterError_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPrinterError;

/**
 * Indicates if getHeadLeverLatched parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getHeadLeverLatched may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHeadLeverLatched
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getHeadLeverLatched_IsPresent;

/**
 * Head Lever Latched. Values: Y = latched, N = unlatched
 * <p>
 * The return value for this parameter is only valid if getHeadLeverPosition_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHeadLeverLatched_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getHeadLeverLatched;

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
 * Paper Present. Values: Y = paper present, N = no paper
 * <p>
 * The return value for this parameter is only valid if getPaperPresent_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperPresent_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPaperPresent;

/**
 * Indicates if getBatteryVoltageStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBatteryVoltageStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryVoltageStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBatteryVoltageStatus_IsPresent;

/**
 * Battery Voltage Status. Values: Y = battery has correct voltage(full), H = battery voltage is above 8.40VDC(Power Adapter), N = battery voltage is below 7.25VDC, but above 6.25VDC(medium), L = battery is below 6.25VDC(low).
 * <p>
 * The return value for this parameter is only valid if getBatteryVoltageStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryVoltageStatus_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getBatteryVoltageStatus;

/**
 * Indicates if getPrintheadTemperatureAcceptable parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintheadTemperatureAcceptable may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadTemperatureAcceptable
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintheadTemperatureAcceptable_IsPresent;

/**
 * Printhead Temperature Acceptable. Values: Y = acceptable, N = unacceptable
 * <p>
 * The return value for this parameter is only valid if getPrintheadTemperatureAcceptable_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadTemperatureAcceptable_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPrintheadTemperatureAcceptable;

/**
 * Indicates if getTextQueueEmpty parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTextQueueEmpty may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTextQueueEmpty
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTextQueueEmpty_IsPresent;

/**
 * Text Queue Empty. Values: Y = text queue is empty, N = text queue is not empty
 * <p>
 * The return value for this parameter is only valid if getTextQueueEmpty_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTextQueueEmpty_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getTextQueueEmpty;

@end
