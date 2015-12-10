//
//  JSONAPIRequestService.h
//  StackOverflowClient
//
//  Created by Regular User on 12/8/15.
//  Copyright © 2015 Lynn Kuhlman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"

@interface JSONAPIRequestService : NSObject

+(void )getRequestWithURL:(NSString * _Nonnull)url parameters:(NSDictionary*)parameters withCompletion:(kNSDataCompletionHandler _Nonnull)completionHandler;
+(void)postRequestWithURL:(NSString * _Nonnull)url parameters:(NSDictionary* _Nullable)parameters withCompletion:(kNSDataCompletionHandler _Nonnull)completionHandler;
+(void)deleteRequestWithURL:(NSString * _Nonnull)url parameters:(NSDictionary* _Nullable)parameters withCompletion:(kNSDataCompletionHandler _Nonnull)completionHandler;
@end
