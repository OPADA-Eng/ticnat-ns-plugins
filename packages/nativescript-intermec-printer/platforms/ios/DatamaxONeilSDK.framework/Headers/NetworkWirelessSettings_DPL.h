//
//  NetworkWirelessSettings_DPL.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 1/16/14.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState_DPL.h"

/** IP Address Method values */
typedef NS_ENUM(NSInteger, IPAddressMethodValue) {
    
    /** Unknown */
    IPAddressMethodValueUnknown = 999,
    
    /** Static */
    IPAddressMethodValueStatic = 78,
    
    /** BootP */
    IPAddressMethodValueBootP = 66,
    
    /** DHCP*/
    IPAddressMethodValueDHCP = 89
    
};
/** Network Type values */
typedef NS_ENUM(NSInteger, NetworkTypeValue) {
    
    /** AdHoc */
    NetworkTypeValueAdHoc = 72,
    
    /** Infrastructure */
    NetworkTypeValueInfrastructure = 80,
    
    /** Unknown*/
    NetworkTypeValueUnknown = 999
};

/** Network Authentication Type Value*/
typedef NS_ENUM(NSInteger, NetworkAuthenticationTypeValue) {
    
    /** Unknown */
    NetworkAuthenticationTypeValueUnknown = 999,
    
    /** Disable */
    NetworkAuthenticationTypeValueDisable = 0,
    
    /** LEAP-WEP */
    NetworkAuthenticationTypeValueLEAP_WEP = 1,
    
    /** WPA_PSK (WPA Personal) */
    NetworkAuthenticationTypeValueWPA_PSK = 2,
    
    /** WPA Enterprise */
    NetworkAuthenticationTypeValueWPA_Enterprise = 3,
    
    /** WPA-LEAP (Deprecated)*/
    NetworkAuthenticationTypeValueWPA_LEAP = 4,
    
    /** WPA2_PSK (WPA2 Personal) */
    NetworkAuthenticationTypeValueWPA2_PSK = 5,
    
    /** WPA2 Enterprise */
    NetworkAuthenticationTypeValueWPA2_Enterprise = 6
};

/** Phase 2 Method values */
typedef NS_ENUM(NSInteger, Phase2MethodValue) {
    
    /** Unknown */
    Phase2MethodValueUnknown = 999,
    
    /** None */
    Phase2MethodValueNone = 0,
    
    /** EAP_GTC */
    Phase2MethodValueEAP_GTC = 1,
    
    /** EAP_MSCHAPV2 */
    Phase2MethodValueEAP_MSCHAPV2 = 2,
    
    /** EAP_MD5 */
    Phase2MethodValueEAP_MD5 = 3,
    
    /** GTC */
    Phase2MethodValueGTC = 4,
    
    /** MSCHAPV2*/
    Phase2MethodValueMSCHAPV2 = 5,
    
    /** MSCHAP */
    Phase2MethodValueMSCHAP = 6,
    
    /** CHAP */
    Phase2MethodValueCHAP = 7,
    
    /** EAP_TLS */
    Phase2MethodValueEAP_TLS = 8
};

/** WEP Authentication Method Value */
typedef NS_ENUM(NSInteger, WEPAuthenticationMethodValue) {
    
    /** Open */
    WEPAuthenticationMethodValueOpen = 0,
    
    /** Shared Key 40-Bit WEP key */
    WEPAuthenticationMethodValueWEP40_SharedKey = 5,
    
    /** Shared Key 128-Bit WEP Key */
    WEPAuthenticationMethodValueWEP128_SharedKey = 13,
    
    /** Unknown */
    WEPAuthenticationMethodValueUnknown = 999
    
};

/**EAP Type values */
typedef NS_ENUM(NSInteger, EAPTypeValue) {
    
    /** Unknown */
    EAPTypeValueUnknown = 999,
    
    /** Transport Level Security */
    EAPTypeValueTLS = 13,
    
    /** Lightweight Extensible Authentication Protocol */
    EAPTypeValueLEAP = 17,
    
    /** Tunneled Transport Level Security */
    EAPTypeValueTTLS = 21,
    
    /** Protected Extensible Authentication Protocol */
    EAPTypeValuePEAP = 25,
    
    /** Flexible Authentication via Secure Tunneling */
    EAPTypeValueFAST = 43
};

/** Radio mode values */
typedef NS_ENUM(NSInteger, RadioModeValue) {
    
    /** Unknown */
    RadioModeValueUnknown = 999,
    
    /** Default (All) */
    RadioModeValueDefault = 0,
    
    /** 802.11a Only */
    RadioModeValueA = 1,
    
    /** 802.11 b/g */
    RadioModeValueBG = 2,
    
    /** 802.11 a/b/g */
    RadioModeValueABG = 3,
    
    /** 802.11b Only */
    RadioModeValueB = 4,
    
    /** 802.11g Only */
    RadioModeValueG = 5
};

