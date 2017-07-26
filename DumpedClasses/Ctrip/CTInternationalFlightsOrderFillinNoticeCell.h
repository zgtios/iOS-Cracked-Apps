//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTAutoResizeLabel, NSLayoutConstraint, UIButton, UIImageView, UIView;

@interface CTInternationalFlightsOrderFillinNoticeCell : CTCustomeGroupTableViewCell
{
    id <CTInternationalFlightsOrderFillinNoticeCellDelegate> _delegate;
    CTAutoResizeLabel *_noticeMoreLabel;
    UIImageView *_arrowImageView;
    UIButton *_noticeButton;
    CTAutoResizeLabel *_noticeMutiLinesLabel;
    UIView *_lineView;
    NSLayoutConstraint *_noticeMutiLinesLabelHeightConstriant;
}

+ (double)setupCellSubView:(id)arg1 withNotice:(id)arg2 publicNotice:(id)arg3 isUnfold:(_Bool)arg4;
@property(nonatomic) __weak NSLayoutConstraint *noticeMutiLinesLabelHeightConstriant; // @synthesize noticeMutiLinesLabelHeightConstriant=_noticeMutiLinesLabelHeightConstriant;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak CTAutoResizeLabel *noticeMutiLinesLabel; // @synthesize noticeMutiLinesLabel=_noticeMutiLinesLabel;
@property(nonatomic) __weak UIButton *noticeButton; // @synthesize noticeButton=_noticeButton;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak CTAutoResizeLabel *noticeMoreLabel; // @synthesize noticeMoreLabel=_noticeMoreLabel;
@property(nonatomic) __weak id <CTInternationalFlightsOrderFillinNoticeCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreClicked:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
