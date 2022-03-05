//
//  DocumentExPCL_PP.h
//  ONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 9/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "Document.h"
#import "ParametersExPCL_PP.h"

/**
 * Direct thermal paper width in inches.
 */
typedef NS_ENUM(NSInteger, PaperWidth) {
	/** 2 inches (384 dots) */
	PaperWidth_384 = 384,
    
    /** 3 inches (576 dots) */
    PaperWidth_576 = 576,
    
    /** 4 inches (832 dots) */
    PaperWidth_832 = 832
};

/**
 * This class is use to build a print job for ExPCL language, Page Print Mode.
 * @discussion These functions can be used to 'build' a document using abstract
 * methods instead of the raw 'ExPCL Page Print' mode commands.  The DocumentExPCL_PP
 * class is designed when users want to print in page print mode with an ExPCL language printer (Apex Series).
 */
@interface DocumentExPCL_PP : Document {
    
	/**
	 * The default font is specified in the construction of this object and
	 * is used when a font is not specified by the optional 'Parameters'
	 */
	int defaultFont;
    
    /** Paper width in dots. */
	PaperWidth paperWidth;
	
	/** The maximum number of horizontal dot-lines to allow to be printed. */
	int pageWidth;
    
	/** The maximum number of vertical dot-lines to allow to be printed. */
	int pageHeight;
    
    /** Left margin - start point (x) for the form or label. */
	int leftMargin;
    
	/** Top margin - start point (y) for the form or label. */
	int topMargin;
    
}
/**
 * The default font is specified in the construction of this object and
 * is used when a font is not specified by the optional 'Parameters'
 */
@property int defaultFont;

/** Paper width in dots. */
@property PaperWidth paperWidth;

/** The maximum number of horizontal dot-lines to allow to be printed. */
@property int pageWidth;

/** The maximum number of vertical dot-lines to allow to be printed. */
@property int pageHeight;

/** Left margin - start point (x) for the form or label. */
@property int leftMargin;

/** Top margin - start point (y) for the form or label. */
@property int topMargin;

/**
 * This constructor takes the paper width in dots to use when none is specified.
 *
 * @param width Width of the paper, measured in dots.
 */
-(id)initWithPaperWidth: (PaperWidth) width;

/**
 * This function is used to define the valid drawing area for a label or form.
 *
 * @param width Width of the form, measured in dots.
 * @param height Height of the form, measured in dots.
 */
-(void) setPageSizeWithWidth: (int) width withHeight: (int) height;

/**
 * This function sets the left margin to lm and the top margin to tm. 
 * The margin is then used as a start point (0, 0) for the form or label.
 *
 * @param lm Left margin.
 * @param tm Top margin.
 */
-(void) setMarginsWithLeft: (int) lm withTop: (int) tm;

/**
 * This function will print the provided text to the document object
 * using the default printing parameter values.
 *
 * @param x position, starting from zero, to start printing at.
 * @param y position, starting from zero, to start printing at.
 * @param color Specifies text color: 0 = white, 1 = black.
 * @param angle Specifies text direction.
 * @param text This is the text you wish to print.
 */
-(void) drawTextX: (int) x Y: (int) y color: (BOOL) color angle: (RotationAngle) angle string: (NSString *) text;

/**
 * This function will print the provided text to the document object
 * using the specified printing parameter values. It is optimized for speed
 * and only works with proportional fonts.
 *
 * @param x position, starting from zero, to start printing at.
 * @param y position, starting from zero, to start printing at.
 * @param color Specifies text color: 0 = white, 1 = black.
 * @param angle Specifies text direction.
 * @param font Specifies proportional font index.
 * @param text This is the text you wish to print.
 */
-(void) quickDrawTextX: (int) x Y: (int) y color: (BOOL) color angle: (RotationAngle) angle font: (int) font string: (NSString *) text;

/**
 * This function will print the provided text to the document object
 * using the default printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) writeText: (NSString *) text atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document object
 * using the default printing parameter values. It is optimized for speed
 * and only works with proportional fonts.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing at.
 * @param col Column position, starting from zero, to start printing at.
 */
-(void) quickWriteText: (NSString *) text atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document object
 * using the provided printing parameter values.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeText: (NSString *) text atRow: (int) row atColumn: (int) col withParameters: (ParametersExPCL_PP *) parameters;

