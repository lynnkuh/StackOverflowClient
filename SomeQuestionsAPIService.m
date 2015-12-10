//
//  SomeQuestionsAPIService.m
//  StackOverflowClient
//
//  Created by Regular User on 12/8/15.
//  Copyright © 2015 Lynn Kuhlman. All rights reserved.
//

#import "SomeQuestionsAPIService.h"
#import "JSONAPIRequestService.h"

@implementation SomeQuestionsAPIService

+(void )fetchMyQuestionswithCompletion:(kNSDictionaryCompletionHandler _Nonnull)completionHandler{
    
    NSMutableDictionary *parameters = [[NSMutableDictionary alloc] init];
    
    [parameters setObject:@"1" forKey:@"page"];
    
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    
    NSString *accessToken = [defaults stringForKey:@"accessToken"];
    NSLog(@"accessToken: %@", accessToken);
    
    
  
    
}


@end
