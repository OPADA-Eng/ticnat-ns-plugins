#import "PrinterState_DPL.h"

/**
 * This class handles the Auto Update data from the [STX] KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1 summary= "">
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>2</td><td>Printer Name</td></tr>
 *    <tr><td>3</td><td>AirWatch message</td></tr>
 * </table>
 */
@interface AirWatch_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets the AirWatch printer name
 *
 *  @return AirWatch printer name
 */
-(NSString *)getPrinterName;

/**
 * This sets the AirWatch printer name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setPrinterName: (NSString *) value;

/**
 *  This gets the printer's AirWatch message
 *
 *  @return printer's AirWatch message
 */
-(NSString *)getMessage;

/**
 * This sets the printer's AirWatch message
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int) setMessage: (NSString *) value;


@end
