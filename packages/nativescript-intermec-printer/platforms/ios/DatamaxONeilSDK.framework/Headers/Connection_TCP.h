//
//  Connection_TCP.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang on 10/29/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ConnectionBase.h"

extern NSString *TCPDataReceivedNotification;

/**
 * This class is used to establish connection via Transfer Control Protocol(TCP).
 * @discussion The Transfer Control Protocol(TCP) sends its datagram to the target
 * device and does guarantee reliable and in-order delivery. Because of
 * this it is much slower than UDP so is used when accurate data is more 
 * important than speed.
 */
@interface Connection_TCP : ConnectionBase <NSStreamDelegate>
{    
	/** Target Address */
	NSString* targetAddress;
    
	/** Target Port */
	int targetPort;
    
    /** Stream to read from the TCP device */
	NSInputStream* streamRead;
    
	/** Stream to write the TCP device */
	NSOutputStream* streamWrite;
}

/**
 *  Printer's IP Address
 */
@property (retain,nonatomic) NSString* targetAddress;

/**
 *  Printer's TCP Port
 */
@property int targetPort;

/** 
 * Create a TCP Client connection
 * <p> This function is used to create a connection to a TCP client.
 * @param targetDevice IP address of target printer to connect to.
 * @param port TCP port to connect to
 * @param delegate     delegate for ConnectionDelegate updates
 *
 *  @return instance of this object
 */
-(id)initWithClient:(NSString*) targetDevice targetPort:(int)port withDelegate:(id<ConnectionDelegate>)delegate;



@end
