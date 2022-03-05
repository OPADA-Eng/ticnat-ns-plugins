//
//  PrintSettings_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * This class handles the Printing Settings data from an KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1 summary = "">
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>BD</td><td>Backup Delay</td></tr>
 *    <tr><td>RO</td><td>Row Offset</td></tr>
 *    <tr><td>CO</td><td>Column Offset</td></tr>
 *    <tr><td>RF</td><td>Row Adjust Fine Tune</td></tr>
 *    <tr><td>CF</td><td>Column Adjust Fine Tune</td></tr>
 *    <tr><td>PJ</td><td>Present Adjust Fine Tune</td></tr>
 *    <tr><td>DK</td><td>Darkness Level</td></tr>
 *    <tr><td>PC</td><td>Contrast Level</td></tr>
 *    <tr><td>HE</td><td>HeatLevel</td></tr>
 *    <tr><td>BS</td><td>Backup Speed</td></tr>
 *    <tr><td>SS</td><td>Feed Speed</td></tr>
 *    <tr><td>pS</td><td>Print Speed</td></tr>
 *    <tr><td>FS</td><td>Slew Speed</td></tr>
 * </table>
 */
@interface PrintSettings_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This function gets the backup delay of the printer
 *  @return backup delay of the printer
 */
-(long) getBackupDelay;

/**
 *  This sets the printer's backup delay ((0 - 255)*1/50 sec.)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setBackupDelay: (long) value;

/**
 *  This function gets the row offset of the printer
 *  @return row offset of the printer
 */
-(long) getRowOffset;

/**
 *  This sets the printer's row offset (1/100 inch, max 99.99 inches; or 1/10 mm, max 2357 mm)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setRowOffset: (long) value;

/**
 *  This function gets the column offset of the printer
 *  @return column offset of the printer
 */
-(long) getColumnOffset;

/**
 *  This sets the printer's column offset (1/100 inch, max 99.99 inches; or 1/10 mm, max 2357 mm)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setColumnOffset: (long) value;

/**
 *  This function gets the row adjust fine tune  of the printer
 *  @return row adjust fine tune  of the printer
 */
-(long) getRowAdjustFineTune;

/**
 *  This sets the printer's row adjust fine tune . Valid range (-100 to 100)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setRowAdjustFineTune: (long) value;

/**
 *  This function gets the column adjust fine tune of the printer
 *  @return column adjust fine tune of the printer
 */
-(long) getColumnAdjustFineTune;

/**
 *  This sets the printer's row adjust fine tune . Valid range (-100 to 100)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setColumnAdjustFineTune: (long) value;

/**
 *  This function gets the present fine tune of the printer
 *  @return present fine tune of the printer
 */
-(long) getPresentAdjustFineTune;

/**
 *  This sets the printer's present adjust fine tune . Valid range (-100 to 2030)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPresentAdjustFineTune: (long) value;

/**
 *  This function gets the darkness level of the printer
 *  @return darkness level of the printer
 */
-(long) getDarknessLevel;

/**
 *  This sets the printer's darkness level . Valid range (1 - 64)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setDarknessLevel: (long) value;

/**
 *  This function gets the contrast level of the printer
 *  @return contrast level of the printer
 */
-(long) getContrastLevel;

/**
 *  This sets the printer's contrast level . Valid range (0 - 64)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setContrastLevel: (long) value;

/**
 *  This function gets the heat level of the printer
 *  @return heat level of the printer
 */

-(long) getHeatLevel;

/**
 *  This sets the printer's heat level . Valid range (0 - 30)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setHeatLevel: (long) value;

/**
 *  This function gets the backup speed of the printer
 *  @return backup speed of the printer
 */
-(double) getBackupSpeed;

/**
 *  This sets the printer's backup speed . Valid range: 1.0 - 4.0, (.5 increment).
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setBackupSpeed: (double) value;

/**
 *  This function gets the feed speed of the printer
 *  @return feed speed of the printer
 */
-(double) getFeedSpeed;

/**
 *  This sets the printer's feed speed . Valid range: 1.0 - 4.0, (.5 increment).
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setFeedSpeed: (double) value;

/**
 *  This function gets the print speed of the printer
 *  @return print speed of the printer
 */
-(double) getPrintSpeed;

/**
 *  This sets the printer's print speed . Valid range: 1.0 - 4.0, (.5 increment).
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrintSpeed: (double) value;

/**
 *  This function gets the slew speed of the printer
 *  @return slew speed of the printer
 */
-(double) getSlewSpeed;

/**
 *  This sets the printer's slew speed . Valid range: 1.0 - 4.0, (.5 increment).
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setSlewSpeed: (double) value;

@end