/** Group Cipher values */
typedef NS_ENUM(NSInteger, GroupCipherValue) {
    
    /** Unknown */
    GroupCipherValueUnknown = 999,
    
    /** None */
    GroupCipherValueNone = 1,
    
    /** WEP 40 */
    GroupCipherValueWEP40 = 2,
    
    /** WEP 104 */
    GroupCipherValueWEP104 = 4,
    
    /** TKIP */
    GroupCipherValueTKIP = 8,
    
    /** CCMP/AES */
    GroupCipherValueCCMP_AES = 16,
    
    /** CKIP */
    GroupCipherValueCKIP = 32,
    
    /** CMIC */
    GroupCipherValueCMIC = 64,
    
    /** CKIP_CMIC */
    GroupCipherValueCKIP_CMIC = 128
};

/**
 * WEP Key Selected Value
 */
typedef NS_ENUM(NSInteger, WEPKeySelectedValue) {
    /**
     * The result was never set.
     */
    WEPKeySelectedValueUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    WEPKeySelectedValueUnknown = 999,
    
    /**
     * WEP Key 1
     */
    WEPKeySelectedValueKey1 = 1,
    
    /**
     * WEP Key 2
     */
    WEPKeySelectedValueKey2 = 2,
    
    /**
     * WEP Key 2
     */
    WEPKeySelectedValueKey3 = 3,
    
    /**
     * WEP Key 2
     */
    WEPKeySelectedValueKey4 = 4
};

