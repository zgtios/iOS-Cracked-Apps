//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WIUser : NSObject
{
    NSString *token;
    NSString *qqIdentify;
    NSString *sinaIdentify;
    NSString *qqNickName;
    NSString *sinaNickName;
    NSString *phone;
    NSString *password;
    int userId;
    int loginType;
    int level;
    int points;
    int currentExp;
    int nextExp;
    int lvMinExp;
    int desertedUserId;
    int targetUserId;
    _Bool isVip;
    NSString *vipStartTime;
    NSString *vipEndTime;
    NSString *lastConnectionTime;
    NSString *sdkPartnerKey;
    NSString *sdkPartnerUserId;
}

@property(retain, nonatomic) NSString *sdkPartnerUserId; // @synthesize sdkPartnerUserId;
@property(retain, nonatomic) NSString *sdkPartnerKey; // @synthesize sdkPartnerKey;
@property(nonatomic) int desertedUserId; // @synthesize desertedUserId;
@property(nonatomic) int targetUserId; // @synthesize targetUserId;
@property(nonatomic) int lvMinExp; // @synthesize lvMinExp;
@property(nonatomic) int nextExp; // @synthesize nextExp;
@property(nonatomic) int currentExp; // @synthesize currentExp;
@property(retain, nonatomic) NSString *lastConnectionTime; // @synthesize lastConnectionTime;
@property(retain, nonatomic) NSString *vipEndTime; // @synthesize vipEndTime;
@property(retain, nonatomic) NSString *vipStartTime; // @synthesize vipStartTime;
@property(nonatomic) _Bool isVip; // @synthesize isVip;
@property(nonatomic) int points; // @synthesize points;
@property(nonatomic) int level; // @synthesize level;
@property(nonatomic) int loginType; // @synthesize loginType;
@property(nonatomic) int userId; // @synthesize userId;
@property(retain, nonatomic) NSString *password; // @synthesize password;
@property(retain, nonatomic) NSString *phone; // @synthesize phone;
@property(retain, nonatomic) NSString *sinaNickName; // @synthesize sinaNickName;
@property(retain, nonatomic) NSString *qqNickName; // @synthesize qqNickName;
@property(retain, nonatomic) NSString *sinaIdentify; // @synthesize sinaIdentify;
@property(retain, nonatomic) NSString *qqIdentify; // @synthesize qqIdentify;
@property(retain, nonatomic) NSString *token; // @synthesize token;
- (void)dealloc;
- (id)init;

@end

