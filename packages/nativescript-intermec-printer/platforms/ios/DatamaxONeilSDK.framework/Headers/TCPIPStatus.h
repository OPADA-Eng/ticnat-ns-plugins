//
//  TCPIPStatus.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/20/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {TC?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>802.11B Info</td><td>Wireless Card Info</td></tr>
 *    <tr><td>C</td><td>Valid Certificate Present</td></tr>
 *    <tr><td>CR</td><td>When enabled this will cause the printer to report when the TCP connection is ready, or the number of connections ahead of them.</td></tr>
 *    <tr><td>D</td><td>Acquire IP Settings</td></tr>
 *    <tr><td>DR</td><td>Is the 802.11 radio disabled.</td></tr>
 *    <tr><td>E</td><td>ESSID</td></tr>
 *    <tr><td>ET</td><td>EAP Type</td></tr>
 *    <tr><td>G</td><td>Printers Gateway Address</td></tr>
 *    <tr><td>I</td><td>Printers IP Address</td></tr>
 *    <tr><td>I2</td><td>Inactivity Timeout</td></tr>
 *    <tr><td>K</td><td>Key To Use</td></tr>
 *    <tr><td>K1</td><td>Key1</td></tr>
 *    <tr><td>K2</td><td>Key2</td></tr>
 *    <tr><td>K3</td><td>Key3</td></tr>
 *    <tr><td>K4</td><td>Key4</td></tr>
 *    <tr><td>M</td><td>Printers Subnet Mask</td></tr>
 *    <tr><td>MAC</td><td>MAC Address</td></tr>
 *    <tr><td>N</td><td>Station Name</td></tr>
 *    <tr><td>NA</td><td>Network Authentication</td></tr>
 *    <tr><td>P</td><td>TCP Printing Port</td></tr>
 *    <tr><td>P2</td><td>Power Saving Mode</td></tr>
 *    <tr><td>P2M</td><td>Phase 2 Method</td></tr>
 *    <tr><td>P3</td><td>UDP Printing Port</td></tr>
 *    <tr><td>PWR</td><td>Card Powered</td></tr>
 *    <tr><td>Q</td><td>Signal Quality Indicator</td></tr>
 *    <tr><td>S</td><td>Authentication Algorithm</td></tr>
 *    <tr><td>T</td><td>Network Type</td></tr>
 *    <tr><td>W</td><td>Encryption Enabled</td></tr>
 *    <tr><td>Z</td><td>Current Certificate CRC</td></tr>
 *    <tr><td>DNS1</td><td>DNS1 Address</td></tr>
 *    <tr><td>RDNS</td><td>Register to DNS</td></tr>
 *    <tr><td>DNS2</td><td>DNS2 Address</td></tr>
 *    <tr><td>SDNS</td><td>Static DNS</td></tr>
 *    <tr><td>GC</td><td>Group Cipher</td></tr>
 *    <tr><td>RT</td><td>Radio Type</td></tr>
 *    <tr><td>UDNS</td><td>Use DNS</td></tr>
 *    <tr><td>DSUF</td><td>DNS Suffix</td></tr>
 *    <tr><td>KS</td><td>Encryption Key Size</td></tr>
 *    <tr><td>KT</td><td>Encryption Key Type</td></tr>
 * </table>
 */
@interface TCPIPStatus : PrinterState

/**
 * Acquire IP Settings
 */
typedef NS_ENUM(NSInteger, IPAcquiringValues) {
    /**
     * The result was never set.
     */
    IPAcquiringValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    IPAcquiringValuesUnknown = 999,
    
    /**
     * Use BOOTP to acquire an IP address.
     */
    IPAcquiringValuesBOOTP = 66,
    
    /**
     * Failed to acquire an IP address.
     */
    IPAcquiringValuesRequestFailed = 70,
    
    /**
     * Use a statically defined IP address.
     */
    IPAcquiringValuesStaticIP = 78,
    
    /**
     * Currently requesting an IP address.
     */
    IPAcquiringValuesRequestingIP = 82,
    
    /**
     * Use DHCP to acquire an IP address.
     */
    IPAcquiringValuesDHCP = 89
};

/**
 * EAP Type
 */
