//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, CATransformLayer, MRGradientContentLayer, UIImage;

@interface MRTransformView : UIView
{
    CATransformLayer *_transformLayer;
    MRGradientContentLayer *_lowerLayer;
    CALayer *_upperFrontLayer;
    MRGradientContentLayer *_upperBackLayer;
    UIImage *_coverImage;
}

@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(retain, nonatomic) MRGradientContentLayer *upperBackLayer; // @synthesize upperBackLayer=_upperBackLayer;
@property(retain, nonatomic) CALayer *upperFrontLayer; // @synthesize upperFrontLayer=_upperFrontLayer;
@property(retain, nonatomic) MRGradientContentLayer *lowerLayer; // @synthesize lowerLayer=_lowerLayer;
@property(retain, nonatomic) CATransformLayer *transformLayer; // @synthesize transformLayer=_transformLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 coverImage:(id)arg2;

@end

