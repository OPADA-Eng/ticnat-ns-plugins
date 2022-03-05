//
//  GraphicData.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/15/13.
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
 *    <tr><td>CPI</td><td>Characters Per Inch</td></tr>
 *    <tr><td>L</td><td>Graphic Location</td></tr>
 *    <tr><td>N1</td><td>One Character Name</td></tr>
 *    <tr><td>N5</td><td>Five Character Name</td></tr>
 *    <tr><td>UD</td><td>User Date</td></tr>
 *    <tr><td>US</td><td>User Description</td></tr>
 *    <tr><td>UV</td><td>User Version</td></tr>
 * </table>
 */
@interface GraphicData : PrinterData

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 */
-(id) init;

/**
 * Indicates if getCharactersPerInch parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCharactersPerInch may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCharactersPerInch
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCharactersPerInch_IsPresent;

/**
 * Characters Per Inch
 * <p>
 * The return value for this parameter is only valid if getCharactersPerInch_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCharactersPerInch_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getCharactersPerInch;

/**
 * Indicates if getMemoryLocation parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getMemoryLocation may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMemoryLocation
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getMemoryLocation_IsPresent;

/**
 * Graphic Location
 * <p>
 * The return value for this parameter is only valid if getMemoryLocation_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMemoryLocation_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getMemoryLocation;

/**
 * Indicates if getOneCharacterName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getOneCharacterName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getOneCharacterName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getOneCharacterName_IsPresent;

/**
 * One Character Name
 * <p>
 * The return value for this parameter is only valid if getOneCharacterName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getOneCharacterName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getOneCharacterName;

/**
 * Indicates if getFiveCharacterName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFiveCharacterName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFiveCharacterName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFiveCharacterName_IsPresent;

/**
 * Five Character Name
 * <p>
 * The return value for this parameter is only valid if getFiveCharacterName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFiveCharacterName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getFiveCharacterName;

/**
 * Indicates if getUserDate parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUserDate may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserDate
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUserDate_IsPresent;

/**
 * User Date
 * <p>
 * The return value for this parameter is only valid if getUserDate_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserDate_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getUserDate;

/**
 * Indicates if getUserDescription parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUserDescription may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserDescription
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUserDescription_IsPresent;

/**
 * User Description
 * <p>
 * The return value for this parameter is only valid if getUserDescription_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserDescription_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getUserDescription;

/**
 * Indicates if getUserVersion parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUserVersion may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserVersion
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUserVersion_IsPresent;

/**
 * User Version
 * <p>
 * The return value for this parameter is only valid if getUserVersion_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUserVersion_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getUserVersion;


/**
 * This factory function will return a list of the objects that were encoded in the query result block.
 *
 * @param text All of the objects in a ; delimited list
 * @return A list of the individual objects
 */
-(NSMutableArray *) parse: (NSString *) text;

@end
