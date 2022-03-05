//
// Document.h
// ONeilSDK_iPhone
//
// Created by Quang Phan
// Copyright 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>

/**
 * This is the base class for the O'Neil printer document objects. Document
 * objects hold your 'print commands' that you can send off to the PrinterONeil
 * object for printing. While the documents inner-workings are quite different
 * between the DocumentDPL, DocumentExPCL_LP, DocumentExPCL_PP, DocumentEZ and 
 * DocumentLP classes, giving them a single base class will allow you to group 
 * them together in a single collection so they can be sent to the printer in 
 * one large batch.
 */
@interface Document : NSObject {

	/** This stream holds the rendered document in the printer's language */
	NSMutableData* documentData;

	/** ESC Character */
	NSData* dataESC;

	/** EOL Charactes */
	NSData* dataEOL;
    
    /** GS Character */
	NSData* dataGS;
    
	/** RS Character */
	NSData* dataRS;
    
    /** EOT character */
    NSData* dataEOT;
}

/**
 * This method is used to clear or remove content of the document object.
 */
-(void)clear;

/**
 * This method will return the print job to be sent to the printer
 */
-(NSData *)getDocumentData;

/**
 * This function will print the provided data as is to the document object.  All properties set in the Document object
 * will be ignored.
 * @param data Data to be printed
 */
-(void)writeBytes: (NSData*) data;

@end
