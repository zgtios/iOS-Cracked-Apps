//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CtripTime : NSObject
{
    _Bool _timeFlag;
    NSDate *_localGMTTime;
    NSDate *_serverGMTTime;
}

+ (id)shareInstance;
+ (id)getCurrentDate;
+ (id)convertStringToDate:(id)arg1;
@property(nonatomic) _Bool timeFlag; // @synthesize timeFlag=_timeFlag;
@property(retain, nonatomic) NSDate *serverGMTTime; // @synthesize serverGMTTime=_serverGMTTime;
@property(retain, nonatomic) NSDate *localGMTTime; // @synthesize localGMTTime=_localGMTTime;
- (void).cxx_destruct;
- (void)initTime:(id)arg1;
- (id)getCurrentDate;
- (void)initWithTime:(id)arg1 offsetHour:(long long)arg2;
- (id)init;
- (void)dealloc;

@end
