//
//  MediaLabel_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * Stop Location values
 */
typedef NS_ENUM(NSInteger, StopLocationValue) {
    
    /**
     *  Unknown
     */
    StopLocationValueUnknown = 999, 
    /**
     * Automatic.
     */
    StopLocationValueAutomatic = 65, //A
    
    /**
     * Host
     */
    StopLocationValueHost = 72, //H
    
    /**
     * PEEL
     */
    StopLocationValuePEEL = 80, //P
    
    /**
     * CUT.
     */
    StopLocationValueCUT = 67, //C
    
    /**
     * TEAR.
     */
    StopLocationValueTEAR = 84, //T
    
    /**
     *  NEXT LABEL
     */
    StopLocationValueNEXTLABEL = 78 //N
};

/**
 *  Media Type values
 */
typedef NS_ENUM(NSInteger, MediaTypeValue) {
    /**
     *  Unknown
     */
    MediaTypeValueUnknown = 999,
    /**
     *  Direct Thermal
     */
    MediaTypeValueDirectThermal = 68, //D
    
    /**
     *  Thermal Transfer
     */
    MediaTypeValueThermalTransfer = 84 //T
};

/**
 *  Sensor type values
 */
typedef NS_ENUM(NSInteger, SensorTypeValue) {
    /**
     *  Unknown
     */
    SensorTypeValueUnknown = 999,
    /**
     *  Gap
     */
    SensorTypeValueGap = 71, //G
    /**
     *  Continuous
     */
    SensorTypeValueContinuous = 67, //C
    /**
     *  Black Mark
     */
    SensorTypeValueBlackMark = 82 //R
};
/**
 * This class handles the Media Label data from an KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>MT</td><td>Media Type</td></tr>
 *    <tr><td>ML</td><td>Maximum Label Length</td></tr>
 *    <tr><td>CL</td><td>Continuous Label Length</td></tr>
 *    <tr><td>ST</td><td>Sensor Type</td></tr>
 *    <tr><td>LW</td><td>Label Width</td></tr>
 *    <tr><td>HC</td><td>Head Cleaning Threshold</td></tr>
 *    <tr><td>RL</td><td>Ribbon Low Diameter</td></tr>
 *    <tr><td>RP</td><td>Ribbon Low Pause Enable</td></tr>
 *    <tr><td>TP</td><td>Label Length Limit Enable</td></tr>
 *    <tr><td>PB</td><td>Present Backup</td></tr>
 *    <tr><td>PD</td><td>Present Location or Distance</td></tr>
 *    <tr><td>KD</td><td>Backup Location or Distance</td></tr>
 *    <tr><td>SL</td><td>Stop Location</td></tr>
 *    <tr><td>BA</td><td>Backup After Print Enable</td></tr>
 *    <tr><td>GA</td><td>Gap Alternate Mode</td></tr>
 * </table>
 */

@interface MediaLabel_DPL : PrinterState_DPL


/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This function gets the media type of the printer
 *  @return string containing serial number of the printer
 */
-(NSString *)getMediaType; //(MediaTypeValue) getMediaType;

/**
 *  This function gets the maximum label length of the printer
 *  @return maximum label length of the printer
 */
-(long) getMaxLabelLength;

/**
 * This sets the printer's maximum label length
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setMaxLabelLength: (long) value;

/**
 *  This function gets the continuous label length of the printer
 *  @return continuous label length of the printer
 */
-(long) getContinuousLabelLength;

/**
 * This sets the printer's continuous label length
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setContinuousLabelLength: (long) value;

/**
 *  This function gets the sensor type of the printer
 *  @return string containing sensor type of the printer
 */
-(SensorTypeValue) getSensorType;

/**
 * This sets the printer's sensor type
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setSensorType: (SensorTypeValue) value;

/**
 *  This function gets the paper empty distance of the printer
 *  @return paper empty distance of the printer
 */
-(long) getPaperEmptyDistance;

/**
 *  This sets the printer's paper empty distance(0 - 99990)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPaperEmptyDistance: (long) value;

/**
 *  This function gets the label width of the printer
 *  @return label width of the printer
 */
-(long) getLabelWidth;

/**
 * This sets the printer's label width
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setLabelWidth: (long) value;

/**
 *  This function gets the head cleaning threshold of the printer
 *  @return head cleaning threshold of the printer
 */
-(long) getHeadCleanThreshold;

/**
 * This sets the printer's head cleaning threshold
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setHeadCleaningThreshold: (long) value;

/**
 *  This function gets the Ribbon Low Diameter of the printer
 *  @return Ribbon Low Diameter of the printer
 */
-(long) getRibbonLowDiameter;

/**
 *  This function gets whether Ribbon Low Pause of the printer is enable/disable
 *  @return true if Ribbon Low Pause of the printer is enabled or false if disabled.
 */
-(bool) getRibbonLowPause;

/**
 *  This function gets whether the label length limit of the printer is enable/disable
 *  @return true if label length limit of the printer is enabled and false if disabled
 */
-(bool) getLabelLengthLimit;

/**
 *  This sets whether printer's label length limit is enable/disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setLabelLengthLimit: (bool) value;

/**
 *  This function gets whether present backup is enable/disable
 *  @return true if present backup is enabled and false if disabled
 */
-(bool) getPresentBackup;

/**
 *  This sets whether printer's present backup is enable/disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPresentBackup: (bool) value;

/**
 *  This function gets the present distance of the printer
 *  @return present distance of the printer
 */
-(long) getPresentDistance;

/**
 * This sets the printer's present distance
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPresentDistance: (long) value;

/**
 *  This function gets the backup distance of the printer
 *  @return backup distance of the printer
 */
-(long) getBackupDistance;

/**
 * This sets the printer's backup distance
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setBackupDistance: (long) value;

/**
 *  This gets printer's stop location. Possible Values
 *  <table border=1 summary= "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Automatic</td></tr>
 *    <tr><td>H</td><td>Host</td></tr>
 *    <tr><td>P</td><td>Peel</td></tr>
 *    <tr><td>C</td><td>Cut</td></tr>
 *    <tr><td>T</td><td>Tear</td></tr>
 *    <tr><td>N</td><td>Next Label</td></tr>
 *    <tr><td>999</td><td>Unknown</td></tr>
 *  </table>
 *  @return printer's stop location
 */
-(StopLocationValue) getStopLocation;

/**
 *  This sets the printer's stop location
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setStopLocation: (StopLocationValue) value;

/**
 *  This function gets whether to backup after print is enable/disable
 *  @return true if backup after print is enabled and false if disabled
 */
-(bool) getBackupAfterPrint;

/**
 *  This sets whether to backup after print is enable/disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setBackupAfterPrint: (bool) value;

/**
 *  This function gets whether to gap alternate mode is enable/disable
 *  @return true if gap alternate mode is enabled and false if disabled
 */
-(bool) getGapAlternateMode;

/**
 *  This sets whether gap alternate mode is enable/disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setGapAlternateMode: (bool) value;

/**
*  This gets whether to auto align label to top of form when closing lid or not
*  @return true if auto align is enabled and false if disabled
*/
-(bool) getAutoAlign;

/**
 *  This sets whether to auto align label to top of form when closing lid or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setAutoAlign: (bool) value;

@end