typedef NS_ENUM(NSInteger, EAPTypeValues) {
    /**
     * The result was never set.
     */
    EAPTypeValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    EAPTypeValuesUnknown = 999,
    
    /**
     * None
     */
    EAPTypeValuesNONE = 0,
    
    /**
     * Identity Request
     */
    EAPTypeValuesIDENTITY = 1,
    
    /**
     * Notification
     */
    EAPTypeValuesNOTIFICATION = 2,
    
    /**
     * NAK
     */
    EAPTypeValuesNAK = 3,
    
    /**
     * Message Digest 5
     */
    EAPTypeValuesMD5 = 4,
    
    /**
     * One-Time Password
     */
    EAPTypeValuesOTP = 5,
    
    /**
     * Generic Token Card
     */
    EAPTypeValuesGTC = 6,
    
    /**
     * Transport Level Security
     */
    EAPTypeValuesTLS = 13,
    
    /**
     * Lightweight Extensible Authentication Protocol
     */
    EAPTypeValuesLEAP = 17,
    
    /**
     * Subscriber Identity Module
     */
    EAPTypeValuesSIM = 18,
    
    /**
     * Tunneled Transport Level Security
     */
    EAPTypeValuesTTLS = 21,
    
    /**
     * Protected Extensible Authentication Protocol
     */
    EAPTypeValuesPEAP = 25,
    
    /**
     *  Microsoft Challenge Handshake Authentication Protocol
     */
    EAPTypeValuesMSCHAPV2 = 26,
    
    /**
     * Type-length-value
     */
    EAPTypeValuesTLV = 33,
    
    /**
     * Flexible Authentication via Secure Tunneling
     */
    EAPTypeValuesFAST = 43
};

/**
 * Key1
 */
typedef NS_ENUM(NSInteger, AuthenticationKeyTypeValues) {
    /**
     * The result was never set.
     */
    AuthenticationKeyTypeValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    AuthenticationKeyTypeValuesUnknown = 999,
    
    /**
     * No key present
     */
    AuthenticationKeyTypeValuesNone = 0,
    
    /**
     * 40 bits
     */
    AuthenticationKeyTypeValuesPSK_40Bits = 5,
    
    /**
     * 128 bits
     */
    AuthenticationKeyTypeValuesPSK_128Bits = 13
};

/**
 * Network Authentication
 */
typedef NS_ENUM(NSInteger, NetworkAuthenticationValues) {
    /**
     * The result was never set.
     */
    NetworkAuthenticationValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    NetworkAuthenticationValuesUnknown = 999,
    
    /**
     * No Encryption
     */
    NetworkAuthenticationValuesNone = 0,
    
    /**
     * Lightweight Extensible Authentication Protocol
     */
    NetworkAuthenticationValuesLEAP = 1,
    
    /**
     * Wi-Fi Protected Access Version 1 with pre-shared key
     */
    NetworkAuthenticationValuesWPA_PSK = 2,
    
    /**
     * Wi-Fi Protected Access Version 1
     */
    NetworkAuthenticationValuesWPA = 3,
    
    /**
     * Wi-Fi Protected Access Version 1 with Lightweight Extensible Authentication Protocol
     */
    NetworkAuthenticationValuesWPA_LEAP = 4,
    
    /**
     * Wi-Fi Protected Access Version 2 with pre-shared key
     */
    NetworkAuthenticationValuesWPA2_PSK = 5,
    
    /**
     * Wi-Fi Protected Access Version 2
     */
    NetworkAuthenticationValuesWPA2 = 6,
    
    /**
     * For use when another host based EAP is used.
     */
    NetworkAuthenticationValuesHostBasedEAP = 7
};

/**
 * Phase 2 Method
 */
typedef NS_ENUM(NSInteger, Phase2MethodValues) {
    /**
     * The result was never set.
     */
    Phase2MethodValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    Phase2MethodValuesUnknown = 999,
    
    /**
     * Use EAP_GTC
     */
    Phase2MethodValuesEAP_GTC = 1,
    
    /**
     * Use EAP_MSCHAPV2
     */
    Phase2MethodValuesEAP_MSCHAPV2 = 2,
    
    /**
     * Use EAP_MD5
     */
    Phase2MethodValuesEAP_MD5 = 3,
    
    /**
     * Use GTC
     */
    Phase2MethodValuesGTC = 4,
    
    /**
     * Use MSCHAPV2
     */
    Phase2MethodValuesMSCHAPV2 = 5,
    
    /**
     * Use MSCHAP
     */
    Phase2MethodValuesMSCHAP = 6,
    
    /**
     * Use CHAP
     */
    Phase2MethodValuesCHAP = 7,
    
    /**
     * Use EAP_TLS
     */
    Phase2MethodValuesEAP_TLS = 8
};

