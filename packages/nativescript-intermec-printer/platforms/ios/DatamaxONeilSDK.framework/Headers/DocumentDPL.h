//
//  DocumentDPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 12/9/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Document.h"
#import "ParametersDPL.h"
#import "UPSMessage.h"
#import "DPL_Definitions.h"

/**
 * This class is use to build a print job for DPL language.
 * @discussion These functions can be used to 'build' a document using abstract
 * methods instead of the raw 'DPL' mode commands.  The DocumentDPL
 * class is designed when users want to print in DPL mode with a DPL Language printers
 */
@interface DocumentDPL : Document
{
    /**
     * Vertical adjustment of the point where printing begins
     */
    int rowOffSet;
    
    /**
     * Horizontal adjustment of the point where printing begins
     */
    int columnOffSet;
    
    /**
     * The dot width multiplier of the printed dot.
     * <br>Valid values: 1 or 2
    */
    int dotWidthMultiplier;
    
    /**
     * The dot height multiplier of the printed dot.
     * <br>Valid values: 1, 2, or 3
     */
    int dotHeightMultiplier;
    
    /**
     * The "on time" of elements of the print head. The default setting is
     * 10. 
     * <br>
     * Valid Values: 0-30
     */
    int heatSettings;
    
    /**
     * The number of label copies to be printed
     */
    int printQuantity;
	
    /**
     * The type of format operation for label to be print.
     * <br>
     * Valid Values: XOR Mode - 1, Transparent mode - 2, Opaque mode - 3, Inverse Mode - 5
     */
    FormatAttributeValue labelFormat;
    
    /**
     *  Download Image Stream
     */
    NSMutableData* downloadImageData;
    
    /**
     *  Download Image File Name List
     */
    NSMutableArray* imageNameList;
    
    /**
     *  Advance Format Attribute Enable
     */
    bool enableAdvanceFormatAttribute;
}

/**
 * Vertical adjustment of the point where printing begins
 */
@property int rowOffSet;

/**
 * Horizontal adjustment of the point where printing begins
 */
@property int columnOffSet;

/**
 * The dot width multiplier of a printed dot.
 * Valid Values: 1 or 2
 */
@property int dotWidthMultiplier;

/**
 * The dot height multiplier of printed dot
 * Valid Values: 1, 2, or 3
 */
@property int dotHeightMultiplier;

/**
 * The "on time" of elements of the print head. The default setting is
 * 10.
 * <br>
 * Valid Values: 0-30
 */
@property int heatSettings;

/**
 * The number of print job copies to be printed
 */
@property int printQuantity;

/**
 * The type of format operation for label to be print
 * <br>
 * Valid Values: XOR Mode - 1, Transparent mode - 2, Opaque mode - 3, Inverse Mode - 5
 */
@property FormatAttributeValue labelFormat;

/**
 *  Advance Format Attribute Enable
 */
@property bool enableAdvanceFormatAttribute;

/**
 * This function will print the provided text to the document object using Internal Bitmapped Fonts and default parameters.
 * @param textString This is the text you wish to print.
 * @param fontID font ID of the Internal Bitmapped Font to be used. Valid values: 0-8
 * @param row row to start printing. Valid values: 0-9999
 * @param col col to start printing. Valid values: 0-9999
 */
-(void) writeTextInternalBitmapped:(NSString*)textString withFontID:(int)fontID atRow:(int)row atColumn:(int)col;

/**
 * This function will print the provided text to the document object using Internal Bitmapped Fonts and the specified parameters.
 * @param textString This is the text you wish to print.
 * @param fontID font ID of the Internal Bitmapped Font to be used. Valid values: 0-8
 * @param row row to start printing. Valid values: 0-9999
 * @param col col to start printing. Valid values: 0-9999
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeTextInternalBitmapped:(NSString*)textString withFontID:(int)fontID atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This function will print the provided text to the document object using Internal Smooth
 * Fonts and default parameters.
 * @param textString Text to be printed
 * @param fontSize smooth font point size. Valid values are 4 - 6, 8, 10, 12, 14, 18, 24, 30, 36, 48, 72
 * @param row row to start printing. Valid values 0 - 9999
 * @param col col to start printing. Valid values 0 - 9999
 */