/** Regulatory Domain values */
typedef NS_ENUM(NSInteger, RegulatoryDomainValue) {
    
    /** Unknown */
    RegulatoryDomainValueUnknown = 999,
    
    /** World Wide Roaming */
    RegulatoryDomainValueWORLD_WIDE_ROAMING = 0,
    
    /** Albania */
    RegulatoryDomainValueALBANIA = 8,
    
    /** Algeria */
    RegulatoryDomainValueALGERIA = 12,
    
    /** Argentina */
    RegulatoryDomainValueARGENTINA = 32,
    
    /** Armenia */
    RegulatoryDomainValueARMENIA = 51,
    
    /** Australia */
    RegulatoryDomainValueAUSTRALIA = 36,
    
    /** Austria */
    RegulatoryDomainValueAUSTRIA = 40,
    
    /** Azerbaijan */
    RegulatoryDomainValueAZERBAIJAN = 31,
    
    /** Bahrain */
    RegulatoryDomainValueBAHRAIN = 48,
    
    /** Belarus */
    RegulatoryDomainValueBELARUS = 112,
    
    /** Belgium */
    RegulatoryDomainValueBELGIUM = 56,
    
    /** Belize */
    RegulatoryDomainValueBELIZE = 84,
    
    /** Bolivia */
    RegulatoryDomainValueBOLIVIA = 68,
    
    /** Bosnia & Herzegowania */
    RegulatoryDomainValueBOSNIA_HERZEGOWANIA = 70,
    
    /** Brazil */
    RegulatoryDomainValueBRAZIL = 76,
    
    /** Brunei Darussalam */
    RegulatoryDomainValueBRUNEI_DARUSSALAM = 96,
    
    /** Bulgaria */
    RegulatoryDomainValueBULGARIA = 100,
    
    /** Canada */
    RegulatoryDomainValueCANADA = 124,
    
    /** Chile */
    RegulatoryDomainValueCHILE = 152,
    
    /** People's Republic of China */
    RegulatoryDomainValueCHINA = 156,
    
    /** Colombia */
    RegulatoryDomainValueCOLOMBIA = 170,
    
    /** Costa Rica */
    RegulatoryDomainValueCOSTA_RICA = 188,
    
    /** Croatia */
    RegulatoryDomainValueCROATIA = 191,
    
    /** Cyprus */
    RegulatoryDomainValueCYPRUS = 196,
    
    /** Czech Republic */
    RegulatoryDomainValueCZECH = 203,
    
    /** Denmark */
    RegulatoryDomainValueDENMARK = 208,
    
    /** Dominican Republic */
    RegulatoryDomainValueDOMINICAN_REPUBLIC = 214,
    
    /** Ecuador */
    RegulatoryDomainValueECUADOR = 218,
    
    /** Egypt */
    RegulatoryDomainValueEGYPT = 818,
    
    /** El Salvador */
    RegulatoryDomainValueEL_SALVADOR = 222,
    
    /** Estonia */
    RegulatoryDomainValueESTONIA = 233,
    
    /** Faeroe Islands */
    RegulatoryDomainValueFAEROE_ISLANDS = 234,
    
    /** Finland */
    RegulatoryDomainValueFINLAND = 246,
    
    /** France */
    RegulatoryDomainValueFRANCE = 250,
    
    /** France2 */
    RegulatoryDomainValueFRANCE2 = 255,
    
    /** Georgia */
    RegulatoryDomainValueGEORGIA = 268,
    
    /** Germany */
    RegulatoryDomainValueGERMANY = 276,
    
    /** Greece */
    RegulatoryDomainValueGREECE = 300,
    
    /** Guatemala */
    RegulatoryDomainValueGUATEMALA = 320,
    
    /** Honduras */
    RegulatoryDomainValueHONDURAS = 340,
    
    /** Hong Kong S.A.R., P.R.C. */
    RegulatoryDomainValueHONG_KONG = 344,
    
    /** Hungary */
    RegulatoryDomainValueHUNGARY = 348,
    
    /** Iceland */
    RegulatoryDomainValueICELAND = 352,
    
    /** India */
    RegulatoryDomainValueINDIA = 356,
    
    /** Indonesia */
    RegulatoryDomainValueINDONESIA = 360,
    
    /** Iran */
    RegulatoryDomainValueIRAN = 364,
    
    /** Iraq */
    RegulatoryDomainValueIRAQ = 368,
    
    /** Ireland */
    RegulatoryDomainValueIRELAND = 372,
    
    /** Israel */
    RegulatoryDomainValueISRAEL = 376,
    
    /** Italy */
    RegulatoryDomainValueITALY = 380,
    
    /** Jamaica */
    RegulatoryDomainValueJAMAICA = 388,
    
    /** Japan */
    RegulatoryDomainValueJAPAN = 392,
    
    /** Japan (JP1) */
    RegulatoryDomainValueJAPAN_JP1 = 393,
    
    /** Japan (JP0) */
    RegulatoryDomainValueJAPAN_JP0 = 394,
    
    /** Japan (JP1-1) */
    RegulatoryDomainValueJAPAN_JP1_1 = 395,
    
    /** Japan (JE1) */
    RegulatoryDomainValueJAPAN_JE1 = 396,
    
    /** Japan (JE2) */
    RegulatoryDomainValueJAPAN_JE2 = 397,
    
    /** Japan (JP6) */
    RegulatoryDomainValueJAPAN_JP6 = 399,
    
    /** Jordan */
    RegulatoryDomainValueJORDAN = 400,
    
    /** Kazakhstan */
    RegulatoryDomainValueKAZAKHSTAN = 398,
    
    /** Kenya */
    RegulatoryDomainValueKENYA = 404,
    
    /** North Korea */
    RegulatoryDomainValueKOREA_NORTH = 408,
    
    /** South Korea */
    RegulatoryDomainValueKOREA_ROC = 410,
    
    /** South Korea */
    RegulatoryDomainValueKOREA_ROC2 = 411,
    
    /** South Korea */
    RegulatoryDomainValueKOREA_ROC3 = 412,
    
    /** Kuwait */
    RegulatoryDomainValueKUWAIT = 414,
    
    /** Latvia */
    RegulatoryDomainValueLATVIA = 428,
    
    /** Lebanon */
    RegulatoryDomainValueLEBANON = 422,
    
    /** Libya */
    RegulatoryDomainValueLIBYA = 434,
    
    /** Liechtenstein */
    RegulatoryDomainValueLIECHTENSTEIN = 438,
    
    /** Lithuania */
    RegulatoryDomainValueLITHUANIA = 440,
    
    /** Luxembourg */
    RegulatoryDomainValueLUXEMBOURG = 442,
    
    /** Macau */
    RegulatoryDomainValueMACAU = 446,
    
    /** the Former Yugoslav Republic of Macedonia */
    RegulatoryDomainValueMACEDONIA = 807,
    
    /** Malaysia */
    RegulatoryDomainValueMALAYSIA = 458,
    
    /** Malta */
    RegulatoryDomainValueMALTA = 470,
    
    /** Mexico */
    RegulatoryDomainValueMEXICO = 484,
    
    /** Principality of Monaco */
    RegulatoryDomainValueMONACO = 492,
    
    /** Morocco */
    RegulatoryDomainValueMOROCCO = 504,
    
    /** Netherlands */
    RegulatoryDomainValueNETHERLANDS = 528,
    
    /** Netherlands-Antilles */
    RegulatoryDomainValueNETHERLAND_ANTILLES = 530,
    
    /** New Zealand */
    RegulatoryDomainValueNEW_ZEALAND = 554,
    
    /** Nicaragua */
    RegulatoryDomainValueNICARAGUA = 558,
    
    /** Norway */
    RegulatoryDomainValueNORWAY = 578,
    
    /** Oman */
    RegulatoryDomainValueOMAN = 512,
    
    /** Islamic Republic of Pakistan */
    RegulatoryDomainValuePAKISTAN = 586,
    
    /** Panama */
    RegulatoryDomainValuePANAMA = 591,
    
    /** Paraguay */
    RegulatoryDomainValuePARAGUAY = 600,
    
    /** Peru */
    RegulatoryDomainValuePERU = 604,
    
    /** Republic of the Philippines */
    RegulatoryDomainValuePHILIPPINES = 608,
    
    /** Poland */
    RegulatoryDomainValuePOLAND = 616,
    
    /** Portugal */
    RegulatoryDomainValuePORTUGAL = 620,
    
    /** Puerto Rico */
    RegulatoryDomainValuePUERTO_RICO = 630,
    
    /** Qatar */
    RegulatoryDomainValueQATAR = 634,
    
    /** Romania */
    RegulatoryDomainValueROMANIA = 642,
    
    /** Russia */
    RegulatoryDomainValueRUSSIA = 643,
    
    /** Saudi Arabia */
    RegulatoryDomainValueSAUDI_ARABIA = 682,
    
    /** Montenegro */
    RegulatoryDomainValueMONTENEGRO = 891,
    
    /** Singapore */
    RegulatoryDomainValueSINGAPORE = 702,
    
    /** Slovak Republic */
    RegulatoryDomainValueSLOVAKIA = 703,
    
    /** Slovenia */
    RegulatoryDomainValueSLOVENIA = 705,
    
    /** South Africa */
    RegulatoryDomainValueSOUTH_AFRICA = 710,
    
    /** Spain */
    RegulatoryDomainValueSPAIN = 724,
    
    /** Sri Lanka */
    RegulatoryDomainValueSRILANKA = 144,
    
    /** Sweden */
    RegulatoryDomainValueSWEDEN = 752,
    
    /** Switzerland */
    RegulatoryDomainValueSWITZERLAND = 756,
    
    /** Syria */
    RegulatoryDomainValueSYRIA = 760,
    
    /** Taiwan */
    RegulatoryDomainValueTAIWAN = 158,
    
    /** Thailand */
    RegulatoryDomainValueTHAILAND = 764,
    
    /** Trinidad y Tobago */
    RegulatoryDomainValueTRINIDAD_Y_TOBAGO = 780,
    
    /** Tunisia */
    RegulatoryDomainValueTUNISIA = 788,
    
    /** Turkey */
    RegulatoryDomainValueTURKEY = 792,
    
    /** U.A.E. */
    RegulatoryDomainValueUAE = 784,
    
    /** Ukraine */
    RegulatoryDomainValueUKRAINE = 804,
    
    /** United Kingdom */
    RegulatoryDomainValueUNITED_KINGDOM = 826,
    
    /** United States */
    RegulatoryDomainValueUNITED_STATES = 840,
    
    /** United States - public safety */
    RegulatoryDomainValueUNITED_STATES_PS = 842,
    
    /** Uruguay */
    RegulatoryDomainValueURUGUAY = 858,
    
    /** Uzbekistan */
    RegulatoryDomainValueUZBEKISTAN = 860,
    
    /** Venezuela */
    RegulatoryDomainValueVENEZUELA = 862,
    
    /** Viet Nam */
    RegulatoryDomainValueVIET_NAM = 704,
    
    /** Yemen */
    RegulatoryDomainValueYEMEN = 887,
    
    /** Zimbabwe */
    RegulatoryDomainValueZIMBABWE = 716
};