/**
 * Network Type
 */
typedef NS_ENUM(NSInteger, NetworkTypeValues) {
    /**
     * The result was never set.
     */
    NetworkTypeValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    NetworkTypeValuesUnknown = 999,
    
    /**
     * Currently configured for an AdHoc network.
     */
    NetworkTypeValuesAD_HOC = 72,
    
    /**
     * Currently configured to use an access point.
     */
    NetworkTypeValuesAccessPoint = 80
};

/**
 * Radio Type
 */
typedef NS_ENUM(NSInteger, RadioTypeValues) {
    /**
     * The result was never set.
     */
    RadioTypeValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    RadioTypeValuesUnknown = 999,
    
    /**
     * Generic Token Card
     */
    RadioTypeValuesNone = 0,
    
    /**
     * Bluetooth Radio
     */
    RadioTypeValuesBluetooth = 1,
    
    /**
     * IrdA Radio
     */
    RadioTypeValuesIrDA = 2,
    /**
     * Phaser Radio
     */
    RadioTypeValuesPhaser = 3,
    
    /**
     * Silex Radio
     */
    RadioTypeValuesSilex = 4
};

typedef NS_ENUM(NSInteger, GroupCipherValues) {
    /**
     * The result was never set.
     */
    GroupCipherValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    GroupCipherValuesUnknown = 999,
    
    /**
     * None
     */
    GroupCipherValuesNone = 1,
    
    /**
     * WEP40
     */
    GroupCipherValuesWEP40 = 2,
    
    /**
     * WEP104
     */
    GroupCipherValuesWEP104 = 4,
    
    /**
     * TKIP
     */
    GroupCipherValuesTKIP = 8,
    
    /**
     * CCMP/AES
     */
    GroupCipherValuesCCMP_AES = 16,
    
    /**
     * CKIP
     */
    GroupCipherValuesCKIP = 32,
    
    /**
     * CMIC
     */
    GroupCipherValuesCMIC = 64,
    
    /**
     * CKIP_CMIC
     */
    GroupCipherValuesCKIP_CMIC = 128
};

/**
 * WEP Key Selected Values
 */
