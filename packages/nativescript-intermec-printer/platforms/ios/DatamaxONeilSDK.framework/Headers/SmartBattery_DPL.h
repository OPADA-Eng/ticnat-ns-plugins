//
//  SmartBattery_DPL.h
//  DatamaxONeilSDK
//
//  Created by Quang Phan on 6/17/15.
//  Copyright (c) 2015 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * This class handles the printer's smart battery(read-only) data from an KcQQQ and v queries as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1 summary = "">
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Temperature in K</td></tr>
 *    <tr><td>2</td><td>Voltage</td></tr>
 *    <tr><td>3</td><td>Average Current(A)</td></tr>
 *    <tr><td>4</td><td>Current(A)</td></tr>
 *    <tr><td>5</td><td>Percent of Charge</td></tr>
 *    <tr><td>6</td><td>Status Bit</td></tr>
 *    <tr><td>7</td><td>Cycle Count</td></tr>
 *    <tr><td>8</td><td>Serial Number</td></tr>
 *    <tr><td>9</td><td>Manufacture Date</td></tr>
 * </table>
 * @author Datamax-O'Neil
 */
@interface SmartBattery_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the printer's smart battery temperature
 *  @return string containing the printer's smart battery temperature
 */
-(NSString *) getTemperature;

/**
 *  This gets the printer's smart battery voltage
 *  @return string containing the printer's smart battery voltage
 */
-(NSString *) getVoltage;

/**
 *  This gets the printer's smart battery average current
 *  @return string containing the printer's smart battery average current
 */
-(NSString *) getAverageCurrent;

/**
 *  This gets the printer's smart battery current
 *  @return string containing the printer's smart battery current
 */
-(NSString *) getCurrent;

/**
 *  This gets the printer's smart battery percent of charge
 *  @return string containing the printer's smart battery percent of charge
 */
-(NSString *) getPercentCharge;
/**
 *  This gets the printer's smart battery status bit
 *  @return string containing the printer's smart battery status bit
 */
-(NSString *) getStatusBit;

/**
 *  This gets the printer's smart battery cycle count
 *  @return string containing the printer's smart battery cycle count
 */
-(NSString *) getCycleCount;

/**
 *  This gets the printer's smart battery serial number
 *  @return string containing the printer's smart battery serial number
 */
-(NSString *) getSerialNumber;

/**
 *  This gets the printer's smart battery manufacture date
 *  @return string containing the printer's smart battery manufacture date
 */
-(NSString *) getManufactureDate;

@end
