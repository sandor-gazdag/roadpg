//
//  Links.h
//
//  Created by Sandor Gazdag on 29/03/15
//
//

#import "BaseModel.h"

#import <ROADSerialization.h>

@class URLResource;

RF_ATTRIBUTE(RFSerializable)
@interface Links : BaseModel

RF_ATTRIBUTE(RFSerializable, serializationKey = @"forks")
@property (nonatomic, strong) URLResource *forks;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"avatar")
@property (nonatomic, strong) URLResource *avatar;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"watchers")
@property (nonatomic, strong) URLResource *watchers;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"commits")
@property (nonatomic, strong) URLResource *commits;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"html")
@property (nonatomic, strong) URLResource *html;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"linksSelf")
@property (nonatomic, strong) URLResource *linksSelf;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"clone")
@property (nonatomic, strong) NSArray *clone;

RF_ATTRIBUTE(RFSerializable, serializationKey = @"pullrequests")
@property (nonatomic, strong) URLResource *pullrequests;

@end
