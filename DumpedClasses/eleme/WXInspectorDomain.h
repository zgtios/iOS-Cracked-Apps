//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXDynamicDebuggerDomain.h"

@interface WXInspectorDomain : WXDynamicDebuggerDomain
{
}

+ (id)domainName;
- (void)handleMethodWithName:(id)arg1 parameters:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;
- (void)inspectWithObject:(id)arg1 hints:(id)arg2;
- (void)evaluateForTestInFrontendWithTestCallId:(id)arg1 script:(id)arg2;

// Remaining properties
@property(nonatomic) id <WXInspectorCommandDelegate><WXCommandDelegate> delegate; // @dynamic delegate;

@end
