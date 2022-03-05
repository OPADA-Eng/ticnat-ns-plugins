//
//  DPL_Definitions.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/21/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#ifndef DatamaxONeilSDK_iPhone_DPL_Definitions_h
#define DatamaxONeilSDK_iPhone_DPL_Definitions_h

//====================================//
//DocumentDPL.h, SystemSettings.h
//===================================//
/**
 * The type of format operation for each label in DPL mode.
 */
typedef NS_ENUM(NSInteger, FormatAttributeValue) {
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    FormatAttributeValueUnknown = 0,
    
    /** Image and bar code intersect will not be printed */
    FormatAttributeValueXOR = 1,
    
    /** intersecting region of text string will print */
    FormatAttributeValueTransparent = 2,
    
    /** intersecting region of text string will not be print */
    FormatAttributeValueOpaque = 3,
    
    /** inverse printing. */
    FormatAttributeValueInverse = 5
    
};

/**
 * Image Type to be printed
 */
typedef NS_ENUM(NSInteger, ImageType) {
    /** 7-Bit D-O image load file */
    ImageTypeDOImage_7Bit,
    
    /** .BMP 8-bit format, flipped, Black and White */
    ImageTypeBMPFlipped_8Bit,
    
    /** .BMP 8-bit format, Black and White */
    ImageTypeBMP_8Bit,
    
    /** .IMG 8-bit format, Black and White */
    ImageTypeIMG_8Bit,
    
    /** .IMG 8-bit format, flipped, Black and White */
    ImageTypeIMGFlipped_8Bit,
    
    /** .PCX 8-bit format, flipped, Black and White */
    ImageTypePCXFlipped_8Bit,
    
    /** .PCX 8-bit format, flipped, Black and White */
    ImageTypePCX_8Bit,
    
    /** Unknown format */
    ImageTypeOther
};

//====================================//
//ParametersDPL.h, SystemSettings.h
//===================================//

/** 
 * Value for rotating the printing by.  Rotations are counter-clockwise. 
 */
typedef NS_ENUM(NSInteger, RotationDPL) {
	/** Unrotated */
	RotationDPLRotate_0 = 1,
    
	/** Rotated 90 degrees counter-clockwise */
	RotationDPLRotate_90 = 2,
    
	/** Rotated 180 degrees counter-clockwise */
	RotationDPLRotate_180 = 3,
    
	/** Rotated 20 degrees counter-clockwise */
	RotationDPLRotate_270 = 4
};

/** 
 * Alignment to use when drawing text 
 */
typedef NS_ENUM(NSInteger, AlignmentDPL) {
	/** Text will be aligned on the left starting at the x position specified. */
	AlignmentDPLLeft,
    
	/** Text will be center aligned at the x position specified. */
	AlignmentDPLCenter,
    
	/** Text will be aligned on the right starting at the x position specified. */
	AlignmentDPLRight
};

/**
 * Double byte Symbol Sets for printing
 */
typedef NS_ENUM(NSInteger, DoubleByteSymbolSetValue) {
    /** Unknown */
    DoubleByteSymbolSetValueUnknown,
    
    /** BIG 5(Taiwan) Encoded */
    DoubleByteSymbolSetValueBIG5,
    
    /** EUC(Extended UNIX Code) */
    DoubleByteSymbolSetValueEUC,
    
    /** Government Bureau Industry Standard,Chinese(PRC), default */
    DoubleByteSymbolSetValueGovernmentBureau,
    
    /** Japanese Industry Standard, default */
    DoubleByteSymbolSetValueJIS,
    
    /** Shift Japanese Industry Standard */
    DoubleByteSymbolSetValueShiftJIS,
    
    /** Unicode (including Korean) */
    DoubleByteSymbolSetValueUnicode
    
};

/**
 * Single Byte Symbol Sets for printing
 */
