//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQGreetingMessageManager : NSObject
{
    long long _nearByEnterTime;
}

+ (id)shareInstance;
- (id)loadRecentGreetingMessage:(id)arg1;
- (void)deleteGreetingMsg:(id)arg1 needDeleteClusterModel:(_Bool *)arg2 cModelKey:(id *)arg3;
- (void)onAccountLogout:(id)arg1;
- (int)getDetailLabelStatus:(id)arg1;
- (id)enterTimeFilePath;
- (_Bool)loadEnterTime;
- (void)saveEnterTime;
- (void)recordNearByEnterTime;
- (void)refreshGreetingMsgUnreadCount:(id)arg1;
- (_Bool)isGreetingMsg:(id)arg1;
- (_Bool)isClearingMsg:(id)arg1;
- (id)init;

@end

