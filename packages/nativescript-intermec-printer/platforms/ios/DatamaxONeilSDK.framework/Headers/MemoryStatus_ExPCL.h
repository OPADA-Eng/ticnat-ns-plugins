//
//  MemoryStatus_ExPCL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 12/17/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_ExPCL.h"

/**
 * This class handles the data from an <^V> query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>Print Buffer Bytes Used</td></tr>
 *    <tr><td>P</td><td>Print Buffer KB Remaining</td></tr>
 * </table>
 */
@interface MemoryStatus_ExPCL : PrinterState_ExPCL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_ExPCL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getUsedRAM parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUsedRAM may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsedRAM
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUsedRAM_IsPresent;

/**
 * Used Ram
 * <p>
 * The return value for this parameter is only valid if getUsedRAM_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUsedRAM_IsPresent
 * @return The current value for the parameter.
 */
-(long) getUsedRAM;

/**
 * Indicates if getRemainingRAM parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRemainingRAM may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRemainingRAM
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRemainingRAM_IsPresent;

/**
 * Remaining Ram
 * <p>
 * The return value for this parameter is only valid if getRemainingRAM_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRemainingRAM_IsPresent
 * @return The current value for the parameter.
 */
-(long) getRemainingRAM;

@end
