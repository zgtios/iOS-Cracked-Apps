//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol NADebugProtocol <NSObject>
- (NSString *)sceneForApp:(NSString *)arg1;
- (id)excuteRequest:(id)arg1 header:(NSDictionary *)arg2;
- (int)appType:(NSString *)arg1;
- (_Bool)isNebulaApp:(NSString *)arg1 nebulaVersion:(id *)arg2;
- (_Bool)enableDebugApp:(NSString *)arg1;
@end
