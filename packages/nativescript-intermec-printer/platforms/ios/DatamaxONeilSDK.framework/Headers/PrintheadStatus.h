//
//  PrintheadStatus.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {PH?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>DD</td><td>DPI</td></tr>
 *    <tr><td>M</td><td>Printhead Model</td></tr>
 *    <tr><td>PINS</td><td>Printhead Pins</td></tr>
 *    <tr><td>PT</td><td>Print Time</td></tr>
 *    <tr><td>T</td><td>Printhead Temperature</td></tr>
 *    <tr><td>TD</td><td>Printhead Width</td></tr>
 *    <tr><td>W</td><td>Page Width</td></tr>
 * </table>
 */
@interface PrintheadStatus : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getDPI parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDPI may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDPI
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDPI_IsPresent;

/**
 * DPI
 * <p>
 * The return value for this parameter is only valid if getDPI_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDPI_IsPresent
 * @return The current value for the parameter.
 */
-(long) getDPI;

/**
 * Indicates if getPrintheadModel parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintheadModel may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadModel
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintheadModel_IsPresent;

/**
 * Printhead Model
 * <p>
 * The return value for this parameter is only valid if getPrintheadModel_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadModel_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPrintheadModel;

/**
 * Indicates if getPrintheadPins parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintheadPins may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadPins
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintheadPins_IsPresent;

/**
 * Printhead Pins
 * <p>
 * The return value for this parameter is only valid if getPrintheadPins_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadPins_IsPresent
 * @return The current value for the parameter.
 */
-(long) getPrintheadPins;

/**
 * Indicates if getPrintTime parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintTime may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintTime
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintTime_IsPresent;

/**
 * Print Time
 * <p>
 * The return value for this parameter is only valid if getPrintTime_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintTime_IsPresent
 * @return The current value for the parameter.
 */
-(long) getPrintTime;

/**
 * Indicates if getPrintheadTemperature parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintheadTemperature may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadTemperature
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintheadTemperature_IsPresent;

/**
 * Printhead Temperature
 * <p>
 * The return value for this parameter is only valid if getPrintheadTemperature_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadTemperature_IsPresent
 * @return The current value for the parameter.
 */
-(double) getPrintheadTemperature;

/**
 * Indicates if getPrintheadWidth parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrintheadWidth may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadWidth
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrintheadWidth_IsPresent;

/**
 * Printhead Width
 * <p>
 * The return value for this parameter is only valid if getPrintheadWidth_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrintheadWidth_IsPresent
 * @return The current value for the parameter.
 */
-(long) getPrintheadWidth;

/**
 * Indicates if getPageWidth parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPageWidth may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPageWidth
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPageWidth_IsPresent;

/**
 * Page Width
 * <p>
 * The return value for this parameter is only valid if getPageWidth_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPageWidth_IsPresent
 * @return The current value for the parameter.
 */
-(long) getPageWidth;

@end
