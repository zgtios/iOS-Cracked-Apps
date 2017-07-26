//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ETSDKServer.h"

@class NSString, TBSDKMTOPServer;

@interface ETMTOPServer : ETSDKServer
{
    TBSDKMTOPServer *_request;
    _Bool _isUseeCode;
    NSString *_dataForKey;
}

+ (id)appMonitorDimensionArray;
+ (id)appMonitorPoint;
+ (id)requestWithMethod:(id)arg1;
@property(nonatomic) _Bool isUseeCode; // @synthesize isUseeCode=_isUseeCode;
@property(readonly, nonatomic) TBSDKMTOPServer *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *dataForKey; // @synthesize dataForKey=_dataForKey;
- (id)dictionaryWithAppMonitorDimensionValue;
- (void)dealloc;
- (void)requestDidFailed;
- (void)requestWillStart;
- (id)cacheKey;
- (void)requestDidStart;
- (void)addDataParam:(id)arg1 forKey:(id)arg2;
- (void)setVersion:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (id)initWithMethod:(id)arg1;

@end