-(void) writeTextInternalSmooth:(NSString*)textString withFontSize:(int)fontSize atRow:(int)row atColumn:(int)col;

/**
 * This function will print the provided text to the document object using Internal Smooth
 * Fonts and specified parameters.
 * @param textString Text to be printed
 * @param fontSize smooth font point size. Valid values are 4 - 6, 8, 10, 12, 14, 18, 24, 30, 36, 48, 72
 * @param row row to start printing. Valid values 0 - 9999
 * @param col col to start printing. Valid values 0 - 9999
 * @param parameters Parameters object to specify additional settings of print job
 */
-(void) writeTextInternalSmooth:(NSString*)textString withFontSize:(int)fontSize atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This function will print the provided text to the document object using Downloaded Bitmapped
 * Fonts and default parameters.
 * @param textString Text to be printed
 * @param fontID Downloaded bitmapped font ID to use. Valid values 100 - 999
 * @param row row to start printing. Valid values 0 - 9999
 * @param col  col to start printing. Valid values 0 - 9999
 */
-(void) writeTextDownloadedBitmapped:(NSString*)textString withFontID:(int)fontID atRow:(int)row atColumn:(int)col;

/**
 * This function will print the provided text to the document object using Downloaded Bitmapped
 * Fonts and specified parameters.
 * @param textString Text to be printed
 * @param fontID Downloaded bitmapped font ID to use. Valid values 100 - 999
 * @param row row to start printing. Valid values 0 - 9999
 * @param col  col to start printing. Valid values 0 - 9999
 * @param parameters  Parameters object to specify additional settings of print job
 */
-(void) writeTextDownloadedBitmapped:(NSString*)textString withFontID:(int)fontID atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This function will print the provided text to the document object using Scalable Font using the default parameters values.
 * @param textString This is the text you wish to print.
 * @param fontID Font ID of the Scalable Font
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) writeTextScalable:(NSString*)textString withFontID:(NSString*)fontID atRow:(int)row atColumn:(int)col;
/**
 * This function will print the provided text to the document object using Scalable Font using the specified parameters values.
 * @param textString This is the text you wish to print.
 * @param fontID FontID of scalable Font ID
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeTextScalable:(NSString*)textString withFontID:(NSString*)fontID atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This function will print the provided text to the document object using the provided printing parameter values.
 * @param textString This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param fontIDType Font ID type. <p> Valid values:  0 - 8 for Internal Bitmap Fonts, 9 for Scalable and Smooth Fonts.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeText:(NSString*)textString atRow:(int)row atColumn:(int)col withFontIDType: (NSString*)fontIDType paramObject: (ParametersDPL*) parameters;

/**
 * This function will print the provided text to the document as a barcode using the font specified and the default printing parameter values.
 * @param barcodeID ID of the barcode font. 
 * <p> Valid values: <p> A to Z(bc with human readable text), <p> a to z (bc with non-human readable text)(except P,u,v,z), or <p> Wna:(n= 1-9, a = a-s/A-S, No n is an implied 1)
 * @param textString Text to print as barcode.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) writeBarCode:(NSString*)barcodeID textToPrint:(NSString*) textString atRow:(int)row atColumn:(int)col;

/**
 * This function will print the UPS MaxiCode bar codes.
 * @param mode Maxicode Mode.Valid values: 2 = US locations, 3 = International locations
 * @param message UPS message to print as barcode.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 * @see UPSMessage
 */
-(void) writeBarCodeUPSMaxiCode:(int)mode withMessage:(UPSMessage*) message atRow:(int)row atColumn:(int)col
                    paramObject:(ParametersDPL*) parameters;