/**
 * This class handles the network wireless settings data from the <STX>KcQQQ query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <p> Wireless General
 * <table border=1 summary = "">
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>1</td><td>Enable Static DNS</td></tr>
 *    <tr><td>2</td><td>Preferred DNS Server</td></tr>
 *    <tr><td>3</td><td>Secondary DNS Server</td></tr>
 *    <tr><td>4</td><td>DNS Suffix</td></tr>
 *    <tr><td>20</td><td>Inactive Timeout</td></tr>
 *    <tr><td>21</td><td>IP Address method</td></tr>
 *    <tr><td>22</td><td>Active IP Address</td></tr>
 *    <tr><td>23</td><td>Active Subnet Mask</td></tr>
 *    <tr><td>24</td><td>Active Gateway Address</td></tr>
 *    <tr><td>25</td><td>Printer DNS name</td></tr>
 *    <tr><td>26</td><td>Register to DNS</td></tr>
 *    <tr><td>27</td><td>Use DNS Suffix</td></tr>
 *    <tr><td>28</td><td>UDP Port</td></tr>
 *    <tr><td>29</td><td>TCP Port</td></tr>
 *    <tr><td>30</td><td>Enable Connection Status</td></tr>
 *    <tr><td>31</td><td>DHCP User Class Option</td></tr>
 *    <tr><td>32</td><td>Static IP Address</td></tr>
 *    <tr><td>33</td><td>Static Subnet Mask</td></tr>
 *    <tr><td>34</td><td>Static Gateway</td></tr>
 *    <tr><td>35</td><td>LPD Port</td></tr>
 *    <tr><td>36</td><td>LPD Enable</td></tr>
 *    <tr><td>40</td><td>Network Type</td></tr>
 *    <tr><td>41</td><td>ESSID</td></tr>
 *    <tr><td>42</td><td>Network Authentication</td></tr>
 *    <tr><td>43</td><td>EAP Type</td></tr>
 *    <tr><td>44</td><td>Phase 2 Method(Inner Authentication)</td></tr>
 *    <tr><td>45</td><td>User Name (WRITE-ONLY)</td></tr>
 *    <tr><td>46</td><td>Password (WRITE-ONLY)</td></tr>
 *    <tr><td>47</td><td>Pass Phrase (WRITE-ONLY)</td></tr>
 *    <tr><td>48</td><td>WEP Data Encryption</td></tr>
 *    <tr><td>49</td><td>WEP AP Authentication</td></tr>
 *    <tr><td>50</td><td>WEP Key Selected</td></tr>
 *    <tr><td>51</td><td>WEP Key 1 (WRITE-ONLY)</td></tr>
 *    <tr><td>52</td><td>WEP Key 2 (WRITE-ONLY)</td></tr>
 *    <tr><td>53</td><td>WEP Key 3 (WRITE-ONLY)</td></tr>
 *    <tr><td>54</td><td>WEP Key 4 (WRITE-ONLY)</td></tr>
 *    <tr><td>55</td><td>Show Signal Strength</td></tr>
 *    <tr><td>56</td><td>Power Saving Mode</td></tr>
 *    <tr><td>57</td><td>Group Cipher</td></tr>
 *    <tr><td>58</td><td>Wireless MAC Address</td></tr>
 *    <tr><td>59</td><td>Regulatory Domain</td></tr>
 *    <tr><td>60</td><td>Radio Physical Mode</td></tr>
 *    <tr><td>61</td><td>Minimum Active Channel Dwell Time</td></tr>
 *    <tr><td>62</td><td>Maximum Active Channel Dwell Time</td></tr>
 *    <tr><td>63</td><td>Active Scanning Radio Channel</td></tr>
 *    <tr><td>64</td><td>Hexadecimal Pass Phrase (64 hexadecimal digits, WRITE-ONLY)</td></tr>
 *    <tr><td>65</td><td>Use Haxadecimal PSK</td></tr>
 *    <tr><td>66</td><td>WiFi Testing Mode</td></tr>
 *    <tr><td>67</td><td>Use Client Certificate</td></tr>
 *    <tr><td>68</td><td>Signal Strength ( ~RSSI  - READ ONLY)</td></tr>
 *    <tr><td>69</td><td>SSL Port</td></tr>
 *    <tr><td>70</td><td>DHCP Host Name ( DHCP Option 12 - READ ONLY)</td></tr>
 *    <tr><td>72</td><td>WiFi Enable</td></tr>
 * </table>
 */

