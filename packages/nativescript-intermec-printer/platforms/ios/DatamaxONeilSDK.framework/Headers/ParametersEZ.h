//
// ParametersEZ.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Parameters.h"


/** Value for rotating the printing by.  Rotations are counter-clockwise. */
typedef NS_ENUM(NSInteger, Rotation) {
	/** Unrotated */
	RotationRotate_0 = 0,

	/** Rotated 90 degrees counter-clockwise */
	RotationRotate_90 = 90,

	/** Rotated 180 degrees counter-clockwise */
	RotationRotate_180 = 180,

	/** Rotated 20 degrees counter-clockwise */
	RotationRotate_270 = 270
};

/** Alignment to use when drawing text */
typedef NS_ENUM(NSInteger, Alignment) {
	/** Text will be aligned on the left starting at the x position specified. */
	AlignmentLeft,

	/** Text will be center aligned at the x position specified. */
	AlignmentCenter,

	/** Text will be aligned on the right starting at the x position specified. */
	AlignmentRight
};

/**
 * This class represents the general parameters that can be used to alter
 * the printing characteristics when 'printing' to a DocumentEZ object.
 * <br>
 * Printing characteristics are 'local' to each print command they are
 * passed into.  To have global settings the same parameters object can
 * be passed into each write call to the Document object.
 */
@interface ParametersEZ : Parameters {

	/** Name of the font to print with. */
	NSString* fontName;
	
	/** Value for rotating the printing by. */
	Rotation rotate;

	/** Alignment to use when drawing text */
	Alignment align;
    
    /** Bold attribute for fonts **/
    bool isBold;
}
/** Name of the font to print with. */
@property (copy) NSString* fontName;

/** Value for rotating the printing by. */
@property Rotation rotate;

/** Alignment to use when drawing text */
@property Alignment align;

/** Bold attribute for fonts **/
@property bool isBold;

@end
