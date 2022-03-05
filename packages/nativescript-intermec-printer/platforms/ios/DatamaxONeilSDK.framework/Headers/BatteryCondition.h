//
//  BatteryCondition.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/14/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {BT?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>CH</td><td>Is the printer plugged into an AC power source</td></tr>
 *    <tr><td>PS</td><td>Power source</td></tr>
 *    <tr><td>T</td><td>Temperature of the battery</td></tr>
 *    <tr><td>V</td><td>Voltage of battery</td></tr>
 *    <tr><td>V1</td><td>Voltage of battery 1</td></tr>
 *    <tr><td>V2</td><td>Voltage of battery 2</td></tr>
 *    <tr><td>VE</td><td>Voltage of the battery eliminator</td></tr>
 * </table>
 */
@interface BatteryCondition : PrinterState

/**
 * Power source
 */
typedef NS_ENUM(NSInteger, PowerSourceValue) {
    /**
     * The result was never set.
     */
    PowerSourceValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    PowerSourceValueUnknown = 999,
    
    /**
     * DC power is configured to use in preference over the battery.
     */
    PowerSourceValueDCOverBattery = 65, //A
    
    /**
     * Battery is configured to use in preference over the DC power.
     */
    PowerSourceValueBatteryOverDC = 66, //B
    
    /**
     * The battery eliminator is being used.
     */
    PowerSourceValueBatteryEliminator = 67 //C
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getChargerConnected parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getChargerConnected may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getChargerConnected
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getChargerConnected_IsPresent;

/**
 * Is the printer plugged into an AC power source?
 * <p>
 * The return value for this parameter is only valid if getChargerConnected_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getChargerConnected_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getChargerConnected;

/**
 * Indicates if getPowerSource parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPowerSource may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSource
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPowerSource_IsPresent;

/**
 * Power source. Values: A = DC Over battery, B = Battery Over DC, C = Battery Eliminator used.
 * <p>
 * The return value for this parameter is only valid if getPowerSource_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSource_IsPresent
 * @return The current value for the parameter.
 */
-(PowerSourceValue) getPowerSource;

/**
 * Indicates if getBatteryTemperature parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBatteryTemperature may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryTemperature
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBatteryTemperature_IsPresent;

/**
 * Temperature of the battery.
 * <p>
 * The return value for this parameter is only valid if getBatteryTemperature_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBatteryTemperature_IsPresent
 * @return The current value for the parameter.
 */
-(double) getBatteryTemperature;

/**
 * Indicates if getVoltageBatterySingle parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getVoltageBatterySingle may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBatterySingle
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getVoltageBatterySingle_IsPresent;

/**
 * Voltage of battery.
 * <p>
 * The return value for this parameter is only valid if getVoltageBatterySingle_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBatterySingle_IsPresent
 * @return The current value for the parameter.
 */
-(double) getVoltageBatterySingle;

/**
 * Indicates if getVoltageBattery1 parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getVoltageBattery1 may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBattery1
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getVoltageBattery1_IsPresent;

/**
 * Voltage of battery 1.
 * <p>
 * The return value for this parameter is only valid if getVoltageBattery1_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBattery1_IsPresent
 * @return The current value for the parameter.
 */
-(double) getVoltageBattery1;

/**
 * Indicates if getVoltageBattery2 parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getVoltageBattery2 may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBattery2
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getVoltageBattery2_IsPresent;

/**
 * Voltage of battery 2.
 * <p>
 * The return value for this parameter is only valid if getVoltageBattery2_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBattery2_IsPresent
 * @return The current value for the parameter.
 */
-(double) getVoltageBattery2;

/**
 * Indicates if getVoltageBatteryEliminator parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getVoltageBatteryEliminator may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBatteryEliminator
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getVoltageBatteryEliminator_IsPresent;

/**
 * Voltage of the battery eliminator.
 * <p>
 * The return value for this parameter is only valid if getVoltageBatteryEliminator_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getVoltageBatteryEliminator_IsPresent
 * @return The current value for the parameter.
 */
-(double) getVoltageBatteryEliminator;

@end
