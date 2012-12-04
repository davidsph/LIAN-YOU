//
//  ServiceShellDelegate.h
//  Camellia
//
//  Created by sss on 12-12-3.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ServiceShellDelegate <NSObject>

-(void) loginDidComplete:(BOOL) isSucceeded;

@end
