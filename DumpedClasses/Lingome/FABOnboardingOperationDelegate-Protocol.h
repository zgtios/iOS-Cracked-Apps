//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FABOnboardingOperation, NSError;

@protocol FABOnboardingOperationDelegate <NSObject>
- (void)onboardingOperation:(FABOnboardingOperation *)arg1 didCompleteAppCreationWithError:(NSError *)arg2;
- (void)onboardingOperation:(FABOnboardingOperation *)arg1 didCompleteAppUpdateWithError:(NSError *)arg2;
@end

