//
//  AvalancheFileData.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/14/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterData.h"

/**
 * This class handles the data from an {QUERY} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>F</td><td>Flags describing the file state.</td></tr>
 *    <tr><td>N</td><td>Name of the file.</td></tr>
 *    <tr><td>S</td><td>Size of the file in bites.</td></tr>
 * </table>
 */
@interface AvalancheFileData : PrinterData

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 */
-(id) init;

/**
 * Indicates if getFlags parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFlags may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlags
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFlags_IsPresent;

/**
 * Flags describing the file state.
 * <p>
 * The return value for this parameter is only valid if getFlags_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlags_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getFlags;

/**
 * Indicates if getName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getName_IsPresent;

/**
 * Name of the file.
 * <p>
 * The return value for this parameter is only valid if getName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getName;

/**
 * Indicates if getSize parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSize may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSize
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSize_IsPresent;

/**
 * Size of the file in bites.
 * <p>
 * The return value for this parameter is only valid if getSize_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSize_IsPresent
 * @return The current value for the parameter.
 */
-(long) getSize;


/**
 * This factory function will return a list of the objects that were encoded in the query result block.
 *
 * @param text All of the objects in a ; delimited list
 * @return A list of the individual objects
 */
-(NSMutableArray *) parse: (NSString *) text;

@end
