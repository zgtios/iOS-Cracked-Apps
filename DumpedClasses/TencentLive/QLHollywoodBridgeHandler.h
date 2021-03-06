//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBridgeHandler.h"

#import "QLLoginLightWrapperDelegate.h"

@class NSString, QLLoginLightWrapper;

@interface QLHollywoodBridgeHandler : QLBridgeHandler <QLLoginLightWrapperDelegate>
{
    CDUnknownBlockType _qqVip2WXCallback;
    QLLoginLightWrapper *_loginWrapper;
}

@property(retain, nonatomic) QLLoginLightWrapper *loginWrapper; // @synthesize loginWrapper=_loginWrapper;
@property(copy, nonatomic) CDUnknownBlockType qqVip2WXCallback; // @synthesize qqVip2WXCallback=_qqVip2WXCallback;
- (void).cxx_destruct;
- (void)lightWrapper:(id)arg1 didLoginFailedWithErrorMsg:(id)arg2;
- (void)lightWrapperDidLoginSuccess:(id)arg1;
- (void)registShareLevelUpPhoto;
- (void)registerShowMessageButton;
- (void)registQQVip2WX;
- (void)registUpdatePayVip;
- (void)purchaseSVipWithData:(id)arg1;
- (void)openSingleVIPWithData:(id)arg1;
- (void)openDayVIPWithData:(id)arg1;
- (void)openMouthVIPWithData:(id)arg1;
- (void)registHandlers;
- (id)dictionForVipInfo;
- (void)removeCommonBridge;
- (id)iapH5Delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

