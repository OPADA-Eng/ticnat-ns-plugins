//
// DocumentEZ.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Document.h"
#import "ParametersEZ.h"


/** These are the different QMark settings available in EZ Print mode. */
typedef NS_ENUM(NSInteger, QStop_Setting) {
	/**
	 * The printer will act according to the value programmed
	 * into its internal flash memory.
	 */
	QStop_SettingDefault,

	/**
	 * The printer will stop printing the set number of dot-lines
	 * after the queue mark is found on the front of the media.  This mode
	 * applies to the LP3, MF2, MF3, 2t and 4t.
	 */
	QStop_SettingFront,

	/**
	 * The printer will stop printing the set number of
	 * dot-lines after the queue marks is found on the back of the media.
	 * This mode applies to the LP3.
	 */
	QStop_SettingBack,

	/**
	 * The printer will stop printing the set number of
	 * dot-lines after the inter-label gap is found between labels.
	 * This mode applies to the LP3.
	 */
	QStop_SettingGap,

	/**
	 * The printer will ignore all queue stop settings in
	 * its internal flash memory and just print normally.
	 */
	QStop_SettingNone
};

/**
 * This class is use to build a print job for EZ language, EZ Mode.
 * @discussion These functions can be used to 'build' a document using abstract
 * methods instead of the raw 'EZ Print' mode commands.  The DocumentEZ
 * class is designed when user want to print in EZ Print mode with an EZ language printer.
 */
@interface DocumentEZ : Document {

	/**
	 * The default font is specified in the construction of this object and
	 * is used when a font is not specified by the optional 'Parameters'
	 */
	NSString* defaultFont;
	
	/** The initial number of dot-lines to back-up before printing. */
	int initialPaperBackup;

	/** The maximum number of dot-lines to allow to be printed. */
	int pageLength;

	/** The number of copies to print. */
	unsigned char printQuantity;

	/** Should printing be 'optimized' for back-up dot-lines */
	bool isPrintQuantityOptimized;

	/** The queue mark behavior mode. */
	QStop_Setting qmarkMode;

	/** Number of dot-lines past the queue mark to allow printing. */
	int qmarkDotLines;

	/** Should print in Landscape mode. */
	bool isLandscapeMode;

}

/**
 * The default font is specified in the construction of this object and
 * is used when a font is not specified by the optional 'Parameters'
 */
@property(copy) NSString* defaultFont;

/** The initial number of dot-lines to back-up before printing. */
@property int initialPaperBackup;

/** The maximum number of dot-lines to allow to be printed. */
@property int pageLength;

/** The number of copies to print. */
@property unsigned char printQuantity;

/** Should printing be 'optimized' for back-up dot-lines */
@property bool isPrintQuantityOptimized;

/** The queue mark behavior mode. */
@property QStop_Setting qmarkMode;

/** Number of dot-lines past the queue mark to allow printing. */
@property int qmarkDotLines;

/** Should print in Landscape mode. */
@property bool isLandscapeMode;

/**
 * This constructor takes the name of the font to use when none is
 * specified for write operations.
 *
 * @param fontName The five character font name.
 */
-(id)initWithFiveCharacterFont: (NSString*) fontName;

/**
 * This function will print the provided text to the document object
 * using the default printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeText: (NSString *) text atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document object
 * using the provided printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
 -(void) writeText: (NSString *) text atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * This will print a horizontal line to the document at the given
 * position with the given length and width.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param length Length of the line in dots.
 * @param thickness Thickness of the line in dots.
 */
-(void) writeHorizontalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness;

/**
 * This will print a horizontal line to the document at the given
 * position with the given length and width.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param length Length of the line in dots.
 * @param thickness Thickness of the line in dots.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing of
 * this item.
 */
-(void) writeHorizontalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness withParameters: (ParametersEZ *) parameters;

/**
 * This will print a vertical line to the document at the given position
 * with the given length and width.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param length Length of the line in dots.
 * @param thickness Thickness of the line in dots.
 */
-(void) writeVerticalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness;

