//
//  DocumentExPCL_LP.h
//  ONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 9/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//
#import <UIKit/UIKit.h>
#import "Document.h"
#import "ParametersExPCL_LP.h"

/**
 * The character set used in fonts where some of the glyphs can
 * be different depending on which set you are using.
 */
typedef NS_ENUM(NSInteger, CharacterSetExPCL) {
	/** This uses the USA characters in a CP437 224 character font. */
	CharacterSetInternational = 1,
    
	/** This uses the PC Line Draw characters in a CP437 224 character font. */
	CharacterSetPCLineDraw
};

/**
 * This class is use to build a print job for ExPCL language, Line Print mode.
 * @discussion These functions can be used to 'build' a document using abstract
 * methods instead of the raw 'ExPCL Line Print' mode commands.  The DocumentExPCL_LP
 * class is designed when users want to print in line print mode with an ExPCL language printer (Apex Series).
 */
@interface DocumentExPCL_LP : Document {
    
	/**
	 * The default font is specified in the construction of this object and
	 * is used when a font is not specified by the optional 'Parameters'
	 */
	int defaultFont;
	
	/** The number of additional dot-lines between printed rows. */
	unsigned char lineSpacing;
    
	/**
	 *  This is the number of dot lines per 'page'.  This value is used when
	 *  the advanceToNextPage function is called.
	 */
	unsigned short pageLength;
    
	/** CP437 224 character font remapping value */
	CharacterSetExPCL characterRemap;
    
//    /** Name of the printer command language to print with. */
//    //unsigned char printerCommandLanguage;
//    
//    /** Font to print with. */
//    //int fontIndex;
  
    /** Integer value to set print contrast level. */
    int printContrastLevel;
    
//    /**
//	 *  This is the number of dot lines per 'form'.  This value is used when
//	 *  the advanceToNextPage function is called.
//	 */
//    //unsigned short formFeed; // same as pageLength
    
    /**
     * The vertical tab width property will advance the cursor vertically by the number
     * of print dots specified. The default value for this parameter is 203.
     */
    unsigned char verticalTabHeight;
    
    /**
     * The horizontal tab width property will advance the cursor horizontally by the number
     * of print dots specified. The default value for this parameter is 100.
     */
    unsigned char horizontalTabWidth;
    
    /**
     * The number of consecutive black dot lines that the printer can advance paper before
     * the sensor detects an out of paper error.
     */
    unsigned char sensorSensitivity;
    
    /**
     * The number of additional dot-lines to advance the paper by after a form or label has
     * been printed.
     */
    unsigned char paperPresenter;
    
    /** Integer values to configure the printer auto power down timer. */
    int autoPowerDownTimer;
}

/**
 * The default font is specified in the construction of this object and
 * is used when a font is not specified by the optional 'Parameters'
 */
@property int defaultFont;

/** The number of additional dot-lines between printed rows. */
@property unsigned char lineSpacing;

/**
 *  This is the number of dot lines per 'page'.  This value is used when
 *  the advanceToNextPage function is called.
 */
@property unsigned short pageLength;

/** CP437 224 character font remapping value */
@property CharacterSetExPCL characterRemap;

///** Name of the printer command language to print with. */
////@property unsigned char printerCommandLanguage;
////@property int fontIndex;

/** Integer value to set print contrast level. */
@property int printContrastLevel;
//@property unsigned char lineSpacing;
//@property short formFeed; // same as pageLength

/**
 * The vertical tab width property will advance the cursor vertically by the number
 * of print dots specified. The default value for this parameter is 203.
 */
@property unsigned char verticalTabHeight;

/**
 * The horizontal tab width property will advance the cursor horizontally by the number
 * of print dots specified. The default value for this parameter is 100.
 */
@property unsigned char horizontalTabWidth;

/**
 * The number of consecutive black dot lines that the printer can advance paper before
 * the sensor detects an out of paper error.
 */
