//
//  RepositoryDataProvider.m
//  iOSFever
//
//  Created by Sandor Gazdag on 29/03/15.
//
//

#import "RepositoryDataProvider.h"

#import "RFWebServiceClient+RPRepositories.h"

#import "RepositoryCollection.h"
#import "Repository.h"

static NSString *const kBitBucketBaseURL = @"https://api.bitbucket.org/2.0";

@implementation RepositoryDataProvider

#pragma mark - Lifecycle

- (instancetype)init {
	self = [super init];
	if (self) {
		_repositoryList = [[NSMutableArray alloc] init];
	}
	return self;
}

#pragma mark - Public

- (void)repositoryPageWithCompletion:(RepositoriesListCompletionBlock)completionBlock {

    RFWebServiceClient *request = [[RFWebServiceClient alloc] initWithServiceRoot:kBitBucketBaseURL];

	[request repositoryListWithSuccess: ^(id result) {
	    RepositoryCollection *response = (RepositoryCollection *)result;
	    completionBlock(response.values, nil);
	} failure: ^(NSError *error) {
	    completionBlock(nil, error);
	}];
}

@end
