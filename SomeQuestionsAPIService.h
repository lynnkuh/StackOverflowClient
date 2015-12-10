//
//  SomeQuestionsAPIService.h
//  StackOverflowClient
//
//  Created by Regular User on 12/8/15.
//  Copyright © 2015 Lynn Kuhlman. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"


@interface SomeQuestionsAPIService : NSObject

+(void )fetchMyQuestionswithCompletion:(kNSDictionaryCompletionHandler _Nonnull)completionHandler;

@end