typedef NS_ENUM(NSInteger, SingleByteSymbolSetValue) {
    /** Unknown */
    SingleByteSymbolSetValueUnknown,
    
    /** ISO 60: Danish/Norwegian Symbol Set  */
    SingleByteSymbolSetValueISO60_Danish,

    /** Desktop */
    SingleByteSymbolSetValueDeskTop,
    
    /** ISO 8859/1 Latin 1 */
    SingleByteSymbolSetValueISO8859_1_Latin1,
    
    /** ISO 8859/2 Latin 2 */
    SingleByteSymbolSetValueISO8859_2_Latin2,
    
    /** ISO 8859/9 Latin 5 */
    SingleByteSymbolSetValueISO8859_9_Latin5,
    
    /** ISO 8859/10 Latin 6 */
    SingleByteSymbolSetValueISO8859_10_Latin6,
    
    /** ISO 8859/15 Latin 9 */
    SingleByteSymbolSetValueISO8859_15_Latin9,
    
    /** ISO 69: French  */
    SingleByteSymbolSetValueISO69_French,
    
    /** ISO 21: German  */
    SingleByteSymbolSetValueISO21_German,
    
    /** ISO 15: Italian  */
    SingleByteSymbolSetValueISO15_Italian,
    
    /** Legal */
    SingleByteSymbolSetValueLegal,
    
    /** Math-8 */
    SingleByteSymbolSetValueMath_8,
    
    /** Macintosh */
    SingleByteSymbolSetValueMacintosh,
    
    /** PS Math */
    SingleByteSymbolSetValuePS_Math,
    
    /** PC-858 MultiLingual */
    SingleByteSymbolSetValuePC858_Multi,
    
    /** PC-8,Code Page 437 */
    
    SingleByteSymbolSetValuePC8_Code437,
    
    /** PC-8 D/N,Code Page 437N */
    SingleByteSymbolSetValuePC8_DN_Code437N,
    
    /** PC-852 Latin 2 */
    SingleByteSymbolSetValuePC852_Latin2,
    
    /** PC-862 Latin/Hebrew */
    SingleByteSymbolSetValuePC862_LatinHebrew,
    
    /** PI Font Symbol  */
    SingleByteSymbolSetValuePI_Font,

    
    /** PC-850 Multilingual */
    SingleByteSymbolSetValuePC850_Multi,
    
    /** PC-864 Latin/Arabic */
    SingleByteSymbolSetValuePC864_LatinArabic,
    
    /** PC-8 TK,Code Page 437T */
    SingleByteSymbolSetValuePC8TK_Code437T,
    
    /** PC-1004 */
    SingleByteSymbolSetValuePC1004,
    
    /** PC-775 Baltic */
    SingleByteSymbolSetValuePC775_Baltic,
    
    /** Roman-8 */
    SingleByteSymbolSetValueRoman8,
    
    /** Roman-9 */
    SingleByteSymbolSetValueRoman9,
    
    /** ISO 17: Spanish */
    SingleByteSymbolSetValueISO17_Spanish,
    
    /** ISO 11: Swedish */
    SingleByteSymbolSetValueISO11_Swedish,
    
    /** PS Text */
    SingleByteSymbolSetValuePS_Text,
    
    /** ISO 4: United Kingdom */
    SingleByteSymbolSetValueISO4_UK,
    
    /** ISO 6: ASCII */
    SingleByteSymbolSetValueISO6_ASCII,
    
    /** UTF8 */
    SingleByteSymbolSetValueUTF8,
    
    /** Ventura International */
    SingleByteSymbolSetValueVentInt,
    
    /** Ventura Math */
    SingleByteSymbolSetValueVentMath,
    
    /** Ventura US  */
    SingleByteSymbolSetValueVentUS,

    /** Windows 3.1 Latin 1 */
    SingleByteSymbolSetValueWindows31_Latin1,
    
    /** Windows Latin/Arabic */
    SingleByteSymbolSetValueWindows_LatinArabic,
    
    /** Windows 3.1 Latin 2 */
    SingleByteSymbolSetValueWindows31_Latin2,
    
    /** Windows 3.1 Baltic */
    SingleByteSymbolSetValueWindows31_Baltic,
    
    /** Windows 3.0 Latin 1 */
    SingleByteSymbolSetValueWindows30_Latin1,
    
    /** Windows Latin/Cyrillic */
    SingleByteSymbolSetValueWindows_LatinCyrillic,
    
    /** Windows 3.1 Latin 5 */
    SingleByteSymbolSetValueWindows31_Latin5
    
};

/** Measurement unit to be interpreted */
typedef NS_ENUM(NSInteger, UnitMeasureValue) {
    /** Interpret values entered in meters*/
    UnitMeasureValueMetric = 77,
    
    /** Interpret values entered in inches*/
    UnitMeasureValueInch = 73,
    
    /** Unknown Value*/
    UnitMeasureValueUnknown = 999
};

/** The type of increment/decrement performed. */
typedef NS_ENUM(NSInteger, IncrementDecrementTypeValue) {
    /** None */
    IncrementDecrementTypeValueNone = 0,
    
    /** Numeric Increment */
    IncrementDecrementTypeValueNumericIncrement = 43, //'+'
    
    /** Alphanumeric */
    IncrementDecrementTypeValueAlphanumericIncrement = 62, //'>'
    
    /** Hexadecimal */
    IncrementDecrementTypeValueHexdecimalIncrement = 40, //'('
    
    /** Numeric Increment */
    IncrementDecrementTypeValueNumericDecrement = 45, //'-'
    
    /** Alphanumeric */
    IncrementDecrementTypeValueAlphanumericDecrement = 60, //'<'
    
    /** Hexadecimal */
    IncrementDecrementTypeValueHexdecimalDecrement = 41 //')'
};

//====================================//
//PrinterData.h
//===================================//
/**
 *  Query Data Type Value
 */
typedef NS_ENUM(NSInteger, QueryDataType){
    /**
     *  AirWatch Data
     */
    QueryDataTypeAirWatch,
    
    /**
     *  Auto Update Data
     */
    QueryDataTypeAutoUpdate,
    
    /**
     *  Avalanche Enabler Data
     */
    QueryDataTypeAvalancheEnabler,
    
    /**
     *  Network General Data
     */
    QueryDataTypeNetworkGeneral,
    
    /**
     *  Network Wireless Data
     */
    QueryDataTypeNetworkWireless,
    
    /**
     *  Network Ethernet Data
     */
    QueryDataTypeNetworkEthernet,
    
    /**
     *  Bluetooth Data
     */
    QueryDataTypeBluetooth,
    
    /**
     *  Printer Information Data
     */
    QueryDataTypePrinterInformation,
    
    /**
     *  System Settings Data
     */
    QueryDataTypeSystemSettings,
    
    /**
     *  Smart Battery Data
     */
    QueryDataTypeSmartBattery,
    
    /**
     *  Other
     */
    QueryDataTypeOther
};
/** Wireless Upgrade Type values */
typedef NS_ENUM(NSInteger, WiFiModuleValue) {
    
    /** Unknown */
    WiFiModuleValueUnknown = 0,
    
    /** DPAC1 */
    WiFiModuleValueDPAC1= 1,
    
    /** Silex */
    WiFiModuleValueSilex = 2,
    
    /** DPAC2*/
    WiFiModuleValueDPAC2 = 3,
    
    /** DO1 */
    WiFiModuleValueDO1 = 4,
    
    /** General */
    WiFiModuleValueGeneral = 5
};


#endif
