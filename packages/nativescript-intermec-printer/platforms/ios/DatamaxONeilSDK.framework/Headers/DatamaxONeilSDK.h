//
//  DatamaxONeilSDK.h
//  DatamaxONeilSDK
//
//  Created by Quang on 5/19/16.
//  Copyright © 2016 Honeywell. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for DatamaxONeilSDK.
FOUNDATION_EXPORT double DatamaxONeilSDKVersionNumber;

//! Project version string for DatamaxONeilSDK.
FOUNDATION_EXPORT const unsigned char DatamaxONeilSDKVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DatamaxONeilSDK/PublicHeader.h>
//SDK includes
#import <DatamaxONeilSDK/ConnectionBase.h>
#import <DatamaxONeilSDK/Connection_TCP.h>
#import <DatamaxONeilSDK/Connection_BluetoothEA.h>

#import <DatamaxONeilSDK/DPL_Definitions.h>
#import <DatamaxONeilSDK/Parameters.h>
#import <DatamaxONeilSDK/Document.h>
#import <DatamaxONeilSDK/ParametersEZ.h>
#import <DatamaxONeilSDK/ParametersLP.h>
#import <DatamaxONeilSDK/DocumentEZ.h>
#import <DatamaxONeilSDK/DocumentLP.h>
#import <DatamaxONeilSDK/ParametersExPCL_PP.h>
#import <DatamaxONeilSDK/ParametersExPCL_LP.h>
#import <DatamaxONeilSDK/DocumentExPCL_PP.h>
#import <DatamaxONeilSDK/DocumentExPCL_LP.h>
#import <DatamaxONeilSDK/DocumentDPL.h>
#import <DatamaxONeilSDK/ParametersDPL.h>
#import <DatamaxONeilSDK/UPSMessage.h>

#import <DatamaxONeilSDK/BatteryCondition_ExPCL.h>
#import <DatamaxONeilSDK/BluetoothConfiguration_ExPCL.h>
#import <DatamaxONeilSDK/GeneralStatus_ExPCL.h>
#import <DatamaxONeilSDK/MagneticCardData_ExPCL.h>
#import <DatamaxONeilSDK/MemoryStatus_ExPCL.h>
#import <DatamaxONeilSDK/PrinterData_ExPCL.h>
#import <DatamaxONeilSDK/PrinterOptions_ExPCL.h>
#import <DatamaxONeilSDK/PrinterState_ExPCL.h>
#import <DatamaxONeilSDK/PrintheadStatus_ExPCL.h>
#import <DatamaxONeilSDK/VersionInformation_ExPCL.h>

#import <DatamaxONeilSDK/AvalancheSettings.h>
#import <DatamaxONeilSDK/AvalancheFileData.h>
#import <DatamaxONeilSDK/BatteryCondition.h>
#import <DatamaxONeilSDK/BluetoothConfiguration.h>
#import <DatamaxONeilSDK/CardReaderStatus.h>
#import <DatamaxONeilSDK/ConfigurationVersion.h>
#import <DatamaxONeilSDK/FontList.h>
#import <DatamaxONeilSDK/FontData.h>
#import <DatamaxONeilSDK/FormatList.h>
#import <DatamaxONeilSDK/FormatData.h>
#import <DatamaxONeilSDK/GeneralConfiguration.h>
#import <DatamaxONeilSDK/GeneralStatus.h>
#import <DatamaxONeilSDK/GraphicList.h>
#import <DatamaxONeilSDK/GraphicData.h>
#import <DatamaxONeilSDK/NameValue.h>
#import <DatamaxONeilSDK/IrDAConfiguration.h>
#import <DatamaxONeilSDK/LabelConfiguration.h>
#import <DatamaxONeilSDK/MagneticCardConfiguration.h>
#import <DatamaxONeilSDK/MagneticCardData.h>
#import <DatamaxONeilSDK/ManufacturingDate.h>
#import <DatamaxONeilSDK/MemoryStatus.h>
#import <DatamaxONeilSDK/PrinterState.h>
#import <DatamaxONeilSDK/PrinterOptions.h>
#import <DatamaxONeilSDK/PrinterData.h>
#import <DatamaxONeilSDK/PrintheadStatus.h>
#import <DatamaxONeilSDK/SerialNumber.h>
#import <DatamaxONeilSDK/SmartCardConfiguration.h>
#import <DatamaxONeilSDK/SSP_CommParameters.h>
#import <DatamaxONeilSDK/TCPIPStatus.h>
#import <DatamaxONeilSDK/UpgradeData.h>
#import <DatamaxONeilSDK/VersionInformation.h>

#import <DatamaxONeilSDK/AirWatch_DPL.h>
#import <DatamaxONeilSDK/PrinterInformation_DPL.h>
#import <DatamaxONeilSDK/SmartBattery_DPL.h>
#import <DatamaxONeilSDK/MediaLabel_DPL.h>
#import <DatamaxONeilSDK/SystemSettings_DPL.h>
#import <DatamaxONeilSDK/SensorCalibration_DPL.h>
#import <DatamaxONeilSDK/PrintSettings_DPL.h>
#import <DatamaxONeilSDK/MemoryModules_DPL.h>
#import <DatamaxONeilSDK/Fonts_DPL.h>
#import <DatamaxONeilSDK/Images_DPL.h>
#import <DatamaxONeilSDK/LanguageFiles_DPL.h>
#import <DatamaxONeilSDK/StoredFormat_DPL.h>
#import <DatamaxONeilSDK/SerialPortConfiguration_DPL.h>
#import <DatamaxONeilSDK/AvalancheEnabler_DPL.h>
#import <DatamaxONeilSDK/AutoUpdate_DPL.h>
#import <DatamaxONeilSDK/BluetoothConfiguration_DPL.h>
#import <DatamaxONeilSDK/NetworkGeneralSettings_DPL.h>
#import <DatamaxONeilSDK/NetworkWirelessSettings_DPL.h>
#import <DatamaxONeilSDK/NetworkEthernetSettings_DPL.h>
#import <DatamaxONeilSDK/Miscellaneous_DPL.h>
#import <DatamaxONeilSDK/PrinterStatus_DPL.h>
#import <DatamaxONeilSDK/PrinterState_DPL.h>
#import <DatamaxONeilSDK/PrinterData_DPL.h>