@interface NetworkWirelessSettings_DPL : PrinterState_DPL

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState_DPL.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 *  This gets whether static DNS is enable or disable
 *  @return true if static DNS is enable and false if disable
 */
-(bool)getStaticDNS;

/**
 *  This sets whether static DNS is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStaticDNS: (bool) value;

/**
 *  This gets the printer's preferred DNS Server
 *  @return printer's preferred DNS Server
 */
-(NSString *)getPreferredDNSServerIP;

/**
 *  This sets the printer's preferred DNS Server
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPreferredDNSServerIP: (NSString *) value;

/**
 *  This gets the printer's secondary DNS server
 *  @return printer's secondary DNS server
 */
-(NSString *)getSecondaryDNSServerIP;

/**
 *  This sets the printer's secondary DNS Server
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSecondaryDNSServerIP: (NSString *) value;

/**
 *  This gets the printer's DNS suffix
 *  @return printer's DNS suffix
 */
-(NSString *)getDNSSuffix;

/**
 *  This sets the printer's DNS suffix
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setDNSSuffix: (NSString *) value;

//Network settings 20-36
/**
 *  This gets the printer's inactive timeout(seconds)
 *  @return printer's inactive timeout
 */
-(long)getInactiveTimeout;

/**
 *  This sets the printer's inactive timeout(seconds)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setInactiveTimeout: (long) value;

/**
 * This gets the printer's IP Address method. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>N</td><td>Static</td></tr>
 *    <tr><td>B</td><td>Boot P</td></tr>
 *    <tr><td>Y</td><td>DHCP</td></tr>
 * </table>
 *  @return printer's IP Address method
 */
