//
//  SerialNumber.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {SN?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td></td><td>Serial Number</td></tr>
 * </table>
 */
@interface SerialNumber : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getSN parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSN may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSN
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSN_IsPresent;

/**
 * Serial Number
 * <p>
 * The return value for this parameter is only valid if getSN_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSN_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getSN;

@end
