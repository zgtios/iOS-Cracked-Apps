//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FALCNewGiftView, FALCNewRoomGiftModel, NSString;

@protocol FALCNewGiftViewDelegate <NSObject>

@optional
- (void)giftViewTapPurchaseRichLevelBtn:(FALCNewGiftView *)arg1;
- (void)giftViewShouldOpenChargeView:(FALCNewGiftView *)arg1;
- (void)giftViewWillDismiss:(FALCNewGiftView *)arg1;
- (void)giftViewWillShow:(FALCNewGiftView *)arg1;
- (void)sendUserGiftWithGift:(FALCNewRoomGiftModel *)arg1 giftType:(long long)arg2 giftNumStr:(NSString *)arg3 comboStatus:(unsigned long long)arg4;
@end

