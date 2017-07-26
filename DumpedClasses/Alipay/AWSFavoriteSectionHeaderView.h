//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AWSStockArrowView, UILabel;

@interface AWSFavoriteSectionHeaderView : UIView
{
    AWSStockArrowView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_percentTitleLabel;
    UILabel *_priceTitleLabel;
    id <AWSFavoriteSectionHeaderViewDelegate> _delegate;
    UIView *_leftTriangle;
    UIView *_middleTriangle;
    UIView *_rightTriangle;
}

+ (id)triangleView;
@property(retain, nonatomic) UIView *rightTriangle; // @synthesize rightTriangle=_rightTriangle;
@property(retain, nonatomic) UIView *middleTriangle; // @synthesize middleTriangle=_middleTriangle;
@property(retain, nonatomic) UIView *leftTriangle; // @synthesize leftTriangle=_leftTriangle;
@property(nonatomic) __weak id <AWSFavoriteSectionHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didClickOrderByPercentOrAmount:(id)arg1;
- (void)didClickOrderByPrice:(id)arg1;
- (void)didClickTitle:(id)arg1;
- (void)updateSubTitle:(unsigned long long)arg1;
- (void)positionArrowImage:(unsigned long long)arg1;
- (void)displayArrow:(unsigned long long)arg1 on:(unsigned long long)arg2;
- (void)updateTitleLabel:(id)arg1;
- (void)layoutSubviews;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
