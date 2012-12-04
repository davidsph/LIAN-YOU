//
//  ServiceShell.h
//  Camellia
//
//  Created by sss on 12-12-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ServiceShell <NSObject>

-(void) loginWithUserName:(NSString*) userName andPassword:(NSString*) password;

@end
