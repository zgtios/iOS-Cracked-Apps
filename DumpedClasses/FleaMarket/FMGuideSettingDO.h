//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface FMGuideSettingDO : NSObject
{
    _Bool _valid;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_serverTime;
    NSMutableDictionary *_actInfoMap;
}

@property(retain, nonatomic) NSMutableDictionary *actInfoMap; // @synthesize actInfoMap=_actInfoMap;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;

@end
