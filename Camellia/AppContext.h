//
//  AppContext.h
//  Camellia
//
//  Created by sss on 12-12-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AppContextHandler.h"
#import "ServiceShell.h"

@interface AppContext : NSObject

+(id <ServiceShell>) serviceShell;

+(void) addDelegate:(id <ServiceShellDelegate>) delegate;
+(NSArray*) delegates;

@end
