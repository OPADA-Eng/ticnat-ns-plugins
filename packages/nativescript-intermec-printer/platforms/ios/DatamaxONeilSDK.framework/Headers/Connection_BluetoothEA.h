//
//  Connection_BluetoothEA.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/11/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "ConnectionBase.h"
#import <ExternalAccessory/ExternalAccessory.h>

extern NSString *EADataReceivedNotification;

/**
 * This class is use to establish Bluetooth connections
 * via iOS External Accessory Framework. NOTE: THIS CLASS ONLY SUPPORTS APEX PRINTERS (eg. Apex 2i, Apex 3, etc..)s
 */
@interface Connection_BluetoothEA : ConnectionBase <EAAccessoryDelegate, NSStreamDelegate> {
    //accessory
    EAAccessory *_accessory;
    
    //session
    EASession *_session;
    
    //Protocol name string
    NSString *_protocolString;
}

/**
 *  Set up the connection for the External Accessory
 *  @param accessory Desired External Accessory to communicate with
 *  @param protocolString External Accessory protocol
 */
- (void)setupConnectionForAccessory:(EAAccessory *)accessory withProtocolString:(NSString *)protocolString;

/**
 *  This returns the list of External Accessories(connected devices) on the device
 *  @return external accessories of the device
 */
- (NSArray *)accessoryList;

/**
 *  Bluetooth device represented as an External Accessory Object
 */
@property (nonatomic, readonly) EAAccessory *accessory;

/**
 *  Protocol string of the Bluetooth device
 */
@property (nonatomic, readonly) NSString *protocolString;

/** 
 *  Create a Bluetooth Client connection
 *  <p> This function is used to create a Bluetooth Client connection base on
 *  the iOS External Accessory Framework
 *  @param delegate     delegate for ConnectionDelegate updates
 *
 *  @return instance of this object
 */
-(id)initWithDelegate:(id<ConnectionDelegate>)delegate;


@end
