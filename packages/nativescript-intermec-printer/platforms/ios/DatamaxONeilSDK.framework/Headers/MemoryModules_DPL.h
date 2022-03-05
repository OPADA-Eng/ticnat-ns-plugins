//
//  MemoryModules_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * This class handles the File Information data
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>name</td><td>File Name</td></tr>
 *    <tr><td>type</td><td>File Type</td></tr>
 *    <tr><td>size</td><td>File Size</td></tr>
 * </table>
 */
@interface FileInformation:NSObject

/**
 *  This gets the file name
 *
 *  @return file name
 */
@property(nonatomic,retain) NSString* name;

/**
 *  This gets the file type
 *
 *  @return file type
 */
@property(nonatomic,retain) NSString* type;

/**
 *  This gets the file size
 *
 *  @return file size
 */
@property long size;

@end

/**
 * This class is the base class that handles all the file data from the <STX>Wet* query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>G</td><td>G module</td></tr>
 *    <tr><td>D</td><td>D module</td></tr>
 *    <tr><td>X</td><td>X module</td></tr>
 *    <tr><td>Y</td><td>Y module</td></tr>
 * </table>
 */
@interface MemoryModules_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's available bytes in the specified module
 *  @param module module to retreive available bytes
 *  @return printer's available bytes in the specified module
 */
-(long)getAvailableBytesFromModule:(NSString*) module;

/**
 *  This gets the printer's file list
 *  @param module module to retrieve files
 *  @return printer's file list
 */
-(NSArray*) getFilesFromModule: (NSString*) module;
@end
