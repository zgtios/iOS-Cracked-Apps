//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol IUserCookieInterface <NSObject>
- (NSString *)getQQUIN;
- (NSData *)getQQSTKey;
- (NSData *)getQQLSKey;
- (NSData *)getQQSKey;
- (NSString *)getQQAppId;
- (_Bool)isQQLogin;
- (NSString *)getWXOpenID;
- (NSString *)getWXAccessToken;
- (NSString *)getWXAppId;
- (_Bool)isWeixinLogin;
- (_Bool)momentLoginIsQQ;
- (_Bool)momentLoginIsWX;
- (NSString *)getVUSession;
- (NSString *)getVUserId;
- (_Bool)isMomentLogin;
@end

