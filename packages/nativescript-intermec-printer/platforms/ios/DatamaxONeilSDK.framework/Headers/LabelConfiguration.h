//
//  LabelConfiguration.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {CL?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>BackUp Distance</td></tr>
 *    <tr><td>BKO</td><td>Backup Offset</td></tr>
 *    <tr><td>D</td><td>How far past the QMark should we stop</td></tr>
 *    <tr><td>I</td><td>Additional self-tests to print</td></tr>
 *    <tr><td>M</td><td>Maximum length to look for QMark</td></tr>
 *    <tr><td>MO</td><td>Horizontal Offset</td></tr>
 *    <tr><td>P</td><td>Use Presenter</td></tr>
 *    <tr><td>QBO</td><td>QMARKB Offset</td></tr>
 *    <tr><td>QGO</td><td>QMARKG Offset</td></tr>
 *    <tr><td>QTO</td><td>QMARKT Offset</td></tr>
 *    <tr><td>QW</td><td>White QMark</td></tr>
 *    <tr><td>S</td><td>Paperout Sensor</td></tr>
 *    <tr><td>T</td><td>Type of paper stock used</td></tr>
 *    <tr><td>U</td><td>Label under presenter timeout</td></tr>
 *    <tr><td>W</td><td>Auto QMark Advance</td></tr>
 *    <tr><td>WB</td><td>Auto QMark Backup</td></tr>
 * </table>
 */
@interface LabelConfiguration : PrinterState

/**
 * Paperout Sensor
 */
typedef NS_ENUM(NSInteger, PaperOutSensorValue) {
    /**
     * The result was never set.
     */
    PaperOutSensorValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    PaperOutSensorValueUnknown = 999,
    
    /**
     * Use the bottom, non-printing side of paper, to detect paper out.
     */
    PaperOutSensorValueBottom = 66,
    
    /**
     * Use the top, printing side of paper, to detect paper out.
     */
    PaperOutSensorValueTop = 84
};

/**
 * Type of paper stock used
 */
