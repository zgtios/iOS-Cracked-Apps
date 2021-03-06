//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AdInfoObject, NSDictionary, NSString, QYHotWords, QYSubscribeTableCellManager, QYUCardBaseCell, QYUCardEvent, QYULabelCardCell, QYUserCellData;

@protocol QYUCardVewEventDelegate <NSObject>
- (void)actionWithEvent:(QYUCardEvent *)arg1 inCell:(QYUCardBaseCell *)arg2;

@optional
- (void)actionWithSubscibeMovie:(NSDictionary *)arg1;
- (void)actionWithVipDredge;
- (void)actionWithVipReplenishFeeWithInfo:(NSDictionary *)arg1;
- (void)shareLiveSubscribeWithEvent:(QYUCardEvent *)arg1 InCell:(QYUCardBaseCell *)arg2;
- (void)gotoMyOrderViewClickedWithEvent:(QYUCardEvent *)arg1;
- (void)movieOrderBtnClickedWithEvent:(QYUCardEvent *)arg1 InCell:(QYUCardBaseCell *)arg2;
- (void)openAppStoreByID:(NSString *)arg1;
- (void)doNavigateForAdInfo:(AdInfoObject *)arg1;
- (void)openMovieWebByURLString:(NSString *)arg1 andGateway:(NSString *)arg2;
- (void)hotwordcClicked:(QYHotWords *)arg1 inCell:(QYULabelCardCell *)arg2;
- (void)subscribeEventByManager:(QYSubscribeTableCellManager *)arg1;
- (void)userIconClickedWithData:(QYUserCellData *)arg1 cell:(QYUCardBaseCell *)arg2;
- (void)userIconClickedWithData:(QYUserCellData *)arg1;
@end

