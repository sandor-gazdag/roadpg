//
//  RepositoryDataProvider.h
//  iOSFever
//
//  Created by Sandor Gazdag on 29/03/15.
//
//

@import Foundation;

typedef void (^RepositoriesListCompletionBlock)(NSArray *repositories, NSError *error);

@interface RepositoryDataProvider : NSObject

@property (nonatomic, strong) NSMutableArray *repositoryList;

- (void)repositoryPageWithCompletion:(RepositoriesListCompletionBlock)completionBlock;

@end
