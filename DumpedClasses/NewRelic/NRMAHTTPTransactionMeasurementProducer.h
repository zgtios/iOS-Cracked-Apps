//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NRMAMeasurementProducer.h"

@interface NRMAHTTPTransactionMeasurementProducer : NRMAMeasurementProducer
{
}

- (void)produceHttpTransaction:(id)arg1 httpMethod:(id)arg2 carrier:(id)arg3 startTime:(double)arg4 totalTime:(double)arg5 statusCode:(int)arg6 errorCode:(int)arg7 bytesSent:(long long)arg8 bytesReceived:(long long)arg9 appData:(id)arg10 wanType:(id)arg11 threadInfo:(id)arg12;
- (id)initWithType:(int)arg1;
- (id)init;

@end

