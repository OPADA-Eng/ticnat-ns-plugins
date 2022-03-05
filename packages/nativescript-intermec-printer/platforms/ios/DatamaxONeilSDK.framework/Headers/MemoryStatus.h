//
//  MemoryStatus.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {MY?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>DR</td><td>Download Memory Remaining</td></tr>
 *    <tr><td>DT</td><td>Download Memory Total</td></tr>
 *    <tr><td>EM</td><td>Size of the EEPROM in KB</td></tr>
 *    <tr><td>FM</td><td>Flash Type</td></tr>
 *    <tr><td>FR</td><td>Download Format Memory Remaining</td></tr>
 *    <tr><td>FS</td><td>Flash Memory Size</td></tr>
 *    <tr><td>FT</td><td>Download Format Memory Total</td></tr>
 *    <tr><td>RS</td><td>RAM Size</td></tr>
 * </table>
 */
@interface MemoryStatus : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getDownloadMemoryRemaining parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDownloadMemoryRemaining may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadMemoryRemaining
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDownloadMemoryRemaining_IsPresent;

/**
 * Download Memory Remaining
 * <p>
 * The return value for this parameter is only valid if getDownloadMemoryRemaining_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadMemoryRemaining_IsPresent
 * @return The current value for the parameter.
 */
-(long) getDownloadMemoryRemaining;

/**
 * Indicates if getDownloadMemoryTotal parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDownloadMemoryTotal may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadMemoryTotal
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDownloadMemoryTotal_IsPresent;

/**
 * Download Memory Total
 * <p>
 * The return value for this parameter is only valid if getDownloadMemoryTotal_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadMemoryTotal_IsPresent
 * @return The current value for the parameter.
 */
-(long) getDownloadMemoryTotal;

/**
 * Indicates if getEEPROMSize parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEEPROMSize may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEEPROMSize
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEEPROMSize_IsPresent;

/**
 * Size of the EEPROM in KB
 * <p>
 * The return value for this parameter is only valid if getEEPROMSize_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEEPROMSize_IsPresent
 * @return The current value for the parameter.
 */
-(long) getEEPROMSize;

/**
 * Indicates if getFlashType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFlashType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlashType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFlashType_IsPresent;

/**
 * Flash Type
 * <p>
 * The return value for this parameter is only valid if getFlashType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlashType_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getFlashType;

/**
 * Indicates if getDownloadFormatMemoryRemaining parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDownloadFormatMemoryRemaining may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadFormatMemoryRemaining
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDownloadFormatMemoryRemaining_IsPresent;

/**
 * Download Format Memory Remaining
 * <p>
 * The return value for this parameter is only valid if getDownloadFormatMemoryRemaining_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadFormatMemoryRemaining_IsPresent
 * @return The current value for the parameter.
 */
-(long) getDownloadFormatMemoryRemaining;

/**
 * Indicates if getFlashMemorySize parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getFlashMemorySize may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlashMemorySize
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getFlashMemorySize_IsPresent;

/**
 * Flash Memory Size
 * <p>
 * The return value for this parameter is only valid if getFlashMemorySize_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getFlashMemorySize_IsPresent
 * @return The current value for the parameter.
 */
-(long) getFlashMemorySize;

/**
 * Indicates if getDownloadFormatMemoryTotal parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDownloadFormatMemoryTotal may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadFormatMemoryTotal
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDownloadFormatMemoryTotal_IsPresent;

/**
 * Download Format Memory Total
 * <p>
 * The return value for this parameter is only valid if getDownloadFormatMemoryTotal_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDownloadFormatMemoryTotal_IsPresent
 * @return The current value for the parameter.
 */
-(long) getDownloadFormatMemoryTotal;

/**
 * Indicates if getRAMSize parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRAMSize may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRAMSize
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRAMSize_IsPresent;

/**
 * RAM Size
 * <p>
 * The return value for this parameter is only valid if getRAMSize_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRAMSize_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRAMSize;

@end