/**
 * This function will print the provided text to the document as a PDF417 2D barcode using the provided printing parameter values.
 * @param textString Data to be encoded
 * @param isTruncated Specifies a normal or truncated bar code
 * @param securityLevel 1-digit security level ranging from 0 to 8
 * @param aspectRatio 2-digit aspect ratio specified as a fraction, with first digit being numerator and second digit the denominator. <p>Valid values: "00" to "99". Use "00" for default ratio of 1:2.
 * @param dataRows 2-digit number specifying number of rows requested. Valid values: 3-90. Use the default value of 0 to let printer find best fit
 * @param dataCols 2-digit number specifying number of cols requested. Valid values: 1-30. Use the default value of 0 to let printer find best fit
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodePDF417:(NSString*)textString isTruncated:(bool)isTruncated withSecurityLevel:(int)securityLevel aspectRatio:(int)aspectRatio dataRows:(int)dataRows dataColumns:(int)dataCols atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function prints a DataMatrix barcode, a 2-D matrix symbology comprised of square mdoules arranged within a perimeter finder pattern. <p>Two basic types:ECC 000-140, ECC 200.
 * @param textString Any 8-byte data
 * @param correctionLevel 3-Digit convolutional error correction level(ECC).Valid values: 0,50,80,100,140,200
 * @param digitFormatID 1-digit format Identification:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Automatically chooose encodation scheme based on characters to be encoded</td></tr>
 *    <tr><td>1</td><td>Numeric</td></tr>
 *    <tr><td>2</td><td>Uppercase alphabet</td></tr>
 *    <tr><td>3</td><td>Uppercase alphanumeric and punctuation characters(.,-/)</td></tr>
 *    <tr><td>4</td><td>Uppercase alphanumeric</td></tr>
 *    <tr><td>5</td><td>ASCII, the full 128 ASCII character set</td></tr>
 *    <tr><td>6</td><td>Any 8-bit byte</td></tr>
 * </table>
 * For ECC 200, value should be 0
 * @param rowsRequested Odd or even number of rows requested. Valid Values:
 * <p> 0 = Automatically determined</p>
 * <p> For ECC 000-140: 9, 11, 13,..49</p>
 * <p> For ECC 200: 10,12,14,16,1,20,22,24,26,32,36,40,44,48,52,64,72,80,96,104,120,132,144 </p>
 * @param colsRequested Odd or even number of cols requested. Valid Values:
 * <p> 0 = Automatically determined</p>
 * <p> For ECC 000-140: 0 , 9, 11, 13,..49</p>
 * <p> For ECC 200: 10,12,14,16,1,20,22,24,26,32,36,40,44,48,52,64,72,80,96,104,120,132,144 </p>
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeDataMatrix:(NSString*)textString withECC:(int)correctionLevel withFormatIdentification:(int)digitFormatID rowsRequested:(int)rowsRequested columnsRequested:(int)colsRequested atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print a QRCode barcode using the provided printing parameter values.
 * @param textString Numeric Data, Alphanumeric Data, 8-bit byte data, and/or Kanji characters of the QR barcode
 * @param autoFormatting Specifies to use auto or manual formatting for the QR Barcode. <p>If this is true, other parameters will be ignored.
 * @param QRCodeModel QR Code Model number, optional. Valid values: 1,2. Model 2 is the default
 * @param correctionLevel Error Correction Levels:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>H</td><td>Ultra Reliability Level (30%)</td></tr>
 *    <tr><td>Q</td><td>High Reliability Level (20%)</td></tr>
 *    <tr><td>M</td><td>Standard Reliability Level (15%)</td></tr>
 *    <tr><td>L</td><td>High Density Level (7%)</td></tr>
 * </table>
 * @param maskNumber Mask Number,optional:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0-7</td><td>Mask 0 - Mask 7</td></tr>
 *    <tr><td>8</td><td>No mask</td></tr>
 *    <tr><td>None</td><td>Auto</td></tr>
 * </table>
 * @param inputMode Data Input Mode:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>A</td><td>Auto, ASCII</td></tr>
 *    <tr><td>a</td><td>Auto, Hex-ASCII</td></tr>
 *    <tr><td>M</td><td>Manual, ASCII</td></tr>
 *    <tr><td>m</td><td>Manual, Hex-ASCII</td></tr>
 * </table>
 * @param charMode Character Mode:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>Numeric</td></tr>
 *    <tr><td>A</td><td>Alphanumeric</td></tr>
 *    <tr><td>B</td><td>Binary :(where)nnnn = data bytecount,4 decimal digits; byte-count /2 for hex-ASCII)</td></tr>
 *    <tr><td>K</td><td>Kanji</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeQRCode:(NSString*)textString formatMode:(bool) autoFormatting modelNumber:(int)QRCodeModel  errorCorrectionLevel:(NSString*)correctionLevel  maskNumber:(NSString*)maskNumber  dataInputMode:(NSString*)inputMode  characterMode:(NSString*)charMode atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print an Aztec barcode using the provided printing parameter values.
 * @param textString All ASCII characters, depending on selected options
 * @param textLength Optional string length specifier. Set to 0 if not used
 * @param ECIMode Extended Channel Interpretation mode; 0 = Disabled, 1 = Enabled
 * @param errorCorrection Error Correction(EC)/Amount:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>Default</td></tr>
 *    <tr><td>1-99</td><td>EC fixed value, expressed as percent</td></tr>
 *    <tr><td>101-104</td><td>Compact Core, 1-4 layers</td></tr>
 *    <tr><td>201-232</td><td>Full-size Core, 1-32 layers</td></tr>
 *    <tr><td>300</td><td>Rune Format, encodes 3 ASCII 0-256 decimal digits.</td></tr>
 * </table>
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeAztec:(NSString*)textString textLength:(int)textLength ECIMode:(bool) ECIMode errorCorrection:(int)errorCorrection atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/** 
 * This function will print a GS1 DataBar barcode using the provided printing parameter values.
 * @param primaryData Numeric linear data(length 13) or ISO646 character set(GS1 Expanded)
 * <p> Valid input data:
 * <table border=1>
 *    <tr><th>GS1 Barcode Type</th><th>Valid Inputs</th><th>Notes</th></tr>
 *    <tr><td>GS1 Truncated</td><td>0-9</td><td>13-Digit EAN.UCC item ID number with linear symbol. Encodable character set 09. Maximum numeric data capacity is the application identifier plus 14-digit. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Stacked/Stacked Omnidirectional</td><td>0-9</td><td>13-Digit EAN.UCC item ID number with linear symbol. Encodable character set 09. Maximum numeric data capacity is the application identifier plus 14-digit. Error detection is mod 79 checksum</td></tr>
 *    <tr><td>GS1 Limited</td><td>0-9</td><td>13-Digit EAN.UCC item ID number with 0 or 1 within linear symbol. Encodable character set 09. Data must begin with 0 or 1. Error detection is mod 89 checksum</td></tr>
 *    <tr><td>GS1 Expanded</td><td>0-9A-Za-z!%"%&'(*+,-./:;<=>?</td><td>14-Digit EAN.UCC item ID number plus supp. AI element strings. Encodable character set ISO 646(alphanumeric,20 punctuation characters, and FNC1). Maximum numeric data capacity is 74 numeric or 41 alphanumeric. Error detection is mod 211 checksum</td></tr>
 * </table>
 * @param compositeData Additional 2-D data
 * <p> Valid input data: All alphanumerics
 * @param GS1Type GS1 DataBar Barcode type:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>E</td><td>GS1 DataBar Expanded</td></tr>
 *    <tr><td>R</td><td>GS1 DataBar OmniDirectional</td></tr>
 *    <tr><td>T</td><td>GS1 DataBar Truncated</td></tr>
 *    <tr><td>S</td><td>GS1 DataBar Stacked</td></tr>
 *    <tr><td>D</td><td>GS1 DataBar Stacked OmniDirectional</td></tr>
 *    <tr><td>L</td><td>GS1 DataBar Limited</td></tr>
 * </table>
 * @param pixelMultiplier Pixel Multiplier. Valid values: 1-9
 * @param xPixelUndercut X Pixels to undercut. Valid values: 0 to (pixelmultiplier)- 1))
 * @param yPixelUndercut Y Pixels to undercut. Valid values: 0 to (pixelmultiplier)- 1))
 * @param segmentsPerRow Segments per row for GS1 DataBar Expanded. Valid values: 2-22, even. For other types, use 0.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeGS1DataBar:(NSString*)primaryData  compositeData:(NSString*)compositeData  dataBarType:(NSString*)GS1Type pixelMultiplier:(int)pixelMultiplier xPixelUndercut:(int)xPixelUndercut yPixelUndercut:(int)yPixelUndercut segmentsPerRow:(int)segmentsPerRow atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print an Austrailia Post 4-State barcode using the provided printing parameter values.
 * @param textString Optional. Enter customer information here
 * @param readableText Specifies whether to print human readable field or not
 * @param formatControlCode Format Control Code. Valid values:
 * <p>
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>11</td><td>Standard Customer barcode</td></tr>
 *    <tr><td>87</td><td>Routing barcode</td></tr>
 *    <tr><td>45</td><td>Reply Paid barcode</td></tr>
 *    <tr><td>92</td><td>Redirection barcode</td></tr>
 *    <tr><td>59</td><td>Customer barcode 2</td></tr>
 *    <tr><td>62</td><td>Customer barcode 3</td></tr>
 *    <tr><td>44</td><td>Reserved</td></tr>
 * </table>
 * @param DPID 8-digit Delivery Point Identifier
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeAusPost4State:(NSString*)textString isReadable:(bool) readableText formatControlCode:(int)formatControlCode deliveryPtID:(int)DPID atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print a CODABLOCK barcode using the provided printing parameter values.
 * @param textString <p>Notes: <p> For CODABLOCK A: 0-9, A-Z,. * $ / + % and the space character. <p> For CODABLOCK E and F: All ASCII characters.
 * @param rowHeight Individual Row Height
 * @param codaBlockMode Codeblock mode: A,E, or F
 * @param generateCheckSum Specifies whether to generate and add checksum
 * @param rowsToEncode Number of rows to be encoded
 * @param charPerRow Number of characters per row
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeCODABLOCK:(NSString*)textString rowHeight:(int)rowHeight  codaBlockMode:(NSString*)codaBlockMode generateCheckSum:(bool)generateCheckSum encodedRows:(int)rowsToEncode rowCharacters:(int)charPerRow atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print a TCIF Linked 3 of 9 Barcode
 * @param serialNumber Up to 25 alphanumeric serial character to be encoded in the MicroPDF417 symbol
 * @param barCodeHeight Height of Code 39
 * @param ECINumber Six Digit ECI Number. If input is less than 6 dgits(e.g 1,10,200, etc..), then it will automatically be converted to 6-digit format(eg. 000200)
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeTLC39:(NSString*)serialNumber barCodeHeight:(int)barCodeHeight ECINumber:(int)ECINumber atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print a MicroPDF417 2-D bar code holding large amounts of data in small area
 * @param textString Data to be encoded
 * @param dataCols Number Columns. Valid values: 1-4
 * @param rowIndex Row/Error Correction Index. Valid values: 1-10
 * @param byteCompactMode Specifies to use Byte Compaction Mode, true = best binary data compression
 * @param macroCharSub Specifies to use Macro Character Substitution, true = disable
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCodeMicroPDF417:(NSString*)textString columnNumber:(int)dataCols rowIndex:(int)rowIndex useCompactMode:(bool)byteCompactMode useMacroSub:(bool) macroCharSub atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This function will print the provided text to the document as a barcode using the font specified and the provided printing parameter values.
 * @param barcodeID ID of the barcode font.
 * <p> Valid values: <p> A to Z(bc with human readable text), <p> a to z (bc with non-human readable text)(except P,u,v,z), or <p> Wna:(n= 1-9, a = a-s/A-S, No n is an implied 1)
 * @param textString Text to print as barcode.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters ParametersDPL object specifies any printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeBarCode:(NSString*)barcodeID  textToPrint:(NSString*)textString atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This will cause the specified image that is already stored on the printer to be printed at the given location.
 * @param imageName Name of image stored on printer.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeImageStored:(NSString*)imageName atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This will cause the printer to print the specified image file at the given location.
 * @param imagePath File name or path of image to be printed.
 * @param imageType Format of the image to be printed.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any printing parameter values you wish to alter for the printing of this item
 */
