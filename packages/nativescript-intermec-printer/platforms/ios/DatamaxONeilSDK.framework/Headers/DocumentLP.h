//
// DocumentLP.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Document.h"
#import "ParametersLP.h"

/**
 * The character set used in fonts where some of the glyphs can
 * be different depending on which set you are using.
 */
typedef NS_ENUM(NSInteger, CharacterSet) {
	/** This uses the USA characters in a CP437 224 character font. */
	CharacterSetUSA = 0,

	/** This uses the French characters in a CP437 224 character font. */
	CharacterSetFrance,

	/** This uses the German characters in a CP437 224 character font. */
	CharacterSetGermany,

	/** This uses the British characters in a CP437 224 character font. */
	CharacterSetUK,

	/** This uses the Danish characters in a CP437 224 character font. */
	CharacterSetDenmark,

	/** This uses the Swedish characters in a CP437224 character font. */
	CharacterSetSweden,

	/** This uses the Italian characters in a CP437 224 character font. */
	CharacterSetItaly,

	/** This uses the Spanish characters in a CP437 224 character font. */
	CharacterSetSpain
};


/**
 * This class is use to build a print job for EZ language, Line Print mode.
 * @discussion These functions can be used to 'build' a document using abstract
 * methods instead of the raw 'LP Print' mode commands.  The DocumentLP
 * class is designed when users want to print in line print mode , or
 * to print raw graphic items with an EZ language printer.
 */
@interface DocumentLP : Document {

	/**
	 * The default font is specified in the construction of this object and
	 * is used when a font is not specified by the optional 'Parameters'
	 */
	unsigned char defaultFont;
	
	/** The number of additional dot-lines between printed rows. */
	unsigned char lineSpacing;

	/**
	 *  This is the number of text lines per 'page'.  This value is used when
	 *  the advanceToNextPage function is called.  The total height is
	 *  based on the currently selected font.
	 */
	unsigned char pageLength;

	/** CP437 224 character font remapping value */
	CharacterSet characterRemap;
}

/**
 * The default font is specified in the construction of this object and
 * is used when a font is not specified by the optional 'Parameters'
 */
@property unsigned char defaultFont;

/** The number of additional dot-lines between printed rows. */
@property unsigned char lineSpacing;

/**
 *  This is the number of text lines per 'page'.  This value is used when
 *  the advanceToNextPage function is called.  The total height is
 *  based on the currently selected font.
 */
@property unsigned char pageLength;

/** CP437 224 character font remapping value */
@property CharacterSet characterRemap;

/**
 * This constructor will create a blank DocumentLP object and set the
 * default font to use to the one specified.
 *  @param fontName Name of the one character font.
 */
-(id)initWithOneCharacterFont: (unsigned char) fontName;

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
 * @param parameters This ParametersLP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeText: (NSString*) text withParameters: (ParametersLP *) parameters;

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
 * @param parameters This ParametersLP object specifies any
 * printing parameter values you wish to alter for the printing
 * of this item.
 */
-(void) writeTextPartial: (NSString*) text withParameters: (ParametersLP *) parameters;

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
 * @param dotsWide Printhead width of printer.  Usually 384 for 2 inch
 * printers, 576 for 3 inch and 832 for 4 inch.
 */
-(void) writePDF:(CGPDFDocumentRef)pdf withPrintheadWidth:(unsigned int) dotsWide;

/**
 * This command will causes a form feed to occur from the papers current
 * location.  The size of a form can be set with the PageLength
 * function.
 */
-(void) advanceToNextPage;

/**
 * This will advance the paper to the next queue mark and an additional
 * number of dot-lines as specified by the input parameter.
 *
 * @param additionalRows Number of dot-lines to move beyond the
 * queue mark.  Each dot-line is 1/8mm high.
 */
-(void) advanceToQMark: (unsigned short) additionalRows;

@end