/**
 * This function will print the provided text to the document object
 * using the provided printing parameter values. It is optimized for speed
 * and only works with proportional fonts.
 *
 * @param text This is the text you wish to print.
 * @param row Row position, starting from zero, to start printing
 * at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) quickWriteText: (NSString *) text atRow: (int) row atColumn: (int) col withParameters: (ParametersExPCL_PP *) parameters;

/**
 * Draws a rectangle object at any coordinate on the canvas.
 * DrawRectangle command draws either a hollow or a filled rectangle.
 * (x1, y1) and (x2, y2) specify the two diagonally opposing corners.
 * All measurements are in dots.
 *
 * @param x1 Top left corner coordinates (x1)
 * @param y1 Top left corner coordinates (y1)
 * @param x2 Bottom right corner coordinates (x2)
 * @param y2 Bottom right corner coordinates (y2)
 * @param color Specifies the line or fill color: 0 = white, 1 = black
 * The user may draw a white rectangle on a black background only by
 * specifying color parameter = 0.
 * @param width Specifies the line width of a hollow rectangle.
 * A zero-width results in a filled rectangle
 */
-(void) drawRectangleX1: (int) x1 Y1: (int) y1 X2: (int) x2 Y2: (int) y2 color: (BOOL) color width: (int) width;

/**
  * This will print a rectangle at the top left row of canvas using default parameter values..
 * (x1, y1) and (x2, y2) specify the two diagonally opposing corners.
 * All measurements are in dots.
 *
 * @param row1 Top left corner coordinates (x1)
 * @param col1 Top left corner coordinates (y1)
 * @param row2 Bottom right corner coordinates (x2)
 * @param col2 Bottom right corner coordinates (y2)
 */
-(void) writeRectangleAtTopLeftRow: (int) row1 atTopLeftColumn: (int) col1 atBottomRightRow: (int) row2 atBottomRightColumn: (int) col2;

/**
 * This will print a rectangle at the top left row of canvas using specified parameter values..
 * (x1, y1) and (x2, y2) specify the two diagonally opposing corners.
 * All measurements are in dots.
 *
 * @param row1 Top left corner coordinates (x1)
 * @param col1 Top left corner coordinates (y1)
 * @param row2 Bottom right corner coordinates (x2)
 * @param col2 Bottom right corner coordinates (y2)
 * @param parameters This ParametersExPCL_PP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeRectangleAtTopLeftRow: (int) row1 atTopLeftColumn: (int) col1 atBottomRightRow: (int) row2 atBottomRightColumn: (int) col2 withParameters: (ParametersExPCL_PP *) parameters;

/**
 * This will print a horizontal line to the document at the given
 * position with the given length and width using default parameter values.
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
 * position with the given length and width using specified parameter values.
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
-(void) writeHorizontalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness withParameters: (ParametersExPCL_PP *) parameters;

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
-(void) writeVerticalLine: (int) row atColumn: (int) col withLength: (int) length withThickness: (int) thickness withParameters: (ParametersExPCL_PP *) parameters;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the default printing parameter
 * values.
 * @param x position, starting from zero, to start printing at.
 * @param y position, starting from zero, to start printing at.
 * @param angle Values 0, 1, 2, or 3 allow the barcode to be
 * rotated 0, 90, 180, or 270 degrees respectively.
 * @param annotate Setting annotate to 1 allows human-readable text to appear.
 * ‘0’ disables this function.
 * @param type Indicates the barcode type to be printed.
 * @param height Sets the height of barcode in units of dots
 * @param text Text to print as barcode.
 */
-(void) drawBarcodeX: (int) x Y: (int) y angle: (RotationAngle) angle annotate: (BOOL) annotate type: (BarcodeExPCL_PP) type height: (unsigned char) height data: (NSString *) text;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the default printing parameter
 * values.
 *
 * @param type barcode type
 * @param barcodeFont Index of the barcode font.
 * @param text Text to print as barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 */
-(void) writeBarCode: (BarcodeExPCL_PP) type withFont: (int) barcodeFont withText: (NSString *) text atRow: (int) row atColumn: (int) col;

/**
 * This function will print the provided text to the document as a
 * barcode using the font specified and the provided printing parameter
 * values.
 *
* @param type barcode type
 * @param barcodeFont Index of the barcode font.
 * @param text Text to print as barcode.
 * @param row Row position, starting from zero, to start
 * printing at.
 * @param col Column position, starting from zero, to start
 * printing at.
 * @param parameters This ParametersEZ object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeBarCode: (BarcodeExPCL_PP) type withFont: (int) barcodeFont withText: (NSString *) text atRow: (int) row atColumn: (int) col withParameters: (ParametersExPCL_PP *) parameters;

@end
