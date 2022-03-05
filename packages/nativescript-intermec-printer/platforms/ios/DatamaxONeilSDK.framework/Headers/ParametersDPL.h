//
//  ParametersDPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 12/16/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "Parameters.h"
#import "DPL_Definitions.h"

/**
 * This class represents the general parameters that can be used to alter
 * the printing characteristics when 'printing' to a DocumentDPL object.
 * <br>
 * Printing characteristics are 'local' to each print command they are
 * passed into.  To have global settings the same parameters object can
 * be passed into each write call to the Document object.
 */
@interface ParametersDPL : Parameters
{
    /**
     Single Byte Symbol Set to be used for printing
     */
    SingleByteSymbolSetValue SBSymbolSet;
    
    /**
     Double byte symbol set to be used for printing
     */
    DoubleByteSymbolSetValue DBSymbolSet;
    
    /**
     Specifies whether print job is using dot or point units. Usually used for specifying height/width
     of scalable fonts.
     */
    bool isDotMode;
    
    /**
     Specifies the ID of the object type we are printing(eg. font type, barcode, graphics)
     */
    NSString* typeID;
    
    /**
     * Font ID of the font to print with.
     */
    NSString* fontID;

    /**
     Height of font to be print
     */
    int fontHeight;
    
    /**
     Width of font to be print
     */
    int fontWidth;
    
    /**
     Specifies whether to use single byte symbol set or double byte symbol set
     */
    bool isUnicode;
    
    /**
     Degrees to rotate the printing.
     */
    RotationDPL rotation;
    
    /**
     Alignment to use when drawing text
     */
    AlignmentDPL alignment;
    
    /**
     Specifies whether the print job should be mirror
     */
    bool isMirrored;
    
    /**
     MEasurement units to be interpreted by printer
     */
    UnitMeasureValue measurement;
    
    /**
     Height of symbol for barcode.
     */
    int symbolHeight;
    
    /**
     Fill pattern for graphics
     */
    int fillPattern;
    
    /** 
     Wide Bar width of barcode
     */
    int wideBarWidth;
    
    /** 
     Narrow Bar width of barcode
     */
    int narrowBarWidth;
    
    /**
     * Last field entered increment/decrement value
     */
    int incrementDecrementValue;
    
    /**
     * Last field entered increment/decrement type
     */
    IncrementDecrementTypeValue incrementDecrementType;
    
    /**
     * Last field entered increment/decrement fillerxs character
     */
    NSString* fillerCharacter;
    
    /**
     * Enable or disable embedded increment/decrement
     */
    bool embeddedEnable;
    
    /**
     * Embedded increment/decrement value;
     */
    NSString* embeddedIncrementDecrementValue;
    
    /**
     * Text Bold attribute
     */
    bool isBold;
    
    /**
     * Text Italic attribute
     */
    bool isItalic;
    
    /**
     * Text Underline attribute
     */
    bool isUnderline;
}

/**
 * Text Bold attribute
 */
@property bool isBold;

/**
 * Text Italic attribute
 */
@property bool isItalic;

/**
 * Text Underline attribute
 */
@property bool isUnderline;

/**
 * Last field entered increment/decrement value
 */
@property int incrementDecrementValue;

/**
 * Last field entered increment/decrement type
 */
@property IncrementDecrementTypeValue incrementDecrementType;

/**
 * Last field entered increment/decrement fillerxs character
 */
@property(nonatomic,retain) NSString* fillerCharacter;

/**
 * Enable or disable embedded increment/decrement
 */
@property bool embeddedEnable;

/**
 * Embedded increment/decrement value;
 */
@property(nonatomic,retain) NSString* embeddedIncrementDecrementValue;

/**
 Single Byte Symbol Set to be used for printing. <br>
 See method SingleSymbolSetToString
 */
@property SingleByteSymbolSetValue SBSymbolSet;

/**
 Double byte symbol set to be used for printing. <br>
 See method DoubleSymbolSetToString
 */
@property DoubleByteSymbolSetValue DBSymbolSet;

/**
 Specifies whether print job is using dot or point units. Usually used for specifying height/width
 of scalable fonts.
 */
@property bool isDotMode;

/**
 Specifies the ID of the object type we are printing(eg. font type, barcode, graphics)
 */
@property(nonatomic,retain) NSString* typeID;

/**
 Specifies the ID of the object type we are printing(eg. font type, barcode, graphics)
 */
@property (nonatomic,retain) NSString* fontID;

/**
 Height of font to be print
 */
@property int fontHeight;

/**
 Width of font to be print
 */
@property int fontWidth;

/**
 Specifies whether to use single byte symbol set or double byte symbol set
 */
@property bool isUnicode;

/**
 Degrees to rotate the printing.
 */
@property RotationDPL rotation;

/**
 Alignment to use when drawing text
 */
@property AlignmentDPL alignment;

/**
 Specifies whether the print job should be mirror
 */
@property bool isMirrored;

/**
 Measurement units to be interpreted by printer
 */
@property UnitMeasureValue measurement;

/**
 Height of symbol for barcode.
 */
@property int symbolHeight;

/**
 Fill pattern for graphics
 */
@property int fillPattern;

/**
 Wide Bar width of barcode
 */
@property int wideBarWidth;

/**
 Narrow Bar width of barcode
 */
@property int narrowBarWidth;


/**
 * Converts the specified symbol set to its corresponding string value
 * @param symbolSet Single Byte Symbol set to convert
 * @return String value of the symbol Set
 */
-(NSString*) SingleSymbolSetToString: (SingleByteSymbolSetValue) symbolSet;

/**
 * Converts the specified symbol set to its corresponding string value
 * @param symbolSet Double Byte Symbol set to convert
 * @return String value of the symbol Set
 */
-(NSString*) DoubleSymbolSetToString:(DoubleByteSymbolSetValue) symbolSet;



@end
