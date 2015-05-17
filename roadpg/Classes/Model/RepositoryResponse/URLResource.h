//
//  URLResource.h
//  iOSFever
//
//  Created by Sandor Gazdag on 29/03/15.
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

RF_ATTRIBUTE(RFSerializable)
@interface URLResource : BaseModel

RF_ATTRIBUTE(RFSerializable, serializationKey = @"href")
@property (nonatomic, strong) NSString *href;

@end
