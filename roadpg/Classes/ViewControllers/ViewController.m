//
//  ViewController.m
//  road_playground
//
//  Created by sgazdag on 14/05/15.
//  Copyright (c) 2015 sgazdag. All rights reserved.
//

#import "ViewController.h"

#import "RepositoryDataProvider.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    RepositoryDataProvider *provider = [[RepositoryDataProvider alloc] init];
    [provider repositoryPageWithCompletion:^(NSArray *repositories, NSError *error) {
        NSLog(@"%@",repositories);
    }];
}

@end
