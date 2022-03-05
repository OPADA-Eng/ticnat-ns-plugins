//
// Parameters.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>


/**
 * This base class represents the general parameters that can be used to
 * alter the printing characteristics when 'printing' to a Document
 * object.
 * <br>
 * Printing characteristics are 'local' to each print command
 * they are passed into.  To have global settings the same parameters
 * object can be passed into each write call to the Document object.
 */
@interface Parameters : NSObject {

	/** Should the entire image be printed in 'reverse video'. */
	BOOL isInverse;

	/** Integer value to scale all printing horizontally. */
	int horizontalMultiplier;

	/** Integer value to scale all printing vertically. */
	int verticalMultiplier;

	/** Encoding type of the text */
	NSStringEncoding textEncoding;
}

/** Should the entire image be printed in 'reverse video'. */
@property BOOL isInverse;

/** Integer value to scale all printing horizontally. */
@property int horizontalMultiplier;

/** Integer value to scale all printing vertically. */
@property int verticalMultiplier;

/** Encoding type of the text */
@property NSStringEncoding textEncoding;

@end
