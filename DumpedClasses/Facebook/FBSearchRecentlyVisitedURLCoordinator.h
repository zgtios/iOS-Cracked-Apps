//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBUserSession, NSMutableArray;
@protocol OS_dispatch_queue;

@interface FBSearchRecentlyVisitedURLCoordinator : NSObject
{
    FBUserSession *_session;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableArray *_recentlyVisitedURLs;
}

- (void).cxx_destruct;
- (void)_saveToDiskCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fetchFromDiskCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fetchIfRequiredAndThenExecuteInBackgroundQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)fetchRecentlyVisitedURLsWithCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)cacheRecentlyVisitedURL:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)initWithSession:(id)arg1;

@end