@property unsigned char sensorSensitivity;

/**
 * The number of additional dot-lines to advance the paper by after a form or label has
 * been printed.
 */
@property unsigned char paperPresenter;

/** Integer values to configure the printer auto power down timer. NOTE: DIP SWITCH 8 must be on to enable auto power down timer*/
@property int autoPowerDownTimer;

/**
 * This constructor will create a blank DocumentExPCL_LP object and set the
 * default font to use to the one specified.
 *  @param fontIndex font index to initialize with
 *
 *  @return documentExPcl_LP object with font index specified
 */
-(id)initWithFont: (int) fontIndex;

/**
 * This function will print the provided text, appending a line
 * feed/carriage return, to the document object using the default
 * printing parameter values.
 *
 * @param text This is the text you wish to print.
 */
-(void) writeText: (NSString*) text;

/**
 * This function will print the provided text, appending a line
 * feed/carriage return, to the document object using the provided
 * printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param parameters This ParametersExPCL_LP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeText: (NSString*) text withParameters: (ParametersExPCL_LP *) parameters;

/**
 * This function will print the provided text to the document object
 * using the default printing parameter values.
 *
 * @param text This is the text you wish to print.
 */
-(void) writeTextPartial: (NSString*) text;

/**
 * This function will print the provided text to the document object
 * using the provided printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param parameters This ParametersExPCL_LP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeTextPartial: (NSString*) text withParameters: (ParametersExPCL_LP *) parameters;

/**
 * This will cause the image specified to be printed.  Images will be
 * expanded to occupy the entire width of the printer, so the correct
 * current width of the printer must be specified.  Images that are too
 * wide will be cropped, and images that are too narrow will be padded
 * on the right.
 *
 * @param image Image to print.
 * @param dotsWide Width of the print head in dots. Usually 384 for 2 inch
 * printers, 576 for 3 inch and 832 for 4 inch.
 */
-(void) writeImage: (UIImage*) image withPrintheadWidth: (unsigned int) dotsWide;

/**
 * This will cause the printer to print the specified PDF document at the given location
 * @param pdf PDF document object to be printed
 * @param dotsWide Printhead width of printer. Usually 384 for 2 inch
 * printers, 576 for 3 inch and 832 for 4 inch.
 */
-(void) writePDF:(CGPDFDocumentRef)pdf withPrintheadWidth:(unsigned int) dotsWide;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the default printing parameter
 * values.
 *
 * @param type Type of the barcode symbology.
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param height Height of the barcode.
 */
-(void) writeBarcode: (BarcodeExPCL_LP) type withText: (NSString *) text withAnnotation: (BOOL) annotate withHeight: (unsigned char) height;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the provided printing parameter
 * values.
 *
 * @param type Type of the barcode symbology.
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param height Height of the barcode.
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarcode: (BarcodeExPCL_LP) type withText: (NSString *) text withAnnotation: (BOOL) annotate withHeight: (unsigned char) height withParameters: (ParametersExPCL_LP *) parameters;

/**
 * This function will print the provided text to the document as a
 * GS1DataBar barcode using the font specified and the default printing parameter
 * values.
 *
 * @param type Type of the barcode symbology.
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param thikness Pixels per X.
 * @param xUndercut X pixels to undercut.
 * @param yUndercut Y pixels to undercut.
 * @param rowHeight Separator row height.
 */
-(void) writeBarcodeGS1DataBar: (GS1DataBar) type
                      withText: (NSString *) text
                withAnnotation: (BOOL) annotate
                withPixelsPerX: (unsigned char) thikness
         withXPixelsToUndercut: (unsigned char) xUndercut
         withYPixelsToUndercut: (unsigned char) yUndercut
        withSeparatorRowHeight: (unsigned char) rowHeight;

