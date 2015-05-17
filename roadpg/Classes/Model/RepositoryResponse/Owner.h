//
//  Owner.h
//
//  Created by Sandor Gazdag on 29/03/15
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

@class Links;

RF_ATTRIBUTE(RFSerializable)
@interface Owner : BaseModel

RF_ATTRIBUTE(RFSerializable, serializationKey = @"username")
@property (nonatomic, strong) NSString *username;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"links")
@property (nonatomic, strong) Links *links;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"displayName")
@property (nonatomic, strong) NSString *displayName;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"uuid")
@property (nonatomic, strong) NSString *uuid;

@end
