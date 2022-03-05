//
//  SmartCardConfiguration.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {SC?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>C</td><td>Command Format</td></tr>
 *    <tr><td>EN</td><td>Enabled</td></tr>
 *    <tr><td>MT</td><td>Memory Type</td></tr>
 *    <tr><td>R</td><td>Response Format</td></tr>
 *    <tr><td>SP</td><td>Smart Card Protocol</td></tr>
 *    <tr><td>ST</td><td>Smart Card Type</td></tr>
 * </table>
 */
@interface SmartCardConfiguration : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getCommandFormat parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCommandFormat may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCommandFormat
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCommandFormat_IsPresent;

/**
 * Command Format
 * <p>
 * The return value for this parameter is only valid if getCommandFormat_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCommandFormat_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getCommandFormat;

/**
 * Indicates if getEnabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEnabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEnabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEnabled_IsPresent;

/**
 * Enabled
 * <p>
 * The return value for this parameter is only valid if getEnabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEnabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getEnabled;

/**
 * Indicates if getMemoryType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getMemoryType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMemoryType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getMemoryType_IsPresent;

/**
 * Memory Type
 * <p>
 * The return value for this parameter is only valid if getMemoryType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMemoryType_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getMemoryType;

/**
 * Indicates if getResponseFormat parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getResponseFormat may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getResponseFormat
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getResponseFormat_IsPresent;

/**
 * Response Format
 * <p>
 * The return value for this parameter is only valid if getResponseFormat_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getResponseFormat_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getResponseFormat;

/**
 * Indicates if getProtocol parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getProtocol may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProtocol
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getProtocol_IsPresent;

/**
 * Smart Card Protocol
 * <p>
 * The return value for this parameter is only valid if getProtocol_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getProtocol_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getProtocol;

/**
 * Indicates if getType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getType_IsPresent;

/**
 * Smart Card Type
 * <p>
 * The return value for this parameter is only valid if getType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getType_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getType;

@end