typedef NS_ENUM(NSInteger, QMarkValue) {
    /**
     * The result was never set.
     */
    QMarkValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    QMarkValueUnknown = 999,
    
    /**
     * Queue mark is on the bottom, side that is not printed on, of the paper.
     */
    QMarkValueBottomQMark = 66,
    
    /**
     * Instead of a printed queue mark, this is a transparent area between labels that allows light to pass through.
     */
    QMarkValueInterLabelGap = 71,
    
    /**
     * Plain paper, no queue mark
     */
    QMarkValuePlainPaper = 80,
    
    /**
     * Queue mark is on the top, side that is printed on, of the paper.
     */
    QMarkValueTopQMark = 84
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getBackUpDistance parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBackUpDistance may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBackUpDistance
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBackUpDistance_IsPresent;

/**
 * BackUp Distance
 * <p>
 * The return value for this parameter is only valid if getBackUpDistance_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBackUpDistance_IsPresent
 * @return The current value for the parameter.
 */
-(long) getBackUpDistance;

/**
 * Set the back up distance value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setBackUpDistance: (long) value;

/**
 * Indicates if getBackupOffset parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getBackupOffset may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBackupOffset
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getBackupOffset_IsPresent;

/**
 * Backup Offset
 * <p>
 * The return value for this parameter is only valid if getBackupOffset_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getBackupOffset_IsPresent
 * @return The current value for the parameter.
 */
-(long) getBackupOffset;

/**
 * Set the backup offset value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setBackUpOffset: (long) value;

/**
 * Indicates if getQMarkStopLength parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getQMarkStopLength may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMarkStopLength
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getQMarkStopLength_IsPresent;

/**
 * How far past the QMark should we stop
 * <p>
 * The return value for this parameter is only valid if getQMarkStopLength_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMarkStopLength_IsPresent
 * @return The current value for the parameter.
 */
-(long) getQMarkStopLength;

/**
 * Set the QMarkStop Length value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setQMarkStopLength: (long) value;

/**
 * Indicates if getAdditionalSelfTestPrints parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAdditionalSelfTestPrints may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAdditionalSelfTestPrints
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAdditionalSelfTestPrints_IsPresent;

/**
 * Additional self-tests to print
 * <p>
 * The return value for this parameter is only valid if getAdditionalSelfTestPrints_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAdditionalSelfTestPrints_IsPresent
 * @return The current value for the parameter.
 */
-(long) getAdditionalSelfTestPrints;

/**
 * Set the additional self-tests to print value
 * @param value new value to set (1 - 65535).
 * @return Success returns 0, fail returns -1
 */
-(int) setAdditionalSelfTestsPrints: (long) value;

/**
 * Indicates if getMaximumQMarkAdvance parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getMaximumQMarkAdvance may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMaximumQMarkAdvance
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getMaximumQMarkAdvance_IsPresent;

/**
 * Maximum length to look for QMark
 * <p>
 * The return value for this parameter is only valid if getMaximumQMarkAdvance_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMaximumQMarkAdvance_IsPresent
 * @return The current value for the parameter.
 */
-(long) getMaximumQMarkAdvance;

/**
 * Set the maximum QMark Advance value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setMaximumQMarkAdvance: (long) value;

/**
 * Indicates if getHorizontalOffset parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getHorizontalOffset may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHorizontalOffset
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getHorizontalOffset_IsPresent;

/**
 * Horizontal Offset
 * <p>
 * The return value for this parameter is only valid if getHorizontalOffset_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getHorizontalOffset_IsPresent
 * @return The current value for the parameter.
 */
-(long) getHorizontalOffset;

/**
 * Set horizontal offset value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setHorizontalOffset: (long) value;

/**
 * Indicates if getUsePresenter parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUsePresenter may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsePresenter
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUsePresenter_IsPresent;

/**
 * Use Presenter
 * <p>
 * The return value for this parameter is only valid if getUsePresenter_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsePresenter_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getUsePresenter;

/**
 * Set the back up distance value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setUsePresenter: (bool) value;

/**
 * Indicates if getQMARKBOffset parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getQMARKBOffset may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKBOffset
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getQMARKBOffset_IsPresent;

/**
 * QMARKB Offset
 * <p>
 * The return value for this parameter is only valid if getQMARKBOffset_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKBOffset_IsPresent
 * @return The current value for the parameter.
 */
-(long) getQMARKBOffset;

/**
 * Set the QMark Bottom Offset value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setQMARKBOffSet: (long) value;

/**
 * Indicates if getQMARKGOffset parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getQMARKGOffset may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKGOffset
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getQMARKGOffset_IsPresent;

/**
 * QMARKG Offset
 * <p>
 * The return value for this parameter is only valid if getQMARKGOffset_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKGOffset_IsPresent
 * @return The current value for the parameter.
 */
-(long) getQMARKGOffset;

/**
 * Set the QMark Inter-label Gap Offset value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setQMARKGOffset: (long) value;

/**
 * Indicates if getQMARKTOffset parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getQMARKTOffset may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKTOffset
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getQMARKTOffset_IsPresent;

/**
 * QMARKT Offset
 * <p>
 * The return value for this parameter is only valid if getQMARKTOffset_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getQMARKTOffset_IsPresent
 * @return The current value for the parameter.
 */
-(long) getQMARKTOffset;

/**
 * Set the QMARK Top Offset value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setQMARKTOffset: (long) value;

/**
 * Indicates if getWhiteQMark parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getWhiteQMark may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWhiteQMark
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getWhiteQMark_IsPresent;

/**
 * White QMark
 * <p>
 * The return value for this parameter is only valid if getWhiteQMark_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWhiteQMark_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getWhiteQMark;

/**
 * Set the WhiteQMark enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setWhiteQMark: (bool) value;

/**
 * Indicates if getPaperoutSensor parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPaperoutSensor may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperoutSensor
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPaperoutSensor_IsPresent;

/**
 * Paperout Sensor
 * <p>
 * The return value for this parameter is only valid if getPaperoutSensor_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperoutSensor_IsPresent
 * @return The current value for the parameter.
 */
-(PaperOutSensorValue) getPaperoutSensor;

/**
 * Set the paper out sensor value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPaperoutSensor: (PaperOutSensorValue) value;

/**
 * Indicates if getPaperStockType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPaperStockType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperStockType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPaperStockType_IsPresent;

/**
 * Type of paper stock used
 * <p>
 * The return value for this parameter is only valid if getPaperStockType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPaperStockType_IsPresent
 * @return The current value for the parameter.
 */
-(QMarkValue) getPaperStockType;

/**
 * Set the paper stock type value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPaperStockType: (QMarkValue) value;

/**
 * Indicates if getPresenterTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPresenterTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPresenterTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPresenterTimeout_IsPresent;

/**
 * Label under presenter timeout
 * <p>
 * The return value for this parameter is only valid if getPresenterTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPresenterTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getPresenterTimeout;

/**
 * Set the presenter timeout value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPresenterTimeout: (long) value;

/**
 * Indicates if getAutoQMarkAdvance parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAutoQMarkAdvance may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoQMarkAdvance
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAutoQMarkAdvance_IsPresent;

/**
 * Auto QMark Advance
 * <p>
 * The return value for this parameter is only valid if getAutoQMarkAdvance_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoQMarkAdvance_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getAutoQMarkAdvance;

/**
 * Set the AutoQMarkAdvance enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAutoQMarkAdvance: (bool) value;

/**
 * Indicates if getAutoQMarkBackup parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAutoQMarkBackup may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoQMarkBackup
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAutoQMarkBackup_IsPresent;

/**
 * Auto QMark Backup
 * <p>
 * The return value for this parameter is only valid if getAutoQMarkBackup_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAutoQMarkBackup_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getAutoQMarkBackup;

/**
 * Set the AutoQMarkBackUp enable value
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAutoQMarkBackup: (bool) value;

@end
