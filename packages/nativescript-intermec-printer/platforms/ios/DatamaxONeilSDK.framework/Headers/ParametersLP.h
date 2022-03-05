//
// ParametersLP.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Parameters.h"


/**
 * This class represents the general parameters that can be used to alter
 * the printing characteristics when 'printing' to a DocumentLP object.
 * <br>
 * Printing characteristics are 'local' to each print command they are
 * passed into.  To have global settings the same parameters object can
 * be passed into each write call to the Document object.
 */
@interface ParametersLP : Parameters {

	/** Name of the font to print with. */
	unsigned char fontName;
}
/** Name of the font to print with. */
@property unsigned char fontName;

@end