typedef NS_ENUM(NSInteger, WEPKeySelectedValues) {
    /**
     * The result was never set.
     */
    WEPKeySelectedValuesUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    WEPKeySelectedValuesUnknown = 999,
    
    /**
     * WEP Key 1
     */
    WEPKeySelectedValuesKey1 = 1,
    
    /**
     * WEP Key 2
     */
    WEPKeySelectedValuesKey2 = 2,
    
    /**
     * WEP Key 3
     */
    WEPKeySelectedValuesKey3 = 3,
    
    /**
     * WEP Key 4
     */
    WEPKeySelectedValuesKey4 = 4
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getWirelessCardInfo parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getWirelessCardInfo may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWirelessCardInfo
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getWirelessCardInfo_IsPresent;

/**
 * Wireless Card Info
 * <p>
 * The return value for this parameter is only valid if getWirelessCardInfo_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getWirelessCardInfo_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getWirelessCardInfo;

/**
 * Indicates if getValidCertificatePresent parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getValidCertificatePresent may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getValidCertificatePresent
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getValidCertificatePresent_IsPresent;

/**
 * Valid Certificate Present
 * <p>
 * The return value for this parameter is only valid if getValidCertificatePresent_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getValidCertificatePresent_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getValidCertificatePresent;

/**
 * Indicates if getConnectionReporting parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getConnectionReporting may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectionReporting
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getConnectionReporting_IsPresent;

/**
 * When enabled this will cause the printer to report when the TCP connection is ready, or the number of connections ahead of them.
 * <p>
 * The return value for this parameter is only valid if getConnectionReporting_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectionReporting_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getConnectionReporting;

/**
 * Set to enable or disable connection reporting
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setConnectionReporting: (bool) value;

/**
 * Indicates if getAcquireIP parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAcquireIP may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAcquireIP
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAcquireIP_IsPresent;

/**
 * Acquire IP Settings
 * <p>
 * The return value for this parameter is only valid if getAcquireIP_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAcquireIP_IsPresent
 * @return The current value for the parameter.
 */
-(IPAcquiringValues) getAcquireIP;

/**
 * Set the printer's IP Address Method (DHCP, BOOTP, or Static)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAcquireIP: (IPAcquiringValues) value;

/**
 * Indicates if getRadioDisabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRadioDisabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRadioDisabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRadioDisabled_IsPresent;

/**
 * Is the 802.11 radio disabled.
 * <p>
 * The return value for this parameter is only valid if getRadioDisabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRadioDisabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getRadioDisabled;

/**
 * Set to enable or disable radio
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRadioDisabled: (bool) value;

/**
 * Indicates if getESSID parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getESSID may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getESSID
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getESSID_IsPresent;

/**
 * ESSID
 * <p>
 * The return value for this parameter is only valid if getESSID_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getESSID_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getESSID;

/**
 * Set the printer's ESSID
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setESSID: (NSString *) value;

/**
 * Indicates if getEAPType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEAPType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEAPType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEAPType_IsPresent;

/**
 * EAP Type
 * <p>
 * The return value for this parameter is only valid if getEAPType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEAPType_IsPresent
 * @return The current value for the parameter.
 */
-(EAPTypeValues) getEAPType;

/**
 * Set the printer's EAP Type
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setEAPType: (EAPTypeValues) value;

/**
 * Indicates if getGatewayAddress parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getGatewayAddress may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGatewayAddress
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getGatewayAddress_IsPresent;

/**
 * Printers Gateway Address
 * <p>
 * The return value for this parameter is only valid if getGatewayAddress_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGatewayAddress_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getGatewayAddress;

/**
 * Set the printer's gateway address (ONLY FOR STATIC IP)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setGatewayAddress: (NSString *) value;

/**
 * Indicates if getIPAddress parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIPAddress may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIPAddress
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIPAddress_IsPresent;

/**
 * Printers IP Address
 * <p>
 * The return value for this parameter is only valid if getIPAddress_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIPAddress_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getIPAddress;

/**
 * Set the printer's IP Address (ONLY FOR STATIC IP)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setIPAddress: (NSString *) value;

/**
 * Indicates if getInactivityTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getInactivityTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getInactivityTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getInactivityTimeout_IsPresent;

/**
 * Inactivity Timeout
 * <p>
 * The return value for this parameter is only valid if getInactivityTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getInactivityTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getInactivityTimeout;

/**
 * Set the printer's inactivity timeout in seconds
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setInactivityTimeout: (long) value;

/**
 * Set the printer's UserName(WPA/WPA2/LEAP only, Max 32 chars., WRITE-ONLY)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setUserName: (NSString *) value;

/**
 * Set the printer's password(WPA/WPA2/LEAP only, WRITE-ONLY)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPassword: (NSString *) value;

/**
 * Set the printer's passphrase(WPA/WPA2 PSK only, WRITE-ONLY)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPassPhrase: (NSString *) value;

/**
 * Indicates if getKeyToUse parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getKeyToUse may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKeyToUse
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getKeyToUse_IsPresent;

/**
 * Key To Use
 * <p>
 * The return value for this parameter is only valid if getKeyToUse_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKeyToUse_IsPresent
 * @return The current value for the parameter.
 */
-(WEPKeySelectedValues) getKeyToUse;

/**
 * Set which key to use
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setKeyToUse: (WEPKeySelectedValues) value;

/**
 * Indicates if getKey1Type parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getKey1Type may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey1Type
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getKey1Type_IsPresent;

/**
 * Key1 Type, Values: 0 = None, 5 = 64-bit Key, 13 = 128-bit Key
 * <p>
 * The return value for this parameter is only valid if getKey1Type_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey1Type_IsPresent
 * @return The current value for the parameter.
 */
-(AuthenticationKeyTypeValues) getKey1Type;

/**
 * Set the printer's Key 1
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setKey1: (NSString *) value;

/**
 * Indicates if getKey2Type parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getKey2Type may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey2Type
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getKey2Type_IsPresent;

/**
 * Key2 Type, Values: 0 = None, 5 = 64-bit Key, 13 = 128-bit Key
 * <p>
 * The return value for this parameter is only valid if getKey2Type_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey2Type_IsPresent
 * @return The current value for the parameter.
 */
-(AuthenticationKeyTypeValues) getKey2Type;

/**
 * Set the printer's Key 2
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setKey2: (NSString *) value;

/**
 * Indicates if getKey3Type parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getKey3Type may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey3Type
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getKey3Type_IsPresent;

/**
 * Key3 Type, Values: 0 = None, 5 = 64-bit Key, 13 = 128-bit Key
 * <p>
 * The return value for this parameter is only valid if getKey3Type_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey3Type_IsPresent
 * @return The current value for the parameter.
 */
-(AuthenticationKeyTypeValues) getKey3Type;

/**
 * Set the printer's Key 3
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setKey3: (NSString *) value;

/**
 * Indicates if getKey4Type parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getKey4Type may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey4Type
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getKey4Type_IsPresent;

/**
 * Key4 Type, Values: 0 = None, 5 = 64-bit Key, 13 = 128-bit Key
 * <p>
 * The return value for this parameter is only valid if getKey4Type_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getKey4Type_IsPresent
 * @return The current value for the parameter.
 */
-(AuthenticationKeyTypeValues) getKey4Type;

/**
 * Set the printer's Key 4
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setKey4: (NSString *) value;

/**
 * Indicates if getSubnetMask parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSubnetMask may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSubnetMask
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSubnetMask_IsPresent;

/**
 * Printers Subnet Mask
 * <p>
 * The return value for this parameter is only valid if getSubnetMask_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSubnetMask_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getSubnetMask;

/**
 * Set the printer's Subnet Mask (ONLY FOR STATIC IP)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSubnetMask: (NSString *) value;

/**
 * Indicates if getMACAddress parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getMACAddress may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMACAddress
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getMACAddress_IsPresent;

/**
 * MAC Address
 * <p>
 * The return value for this parameter is only valid if getMACAddress_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getMACAddress_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getMACAddress;

/**
 * Indicates if getStationName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getStationName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getStationName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getStationName_IsPresent;

/**
 * Station Name
 * <p>
 * The return value for this parameter is only valid if getStationName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getStationName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getStationName;

/**
 * Set the printer's station name
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setStationName: (NSString *) value;

/**
 * Indicates if getNetworkAuthentication parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getNetworkAuthentication may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getNetworkAuthentication
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getNetworkAuthentication_IsPresent;

/**
 * Network Authentication. Values: 0 = None, 1 = LEAP, 2 = WPA_PSK, 3 = WPA Enterprise, 4 = WPA_LEAP, 5 = WPA2_PSK, 6 = WPA2-Enterprise, 7 = Host-Based EAP
 * <p>
 * The return value for this parameter is only valid if getNetworkAuthentication_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getNetworkAuthentication_IsPresent
 * @return The current value for the parameter.
 */
-(NetworkAuthenticationValues) getNetworkAuthentication;

/**
 * Set the printer's network authentication
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setNetworkAuthentication: (NetworkAuthenticationValues) value;

/**
 * Indicates if getTCPPrintingPort parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTCPPrintingPort may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTCPPrintingPort
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTCPPrintingPort_IsPresent;

/**
 * TCP Printing Port
 * <p>
 * The return value for this parameter is only valid if getTCPPrintingPort_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTCPPrintingPort_IsPresent
 * @return The current value for the parameter.
 */
-(long) getTCPPrintingPort;

/**
 * Set the printer's TCP port
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setTCPPrintingPort: (long) value;

/**
 * Indicates if getPowerSavingMode parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPowerSavingMode may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSavingMode
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPowerSavingMode_IsPresent;

/**
 * Power Saving Mode
 * <p>
 * The return value for this parameter is only valid if getPowerSavingMode_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPowerSavingMode_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPowerSavingMode;

/**
 * Set to enable or disable the printer's power saving mode
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPowerSavingMode: (bool) value;

/**
 * Indicates if getPhase2Method parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPhase2Method may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPhase2Method
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPhase2Method_IsPresent;

/**
 * Phase 2 Method. Values: 0 = None, 1 = EAP_GTC, 2 = EAP_MSCHAPV2, 3 =EAP_MD5, 4 = GTC, 5 = MSCHAPV2, 6 = MSCHAP, 7 = CHAP, 8 = EAP_TLS
 * <p>
 * The return value for this parameter is only valid if getPhase2Method_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPhase2Method_IsPresent
 * @return The current value for the parameter.
 */
-(Phase2MethodValues) getPhase2Method;

/**
 * Set the printer's Phase 2 Method
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setPhase2Method: (Phase2MethodValues) value;

/**
 * Indicates if getUDPPrintingPort parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUDPPrintingPort may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUDPPrintingPort
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUDPPrintingPort_IsPresent;

/**
 * UDP Printing Port
 * <p>
 * The return value for this parameter is only valid if getUDPPrintingPort_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUDPPrintingPort_IsPresent
 * @return The current value for the parameter.
 */
-(long) getUDPPrintingPort;

/**
 * Set the printer's UDP port
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setUDPPrintingPort: (long) value;

/**
 * Indicates if getCardPowered parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCardPowered may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCardPowered
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCardPowered_IsPresent;

/**
 * Card Powered
 * <p>
 * The return value for this parameter is only valid if getCardPowered_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCardPowered_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getCardPowered;

/**
 * Indicates if getSignalQualityIndicator parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getSignalQualityIndicator may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSignalQualityIndicator
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getSignalQualityIndicator_IsPresent;

/**
 * Signal Quality Indicator
 * <p>
 * The return value for this parameter is only valid if getSignalQualityIndicator_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getSignalQualityIndicator_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getSignalQualityIndicator;

/**
 * Set to enable or disable the printer's signal quality indicator
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setSignalQualityIndicator: (bool) value;

/**
 * Indicates if getAuthenticationAlgorithm parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAuthenticationAlgorithm may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAuthenticationAlgorithm
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAuthenticationAlgorithm_IsPresent;

/**
 * Authentication Algorithm. Values: 0 = None, 5 = PSK 64-bits, 6 = PSK 128-bits
 * <p>
 * The return value for this parameter is only valid if getAuthenticationAlgorithm_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAuthenticationAlgorithm_IsPresent
 * @return The current value for the parameter.
 */
-(AuthenticationKeyTypeValues) getAuthenticationAlgorithm;

/**
 * Set the printer's authentication algorithm
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setAuthenticationAlgorithm: (AuthenticationKeyTypeValues) value;

/**
 * Indicates if getNetworkType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getNetworkType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getNetworkType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getNetworkType_IsPresent;

/**
 * Network Type. Values: H = AdHoc, P = Access Point
 * <p>
 * The return value for this parameter is only valid if getNetworkType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getNetworkType_IsPresent
 * @return The current value for the parameter.
 */
-(NetworkTypeValues) getNetworkType;

/**
 * Set the printer's station type (Network Type)
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setNetworkType: (NetworkTypeValues) value;

/**
 * Indicates if getEncryptionEnabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEncryptionEnabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionEnabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEncryptionEnabled_IsPresent;

/**
 * Encryption Enabled
 * <p>
 * The return value for this parameter is only valid if getEncryptionEnabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionEnabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getEncryptionEnabled;

/**
 * Set to enable or disable encryption
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setEncryptionEnable: (bool) value;

/**
 * Indicates if getCurrentCertificateCRC parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getCurrentCertificateCRC may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCurrentCertificateCRC
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getCurrentCertificateCRC_IsPresent;

/**
 * Current Certificate CRC
 * <p>
 * The return value for this parameter is only valid if getCurrentCertificateCRC_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getCurrentCertificateCRC_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getCurrentCertificateCRC;

/**
 * Indicates if getDNS1Address parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDNS1Address may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNS1Address
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDNS1Address_IsPresent;

/**
 * Printers DNS1 Address
 * <p>
 * The return value for this parameter is only valid if getDNS1Address_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNS1Address_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDNS1Address;

/**
 * Set the printer's preferred DNS address
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDNS1Address: (NSString *) value;

/**
 * Indicates if getDNS2Address parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDNS2Address may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNS2Address
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDNS2Address_IsPresent;

/**
 * Printers DNS2 Address
 * <p>
 * The return value for this parameter is only valid if getDNS2Address_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNS2Address_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDNS2Address;

/**
 * Set the printer's altnerate DNS address
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDNS2Address: (NSString *) value;

/**
 * Indicates if getDNSSuffix parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getDNSSuffix may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNSSuffix
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getDNSSuffix_IsPresent;

/**
 * Printers DNS Suffix
 * <p>
 * The return value for this parameter is only valid if getDNSSuffix_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getDNSSuffix_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getDNSSuffix;

/**
 * Set the printer's DNS suffix
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setDNSSuffix: (NSString *) value;

/**
 * Indicates if getRegisterToDNS parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRegisterToDNS may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRegisterToDNS
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRegisterToDNS_IsPresent;

/**
 * Register to DNS
 * <p>
 * The return value for this parameter is only valid if getRegisterToDNS_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRegisterToDNS_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getRegisterToDNS;

/**
 * Set to enable or disable Register to DNS
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setRegisterToDNS: (bool) value;

/**
 * Indicates if getStaticDNS parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getStaticDNS may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getStaticDNS
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getStaticDNS_IsPresent;

/**
 * Static DNS
 * <p>
 * The return value for this parameter is only valid if getStaticDNS_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getStaticDNS_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getStaticDNS;

/**
 * Set to enable or disable static DNS
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setStaticDNS: (bool) value;

/**
 * Indicates if getUseDNS parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUseDNS may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUseDNS
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUseDNS_IsPresent;

/**
 * Use DNS
 * <p>
 * The return value for this parameter is only valid if getUseDNS_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUseDNS_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getUseDNS;

/**
 * Set to enable or disable Use DNS
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setUseDNS: (bool) value;

/**
 * Indicates if getGroupCipher parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getGroupCipher may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGroupCipher
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getGroupCipher_IsPresent;

/**
 * Group Cipher
 * <p>
 * The return value for this parameter is only valid if getGroupCipher_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getGroupCipher_IsPresent
 * @return The current value for the parameter.
 */
-(GroupCipherValues) getGroupCipher;

/**
 * Set the printer's group cipher
 * @param value new value to set
 * @return Success returns 0, fail returns -1
 */
-(int) setGroupCipher: (GroupCipherValues) value;

/**
 * Indicates if getRadioType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getRadioType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRadioType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getRadioTypeIsPresent;

/**
 * Radio Type. Values: 0 = None, 1 = Bluetooth, 2 =IrDa, 3 = Phaser, 4 = Silex
 * <p>
 * The return value for this parameter is only valid if getRadioType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getRadioTypeIsPresent
 * @return The current value for the parameter.
 */
-(RadioTypeValues) getRadioType;

/**
 * Indicates if getEncryptionKeySize parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEncryptionKeySize may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionKeySize
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEncryptionKeySize_IsPresent;

/**
 * Encryption Key Size
 * <p>
 * The return value for this parameter is only valid if getEncryptionKeySize_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionKeySize_IsPresent
 * @return The current value for the parameter.
 */
-(long) getEncryptionKeySize;

/**
 * Set the printer's encryption key size. Possible values: 0, 128, 256, 512
 * @param value new value to set. Possible values: 0, 128, 256, 512
 * @return Success returns 0, fail returns -1
 */
-(int) setEncryptionKeySize: (long) value;

/**
 * Indicates if getEncryptionKeyType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getEncryptionKeyType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionKeyType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getEncryptionKeyType_IsPresent;

/**
 * Encryption Key Type
 * <p>
 * The return value for this parameter is only valid if getEncryptionKeyType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getEncryptionKeyType_IsPresent
 * @return The current value for the parameter.
 */
-(long) getEncryptionKeyType;

/**
 * Set the printer's encryption key type (0 = Default, 1 = CT)
 * @param value new value to set. (0 = Default, 1 = CT)
 * @return Success returns 0, fail returns -1
 */
-(int) setEncryptionKeyType: (long) value;

@end
