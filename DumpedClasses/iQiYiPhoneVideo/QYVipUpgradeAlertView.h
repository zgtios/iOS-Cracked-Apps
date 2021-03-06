//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUIAlertView.h"

@class UIImageView;

@interface QYVipUpgradeAlertView : QYUIAlertView
{
    UIImageView *_blurBackGroundView;
    CDUnknownBlockType _btnClickedHandle;
}

@property(copy, nonatomic) CDUnknownBlockType btnClickedHandle; // @synthesize btnClickedHandle=_btnClickedHandle;
@property(retain, nonatomic) UIImageView *blurBackGroundView; // @synthesize blurBackGroundView=_blurBackGroundView;
- (void).cxx_destruct;
- (void)loadContentView;
- (void)closeAlertView;
- (void)dismissVipGiftAlertView;
- (void)addGroupAnimationWithStarView:(id)arg1 movePathPoint:(struct CGPoint)arg2 starIndex:(int)arg3;
- (void)addRotationAnimationWithWheelView:(id)arg1;
- (void)createUpgradeAlertShowGiftUIWithTitle:(id)arg1 subTitle:(id)arg2 contentDic:(id)arg3 vipLevel:(id)arg4;
- (void)createUpgradeAlertSendGiftSuccessUIWithGiftInfo:(id)arg1;
- (void)upgradeAlertBackView;
- (id)initWithGiftInfo:(id)arg1 alertType:(long long)arg2 alertClickCallBack:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

