//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAGradientLayer, NSAttributedString, UIImageView, UILabel;

@interface EBKAnimationLabel : UIView
{
    NSAttributedString *_attributedText;
    UIImageView *_arrow;
    UILabel *_addressLabel;
    UIView *_addressContainerView;
    CAGradientLayer *_fadeLayer;
}

@property(retain, nonatomic) CAGradientLayer *fadeLayer; // @synthesize fadeLayer=_fadeLayer;
@property(retain, nonatomic) UIView *addressContainerView; // @synthesize addressContainerView=_addressContainerView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (void)changeMaskIsAnimationFinished:(_Bool)arg1;
- (void)updateLayoutIsAnimated:(_Bool)arg1;
- (void)refreshUI;
- (void)setupSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

