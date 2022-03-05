//
//  Fonts_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "MemoryModules_DPL.h"

/**
 * This class handles the Fonts data from the <STX>Wet* query as well as
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

@interface Fonts_DPL : MemoryModules_DPL

/**
 *  This gets the printer's downloaded fonts in the specified module
 *  @param module module to retrieve the fonts
 *  @return list of printer's fonts
 */
-(NSArray *)getFontsFromModule:(NSString *)module;

/**
 *  This gets the printer's internal fonts
 *
 *  @return list of printer's internal font
 */
-(NSArray *)getInternalFonts;
@end
