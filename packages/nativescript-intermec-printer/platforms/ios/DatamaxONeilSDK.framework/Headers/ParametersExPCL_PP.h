//
//  ParametersExPCL_PP.h
//  ONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 9/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "Parameters.h"

/** Value for rotating the printing by.  Rotations are counter-clockwise. */
typedef NS_ENUM(NSInteger, RotationAngle) {
	/** 
     * Unrotated
     * Prints text horizontally from left to right.
     */
	RotationAngle_0,
    
	/** 
     * Rotated 90 degrees counter-clockwise
     * Prints text vertically in the upward direction
     */
	RotationAngle_90,
    
	/** 
     * Rotated 180 degrees counter-clockwise 
     * Prints text horizontally from right to left
     */
	RotationAngle_180,
    
	/** 
     * Rotated 270 degrees counter-clockwise
     * Prints text vertically in the downward direction.
     */
	RotationAngle_270
};

/** Value for barcode type to be printed. */
typedef NS_ENUM(NSInteger, BarcodeExPCL_PP) {
	/** Code 39 */
	BarcodeExPCL_PP_Code39 = 1,
    
	/** Code 128 */
	BarcodeExPCL_PP_Code128,
    
    /** Interleaved 2 of 5 */
	BarcodeExPCL_PP_Interleaved2of5,
    
	/** UPC */
	BarcodeExPCL_PP_UPC,
    
	/** Codabar */
	BarcodeExPCL_PP_Codabar
};

/**
 * This class represents the general parameters that can be used to alter
 * the printing characteristics when 'printing' to a DocumentExPCL_PP object.
 * <br>
 * Printing characteristics are 'local' to each print command they are
 * passed into.  To have global settings the same parameters object can
 * be passed into each write call to the Document object.
 */
@interface ParametersExPCL_PP : Parameters {
	
	/** Value for rotating the printing by. */
	RotationAngle rotate;
    
    /** Specifies text, line or fill color: 0 = white, 1= black. */
    // BOOL isWhiteOnBlack; // same as isInverse
    
    /** Should the text be printed with a bold attribute. */
    BOOL isBold;
    
    /** Should the text be printed with an underline attribute. */
    BOOL isUnderline;
    
    /** Should the text be scaled by a factor of two(2) vertically. */
    //BOOL isDoubleHeight; // same as verticalMultiplier with muliplier = 2
    
    /** Should the text be scaled by a factor of two(2) horizontally. */
    //BOOL isDoubleWidth; // same as horizontalMultiplier with muliplier = 2
    
    /** Font to print with. */
    int fontIndex;
    
    /** Line thickness value of a hollow rectangle. A zero-thickness results in a filled rectangle. */
    int lineThickness;
    
    /** Should the barcode be printed with human-readable text. */
    BOOL isAnnotate;
    
    /** Value for barcode type to be printed. */
	BarcodeExPCL_PP type;
    
    /** Height value of barcode in units of dots */
    unsigned char barcodeHeight;
    
}
/** Value for rotating the printing by. */
@property RotationAngle rotate;

 /** Should the text be printed with a bold attribute. */
@property BarcodeExPCL_PP type;
//@property BOOL isWhiteOnBlack; // same as isInverse

/** Should the text be printed with a bold attribute. */
@property BOOL isBold;

/** Should the text be printed with an underline attribute. */
@property BOOL isUnderline;

/** Should the barcode be printed with human-readable text. */
@property BOOL isAnnotate;

/** Font to print with. */
@property int fontIndex;

/** Line thickness value of a hollow rectangle. A zero-thickness results in a filled rectangle. */
@property int lineThickness;

/** Height value of barcode in units of dots */
@property unsigned char barcodeHeight;

@end
