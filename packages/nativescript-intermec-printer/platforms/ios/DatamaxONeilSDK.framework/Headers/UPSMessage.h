//
//  UPSMessage.h
//  DatamaxONeilSDK_iPhone
//
//  Created by Quang Phan on 12/17/13.
//  Copyright (c) 2014 Datamax-O'Neil. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  This class holds the information of the UPS message for printing Maxicode Barcodes
 */
@interface UPSMessage : NSObject
{
    NSCharacterSet* alphaNumericSet;
    
    NSCharacterSet* alphaNumericWithSpace;
    
    NSCharacterSet* numericSet;
    
    NSCharacterSet* alphaSet;
    /**
	 5 or 9 alphanumeric post code.
	 US - 5-digit zip code + 4 digit zip extension
	 International - 6 alphanumeric character zip code(A-Z, 0-9)
     */
	NSString* zipCode;

	/**
	 Ship-to country code. Default is US Country code
     */
	int countryCode;
    
	/**
	 3-Digit Class Of Service
     */
	int classOfService;
    
	/**
	 Shipment Tracking Number
     */
	NSString* trackingNumber;
    
	/**
	 Standard Carrier Alpha Code (SCAC)
     */
	NSString* SCAC;
    
	/**
	 UPS Shipper Number
     */
	NSString* shipperNumber;
    
	/**
	 Julian Day of Pickup
     */
	int julianPickupDay;
    
	/**
	 Shipment ID Number
     */
	NSString* shipmentID;

	/**
	 Current package number of shipment
     */
	int currentPackage;
	
	/**
	 Total packages for shipment
     */
	int totalPackage;
    
	/**
	 Package Weight in pounds (1-3 numeric digits
     */
	int packageWeight;
    
	/**
	 Address Validation
     */
	bool validateAddress;
    
	/**
	 Ship-to Address. Optional
     */
	NSString* shipToAddr;
    
	/**
	 Ship-To City
     */
	NSString* shipToCity;
    
	/**
	 Ship-To State
     */
	NSString* shipToState;
}

/**
 * 5 or 9 alphanumeric post code.
 * @discussion US: 5-digit zip code + 4 digit zip extension
 * <p> International: 6 alphanumeric character zip code(A-Z, 0-9)
 */
@property(nonatomic,retain) NSString* zipCode;

/**
 * Ship-to country code. Default is US Country code
 */
@property int countryCode;

/**
 * 3-Digit Class Of Service
 */

@property int classOfService;

/**
 * Shipment Tracking Number
 */
@property(nonatomic,retain) NSString* trackingNumber;

/**
 * Standard Carrier Alpha Code (SCAC)
 */
@property(nonatomic,retain) NSString* SCAC;

/**
 * UPS Shipper Number
 */
@property(nonatomic,retain) NSString* shipperNumber;

/**
 * Julian Day of Pickup
 */
@property int julianPickupDay;

/**
 * Shipment ID Number
 */
@property(nonatomic,retain) NSString* shipmentID;

/**
 * Current package number of shipment
 */
@property int currentPackage;

/**
 * Total packages for shipment
 */
@property int totalPackage;

/**
 * Package weight in pounds (1-3 numeric digits)
 */
@property int packageWeight;

/**
 * Address validation
 */
@property bool validateAddress;

/**
 * Ship-to or destination address. Optional
 */
@property(nonatomic,retain) NSString* shipToAddr;

/**
 * Ship-to or destination city
 */
@property(nonatomic,retain) NSString* shipToCity;

/**
 * Ship-to or destination state
 */
@property(nonatomic,retain) NSString* shipToState;


/**
 *  This constructor takes all the properties of the message specified by user.
 *
 *  @param zipCd            zip 5 or 9 digit zip code(US) or 6 alphanumeric characters zip code(International)
 *  @param countryCd        3-digit Country Code
 *  @param classService     3-digit class of service
 *  @param trackingNum      Shipment Tracking Number (10 or 11 uppercase alphanumeric characters)
 *  @param scac             Standard Carrier Alpha Code(4 uppercase alpha characters)
 *  @param shipperNum       UPS shipper number (6 uppercase alphanumeric characters)
 *  @param pickupDay        Julian day of pickup
 *  @param shipID           Optional. Shipment ID Number (0-30 alpha/numeric characters). If not use, pass in empty string.
 *  @param numberOfPackages Total number of packages for shipment(1-3 digits)
 *  @param packageNumber    Current package number(1-3 digits)
 *  @param pkgWeight        Package weight in pounds(1-3 digits)
 *  @param validateAddr     Address validation
 *  @param destAddr         Optional. Ship-to Address (0-35 alpha/numeric characters). If not use, pass in empty string.
 *  @param destCity         Ship-to City (1-20 alpha/numeric characters)
 *  @param destState        Ship-to State(2 alpha characters)
 *
 *  @return UPSMessage object with specified values
 */
-(id)initWithMessage:(NSString*)zipCd countryCode:(int)countryCd service:(int)classService
            trackNum: (NSString*)trackingNum carrierCode: (NSString*)scac shipperNumber:(NSString*) shipperNum
           pickupDay:(int)pickupDay shipmentID:(NSString*) shipID numberOfPackages: (int) numberOfPackages
       packageNumber: (int)packageNumber packageWeight:(int)pkgWeight validate:(bool)validateAddr
            destAddr:(NSString*) destAddr destCity: (NSString*) destCity destState: (NSString*) destState;
@end
