//
//  NSObject+PrinterManager.h
//  Obada-Objc
//
//  Created by Mouayyad Taja on 03/03/2022.
//

#import <Foundation/Foundation.h>
#import "MWIFIManager.h"
#import "AsyncSocket.h"
#import "AsyncUdpSocket.h"
#import "BLEManager.h"
#import "ImageTranster.h"
#import "libMPrinter.h"
#import "MBLEManager.h"
#import "MCommand.h"
#import "TscCommand.h"

NS_ASSUME_NONNULL_BEGIN

@interface PrinterManager:NSObject
    -(MWIFIManager*) getWifiObj;
@end

NS_ASSUME_NONNULL_END
