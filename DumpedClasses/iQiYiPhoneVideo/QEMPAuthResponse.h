//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QEMPElement.h"

@class NSString;

@interface QEMPAuthResponse : QEMPElement
{
    NSString *_code;
    NSString *_msg;
    NSString *_authStr;
    NSString *_hydraToken;
    NSString *_sessionId;
    long long _timestamp;
}

@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *hydraToken; // @synthesize hydraToken=_hydraToken;
@property(copy, nonatomic) NSString *authStr; // @synthesize authStr=_authStr;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)description;

@end

