//
//  CardReaderStatus.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/15/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {RS?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>G</td><td>Green LED Status</td></tr>
 *    <tr><td>P</td><td>Smart Card Power Enabled</td></tr>
 *    <tr><td>R</td><td>Red LED Status</td></tr>
 *    <tr><td>S</td><td>Smart Card Present</td></tr>
 * </table>
 */
@interface CardReaderStatus : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getGreenLEDStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getGreenLEDStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGreenLEDStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getGreenLEDStatus_IsPresent;

/**
 * Green LED Status.
 * <p>
 * The return value for this parameter is only valid if getGreenLEDStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGreenLEDStatus_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getGreenLEDStatus;

/**
 * Indicates if getSmartCardPowerEnabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSmartCardPowerEnabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSmartCardPowerEnabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSmartCardPowerEnabled_IsPresent;

/**
 * Smart Card Power Enabled.
 * <p>
 * The return value for this parameter is only valid if getSmartCardPowerEnabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSmartCardPowerEnabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getSmartCardPowerEnabled;

/**
 * Indicates if getRedLEDStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRedLEDStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRedLEDStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRedLEDStatus_IsPresent;

/**
 * Red LED Status.
 * <p>
 * The return value for this parameter is only valid if getRedLEDStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRedLEDStatus_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getRedLEDStatus;

/**
 * Indicates if getSmartCardPresent parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSmartCardPresent may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSmartCardPresent
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSmartCardPresent_IsPresent;

/**
 * Smart Card Present.
 * <p>
 * The return value for this parameter is only valid if getSmartCardPresent_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSmartCardPresent_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getSmartCardPresent;

@end
