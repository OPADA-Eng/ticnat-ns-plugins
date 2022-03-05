//
//  ParametersExPCL_LP.h
//  ONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 9/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "Parameters.h"

/** Value for barcode type to be printed. */
typedef NS_ENUM(NSInteger, BarcodeExPCL_LP) {
	/** Code 39 */
	BarcodeExPCL_LP_Code39 = 1,
    
	/** Code 128 */
	BarcodeExPCL_LP_Code128,
    
	/** Interleaved 2 of 5 */
	BarcodeExPCL_LP_Interleaved2of5,
    
	/** UPC */
	BarcodeExPCL_LP_UPC,
    
	/** Codabar */
	BarcodeExPCL_LP_Codabar,
    
    /** GS1 DataBar Barcode Family */
	BarcodeExPCL_LP_GS1DataBar,
    
    /** QRCode */
	BarcodeExPCL_LP_QRCode,
    
    /** PDF417 */
	BarcodeExPCL_LP_PDF417
};

/** Value for barcode type to be printed. */
typedef NS_ENUM(NSInteger, GS1DataBar) {
    /**
     * New GS1 DataBar
     */
    /** 1(SOH) RSS-14 GS1 DataBar Omnidirectional */
    GS1DataBarOmnidirectional = 0x01,
    
    /** 2(STX) RSS-14 Truncated GS1 DataBar Truncated */
    GS1DataBarTruncated = 0x02,
    
    /** 3(ETX) RSS-14 Stacked GS1 DataBar Stacked */
    GS1DataBarStacked = 0x03,
    
    /** 4(EOT) RSS-14 Stacked Omnidirectional GS1 DataBar Stacked Omnidirectional */
    GS1DataBarStackedOmnidirectional = 0x04,
    
    /** 5(ENQ) RSS Limited GS1 DataBar Limited */
    GS1DataBarLimited = 0x05,
    
    /** 6(ACK) RSS Expanded GS1 DataBar */
    GS1DataBarExpanded = 0x06,
    
    /**
     * Expanded
     */
    /** 7(BEL) UPC-A */
    UPCA = 0x07,
    
    /** 8(BS) UPC-E */
    UPCE = 0x08,
    
    /** 9(HT) EAN-13 */
    EAN13 = 0x09,
    
    /** 10(LF) EAN-8 */
    EAN8 = 0x0A,
    
    /** 11(VT) UCC/EAN-128 & CC-A/B */
    UCCEAN128CCAB = 0x0B,
    
    /** 12(FF) UCC/EAN-128 & CC-C */
    UCCEAN128CCC = 0x0C,
};

/**
 * This class represents the general parameters that can be used to alter
 * the printing characteristics when 'printing' to a DocumentExPCL_LP object.
 * <br>
 * Printing characteristics are 'local' to each print command they are
 * passed into. To have global settings the same parameters object can
 * be passed into each write call to the Document object.
 */
@interface ParametersExPCL_LP : Parameters {
    
    /** Index of the font to print with. */
    int fontIndex;
    
    /** Should the text be printed with an underline attribute. */
    BOOL isUnderline;
    
    /** Should the entire image be printed in 'reverse video'. */
    //BOOL isWhiteOnBlack; // same as isInverse
    
    /** Should the text be printed with a bold attribute. */
    BOOL isBold;
    
//    /** Should the text be scaled by a factor of two(2) horizontally. */
//    //BOOL isDoubleWidth; // same as horizontalMultiplier with muliplier = 2
//    
//    /** Should the text be scaled by a factor of two(2) vertically. */
//    //BOOL isDoubleHeight; // same as verticalMultiplier with muliplier = 2
//    
//    /** Should the printer sned an EOT(0x04) ASCII control char after every print job. */
//    //BOOL isSendEOT;
    
    /** Should the text be printed from right to left. */
    BOOL isRightToLeftTextDirection;
    
    /** Should the PC Line Draw character set be used for printing. */
    BOOL isPCLineDrawCharSet;
    
//    /** Name of the printer command language to print with. */
//    //unsigned char pcl;
    
//    /** Integer value to set print contrast level. */
//    int printContrastLevel;
//    
//    /** The number of additional dot-lines between printed rows. */
//    unsigned char lineSpacing;
    
//    /**
//	 *  The number of dot lines per 'form'.  This value is used when
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
    
    /** Should the barcode be printed with human-readable text. */
    BOOL isAnnotate;
    
    /** Value for barcode type to be printed. */
	BarcodeExPCL_LP type;
    
    /** Height value of barcode in units of dots */
    unsigned char barcodeHeight;
    
}
/** Should the text be printed with an underline attribute. */
@property BOOL isUnderline;
//@property BOOL isWhiteOnBlack; // same as isInverse

/** Should the text be printed with a bold attribute. */
@property BOOL isBold;
////@property BOOL isDoubleWidth; // same as horizontalMultiplier with muliplier = 2
////@property BOOL isDoubleHeight; // same as verticalMultiplier with muliplier = 2
//
///** Should the printer send an EOT(0x04) ASCII control char after every print job. */
////@property BOOL isSendEOT;

/** Should the text be printed from right to left. */
@property BOOL isRightToLeftTextDirection;

/** Should the PC Line Draw character set be used for printing. */
@property BOOL isPCLineDrawCharSet;

/** Name of the printer command language to print with. */
//@property unsigned char pcl;

/** Index of the font to print with. */
@property int fontIndex;

///** Integer value to set print contrast level. */
//@property int printContrastLevel;
//
///** The number of additional dot-lines between printed rows. */
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

/** Value for barcode type to be printed. */
@property BarcodeExPCL_LP type;

/** Should the barcode be printed with human-readable text. */
@property BOOL isAnnotate;

/** Height value of barcode in units of dots */
@property unsigned char barcodeHeight;

@end
