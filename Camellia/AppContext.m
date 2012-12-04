//
//  AppContext.m
//  Camellia
//
//  Created by sss on 12-12-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import "AppContext.h"
#import "MockServiceShell.h"

static MockServiceShell* _serviceShell;

static NSMutableArray* _delegates;

@implementation AppContext

+(id <ServiceShell>) serviceShell {
    
    if (_serviceShell) {
        _serviceShell = [[MockServiceShell alloc] init];
        [_serviceShell retain];
    }
}

+(void) addDelegate:(id <ServiceShellDelegate>) delegate {
    
    if (!_delegates) {
        _delegates = [[NSMutableArray alloc] init];
        [_delegates retain];
    }
}

+(NSArray*) delegates {
    return _delegates;
}

@end