-(void) writeImageFromPath:(NSString*)imagePath imageType:(ImageType)imageType atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This will cause the printer to print the specified image object at the given location.
 * @param imageObject Image object to be printed.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeImageFromObject: (UIImage*)imageObject atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;
/**
 * This will cause the printer to print the specified image data at the given location.
 * @param imageData Image data to be printed.
 * @param imageType Format of the image to be printed.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeImage: (NSData*)imageData imageType:(ImageType)imageType atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This will cause the printer to print the specified PDF document at the given location
 * @param pdf PDF document object to be printed
 * @param dotsWide Printhead width of printer. Usually 384 for 2 inch
 * printers, 576 for 3 inch and 832 for 4 inch.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) writePDF:(CGPDFDocumentRef)pdf withPrintheadWidth:(unsigned int)dotsWide atRow: (int)row atCol: (int)col;

/**
 * This will cause the printer to print the specified PDF document at the given location
 * @param pdf PDF document object to be printed
 * @param dotsWide Printhead width of printer. Usually 384 for 2 inch
 * printers, 576 for 3 inch and 832 for 4 inch.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any
 * printing parameter values you wish to alter for the printing of this item.
 */
-(void) writePDF:(CGPDFDocumentRef)pdf withPrintheadWidth:(unsigned int)dotsWide atRow: (int)row atCol: (int)col withParameters: (ParametersDPL*) parameters;

