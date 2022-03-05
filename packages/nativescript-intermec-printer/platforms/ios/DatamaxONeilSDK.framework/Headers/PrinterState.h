//
//  PrinterState.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/14/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterData.h"

/**
 * This is the base class for the printer state code. This will handle
 * configuration queries and settings and all of the shared routines for the
 * sub-classes that each handle a specific printer query.
 */
@interface PrinterState : PrinterData

/**
 * This will query the printer to update the values for this set of
 * parameters. All current values will be replaced with the values on the
 * printer.
 * <p>
 * Initially the PrinterState_ExPCL objects are empty. Use this to query
 * them with the latest values from the printer. Unlink the other version of
 * Update which takes the printer response string, this will handle all of
 * the printer querying for you.
 *
 * @param timeout Maximum number of msec to wait for a response.
 */
-(void) queryPrinterWithTimeout: (int) timeout;

/**
 * This will re-query the printer to update the values for this set of
 * parameters. All current values will be replaced with the values on the
 * printer.
 * <p>
 * Initially the PrinterState objects are empty. Use this to <I>update</I>
 * them with the latest values from the printer. Unlink the other version of
 * Update which takes the printer response string, this will handle all of
 * the printer querying for you.
 *
 * @param timeout Maximum number of msec to wait for a response.
 */
-(void) updateWithTimeout:(int) timeout;

/**
 * This will parse the query results and return the query results as a
 * Dictionary of name/NameValue objects.
 *
 * @param queryResults Query results to process
 * @return This will return the query results as a Dictionary of 
 *         query was invalid then an empty HashMap is returned.
 * @throws IllegalStateException If a duplicate tag is found.
 */
-(NSMutableDictionary *) querySettings: (NSString *) queryResults;

@end
