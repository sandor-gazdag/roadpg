//
//  BaseClass.h
//
//  Created by Sandor Gazdag on 29/03/15
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

#import "Repository.h"

RF_ATTRIBUTE(RFSerializable)
@interface RepositoryCollection : BaseModel

RF_ATTRIBUTE(RFSerializableCollection, collectionClass = [Repository class])
RF_ATTRIBUTE(RFSerializable, serializationKey = @"values")
@property (nonatomic, strong) NSArray *values;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"pagelen")
@property (nonatomic, strong) NSNumber *pagelen;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"next")
@property (nonatomic, strong) NSString *next;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"page")
@property (nonatomic, strong) NSNumber *page;

@end
