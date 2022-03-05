//
//  PrinterStatus_DPL.h
//  DatamaxONeilSDK
//
//  Created by Quang Phan on 10/14/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/**
 * Printer Status Values
 */
typedef NS_ENUM(NSInteger, PrinterStatus) {
    
    /**
     *  Unknown
     */
    PrinterStatusUnknown = 0,
    
    /**
     *  Interpreter Busy
     */
    PrinterStatusInterpreterBusy = 1,
    
    /**
     *  Paper Out Fault
     */
    PrinterStatusPaperOutFault = 2,
    
    /**
     *  Ribbon Out Fault
     */
    PrinterStatusRibbonOutFault = 3,
    
    /**
     *  Printing Batch
     */
    PrinterStatusPrintingBatch = 4,
    
    /**
     *  Busy Printing
     */
    PrinterStatusBusyPrinting = 5,
    
    /**
     *  Printer Paused
     */
    PrinterStatusPrinterPaused = 6,
    
    /**
     *  Label Presented
     */
    PrinterStatusLabelPresented = 7,
    
    /**
     *  Rewinder Out Fault
     */
    PrinterStatusRewinderOutFault = 8,
    
    /**
     *  Cutter Fault
     */
    PrinterStatusCutterFault = 9,
    
    /**
     *  Paper Out
     */
    PrinterStatusPaperOut = 10,
    
    /**
     *  Ribbon Saver Fault
     */
    PrinterStatusRibbonSaverFault = 11,
    
    /**
     *  Printhead Up
     */
    PrinterStatusPrintHeadUp = 12,
    
    /**
     *  Top of Form Fault
     */
    PrinterStatusTopOfFormFault = 13,
    
    /**
     *  Ribbon Low
     */
    PrinterStatusRibbonLow = 14,
    
    /**
     *  Printer Ready
     */
    PrinterStatusPrinterReady = 17,
    
    /**
     *  Waiting For Signal
     */
    PrinterStatusWaitingForSignal = 18,
    
    /**
     *  Waiting For Data
     */
    PrinterStatusWaitingForData = 19,
    
    /**
     *  COM1 Has Data
     */
    PrinterStatusCOM1HasData = 20,
	
	/**
     *  Printer is busy
     */
    PrinterStatusPrinterBusy = 21
};

/**
 * This class handles Printer Statuses from the [SOH]a query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Interpreter Busy (Imaging)</td></tr>
 *    <tr><td>2</td><td>Paper Out or Fault</td></tr>
 *    <tr><td>3</td><td>Ribbon Out or Fault</td></tr>
 *    <tr><td>4</td><td>Printing Batch</td></tr>
 *    <tr><td>5</td><td>Busy Printing</td></tr>
 *    <tr><td>6</td><td>Printer Paused</td></tr>
 *    <tr><td>7</td><td>Label Presented</td></tr>
 *    <tr><td>8</td><td>Rewinder Out or Fault</td></tr>
 *    <tr><td>9</td><td>Cutter fault</td></tr>
 *    <tr><td>10</td><td>Paper out</td></tr>
 *    <tr><td>11</td><td>Ribbon Saver fault</td></tr>
 *    <tr><td>12</td><td>Print head up</td></tr>
 *    <tr><td>13</td><td>Top of form fault</td></tr>
 *    <tr><td>14</td><td>Ribbon low</td></tr>
 *    <tr><td>17</td><td>Printer Ready</td></tr>
 *    <tr><td>18</td><td>Waiting for Signal</td></tr>
 *    <tr><td>19</td><td>Waiting for Data</td></tr>
 *    <tr><td>20</td><td>COM1 has data to be parsed</td></tr>
 * </table>
 */
@interface PrinterStatus_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This reports whether the interpreter for imaging is busy
 *
 *  @return true if interpreter is busy and false if not
 */
-(bool)getInterpreterBusy;


/**
 *  This reports whether paper out or fault has occurred
 *
 *  @return true if paper is out or fault
 */
-(bool)getPaperOutFault;

/**
 *  This reports whether ribbon out or fault has occurred
 *
 *  @return true if ribbon is out or fault
 */
-(bool)getRibbonOutFault;

/**
 *  This reports whether printer is printing batch
 *
 *  @return true if printer is printing batch
 */
-(bool)getPrintingBatch;

/**
 *  This reports whether printer is busy printing
 *
 *  @return true if printer is busy printing
 */
-(bool)getBusyPrinting;

/**
 *  This reports whether printer is paused
 *
 *  @return true if printer is paused
 */
-(bool)getPrinterPaused;

/**
 *  This reports whether label is presented
 *
 *  @return true if label is presented
 */
-(bool)getLabelPresented;

/**
 *  This reports whether rewinder is out or at fault
 *
 *  @return true if rewinder is out or at fault
 */
-(bool)getRewinderOutFault;

/**
 *  This reports whether cutter fault has occurred
 *
 *  @return true if cutter fault has occurred
 */
-(bool)getCutterFault;

/**
 *  This reports whether ribbon saver fault has occurred
 *
 *  @return true if ribbon saver fault has occurred
 */
-(bool)getRibbonSaverFault;

/**
 *  This reports whether print head lid is opened
 *
 *  @return true if print head lid is opened
 */
-(bool)getPrintHeadUp;

/**
 *  This reports whether top of form fault has occurred
 *
 *  @return true if top of form fault has occurred
 */
-(bool)getTopOfFormFault;

/**
 *  This reports whether ribbon is low
 *
 *  @return true if ribbon is low
 */
-(bool)getRibbonLow;

/**
 *  This reports whether printer is ready
 *
 *  @return true if printer is ready
 */
-(bool)getPrinterReady;

/**
 *  This reports whether printer is waiting for signal
 *
 *  @return true if printer is waiting for signal
 */
-(bool)getWaitingForSignal;

/**
 *  This reports whether printer is waiting for data
 *
 *  @return true if printer is waiting for data
 */
-(bool)getWaitingForData;

/**
 *  This reports whether COM1 has data not parsed
 *
 *  @return true if COM1 has data not parsed
 */
-(bool)getCOM1HasData;

/**
 *  This returns the current status of printer
 *
 *  @return current status of printer
 */
-(PrinterStatus)getCurrentStatus;


@end
