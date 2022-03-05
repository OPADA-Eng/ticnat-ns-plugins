//
//  StoredFormat_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/16/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "MemoryModules_DPL.h"

/**
 * This class handles the Stored Format data from the <STX>Wet* query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>G</td><td>G module</td></tr>
 *    <tr><td>D</td><td>D module</td></tr>
 *    <tr><td>X</td><td>X module</td></tr>
 *    <tr><td>Y</td><td>Y module</td></tr>
 *    <tr><td>Internal Fonts</td><td>Internal Fonts</td></tr>
 * </table>
 */
@interface StoredFormat_DPL : MemoryModules_DPL

/**
 *  This gets the printer's stored format list
 *  @param module module to retrieve store formats
 *  @return printer's stored format list
 */
-(NSArray *)getStoredFormatsFromModule:(NSString *)module;
@end