/**
 * This will print a vertical line to the document at the given position
 * with the given length and width.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param length Length of the line in dots.
 * @param thickness Thickness of the line in dots.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeVerticalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness withParameters: (ParametersEZ *) parameters;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the default printing parameter
 * values.
 *
 * @param barcodeFont Name of the barcode font.
 * @param text Text to print as barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeBarCode: (NSString *) barcodeFont withText: (NSString *) text atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the provided printing parameter
 * values.
 *
 * @param barcodeFont Name of the barcode font.
 * @param text Text to print as barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCode: (NSString *) barcodeFont withText: (NSString *) text atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * This function will print the provided text to the document as a GS1
 * barcode using the default printing parameter
 * values.
 *<br>Note: If the composite data is exists(not nil or not empty string), the primary data and 2D composite data is separated with '\*' in the print job. (eg.ABCDEFGHIJKL\*helloWorld!123)
 *
 * @param GS1Font Name of the GS1 Barcode to print. Valid Values:
 * <p> GS1 Barcode Names
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>GS1TR</td><td>GS1 Truncated Barcode</td></tr>
 *    <tr><td>GS1ST</td><td>GS1 Stacked Barcode</td></tr>
 *    <tr><td>GS1SO</td><td>GS1 Stacked Omni Barcode</td></tr>
 *    <tr><td>GS1LM</td><td>GS1 Limited Barcode</td></tr>
 *    <tr><td>GS1EX</td><td>GS1 Expanded Barcode</td></tr>
 *    <tr><td>GSONE</td><td>GS1 Barcode</td></tr>
 * </table>
 *  @param primaryData            Primary data to print as barcode.
 * <p> Valid input data:
 * <table border=1>
 *    <tr><th>GS1 Barcode Type</th><th>Valid Inputs</th><th>Notes</th></tr>
 *    <tr><td>GS1 Truncated</td><td>0-9</td><td>13-digit value with maximum of 106 characters in 2D composite data. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Stacked/Stacked Omnidirectional</td><td>0-9</td><td>13-digit value with maximum of 95 characters in 2D composite data. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Limited</td><td>0-9</td><td>13-digit value with maximum of 106 characters in 2D composite data. Error detection is mod 89 checksum</td></tr>
 *    <tr><td>GS1 Expanded</td><td>0-9A-Za-z!%"%&'(*+,-./:;<=>?</td><td>Maximum of 70 numeric characters in the primary data (fewer if mixed with alphabetic/punctuation marks). Maximum of 119 numeric data with primary and 2D composite data combined (fewer if mixed with alphabetic/punctuation marks). Error detection is mod 211 checksum</td></tr>
 * </table>
 *  @param compositeData            composite data to print as barcode. Separate primary data and 2D composite data with '\*'(eg.ABCDEFGHIJKL*helloWorld!123)
 * <p> Valid input data:
 * <table border=1>
 *    <tr><th>Valid Inputs</th><th>Notes</th></tr>
 *    <tr><td>All alphanumerics</td><td>Composite Data + Primary Data must not exceed 120 characters</td></tr>
 * </table>
 * @param pixelMultiplier Pixel multiplier value. Changes the height and width of barcode in 5 dots per inch.
 * @param sepRowHt        Separator Row Height. Must be between 1x Pixel multiplier and 2x pixel multiplier. Default value is pixelMultiplier value.
 * @param xcut            X Pixel Undercut value. Must be between 0 and Pixel Multiplier-1. Default is 0.
 * @param ycut            Y Pixel undercut value. Must be between 0 and Pixel multiplier-1. Default is 0.
 * @param segPerRow       Segments per row. Only used for GS1 Expanded Barcode. Valid values are even numbers between 2 and 22.  Default value is 22. If odd number is enter, it will be set to the default value. If not use, set value to 0.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeBarCodeGS1DataBar: (NSString *) GS1Font withPrimaryData: (NSString *) primaryData withCompositeData: (NSString*)compositeData pixelMultiplier:(int) pixelMultiplier separatorRowHeight: (int) sepRowHt pixelXCut:(int)xcut pixelYCut: (int)ycut segPerRow:(int)segPerRow atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document as a GS1
 * barcode using the provided printing parameter
 * values.
 *<br>Note: If the composite data is exists(not nil or not empty string), the primary data and 2D composite data is separated with '\*' in the print job. (eg.ABCDEFGHIJKL\*helloWorld!123)
 *
 * @param GS1Font Name of the GS1 Barcode to print. Valid Values:
 * <p> GS1 Barcode Names
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>GS1TR</td><td>GS1 Truncated Barcode</td></tr>
 *    <tr><td>GS1ST</td><td>GS1 Stacked Barcode</td></tr>
 *    <tr><td>GS1SO</td><td>GS1 Stacked Omni Barcode</td></tr>
 *    <tr><td>GS1LM</td><td>GS1 Limited Barcode</td></tr>
 *    <tr><td>GS1EX</td><td>GS1 Expanded Barcode</td></tr>
 *    <tr><td>GSONE</td><td>GS1 Barcode</td></tr>
 * </table>
 *  @param primaryData            Primary data to print as barcode. 
 * <p> Valid input data:
 * <table border=1>
 *    <tr><th>GS1 Barcode Type</th><th>Valid Inputs</th><th>Notes</th></tr>
 *    <tr><td>GS1 Truncated</td><td>0-9</td><td>13-digit value with maximum of 106 characters in 2D composite data. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Stacked/Stacked Omnidirectional</td><td>0-9</td><td>13-digit value with maximum of 95 characters in 2D composite data. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Limited</td><td>0-9</td><td>13-digit value with maximum of 106 characters in 2D composite data. Error detection is mod 89 checksum</td></tr>
 *    <tr><td>GS1 Expanded</td><td>0-9A-Za-z!%"%&'(*+,-./:;<=>?</td><td>Maximum of 70 numeric characters in the primary data (fewer if mixed with alphabetic/punctuation marks). Maximum of 119 numeric data with primary and 2D composite data combined (fewer if mixed with alphabetic/punctuation marks). Error detection is mod 211 checksum</td></tr>
 * </table>
 *  @param compositeData            composite data to print as barcode. Separate primary data and 2D composite data with '*'(eg.ABCDEFGHIJKL*helloWorld!123)
 * <p> Valid input data:
 * <table border=1>
 *    <tr><th>Valid Inputs</th><th>Notes</th></tr>
 *    <tr><td>All alphanumerics</td><td>ΩComposite Data + Primary Data must not exceed 120 characters</tr>
 * </table>
 * @param pixelMultiplier Pixel multiplier value. Changes the height and width of barcode in 5 dots per inch.
 * @param sepRowHt        Separator Row Height. Must be between 1x Pixel multiplier and 2x pixel multiplier. Default value is pixelMultiplier value.
 * @param xcut            X Pixel Undercut value. Must be between 0 and Pixel Multiplier-1. Default is 0.
 * @param ycut            Y Pixel undercut value. Must be between 0 and Pixel multiplier-1. Default is 0.
 * @param segPerRow       Segments per row. Only used for GS1 Expanded Barcode. Valid values are even numbers between 2 and 22.  Default value is 22. If odd number is enter, it will be set to the default value. If not use, set value to 0.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCodeGS1DataBar: (NSString *) GS1Font withPrimaryData: (NSString *) primaryData withCompositeData: (NSString*)compositeData pixelMultiplier:(int) pixelMultiplier separatorRowHeight: (int) sepRowHt pixelXCut:(int)xcut pixelYCut: (int)ycut segPerRow:(int)segPerRow atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * This function will print the provided text to the document as a
 * QR barcode using the default printing parameter
 * values.
 *
 * @param text Text to print as barcode. For Manual Mode, Format as follow: [CHARACTER_MODE][TEXT].  To Switch between character mode, terminate the data string using a comma ',' follow by the next mode. (ex. N0123456789,B0004(&#),QR//BARCODE)
 * <p> Character modes
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>Numeric (0-9)</td></tr>
 *    <tr><td>A</td><td>Alphanumeric(0-9A-Z[space]$%*+-./:)</td></tr>
 *    <tr><td>B</td><td>Binary. The next 4 char indicate number of data bytes encoded.  The next 4 char will then be encoded into barcode but not interpreted in any way.</td></tr>
 *    <tr><td>K</td><td>Kanji</td></tr>
 * </table>
 * @param errorCorrectionLevel Error Correction Level. Possible input values:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Level L (7%)</td></tr>
 *    <tr><td>2</td><td>Level M (15%)</td></tr>
 *    <tr><td>3</td><td>Level Q (25%) (default)</td></tr>
 *    <tr><td>4</td><td>Level H (30%) </td></tr>
 * </table>
 * @param mask Mask number:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>mask 0</td></tr>
 *    <tr><td>1</td><td>mask 1</td></tr>
 *    <tr><td>2</td><td>mask 2</td></tr>
 *    <tr><td>3</td><td>mask 3</td></tr>
 *    <tr><td>4</td><td>mask 4</td></tr>
 *    <tr><td>5</td><td>mask 5</td></tr>
 *    <tr><td>6</td><td>mask 6</td></tr>
 *    <tr><td>7</td><td>mask 7</td></tr>
 *    <tr><td>8</td><td>no mask</td></tr>
 *    <tr><td>9</td><td>auto mask</td></tr>
 * </table>
 * @param mode Auto or Manual formatting of barcode
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Auto Formatting</td></tr>
 *    <tr><td>1</td><td>Manual Formatting</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeBarCodeQRCode:(NSString *) text errorCorrectionLevel:(int)errorCorrectionLevel mask:(int)mask mode:(int)mode atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document as a
 * QR barcode using the provided printing parameter
 * values.
 *
 * @param text Text to print as barcode. For Manual Mode, Format as follow: [CHARACTER_MODE][TEXT].  To Switch between character mode, terminate the data string using a comma ',' follow by the next mode. (ex. N0123456789,B0004(&#),QR//BARCODE)
 * <p> Character modes
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>Numeric (0-9)</td></tr>
 *    <tr><td>A</td><td>Alphanumeric(0-9A-Z[space]$%*+-./:)</td></tr>
 *    <tr><td>B</td><td>Binary. The next 4 char indicate number of data bytes encoded.  The next 4 char will then be encoded into barcode but not interpreted in any way.</td></tr>
 *    <tr><td>K</td><td>Kanji</td></tr>
 * </table>
 * @param errorCorrectionLevel Error Correction Level. Possible input values:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Level L (7%)</td></tr>
 *    <tr><td>2</td><td>Level M (15%)</td></tr>
 *    <tr><td>3</td><td>Level Q (25%) (default)</td></tr>
 *    <tr><td>4</td><td>Level H (30%) </td></tr>
 * </table>
 * @param mask Mask number:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>mask 0</td></tr>
 *    <tr><td>1</td><td>mask 1</td></tr>
 *    <tr><td>2</td><td>mask 2</td></tr>
 *    <tr><td>3</td><td>mask 3</td></tr>
 *    <tr><td>4</td><td>mask 4</td></tr>
 *    <tr><td>5</td><td>mask 5</td></tr>
 *    <tr><td>6</td><td>mask 6</td></tr>
 *    <tr><td>7</td><td>mask 7</td></tr>
 *    <tr><td>8</td><td>no mask</td></tr>
 *    <tr><td>9</td><td>auto mask</td></tr>
 * </table>
 * @param mode Auto or Manual formatting of barcode
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Auto Formatting</td></tr>
 *    <tr><td>1</td><td>Manual Formatting</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCodeQRCode:(NSString *) text errorCorrectionLevel:(int)errorCorrectionLevel mask:(int)mask mode:(int)mode atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * This function will print the provided text to the document as a
 * Aztec barcode using the default printing parameter
 * values.
 *
 * @param text text to print as barcode
 * @param errorCorrectionLevel Error Correction Level. Possible input values:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Default (23%)</td></tr>
 *    <tr><td>1-99</td><td>minimum error correction as a percentage of the symbol</td></tr>
 *    <tr><td>101-04</td><td>for a compact symbol (1xx specifies a compact symbol where xx specifies the number of layers;  01 – 04 are valid</td></tr>
 *    <tr><td>201-232</td><td>for a full range symbol (2xx specifies a fully range symbol where xx specifies the number of layers; 01 – 32 are valid</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeBarCodeAztec:(NSString *)text errorCorrectionLevel:(int)errorCorrectionLevel atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document as a
 * Aztec barcode using the provided printing parameter
 * values.
 *
 * @param text text to print as barcode
 * @param errorCorrectionLevel Error Correction Level. Possible input values:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Default (23%)</td></tr>
 *    <tr><td>1-99</td><td>minimum error correction as a percentage of the symbol</td></tr>
 *    <tr><td>101-04</td><td>for a compact symbol (1xx specifies a compact symbol where xx specifies the number of layers;  01 – 04 are valid</td></tr>
 *    <tr><td>201-232</td><td>for a full range symbol (2xx specifies a fully range symbol where xx specifies the number of layers; 01 – 32 are valid</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCodeAztec:(NSString *)text errorCorrectionLevel:(int)errorCorrectionLevel atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * This function will print the provided text to the document as a
 * PDF417 2D barcode using the default printing parameter values.
 *
 * @param text Text to print as PDF417 2D
 * barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param dataColumns Use this parameter to override the
 * default of 2 columns for the PDF-417 bar code to specify
 * the actual number of data columns being printed across any
 * given line of the bar code.
 * @param redundancyLevel This will set the number of redundant
 * code words used to protect against data loss/corruption.  The
 * typical value is 1 which would result in 4 code words.  Other values
 * are 2 giving you 8 code words, 3 giving you 16 code words up to 8
 * giving you 512 code words.
 */
