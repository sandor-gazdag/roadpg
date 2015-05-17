//
//  Repository.h
//
//  Created by Sandor Gazdag on 29/03/15
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

@class Owner, Links;

RF_ATTRIBUTE(RFSerializable)
@interface Repository : BaseModel

RF_ATTRIBUTE(RFSerializable, serializationKey = @"uuid")
@property (nonatomic, strong) NSString *uuid;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"fullName")
@property (nonatomic, strong) NSString *fullName;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"valuesDescription")
@property (nonatomic, strong) NSString *valuesDescription;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"owner")
@property (nonatomic, strong) Owner *owner;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"size")
@property (nonatomic, strong) NSNumber *size;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"createdOn")
@property (nonatomic, strong) NSString *createdOn;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"hasWiki")
@property (nonatomic, assign) BOOL hasWiki;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"forkPolicy")
@property (nonatomic, strong) NSString *forkPolicy;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"language")
@property (nonatomic, strong) NSString *language;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"links")
@property (nonatomic, strong) Links *links;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"hasIssues")
@property (nonatomic, assign) BOOL hasIssues;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"scm")
@property (nonatomic, strong) NSString *scm;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"isPrivate")
@property (nonatomic, assign) BOOL isPrivate;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"name")
@property (nonatomic, strong) NSString *name;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"updatedOn")
@property (nonatomic, strong) NSString *updatedOn;

@end
