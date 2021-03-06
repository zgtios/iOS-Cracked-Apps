//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCShoppingCartTriggleViewModel, DCStackAvatarView, UIImageView, UILabel;

@interface DCShoppingCartTriggleView : UIView
{
    DCShoppingCartTriggleViewModel *_triggleViewModel;
    DCStackAvatarView *_stackAvatarV;
    UIImageView *_upDownArrowImgV;
    UILabel *_totalIncomeLabel;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak UILabel *totalIncomeLabel; // @synthesize totalIncomeLabel=_totalIncomeLabel;
@property(nonatomic) __weak UIImageView *upDownArrowImgV; // @synthesize upDownArrowImgV=_upDownArrowImgV;
@property(nonatomic) __weak DCStackAvatarView *stackAvatarV; // @synthesize stackAvatarV=_stackAvatarV;
@property(retain, nonatomic) DCShoppingCartTriggleViewModel *triggleViewModel; // @synthesize triggleViewModel=_triggleViewModel;
- (void).cxx_destruct;
- (void)updateFrames;
- (void)resetArrowImg;
- (void)clickedTriggleView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

