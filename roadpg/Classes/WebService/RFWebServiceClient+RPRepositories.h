//
//  RFWebServiceClient+RPRepositories.h
//  road_playground
//
//  Created by sgazdag on 14/05/15.
//  Copyright (c) 2015 sgazdag. All rights reserved.
//

#import <ROADWebservice.h>

@interface RFWebServiceClient (RPRepositories)

RF_ATTRIBUTE(RFWebServiceCache, cacheDisabled = YES)
RF_ATTRIBUTE(RFWebServiceCall, method = @"GET", relativePath = @"/repositories", prototypeClass = [RepositoryCollection class])
- (id <RFWebServiceCancellable> )repositoryListWithSuccess:(void (^)(id result))successBlock failure:(void (^)(NSError *error))failureBlock;

@end
