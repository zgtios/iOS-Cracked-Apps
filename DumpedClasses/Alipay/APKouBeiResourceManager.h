//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APResourceManager.h"

@interface APKouBeiResourceManager : APResourceManager
{
}

+ (void)getResFromNet:(id)arg1 business:(id)arg2 getLatestVer:(_Bool)arg3 resResultsCallback:(CDUnknownBlockType)arg4;
+ (void)putRes:(id)arg1 business:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
+ (void)getLatestResFromNet:(id)arg1 business:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
+ (void)getResFromNet:(id)arg1 business:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;
+ (void)getResFromCache:(id)arg1 business:(id)arg2 resResultsCallback:(CDUnknownBlockType)arg3;

@end
