//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HTSVideoPlayTransitionBridge : NSObject
{
}

+ (void)alertOpenHotSoonWithTitle:(id)arg1 confirm:(id)arg2 cancel:(id)arg3 urlString:(id)arg4 videoModel:(id)arg5 source:(id)arg6 enterFrom:(id)arg7 confirmBlock:(CDUnknownBlockType)arg8 cancelBlock:(CDUnknownBlockType)arg9;
+ (void)alertDownloadWithTitle:(id)arg1 confirm:(id)arg2 cancel:(id)arg3 downloadUrl:(id)arg4 confirmBlock:(CDUnknownBlockType)arg5 cancelBlock:(CDUnknownBlockType)arg6;
+ (void)openHotSoonWithUrlString:(id)arg1 videoModel:(id)arg2 source:(id)arg3 enterFrom:(id)arg4;
+ (_Bool)canOpenHotSoonWithUrlString:(id)arg1;
+ (void)openWebViewWithUrlStr:(id)arg1 params:(id)arg2;
+ (void)openProfileViewWithUserId:(id)arg1 params:(id)arg2;

@end