/**
 * This will cause the printer to print the specified line at the given location.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param height height of the line
 * @param width Width of the line
 */
-(void) writeLine:(int)row atColumn:(int)col withHeight:(int)height withWidth:(int)width;

/**
 * This will cause the printer to print the specified box at the given location.
 * @param row Row position, starting from zero, to start printing at
 * @param col Column position, starting from zero, to start printing at
 * @param height height of the box
 * @param width width of the box
 * @param topBottomThickness The thickness of the top and bottom edges
 * @param sideThickness The thickness of the sides
 */
-(void) writeBox:(int)row atColumn:(int)col withHeight:(int)height withWidth:(int)width topBottomThickness:(int)topBottomThickness sideThickness:(int)sideThickness;
/**
 * This will cause the printer to print the specified triangle at the given location.
 * @param fillPattern Fill pattern of the specified triangle
 * <p> Valid Values:
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>No Patterns</td></tr>
 *    <tr><td>1</td><td>Solid Black</td></tr>
 *    <tr><td>2</td><td>6% Black</td></tr>
 *    <tr><td>3</td><td>12% Black</td></tr>
 *    <tr><td>4</td><td>25% Black</td></tr>
 *    <tr><td>5</td><td>38% Black</td></tr>
 *    <tr><td>6</td><td>50% Black</td></tr>
 *    <tr><td>7</td><td>Diamonds</td></tr>
 *    <tr><td>8</td><td>Circles</td></tr>
 *    <tr><td>9</td><td>Right Diagonal Lines</td></tr>
 *    <tr><td>10</td><td>Left Diagonal Lines</td></tr>
 *    <tr><td>11</td><td>Grid</td></tr>
 * </table>
 * @param rowPt1 Row position of the first point of triangle
 * @param colPt1 Column position of the first point of the triangle
 * @param rowPt2 Row position of the second point of triangle
 * @param colPt2 Column position of the second point of the triangle
 * @param rowPt3 Row position of the third point of triangle
 * @param colPt3 Column position of the third point of the triangle
 */
