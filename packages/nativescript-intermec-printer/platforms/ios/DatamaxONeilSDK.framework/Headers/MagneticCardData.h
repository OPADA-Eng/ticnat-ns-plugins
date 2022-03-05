//
//  MagneticCardData.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {MR?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>T1</td><td>Track 1 Data</td></tr>
 *    <tr><td>T2</td><td>Track 2 Data</td></tr>
 *    <tr><td>T3</td><td>Track 3 Data</td></tr>
 * </table>
 */
@interface MagneticCardData : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getTrack1Data parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack1Data may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack1Data
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack1Data_IsPresent;

/**
 * Track 1 Data
 * <p>
 * The return value for this parameter is only valid if getTrack1Data_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 * <p />
 * Note: When a magnetic card is swiped the data is retained in the printer's memory until the printer goes to sleep, loses power, is reset or the data is manually cleared.  Querying the data will not clear it from the printers memory.  So a best practice is to send the {MZ!} command to the printer in the beginning to clear any previous data, and after you are done so the information doesn't remain.  This can be done with:
 * <br /><code>printerConnection.write(Document.ESC + "{MZ!}");</code>
 *
 * @see getTrack1Data_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getTrack1Data;

/**
 * Indicates if getTrack2Data parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack2Data may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack2Data
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack2Data_IsPresent;

/**
 * Track 2 Data
 * <p>
 * The return value for this parameter is only valid if getTrack2Data_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 * <p />
 * Note: When a magnetic card is swiped the data is retained in the printer's memory until the printer goes to sleep, loses power, is reset or the data is manually cleared.  Querying the data will not clear it from the printers memory.  So a best practice is to send the {MZ!} command to the printer in the beginning to clear any previous data, and after you are done so the information doesn't remain.  This can be done with:
 * <br /><code>printerConnection.write(Document.ESC + "{MZ!}");</code>
 *
 * @see getTrack2Data_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getTrack2Data;

/**
 * Indicates if getTrack3Data parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack3Data may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack3Data
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack3Data_IsPresent;

/**
 * Track 3 Data
 * <p>
 * The return value for this parameter is only valid if getTrack3Data_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 * <p />
 * Note: When a magnetic card is swiped the data is retained in the printer's memory until the printer goes to sleep, loses power, is reset or the data is manually cleared.  Querying the data will not clear it from the printers memory.  So a best practice is to send the {MZ!} command to the printer in the beginning to clear any previous data, and after you are done so the information doesn't remain.  This can be done with:
 * <br /><code>printerConnection.write(Document.ESC + "{MZ!}");</code>
 *
 * @see getTrack3Data_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getTrack3Data;

@end