-(IPAddressMethodValue)getIPAddressMethod;

/**
 *  This sets the printer's IP Address method
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setIPAddressMethod: (IPAddressMethodValue) value;

/**
 *  This gets the printer's active IP Address (READ-ONLY)
 *  @return printer's active IP Address
 */
-(NSString *)getActiveIPAddress;

/**
 *  This gets the printer's active subnet mask
 *  @return printer's active subnet mask
 */
-(NSString *)getActiveSubnetMask;

/**
 *  This gets the printer's active gateway address
 *  @return printer's active gateway address
 */
-(NSString *)getActiveGatewayAddress;

/**
 *  This gets the printer's DNS name
 *  @return printer's DNS name
 */
-(NSString *)getPrinterDNSName;

/**
 *  This sets the printer's DNS name
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPrinterDNSName: (NSString *) value;

/**
 *  This gets whether printer is register to DNS or not
 *  @return true if is register and false if not
 */
-(bool)getRegisterToDNS;

/**
 *  This sets whether printer is register to DNS or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRegisterToDNS: (bool) value;

/**
 *  This gets whether DNS suffix is used or not
 *  @return true if DNS suffix is used and false if not
 */
-(bool)getUseDNSSuffix;

/**
 *  This sets whether DNS suffix is used or not
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUseDNSSuffix: (bool) value;

/**
 *  This gets the printer's UDP port
 *  @return printer's UDP port
 */
-(long)getUDPPort;

/**
 *  This sets the printer's UDP port
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUDPPort: (long) value;

/**
 *  This gets the printer's TCP port
 *  @return printer's TCP port
 */
-(long)getTCPPort;

/**
 *  This sets the printer's TCP port
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setTCPPort: (long) value;

/**
 *  This gets whether connection status report is enable or disable
 *  @return true if connection status report is enable and false if disable
 */
-(bool)getEnableConnectionStatusReport;

/**
 *  This sets whether connection status report is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEnableConnectionStatusReport: (bool) value;

/**
 *  This gets the printer's DHCP User Class Option
 *  @return printer's DHCP User Class Option
 */
-(unsigned char*)getDHCPUserClassOption;

/**
 *  This gets the printer's static IP Address
 *  @return printer's static IP Address
 */
-(NSString *)getStaticIPAddress;

/**
 *  This sets the printer's static IP Address
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStaticIPAddress: (NSString *) value;

/**
 *  This gets the printer's static subnet mask
 *  @return printer's static subnet mask
 */
-(NSString *)getStaticSubnetMask;

/**
 *  This sets the printer's static Subnet Mask
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStaticSubnetMask: (NSString *) value;

/**
 *  This gets the printer's static gateway
 *  @return printer's static gateway
 */
-(NSString *)getStaticGateway;

/**
 *  This sets the printer's static gateway
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setStaticGateway: (NSString *) value;

/**
 *  This gets the printer's LPD port
 *  @return printer's LPD port
 */
-(long)getLPDPort;

/**
 *  This sets the printer's LPD port
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setLPDPort: (long) value;

/**
 *  This gets whether LPD is enable or disable
 *  @return true if LPD is enable and false if disable
 */
-(bool)getLPDEnable;

/**
 *  This sets whether LPD is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setLPDEnable: (bool) value;

//Wifi settings 40-65

/**
 * This gets the printer's network type. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>H</td><td>Ad-Hoc</td></tr>
 *    <tr><td>P</td><td>Infrastructure</td></tr>
 * </table>
 *  @return printer's network type
 */
-(NetworkTypeValue)getNetworkType;

/**
 *  This sets the printer's network type
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setNetworkType: (NetworkTypeValue) value;

/**
 *  This gets the printer's ESSID
 *  @return printer's ESSID
 */
-(NSString *)getESSID;

/**
 *  This sets the printer's ESSID
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setESSID: (NSString *) value;

/**
 * This gets the printer's network authentication type. Possible values:
 * <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>1</td><td>LEAP WEP</td></tr>
 *    <tr><td>2</td><td>WPA Personal Shared Key(PSK)</td></tr>
 *    <tr><td>3</td><td>WPA</td></tr>
 *    <tr><td>4</td><td>WPA LEAP</td></tr>
 *    <tr><td>5</td><td>WPA2 PSK</td></tr>
 *    <tr><td>6</td><td>WPA2</td></tr>
 * </table>
 *  @return printer's network authentication type
 */