/**
 * This function will print the provided text to the document as a
 * GS1DataBar barcode using the font specified and the provided printing parameter
 * values.
 *
 * @param type Type of the barcode symbology.
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param thikness Pixels per X.
 * @param xUndercut X pixels to undercut.
 * @param yUndercut Y pixels to undercut.
 * @param rowHeight Separator row height.
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarcodeGS1DataBar: (GS1DataBar) type
                      withText: (NSString *) text
                withAnnotation: (BOOL) annotate
                withPixelsPerX: (unsigned char) thikness
         withXPixelsToUndercut: (unsigned char) xUndercut
         withYPixelsToUndercut: (unsigned char) yUndercut
        withSeparatorRowHeight: (unsigned char) rowHeight
                withParameters: (ParametersExPCL_LP *) parameters;

/**
 * This function will print the provided text to the document as a
 * QRCode barcode using the font specified and the default printing parameter
 * values.
 *
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param model QRCode barcode model.
 * @param correctionLevel Error correction level.
 * @param pixelMultiplier Pixel multiplier.
 */
-(void) writeBarcodeQRCode: (NSString *) text
            withAnnotation: (BOOL) annotate
                 withModel: (int) model
  withErrorCorrectionLevel: (unsigned char) correctionLevel
       withPixelMultiplier: (int) pixelMultiplier;

/**
 * This function will print the provided text to the document as a
 * QRCode barcode using the font specified and the provided printing parameter
 * values.
 *
 * @param text Text to print as barcode.
 * @param annotate Human readable or not.
 * @param model QRCode barcode model.
 * @param correctionLevel Error correction level.
 * @param pixelMultiplier Pixel multiplier.
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarcodeQRCode: (NSString *) text
            withAnnotation: (BOOL) annotate
                 withModel: (int) model
  withErrorCorrectionLevel: (unsigned char) correctionLevel
       withPixelMultiplier: (int) pixelMultiplier
            withParameters: (ParametersExPCL_LP *) parameters;

/**
* This function will print the provided text to the document as a
* PDF417 2D barcode using the default printing parameter values.
*
* @param text Text to print as PDF417 2D barcode.
* @param redundancyLevel This will set the number of redundant
* code words used to protect against data loss/corruption.  The
* typical value is 1 which would result in 4 code words.  Other values
* are 2 giving you 8 code words, 3 giving you 16 code words up to 8
* giving you 512 code words.
*/
-(void) writeBarcodePDF417: (NSString *) text withRedundancyLevel: (int) redundancyLevel;

/**
 * This function will print the provided text to the document as a
 * PDF417 2D barcode using the provided printing parameter values.
 *
 * @param text Text to print as PDF417 2D barcode.
 * @param redundancyLevel This will set the number of redundant
 * code words used to protect against data loss/corruption.  The
 * typical value is 1 which would result in 4 code words.  Other values
 * are 2 giving you 8 code words, 3 giving you 16 code words up to 8
 * giving you 512 code words.
 * @param parameters This ParametersExPCL_LP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarcodePDF417: (NSString *) text withRedundancyLevel: (int) redundancyLevel withParameters: (ParametersExPCL_LP *) parameters;

/**
 * This command will causes a form feed to occur from the papers current
 * location. The size of a form can be set with the PageLength
 * function.
 */
-(void) advanceToNextPage;

/**
 * This will advance the paper to the next queue mark and an additional
 * number of dot-lines as specified by the input parameter.
 *
 * @param additionalRows Number of dot-lines to move beyond the
 * queue mark. Each dot-line is 1/8mm high.
 */
-(void) advanceToQMark: (unsigned char) additionalRows;

/**
 * This will advance the paper by the amount of dot-lines specified
 *
 * @param dotlines Number of dotlines to advance. Each dot-line is 1/8mm high.
 */
-(void) advancePaper: (unsigned char) dotlines;

/**
 * This will retract the paper by the amount of dot-lines specified
 *
 * @param dotlines Number of dotlines to retract. Each dot-line is 1/8mm high.
 */
-(void) retractPaper: (unsigned char) dotlines;

@end
