//
//  MagneticCardConfiguration.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {MC?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Auto Print</td></tr>
 *    <tr><td>DIR</td><td>Card Read Direction</td></tr>
 *    <tr><td>EN</td><td>Enabled</td></tr>
 *    <tr><td>S</td><td>Auto Send</td></tr>
 *    <tr><td>T1</td><td>Track 1 Enabled</td></tr>
 *    <tr><td>T2</td><td>Track 2 Enabled</td></tr>
 *    <tr><td>T3</td><td>Track 3 Enabled</td></tr>
 * </table>
 */
@interface MagneticCardConfiguration : PrinterState

typedef NS_ENUM(NSInteger, Direction) {
    /**
     * The result was never set.
     */
    DirectionUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    DirectionUnknown = 999,
    
    /**
     * IN
     */
    DirectionIn = 0,
    
    /**
     * Out
     */
    DirectionOut = 1,
    
    /**
     * Both
     */
    DirectionBoth = 2
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getAutoPrint parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAutoPrint may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoPrint
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAutoPrint_IsPresent;

/**
 * Auto Print
 * <p>
 * The return value for this parameter is only valid if getAutoPrint_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoPrint_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getAutoPrint;

/**
 * Set the auto print enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAutoPrint: (bool) value;

/**
 * Indicates if getCardReadDirection parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCardReadDirection may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCardReadDirection
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCardReadDirection_IsPresent;

/**
 * Card Read Direction
 * <p>
 * The return value for this parameter is only valid if getCardReadDirection_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCardReadDirection_IsPresent
 * @return The current value for the parameter.
 */
-(Direction) getCardReadDirection;

/**
 * Set the card read direction value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setCardReadDirection: (Direction) value;

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
* Set to enable or disable magnetic card reader
* @param value new value to set
* @return Success returns 0, fail returns -1
*/
-(int) setEnable: (bool) value;

/**
 * Indicates if getAutoSend parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAutoSend may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoSend
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAutoSend_IsPresent;

/**
 * Auto Send
 * <p>
 * The return value for this parameter is only valid if getAutoSend_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoSend_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getAutoSend;

/**
 * Set to enable or disable auto send
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAutoSend: (bool) value;

/**
 * Indicates if getTrack1Enabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack1Enabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack1Enabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack1Enabled_IsPresent;

/**
 * Track 1 Enabled
 * <p>
 * The return value for this parameter is only valid if getTrack1Enabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack1Enabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getTrack1Enabled;

/**
 * Set to enable or disable Track 1
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setTrack1Enable: (bool) value;

/**
 * Indicates if getTrack2Enabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack2Enabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack2Enabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack2Enabled_IsPresent;

/**
 * Track 2 Enabled
 * <p>
 * The return value for this parameter is only valid if getTrack2Enabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack2Enabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getTrack2Enabled;

/**
 * Set to enable or disable Track 1
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setTrack2Enable: (bool) value;

/**
 * Indicates if getTrack3Enabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTrack3Enabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack3Enabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTrack3Enabled_IsPresent;

/**
 * Track 3 Enabled
 * <p>
 * The return value for this parameter is only valid if getTrack3Enabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTrack3Enabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getTrack3Enabled;

/**
 * Set to enable or disable Track 1
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setTrack3Enable: (bool) value;

@end
