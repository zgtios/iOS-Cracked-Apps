//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYUCardStatisticsSenderProtocol-Protocol.h"
#import "QYUCardStatisticsSenderProtocolV3-Protocol.h"

@class NSMutableArray, NSString;

@interface QYUCardStatisticsSender : NSObject <QYUCardStatisticsSenderProtocol, QYUCardStatisticsSenderProtocolV3>
{
    NSMutableArray *_arrAdStatsticsInfo;
}

@property(retain, nonatomic) NSMutableArray *arrAdStatsticsInfo; // @synthesize arrAdStatsticsInfo=_arrAdStatsticsInfo;
- (void)sendDragonPingbackV3:(id)arg1 action:(unsigned long long)arg2 cardData:(id)arg3;
- (void)sendDragonPingback:(id)arg1 action:(unsigned long long)arg2;
- (void)sendRecommendPingback:(id)arg1 action:(unsigned long long)arg2;
- (void)sendTraditionalDragonPingback:(id)arg1 action:(unsigned long long)arg2;
- (void)addAdStatisticsInfoWithRequestId:(id)arg1 adResultId:(long long)arg2 zoneId:(id)arg3 adIndex:(long long)arg4;
- (void)addAdStatisticsInfoWithRequestId:(id)arg1 adResultId:(long long)arg2 timeSlice:(id)arg3 zoneId:(id)arg4;
- (void)addAdStatisticsInfo:(id)arg1;
- (_Bool)isFocusResultIdExist:(long long)arg1 zoneId:(id)arg2 ad_index:(long long)arg3 checkIndex:(_Bool)arg4;
- (_Bool)isFocusResultIdExist:(long long)arg1 timeSlice:(id)arg2 zoneId:(id)arg3 isCheck:(_Bool)arg4;
- (_Bool)isFocusResultIdExist:(long long)arg1;
- (_Bool)isFocusResultIdExist:(long long)arg1 timeSlice:(id)arg2 zoneId:(id)arg3;
- (void)adPingback;
- (_Bool)sendAdPingbackForFocusWithBlockData:(id)arg1;
- (void)sendEmptyAdPingbackForFocusWithCardData:(id)arg1;
- (void)sendAdPingbackForFocusWithCardData:(id)arg1;
- (void)sendAdPingbackForUnFocusWithCardData:(id)arg1;
- (void)sendPingbackRequestV3:(id)arg1 type:(unsigned long long)arg2 ation:(unsigned long long)arg3 cardData:(id)arg4;
- (void)sendPingbackRequest:(id)arg1 type:(unsigned long long)arg2 ation:(unsigned long long)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

