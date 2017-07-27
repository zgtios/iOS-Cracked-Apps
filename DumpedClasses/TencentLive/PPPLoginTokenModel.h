//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPPBaseDataModel.h"

@class NSData, NSString;

@interface PPPLoginTokenModel : PPPBaseDataModel
{
    unsigned char tokenKeyType;
    _Bool isMainLogin;
    NSString *tokenAppID;
    NSString *tokenUin;
    NSData *tokenValue;
    NSString *qqNick;
    NSString *qqPicUrl;
}

@property _Bool isMainLogin; // @synthesize isMainLogin;
@property(retain, nonatomic) NSString *qqPicUrl; // @synthesize qqPicUrl;
@property(retain, nonatomic) NSString *qqNick; // @synthesize qqNick;
@property(retain, nonatomic) NSData *tokenValue; // @synthesize tokenValue;
@property(retain, nonatomic) NSString *tokenUin; // @synthesize tokenUin;
@property unsigned char tokenKeyType; // @synthesize tokenKeyType;
@property(retain, nonatomic) NSString *tokenAppID; // @synthesize tokenAppID;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