-(void) writeTriangle:(int)fillPattern atRowPt1:(int)rowPt1 atColPt1:(int)colPt1 atRowPt2:(int)rowPt2 atColPt2:(int)colPt2 atRowPt3:(int)rowPt3 atColPt3:(int)colPt3;

/**
 * This will cause the printer to print the specified rectangle at the given location.
 * @param fillPattern Fill pattern of the specified rectangle
 * <p> Valid Values:
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>No Patterns</td></tr>
 *    <tr><td>1</td><td>Solid Black</td></tr>
 *    <tr><td>2</td><td>6% Black</td></tr>
 *    <tr><td>3</td><td>12% Black</td></tr>
 *    <tr><td>4</td><td>25% Black</td></tr>
 *    <tr><td>5</td><td>38% Black</td></tr>
 *    <tr><td>6</td><td>50% Black</td></tr>
 *    <tr><td>7</td><td>Diamonds</td></tr>
 *    <tr><td>8</td><td>Circles</td></tr>
 *    <tr><td>9</td><td>Right Diagonal Lines</td></tr>
 *    <tr><td>10</td><td>Left Diagonal Lines</td></tr>
 *    <tr><td>11</td><td>Grid</td></tr>
 * </table>
 * @param rowPt1 Row position of the first point of rectangle
 * @param colPt1 Column position of the first point of the rectangle
 * @param rowPt2 Row position of the second point of rectangle
 * @param colPt2 Column position of the second point of the rectangle
 * @param rowPt3 Row position of the third point of rectangle
 * @param colPt3 Column position of the third point of the rectangle
 * @param rowPt4 Row position of the fourth point of rectangle
 * @param colPt4 Column position of the fourth point of the rectangle
 */