-(void) writeBarCodePDF417: (NSString *) text atRow: (int) row atColumn: (int) col withDataColumns: (int) dataColumns withRedundancyLevel: (int) redundancyLevel;

/**
 * This function will print the provided text to the document as a
 * PDF417 2D barcode using the provided printing parameter values.
 *
 * @param text Text to print as PDF417 2D
 * barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param dataColumns Use this parameter to override the
 * default of 2 columns for the PDF-417 bar code to specify
 * the actual number of data columns being printed across any
 * given line of the bar code.
 * @param redundancyLevel This will set the number of redundant
 * code words used to protect against data loss/corruption.  The
 * typical value is 1 which would result in 4 code words.  Other values
 * are 2 giving you 8 code words, 3 giving you 16 code words up to 8
 * giving you 512 code words.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCodePDF417: (NSString *) text atRow: (int) row atColumn: (int) col withDataColumns: (int) dataColumns withRedundancyLevel: (int) redundancyLevel withParameters: (ParametersEZ *) parameters;

/**
 * This will cause the image specified, which is stored on the printer, to be printed
 * at the given location.
 *
 * @param imageName Name of the image stored in printer memory.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) writeImage: (NSString *) imageName atRow: (int) row atColumn: (int) col;

/**
 * This will cause the image specified, which is stored on the printer, to be printed
 * at the given location.
 *
 * @param imageName Name of the image stored in printer memory.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeImage: (NSString *) imageName atRow: (int) row atColumn: (int) col withParameters: (ParametersEZ *) parameters;

/**
 * Invert the region described.  All black pixels will become white and
 * all white will become black.  If inverse regions overlap then their
 * areas will be combined, one won't invert the other.  The region is
 * inverted as the last step in printing so it doesn't mattter if text
 * is written to the area before or after the inverse region is created.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param width Length of the line in dots.
 * @param height Thickness of the line in dots.
 */
-(void) writeInverseRegion: (int) row atColumn: (int) col withWidth: (int) width withHeight: (int) height;

/**
 * Invert the region described.  All black pixels will become white and
 * all white will become black.  If inverse regions overlap then their
 * areas will be combined, one won't invert the other.  The region is
 * inverted as the last step in printing so it doesn't mattter if text
 * is written to the area before or after the inverse region is created.
 *
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param width Length of the line in dots.
 * @param height Thickness of the line in dots.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeInverseRegion: (int) row atColumn: (int) col withWidth: (int) width withHeight: (int) height withParameters: (ParametersEZ *) parameters;


@end
