//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIAlertViewDelegate.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeLine, Member, NSString, UIImageView;

@interface KGMyFriendsForShareCell : UITableViewCell <UIAlertViewDelegate>
{
    double _nicknameLabelMaxWidth;
    _Bool _isShowNoticeButton;
    _Bool _isGuestType;
    _Bool _hideSeparatorLine;
    _Bool _hideGradeImg;
    Member *_data;
    id <MemberTableViewCellDelegate> _delegate;
    UIImageView *_picImgView;
    UIImageView *_liveStatusImgView;
    KGThemeLabel *_nicknameLabel;
    UIImageView *_gradeImgView;
    UIImageView *_sourceIconImgView;
    UIImageView *_genderImgView;
    KGThemeLabel *_sourceLabel;
    KGThemeButton *_noticeButton;
    KGThemeImageView *_isFriendMarkImgView;
    KGThemeLine *_lineView;
}

@property(retain, nonatomic) KGThemeLine *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KGThemeImageView *isFriendMarkImgView; // @synthesize isFriendMarkImgView=_isFriendMarkImgView;
@property(retain, nonatomic) KGThemeButton *noticeButton; // @synthesize noticeButton=_noticeButton;
@property(retain, nonatomic) KGThemeLabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) UIImageView *genderImgView; // @synthesize genderImgView=_genderImgView;
@property(retain, nonatomic) UIImageView *sourceIconImgView; // @synthesize sourceIconImgView=_sourceIconImgView;
@property(retain, nonatomic) UIImageView *gradeImgView; // @synthesize gradeImgView=_gradeImgView;
@property(retain, nonatomic) KGThemeLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *liveStatusImgView; // @synthesize liveStatusImgView=_liveStatusImgView;
@property(retain, nonatomic) UIImageView *picImgView; // @synthesize picImgView=_picImgView;
@property(nonatomic) _Bool hideGradeImg; // @synthesize hideGradeImg=_hideGradeImg;
@property(nonatomic) _Bool hideSeparatorLine; // @synthesize hideSeparatorLine=_hideSeparatorLine;
@property(nonatomic) _Bool isGuestType; // @synthesize isGuestType=_isGuestType;
@property(nonatomic) id <MemberTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isShowNoticeButton; // @synthesize isShowNoticeButton=_isShowNoticeButton;
@property(retain, nonatomic) Member *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onClickedNoticeButton:(id)arg1;
- (void)refreshButtonColor;
- (void)refreshButton;
- (void)refreshUIWithData:(id)arg1 viewSize:(struct CGSize)arg2;
- (void)layoutSubviews;
- (void)initUI:(struct CGSize)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 viewSize:(struct CGSize)arg3 isGuestType:(_Bool)arg4;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 viewSize:(struct CGSize)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

