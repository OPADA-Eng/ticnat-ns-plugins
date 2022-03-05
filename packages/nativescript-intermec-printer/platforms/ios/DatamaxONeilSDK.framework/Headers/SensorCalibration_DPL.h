//
//  SensorCalibration_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * This class handles the sensor calibration data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>RV</td><td>Black Mark paper Value</td></tr>
 *    <tr><td>GR</td><td>Black Mark Sensor Gain</td></tr>
 *    <tr><td>MV</td><td>Black Mark Value</td></tr>
 *    <tr><td>SG</td><td>Gap Sensor Gain</td></tr>
 *    <tr><td>SGT</td><td>Gap Sensor Gain should be used with Thermal Transfer Media</td></tr>
 *    <tr><td>GM</td><td>Gap Mark level</td></tr>
 *    <tr><td>GMT</td><td>Gap Mark level should be used with Thermal Transfer Media</td></tr>
 *    <tr><td>PV</td><td>Paper Level</td></tr>
 *    <tr><td>PVT</td><td>Paper Level should be used with Thermal Transfer Media</td></tr>
 *    <tr><td>PG</td><td>Presenter Sensor Gain</td></tr>
 *    <tr><td>EV</td><td>Sensor Clear Value</td></tr>
 *    <tr><td>EVT</td><td>Sensor Clear Value should be used with Thermal Transfer Media</td></tr>
 *    <tr><td>AC</td><td>Auto Calibration Mode</td></tr>
 * </table>
 */
@interface SensorCalibration_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's black mark paper value
 *  @return printer's black mark paper value
 */
-(long)getBlackMarkPaperValue;

/**
 *  This sets the printer's black mark paper value
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBlackMarkPaperValue: (long) value;

/**
 *  This gets the printer's black mark sensor gain
 *  @return printer's black mark sensor gain
 */
-(long)getBlackMarkSensorGain;

/**
 *  This sets the printer's black mark sensor gain
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBlackMarkSensorGain: (long) value;

/**
 *  This gets the printer's black mark value
 *  @return printer's black mark value
 */
-(long)getBlackMarkValue;

/**
 *  This sets the printer's black mark value
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setBlackMarkValue: (long) value;

/**
 *  This gets the printer's gap sensor gain
 *  @return printer's gap sensor gain
 */
-(long)getGapSensorGain;

/**
 *  This sets the printer's gap sensor gain
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGapSensorGain: (long) value;

/**
 *  This gets the printer's gap sensor gain should be used with Thermal Transfer Media
 *  @return printer's gap sensor gain should be used with Thermal Transfer Media
 */
-(long)getGapSensorGainWithThermalTransferMedia;

/**
 *  This sets the printer's gap sensor gain should be used with Thermal Transfer Media
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGapSensorGainWithThermalTransferMedia: (long) value;

/**
 *  This gets the printer's gap mark level
 *  @return printer's gap mark level
 */
-(long)getGapMarkLevel;

/**
 *  This sets the printer's gap mark level
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGapMarkLevel: (long) value;

/**
 *  This gets the printer's gap mark level should be used with Thermal Transfer Media
 *  @return printer's gap mark level should be used with Thermal Transfer Media
 */
-(long)getGapMarkLevelWithThermalTransferMedia;

/**
 *  This sets the printer's gap mark level should be used with Thermal Transfer Media
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGapMarkLevelWithThermalTransferMedia: (long) value;

/**
 *  This gets the printer's paper level
 *  @return printer's paper level
 */
-(long)getPaperLevel;

/**
 *  This sets the printer's paper level
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPaperLevel: (long) value;

/**
 *  This gets the printer's paper level should be used with Thermal Transfer Media
 *  @return printer's paper level should be used with Thermal Transfer Media
 */
-(long)getPaperLevelWithThermalTransferMedia;

/**
 *  This sets the printer's paper level should be used with Thermal Transfer Media
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPaperLevelWithThermalTransferMedia: (long) value;

/**
 *  This gets the printer's presenter sensor gain
 *  @return printer's presenter sensor gain
 */
-(long)getPresenterSensorGain;

/**
 *  This sets the printer's presenter sensor gain
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPresenterSensorGain: (long) value;

/**
 *  This gets the printer's sensor clear value
 *  @return printer's sensor clear value
 */
-(long)getSensorClearValue;

/**
 *  This sets the printer's sensor clear value
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSensorClearValue: (long) value;

/**
 *  This gets the printer's sensor clear value should be used with Thermal Transfer Media
 *  @return printer's sensor clear value value should be used with Thermal Transfer Media
 */
-(long)getSensorClearValueWithThermalTransferMedia;

/**
 *  This sets the printer's sensor clear value should be used with Thermal Transfer Media
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSensorClearValueWithThermalTransferMedia: (long) value;

/**
 *  This gets whether the auto calibration mode is enable or disable
 *  @return true if auto calibration mode is enable and false if disable
 */
-(bool)getAutoCalibrationMode;

/**
 *  This sets whether the auto calibration mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setAutoCalibrationMode: (bool) value;

@end
