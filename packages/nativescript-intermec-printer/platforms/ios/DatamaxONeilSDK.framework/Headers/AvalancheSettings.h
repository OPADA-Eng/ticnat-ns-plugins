//
//  AvalancheSettings.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/14/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "PrinterState.h"

/**
 * This class handles the data from an {AE?} query as well as
 * accessors to read the data values.
 * <p>
 * This class supports the following possible parameters:
 * <table border=1>
 *    <tr><th>Parameter</th><th>Description</th></tr>
 *    <tr><td>AIP</td><td>What is the IP address of the Avalanche agent</td></tr>
 *    <tr><td>ALL</td><td>Should all data be printed durning a self test.</td></tr>
 *    <tr><td>ANA</td><td>What is the name of the Avalanche agent</td></tr>
 *    <tr><td>APT</td><td>What is the port number of the Avalanche agent</td></tr>
 *    <tr><td>CON</td><td>Type of connection being used to talk to the printer.</td></tr>
 *    <tr><td>MLN</td><td>What is the printer's model name</td></tr>
 *    <tr><td>PRE</td><td>Is a prelicensed block being used</td></tr>
 *    <tr><td>PRN</td><td>Printers TCPIP station name</td></tr>
 *    <tr><td>PRS</td><td>When an Avalanche update is performed this will print out the results if true.</td></tr>
 *    <tr><td>RUN</td><td>Is Avalanche support enabled on the printer.</td></tr>
 *    <tr><td>TTO</td><td>TCP timeout in milliseconds</td></tr>
 *    <tr><td>UIN</td><td>Update interval in minutes</td></tr>
 *    <tr><td>UPD</td><td>Flag is used to tell us how/when the update will be occur</td></tr>
 *    <tr><td>UTO</td><td>UDP timeout in milliseconds</td></tr>
 *    <tr><td>WRD</td><td>Are we using a wired connection</td></tr>
 * </table>
 */
@interface AvalancheSettings : PrinterState

/**
 * Type of connection being used to talk to the printer.
 */
typedef NS_ENUM(NSInteger, Connection) {
    /**
     * The result was never set.
     */
    ConnectionUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    ConnectionUnknown = 999,
    
    /**
     * None (n)
     */
    ConnectionNone = 110, //n
    
    /**
     * TCP or UDP Connection (p)
     */
    ConnectionTCP_UDP = 112 //p
};

typedef NS_ENUM(NSInteger, UpdateMode) {
    /**
     * The result was never set.
     */
    UpdateModeUnset = 998,
    
    /**
     * The result was unrecognized.  This usually results from a new value
     * since the release of the SDK.
     */
    UpdateModeUnknown = 999,
    
    /**
     * None
     */
    UpdateModeNone = 110, //n
    
    /**
     * Interval
     */
    UpdateModeInterval = 105, //i
    
    /**
     * Startup
     */
    UpdateModeStartup = 115, //s
    
    /**
     * Both
     */
    UpdateModeBoth = 98, //b
    
};

/**
 * The default constructor will initialize the class with default values.
 * <p>
 * Initially all of the _IsValid parameters will be false because no data has been processed.  To 'populate' the values, the object must invoke <see cref="PrinterState.Update(int)">Update</see> with the query response string.
 * @param conn connection to printer
 */
-(id) initWithConnection: (ConnectionBase *) conn;

/**
 * Indicates if getAgentIP parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAgentIP may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentIP
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAgentIP_IsPresent;

/**
 * What is the IP address of the Avalanche agent.
 * <p>
 * The return value for this parameter is only valid if getAgentIP_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentIP_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getAgentIP;

/**
 * Indicates if getShowAllData parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getShowAllData may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getShowAllData
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getShowAllData_IsPresent;

/**
 * Should all data be printed durning a self test.
 * <p>
 * The return value for this parameter is only valid if getShowAllData_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getShowAllData_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getShowAllData;

/**
 * Indicates if getAgentName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAgentName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAgentName_IsPresent;

/**
 * What is the name of the Avalanche agent.
 * <p>
 * The return value for this parameter is only valid if getAgentName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getAgentName;

/**
 * Indicates if getAgentPort parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getAgentPort may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentPort
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getAgentPort_IsPresent;

/**
 * What is the port number of the Avalanche agent.
 * <p>
 * The return value for this parameter is only valid if getAgentPort_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getAgentPort_IsPresent
 * @return The current value for the parameter.
 */
