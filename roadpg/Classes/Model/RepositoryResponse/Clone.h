//
//  Clone.h
//
//  Created by Sandor Gazdag on 29/03/15
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

RF_ATTRIBUTE(RFSerializable)
@interface Clone : BaseModel

RF_ATTRIBUTE(RFSerializable, serializationKey = @"name")
@property (nonatomic, strong) NSString *name;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"href")
@property (nonatomic, strong) NSString *href;

@end
