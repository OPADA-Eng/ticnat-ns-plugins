//
//  PrinterData.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Dmitriy Bozko on 11/14/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import "ConnectionBase.h"
#import <Foundation/Foundation.h>

/**
 * This is the base class for the printer state code. This will handle
 * configuration queries and settings and all of the shared routines for the
 * sub-classes that each handle a specific printer query.
 */
@interface PrinterData : NSObject<NSCoding> {
    /**
	 * Names of the different values expected
	 */
	NSMutableDictionary *names;
    
	/**
	 * Names of the different values expected in logical order
	 */
	NSMutableArray *namesOrder;
    
	/**
	 * Queried Name/Value pairs
	 */
	NSMutableDictionary *nameValuePairs_Queried;
    
	/**
	 * Current Name/Value pairs
	 */
	NSMutableDictionary *nameValuePairs_Current;
    
	/**
	 * Description of the query
	 */
	NSString *queryDescription;
    
	/**
	 * Query to retrieve data
	 */
	NSString *query;
    
    /**
     *  Config command header to set data
     */
    NSString *configHeader;
    
	/**
	 * Query response header
	 */
	NSString *queryResponseHeader;
    
    /**
     *  Connection to printer
     */
    ConnectionBase *connection;
}

@property(strong) NSString *queryDescription;

/**
 * This is true if the configuration information is valid. If the printer
 * doesn't support the functionality or query failed this will return false.
 * <p>
 * Because not all queries are valid for all printer configurations this
 * parameter is designed to indicate if the PrinterState object is populated
 * with any values. A false value can mean either the object has never had
 * Update run, or that when an update was performed nothing was returned
 * from the printer.
 *
 * @return If the configuration information is valid.
 */
-(bool) getValid;

/**
 * This will return the query to send to the printer to retrieve the data.
 *
 * @return The query to send to the printer to retrieve the data.
 */
-(NSString *) getQuery;

/**
 * This will return the description for the query.
 * <p>
 * The short description is useful for adding context to the retrieved
 * results when you are displaying retrieved values.
 *
 * @return The description for the query.
 */
//-(NSString *) getQueryDescription;

/**
 * This will parse the query response from the printer to update the values
 * for this set of parameters. All current values will be replaced with the
 * values on the printer.
 * <p>
 * Initially the PrinterState objects are empty. Use this to <I>update</I>
 * them with the latest values from the printer. Unlink the other version of
 * Update which takes the connection object to the printer and handles the
 * querying for you, this version takes the query response. This allows the
 * querying to be done at another time than processing.
 *
 * @param responseString This is the string returned from the printer for
 *        this query.
 */
-(void) update: (NSString *) responseString;

/**
 * This will return a string value of the parameter token specified. If the
 * token is not present then null is returned.
 * <p>
 * This function is good for generically accessing data of PrinterState
 * objects.
 *
 * @param name Name of the parameter to retrieve the value for.
 * @return string with the value of the parameter.
 */
-(NSString *) queryResult: (NSString *) name;

/**
 * This will return an array list of the items returned in the query it the
 * form of Name{tab}Value.
 * <p>
 * This function is good for generically accessing data of PrinterState
 * objects. Altering these values does on alter their actual value.
 *
 * @return ArrayList with the Name and Value items separated by a tab.
 */
-(NSMutableArray *) queryResults;

/**
 * Returns a string  that represents the current configuration.
 *
 * @return The current configuration data.
 */
-(NSString *) toString;

/**
 * Returns a string  that represents the current configuration.
 *
 * @param format Format of the data to be returned. 'L' is for long, 'S' is
 *        for short.
 * @return The current configuration data.
 */
-(NSString *) toString: (NSString *) format;

/**
 * This will parse the query results and return the query results as a
 * Hashmap name/NameValue objects.
 *
 * @param queryResults Query results to process
 * @return This will return the query results as a NameValue array. If this
 *         query was invalid then an empty HashMap is returned.
 * @throws IllegalStateException If a duplicate tag is found.
 */
-(NSMutableDictionary *) querySettings: (NSString *) queryResults;

/**
 * Indicates if we have the parameter value.
 *
 * @param parameter Parameter key
 * @return True if the parameter is present, false otherwise.
 */
-(bool) containsData: (NSString *) parameter;

/**
 * Return if this is a valid integer value
 *
 * @param name Parameter key
 * @return True if this is a valid integer
 */
-(bool) isInteger: (NSString *) name;

/**
 * Return if this is a valid double value
 *
 * @param name Parameter key
 * @return True if this is a valid double
 */
-(bool) isDouble: (NSString *) name;

/**
 * Return if this is a valid string  value
 *
 * @param name Parameter key
 * @return True if this is a valid string
 */
-(bool) isString: (NSString *) name;

/**
 * This will return the value of the parameter in the retrieved values.
 *
 * @param name Parameter name
 * @param trueValue Value used when this is true
 * @param falseValue Value used when this is false
 * @return Value of the parameter.
 * @throws IllegalArgumentException If the value is not one of the two
 *         expected values.
 */
-(bool) parse_Boolean: (NSString *) name withTrueValue: (NSString *) trueValue withFalseValue: (NSString *) falseValue;

/**
 * This will set new value into the database for configuration
 * @param name Parameter name
 * @param value Value to set
 * @param trueValue Value used when this is true
 * @param falseValue Value used when this is false
 */
-(bool) set_Boolean: (NSString *)name withValue:(bool) value withTrueValue: (NSString *) trueValue withFalseValue: (NSString *) falseValue;

/**
 * This will return the value of the parameter in the retrieved values.
 *
 * @param name Parameter name
 * @return Value of the parameter.
 */
-(long) parse_Long: (NSString *) name;

/**
 * This will set new value into the database for configuration
 * @param name Parameter name
 * @param value Value to set
 */
-(int) set_Long: (NSString *)name withValue: (long) value;

/**
 * This will return the value of the parameter in the retrieved values.
 *
 * @param name Parameter name
 * @return Value of the parameter.
 */
-(double) parse_Double: (NSString *) name;

/**
 * This will set new value into the database for configuration
 * @param name Parameter name
 * @param value Value to set
 */
-(int) set_Double: (NSString *)name withValue: (double) value;

/**
 * This will return the value of the parameter in the retrieved values.
 * 
 * @param name Parameter name
 * @return Value of the parameter.
 */
-(NSString *) parse_String: (NSString *) name;

/**
 * This will set new value into the database for configuration
 * @param name Parameter name
 * @param value Value to set
 */
-(int) set_String: (NSString *)name withValue: (NSString *) value;


/**
 * Add this parameter to the internal list.
 * 
 * @param parameter Parameter name
 * @param description Parameter description
 */
-(void) addName: (NSString *) parameter withDescription: (NSString *) description;

/**
 * This will update the printer with the current configuration values
 * @return Returns -1 if error occurs, 0 if success, and 1 if class does not
 * support configuration.
 */
-(int) commit;

@end