-(long) getAgentPort;

/**
 * Indicates if getConnectionType parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getConnectionType may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectionType
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getConnectionType_IsPresent;

/**
 * Type of connection being used to talk to the printer. Values: r = Serial, p = TCP/IP.
 * <p>
 * The return value for this parameter is only valid if getConnectionType_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getConnectionType_IsPresent
 * @return The current value for the parameter.
 */
-(Connection) getConnectionType;

/**
 * Indicates if getPrinterModelName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterModelName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterModelName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterModelName_IsPresent;

/**
 * What is the printer's model name.
 * <p>
 * The return value for this parameter is only valid if getPrinterModelName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterModelName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPrinterModelName;

/**
 * Indicates if getIsPrelicensed parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIsPrelicensed may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsPrelicensed
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIsPrelicensed_IsPresent;

/**
 * Is a prelicensed block being used.
 * <p>
 * The return value for this parameter is only valid if getIsPrelicensed_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsPrelicensed_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getIsPrelicensed;

/**
 * Indicates if getPrinterName parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterName may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterName
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterName_IsPresent;

/**
 * Printer's TCP/IP station name.
 * <p>
 * The return value for this parameter is only valid if getPrinterName_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterName_IsPresent
 * @return The current value for the parameter.
 */
-(NSString *) getPrinterName;

/**
 * Indicates if getPrinterResultFlag parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getPrinterResultFlag may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterResultFlag
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getPrinterResultFlag_IsPresent;

/**
 * When an Avalanche update is performed this will print out the results if true.
 * <p>
 * The return value for this parameter is only valid if getPrinterResultFlag_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getPrinterResultFlag_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getPrinterResultFlag;

/**
 * Indicates if getIsAvalancheEnabled parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIsAvalancheEnabled may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsAvalancheEnabled
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIsAvalancheEnabled_IsPresent;

/**
 * Is Avalanche support enabled on the printer.
 * <p>
 * The return value for this parameter is only valid if getIsAvalancheEnabled_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsAvalancheEnabled_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getIsAvalancheEnabled;

/**
 * Indicates if getTCP_ConnectTimeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getTCP_ConnectTimeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTCP_ConnectTimeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getTCP_ConnectTimeout_IsPresent;

/**
 * TCP timeout in milliseconds.
 * <p>
 * The return value for this parameter is only valid if getTCP_ConnectTimeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getTCP_ConnectTimeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getTCP_ConnectTimeout;

/**
 * Indicates if getUpdateInterval parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUpdateInterval may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpdateInterval
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUpdateInterval_IsPresent;

/**
 * Update interval in minutes.
 * <p>
 * The return value for this parameter is only valid if getUpdateInterval_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpdateInterval_IsPresent
 * @return The current value for the parameter.
 */
-(long) getUpdateInterval;

/**
 * Indicates if getUpdateFlags parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUpdateFlags may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpdateFlags
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUpdateFlags_IsPresent;

/**
 * Flag is used to tell us how/when the update will be occur.
 * <p>
 * The return value for this parameter is only valid if getUpdateFlags_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUpdateFlags_IsPresent
 * @return The current value for the parameter.
 */
-(UpdateMode) getUpdateFlags;

/**
 * Indicates if getUDP_Timeout parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getUDP_Timeout may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUDP_Timeout
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getUDP_Timeout_IsPresent;

/**
 * UDP timeout in milliseconds.
 * <p>
 * The return value for this parameter is only valid if getUDP_Timeout_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getUDP_Timeout_IsPresent
 * @return The current value for the parameter.
 */
-(long) getUDP_Timeout;

/**
 * Indicates if getIsWired parameter is present.
 * <p>
 * This function is useful to determine if the given parameter is supported on the current printer.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned by the parameter getIsWired may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsWired
 * @return If the parameter is present and valid true, false otherwise.
 */
-(bool) getIsWired_IsPresent;

/**
 * Are we using a wired connection?
 * <p>
 * The return value for this parameter is only valid if getIsWired_IsPresent returns true.  Because of differences in configuration, hardware or version certain parameter may not exist and the results returned may not be valid.  Instead of trying to indicate this with 'Magic Values' this method was implemented.
 *
 * @see getIsWired_IsPresent
 * @return The current value for the parameter.
 */
-(bool) getIsWired;

@end