-(NetworkAuthenticationTypeValue)getNetworkAuthenticationType;

/**
 *  This sets the printer's network authenication type
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setNetworkAuthenticationType: (NetworkAuthenticationTypeValue) value;

/**
 * This gets the printer's EAP type. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>13</td><td>TLS</td></tr>
 *    <tr><td>17</td><td>LEAP</td></tr>
 *    <tr><td>21</td><td>TTLS</td></tr>
 *    <tr><td>25</td><td>PEAP</td></tr>
 *    <tr><td>43</td><td>FAST</td></tr>
 * </table>
 *  @return printer's EAP type for DO1 module
 */
-(EAPTypeValue)getEAPType;

/**
 *  This sets the printer's EAP type
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setEAPType: (EAPTypeValue) value;

/**
 * This gets the printer's inner authentication type. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>1</td><td>EAP_GTC</td></tr>
 *    <tr><td>2</td><td>EAP MSCHAP2</td></tr>
 *    <tr><td>3</td><td>EAP MD5</td></tr>
 *    <tr><td>4</td><td>GTC</td></tr>
 *    <tr><td>5</td><td>MSCHAPV2</td></tr>
 *    <tr><td>6</td><td>MSCHAP</td></tr>
 *    <tr><td>7</td><td>CHAP</td></tr>
 *    <tr><td>8</td><td>EAP_TLS</td></tr>
 * </table>
 *  @return printer's inner authentication type
 */
-(Phase2MethodValue)getPhase2Method;

/**
 *  This sets the printer's EAP type
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPhase2Method: (Phase2MethodValue) value;

/**
 *  This sets the printer's network user name(WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUserName: (NSString *) value;

/**
 *  This sets the printer's network password(WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPassword: (NSString *) value;

/**
 *  This sets the printer's network pass-phrase(WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPassPhrase: (NSString *) value;

/**
 *  This gets whether WEP data encryption is enable or disable
 *  @return true if WEP data encryption is enable and false if disable
 */
-(bool)getWEPDataEncryption;

/**
 *  This sets the printer's WEP data encryption
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPDataEncryption: (bool) value;

/**
 * This gets the printer's WEP authentication method. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>5</td><td>Shared Key 40-Bit WEP Key</td></tr>
 *    <tr><td>13</td><td>Shared key 128-Bit WEP Key</td></tr>
 * </table>
 *  @return printer's WEP authentication method
 */
-(WEPAuthenticationMethodValue)getWEPAuthenticationMethod;

/**
 * This sets the printer's WEP authentication method.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPAuthenticationMethod: (WEPAuthenticationMethodValue) value;

/**
 *  This gets the printer's selected WEP key
 *  @return printer's selected WEP key
 */
-(WEPKeySelectedValue)getWEPKeySelected;

/**
 * This sets the printer's selected WEP key
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPKeySelected: (WEPKeySelectedValue) value;

/**
 *  This sets the printer's WEP Key 1(WRITE-ONLY)
 *  WEP key entered must 10 hexadecimal digits for 40-bit keys or 26 hexadecimal digits for 128-bit keys
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPKey1: (NSString *) value;

/**
 *  This sets the printer's WEP Key 2(WRITE-ONLY)
 *  WEP key entered must 10 hexadecimal digits for 40-bit keys or 26 hexadecimal digits for 128-bit keys
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPKey2: (NSString *) value;

/**
 *  This sets the printer's WEP Key 3(WRITE-ONLY)
 *  WEP key entered must 10 hexadecimal digits for 40-bit keys or 26 hexadecimal digits for 128-bit keys
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPKey3: (NSString *) value;

/**
 *  This sets the printer's WEP Key 4(WRITE-ONLY)
 *  WEP key entered must 10 hexadecimal digits for 40-bit keys or 26 hexadecimal digits for 128-bit keys
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWEPKey4: (NSString *) value;

/**
 *  This gets whether signal strength is shown or hidden
 *  @return true if signal strength is shown and false if hidden
 */
-(bool)getShowSignalStrength;

/**
 *  This sets whether signal strength is shown or hidden
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setShowSignalStrength: (bool) value;

/**
 *  This gets whether power saving mode is enable or disable
 *  @return true if power saving mode is enable and false if disable
 */
-(bool)getPowerSavingMode;

/**
 *  This sets whether power saving mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setPowerSavingMode: (bool) value;

/**
 *  This gets the printer's group cipher
 *  @return printer's group cipher
 */
