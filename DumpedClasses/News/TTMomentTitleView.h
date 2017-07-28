//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

@class SSThemedLabel, SSThemedView, TTAlphaThemedButton;

@interface TTMomentTitleView : SSViewBase
{
    unsigned long long _type;
    CDUnknownBlockType _closeComplete;
    CDUnknownBlockType _backComplete;
    SSThemedLabel *_titleLabel;
    TTAlphaThemedButton *_closeButton;
    TTAlphaThemedButton *_backButton;
    SSThemedView *_bottomLine;
}

@property(retain, nonatomic) SSThemedView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) TTAlphaThemedButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) TTAlphaThemedButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType backComplete; // @synthesize backComplete=_backComplete;
@property(copy, nonatomic) CDUnknownBlockType closeComplete; // @synthesize closeComplete=_closeComplete;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)themeChanged:(id)arg1;
- (void)backButtonClicked;
- (void)closeButtonClicked;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end
