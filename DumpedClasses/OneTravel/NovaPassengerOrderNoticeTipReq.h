//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface NovaPassengerOrderNoticeTipReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMsgText; // @dynamic hasMsgText;
@property(nonatomic) _Bool hasOrderId; // @dynamic hasOrderId;
@property(nonatomic) _Bool hasPushType; // @dynamic hasPushType;
@property(nonatomic) _Bool hasUserRole; // @dynamic hasUserRole;
@property(copy, nonatomic) NSString *msgText; // @dynamic msgText;
@property(nonatomic) long long orderId; // @dynamic orderId;
@property(nonatomic) unsigned int pushType; // @dynamic pushType;
@property(nonatomic) unsigned int userRole; // @dynamic userRole;

@end