-(GroupCipherValue)getGroupCipher;

/**
 * This sets the printer's group cipher
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setGroupCipher: (GroupCipherValue) value;

/**
 *  This gets the printer's WiFi MAC Address
 *  @return printer's Wifi MAC Address
 */
-(NSString *)getWiFiMACAddress;

/**
 *  This gets the printer's regulatory domain
 *  @return printer's regulatory domain
 */
-(RegulatoryDomainValue)getRegulatoryDomain;

/**
 * This sets the printer's regulatory domain
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRegulatoryDomain: (RegulatoryDomainValue) value;

/**
 * This gets the printer's radio mode. Possible values:
 *  <table border=1 summary = "">
 *    <tr><th>Value</th><th>Description</th></tr>
 *    <tr><td>0</td><td>None</td></tr>
 *    <tr><td>1</td><td>802.11 a only</td></tr>
 *    <tr><td>2</td><td>802.11 b/g</td></tr>
 *    <tr><td>3</td><td>802.11 a/b/g</td></tr>
 *    <tr><td>4</td><td>802.11 b only</td></tr>
 *    <tr><td>5</td><td>802.11 g only</td></tr>
 * </table>
 *  @return printer's radio mode
 */
-(RadioModeValue)getRadioMode;

/**
 * This sets the printer's radio mode
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRadioMode: (RadioModeValue) value;

/**
 *  This gets the printer's minimum active channel dwell time
 *  @return printer's minimum active channel dwell time
 */
-(long)getMinActiveChannelDwellTime;

/**
 * This sets the printer's maximum active channel dwell time (0 - 65535, 0 = default)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setMinActiveChannelDwellTime: (long) value;

/**
 *  This gets the printer's maximum active channel dwell time
 *  @return printer's maximum active channel dwell time
 */
-(long)getMaxActiveChannelDwellTime;

/**
 * This sets the printer's maximum active channel dwell time (0 - 65535, 0 = default)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setMaxActiveChannelDwellTime: (long) value;

/**
 *  This gets the printer's radio channel selection.
 *  @return printer's radio channel selection.
 */
-(NSString *)getRadioChannelSelection;

/**
 *  This sets the printer's radio channel selection. ('n, C1, C2,....,Cn'; '0' = scan all channels)
 *  Ex. '3, C1, C6, C11' --> 3 channels, channel 6, and channel 11
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setRadioChannelSelection: (NSString *) value;

/**
 *  This sets the printer's hexadecimal pass phrase(64 hexadecimal digits)(WRITE-ONLY)
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setHexPassPhrase: (NSString *) value;

/**
 *  This gets whether HEX PSK is used or not
 *  @return true if HEX PSK is used and false if not
 */
-(bool)getUseHexPSK;

/**
 *  This sets whether HEX PSK is used or not.  True = Passkey will be used, False = PassPhrase will be used
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUseHexPSK: (bool) value;

/**
 *  This gets whether WiFi testing mode is enable or disable
 *  @return true if WiFi testing mode is enable and false if disable
 */
-(bool)getWiFiTestingMode;

/**
 *  This sets whether WiFi testing mode is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWiFiTestingMode: (bool) value;

/**
 *  This gets whether to use client certificate or not. Optional for EAP-PEAP, EAP-FAST, EAP-TTLS.
 *  For EAP-TLS, Client Certificate is always required and used, and printer is ignored this flag.
 *  @return true if flag is on and false if flag is off
 */
-(bool)getUseClientCertificate;

/**
 *  This sets whether to use client certificate or not. Optional for EAP-PEAP, EAP-FAST, EAP-TTLS.
 *  For EAP-TLS, Client Certificate is always required and used, and printer is ignored this flag.
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setUseClientCertificate: (bool) value;

/**
 *  This gets printer's signal strength (~RSSI - READ-ONLY)
 *  @return printer's signal strength
 */
-(NSString *)getSignalStrength;

/**
 *  This gets the printer's SSL Port
 *  @return printer's SSL Port
 */
-(long)getSSLPort;

/**
 * This sets the printer's SSL Port
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setSSLPort: (long) value;

/**
 *  This gets printer's DHCP Host Name (DHCP Option 12 - READ-ONLY)
 *  @return printer's signal strength
 */
-(NSString *)getDHCPHostName;

/**
 *  This determines if Wifi is enable or not
 *  @return true if Wifi is enable and false if disable
 */
-(bool)getWiFiEnable;

/**
 *  This sets whether Wifi is enable or disable
 *  @param value new value to set
 *  @return Success returns 0, fail returns -1
 */
-(int)setWiFiEnable: (bool) value;
@end
