//
//  PrinterOptions.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * Printer Type values
 */
typedef NS_ENUM(NSInteger, PrinterModelValue)
{
    /**
     *  None
     */
    PrinterModelValueNone,
    
    /**
     *  MF2T
     */
    PrinterModelValueMF2,
    
    /**
     *  LP3
     */
    PrinterModelValueLP3,
    
    /**
     *  MF4T/Te
     */
    PrinterModelValueMF4,
    
    /**
     *  OC2
     */
    PrinterModelValueOC2,
    
    /**
     *  OC3
     */
    PrinterModelValueOC3,
    
    /**
     *  OC4
     */
    PrinterModelValueOC4,
    
    /**
     *  PrintPad
     */
    PrinterModelValuePrintPad,
    
    /**
     *  MF2Te
     */
    PrinterModelValueMF2Te
};

/**
 * Serial Bus Device Attached values
 */
typedef NS_ENUM(NSInteger, SerialBusDeviceValue)
{
    /**
     *  None
     */
    SerialBusDeviceValueNone,
    
    /**
     *  Smart Card Reader
     */
    SerialBusDeviceValueSCR,
    
    /**
     *  Direct Smart Card
     */
    SerialBusDeviceValueDirect_Smart_Card,
    
    /**
     *  USB Dex
     */
    SerialBusDeviceValueUSB_DEX
};

/**
 * SDIO Devices attached values
 */
typedef NS_ENUM(NSInteger, SDIODeviceValue)
{
    /**
     *  None
     */
    SDIODeviceValueNone,
    
    /**
     *  Bluetooth
     */
    SDIODeviceValueBluetooth,
    
    /**
     *  IrDA
     */
    SDIODeviceValueIrDA,
    
    /**
     *  Phaser
     */
    SDIODeviceValuePhaser,
    
    /**
     *  Silex
     */
    SDIODeviceValueSilex
};

/**
 * Compact Flash values
 */
typedef NS_ENUM(NSInteger, CompactFlashValue)
{
    /**
     *  None
     */
    CompactFlashValueNone
};

/**
 * This class handles the data from an {PO?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>B</td><td>SCR Device</td></tr>
 *    <tr><td>C</td><td>CF Device</td></tr>
 *    <tr><td>D</td><td>Printer Description</td></tr>
 *    <tr><td>F</td><td>Text Fixture String</td></tr>
 *    <tr><td>I</td><td>SPI Device</td></tr>
 *    <tr><td>M</td><td>Manufacturing Date</td></tr>
 *    <tr><td>N</td><td>Serial Number</td></tr>
 *    <tr><td>P</td><td>Part Number</td></tr>
 *    <tr><td>R</td><td>Certification Flag Status</td></tr>
 *    <tr><td>S</td><td>SDIO Device</td></tr>
 *    <tr><td>T</td><td>Printer Type</td></tr>
 * </table>
 */
@interface PrinterOptions : PrinterState

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getSCRDevice parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSCRDevice may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSCRDevice
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSCRDevice_IsPresent;

/**
 * SCR Device
 * <p>
 * The return value for this parameter is only valid if getSCRDevice_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSCRDevice_IsPresent
 * @return The current value for the parameter.
 */
-(SerialBusDeviceValue) getSCRDevice;

/**
 * Indicates if getCFDevice parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCFDevice may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCFDevice
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCFDevice_IsPresent;

/**
 * CF Device
 * <p>
 * The return value for this parameter is only valid if getCFDevice_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCFDevice_IsPresent
 * @return The current value for the parameter.
 */
-(CompactFlashValue) getCFDevice;

/**
 * Indicates if getPrinterDescription parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterDescription may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterDescription
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterDescription_IsPresent;

/**
 * Printer Description
 * <p>
 * The return value for this parameter is only valid if getPrinterDescription_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterDescription_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPrinterDescription;

/**
 * Indicates if getTextFixtureString parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTextFixtureString may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTextFixtureString
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTextFixtureString_IsPresent;

/**
 * Text Fixture String
 * <p>
 * The return value for this parameter is only valid if getTextFixtureString_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTextFixtureString_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getTextFixtureString;

/**
 * Indicates if getSPIDevice parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSPIDevice may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSPIDevice
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSPIDevice_IsPresent;

/**
 * SPI Device
 * <p>
 * The return value for this parameter is only valid if getSPIDevice_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSPIDevice_IsPresent
 * @return The current value for the parameter.
 */
-(long) getSPIDevice;

/**
 * Indicates if getManufacturingDate parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getManufacturingDate may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getManufacturingDate
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getManufacturingDate_IsPresent;

/**
 * Manufacturing Date
 * <p>
 * The return value for this parameter is only valid if getManufacturingDate_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getManufacturingDate_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getManufacturingDate;

/**
 * Indicates if getSerialNumber parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSerialNumber may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSerialNumber
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSerialNumber_IsPresent;

/**
 * Serial Number
 * <p>
 * The return value for this parameter is only valid if getSerialNumber_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSerialNumber_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getSerialNumber;

/**
 * Indicates if getPartNumber parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPartNumber may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPartNumber
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPartNumber_IsPresent;

/**
 * Part Number
 * <p>
 * The return value for this parameter is only valid if getPartNumber_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPartNumber_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPartNumber;

/**
 * Indicates if getCertificationFlagStatus parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCertificationFlagStatus may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCertificationFlagStatus
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCertificationFlagStatus_IsPresent;

/**
 * Certification Flag Status
 * <p>
 * The return value for this parameter is only valid if getCertificationFlagStatus_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCertificationFlagStatus_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getCertificationFlagStatus;

/**
 * Indicates if getSDIODevice parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSDIODevice may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSDIODevice
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSDIODevice_IsPresent;

/**
 * SDIO Device
 * <p>
 * The return value for this parameter is only valid if getSDIODevice_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSDIODevice_IsPresent
 * @return The current value for the parameter.
 */
-(SDIODeviceValue) getSDIODevice;

/**
 * Indicates if getPrinterType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterType_IsPresent;

/**
 * Printer Type
 * <p>
 * The return value for this parameter is only valid if getPrinterType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterType_IsPresent
 * @return The current value for the parameter.
 */
-(PrinterModelValue) getPrinterType;

@end