-(void) writeRectangle:(int)fillPattern atRowPt1:(int)rowPt1 atColPt1:(int)colPt1 atRowPt2:(int)rowPt2 atColPt2:(int)colPt2 atRowPt3:(int)rowPt3 atColPt3:(int)colPt3 atRowPt4:(int)rowPt4 atColPt4:(int)colPt4;
/**
 * This will cause the printer to print the specified circle at the given location.
 * @param fillPattern Fill pattern of the specified circle
 * <p> Valid Values:
 * <table border=1>
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>No Patterns</td></tr>
 *    <tr><td>1</td><td>Solid Black</td></tr>
 *    <tr><td>2</td><td>6% Black</td></tr>
 *    <tr><td>3</td><td>12% Black</td></tr>
 *    <tr><td>4</td><td>25% Black</td></tr>
 *    <tr><td>5</td><td>38% Black</td></tr>
 *    <tr><td>6</td><td>50% Black</td></tr>
 *    <tr><td>7</td><td>Diamonds</td></tr>
 *    <tr><td>8</td><td>Circles</td></tr>
 *    <tr><td>9</td><td>Right Diagonal Lines</td></tr>
 *    <tr><td>10</td><td>Left Diagonal Lines</td></tr>
 *    <tr><td>11</td><td>Grid</td></tr>
 * </table>
 * @param centerRow Row position of the center point of circle
 * @param centerCol Column position of the center point of circle
 * @param radius Radius of circle
 */
-(void) writeCircle:(int)fillPattern centerRow:(int)centerRow centerCol:(int)centerCol radius:(int)radius;

/** 
 * This will cause the printer to print the specified graphic object at the given location.
 * @param graphicData graphic data to print.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 * @param parameters This ParametersDPL object specifies any printing parameter values you wish to alter for the printing of this item.
 */
-(void) writeGraphics:(NSString*)graphicData atRow:(int)row atColumn:(int)col paramObject: (ParametersDPL*) parameters;

/**
 * This will return the print job of the image to be sent to the printer
 *  @return the image print job
 */
-(NSData *)getImageDocumentData __attribute__((deprecated));

@end
