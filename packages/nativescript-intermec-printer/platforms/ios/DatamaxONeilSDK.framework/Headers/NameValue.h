//
//  NameValue.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/22/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 * This class is used to store data items retrieved in printer queries. It
 * is an internal class used as a structure.
 */
@interface NameValue : NSObject<NSCoding> {
    /** Name of the parameter */
    NSString *name;
    
    /** Value of the parameter */
    NSString *value;
}

@property (strong) NSString *name;
@property (strong) NSString *value;

/**
 * Constructor that will set the read only values
 *
 * @param aName Name of the parameter
 * @param aValue Value for the parameter
 */
-(id) initWithName: (NSString *) aName withValue: (NSString *) aValue;

@end
