//
//  RepositoryDataProviderTest.m
//  iOSFever
//
//  Created by Sandor Gazdag on 29/03/15.
//
//

@import Foundation;
@import XCTest;

#import "RepositoryDataProvider.h"

@interface RepositoryDataProviderTest : XCTestCase

@end

@implementation RepositoryDataProviderTest {
    RepositoryDataProvider *_provider;
}

- (void)setUp {
    [super setUp];
    _provider = [[RepositoryDataProvider alloc] init];
}

- (void)tearDown {
    _provider = nil;
    
    [super tearDown];
}

- (void)testRepositoryPageRequest {
    __block BOOL requestFinished = NO;
    
    XCTestExpectation *expectation = [self expectationWithDescription:@"repository test request"];
    
    [_provider repositoryPageWithCompletion: ^(NSArray *repositories, NSError *error) {
        requestFinished = YES;
        if (error) {
            XCTFail(@"%@", [error localizedDescription]);
        }
        XCTAssert([repositories count] > 0, @"The returned array is empty.");
        [expectation fulfill];
    }];
    
    [self waitForExpectationsWithTimeout:30.0 handler:^(NSError *error) {
        NSLog(@"%@",error);
    }];
}

@end
