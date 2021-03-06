//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

#import "FRConcernHomepageHeadViewProtocol.h"

@class FRConcernEntity, FRConcernHomepageViewModel, FRGameEntity, NSArray, NSDictionary, NSMutableArray, NSString, SSThemedButton, SSThemedImageView, SSThemedLabel, TTRotateAnimationHelper, UIImageView;

@interface FRConcernHomepageGameHeadView : SSThemedView <FRConcernHomepageHeadViewProtocol>
{
    _Bool _isTitleShow;
    _Bool _isTitleAnimate;
    NSString *_umengEventName;
    NSDictionary *_extraTracks;
    FRConcernHomepageViewModel *_viewModel;
    double _minimumHeaderHeight;
    FRConcernEntity *_concernEntity;
    FRGameEntity *_gameEntity;
    CDUnknownBlockType _refreshHandle;
    double _percent;
    NSArray *_snapshotImages;
    UIImageView *_firstBlurImageView;
    UIImageView *_secondBlurImageView;
    SSThemedView *_titleContainerView;
    SSThemedView *_titleContentView;
    SSThemedLabel *_titleLabel;
    SSThemedImageView *_refreshImageView;
    TTRotateAnimationHelper *_rotateAnimationHelper;
    SSThemedView *_bannerContainerView;
    SSThemedImageView *_bannerImageView;
    SSThemedView *_bannerMaskView;
    SSThemedView *_bannerNightMaskView;
    SSThemedView *_gameInfoContainerView;
    SSThemedImageView *_gameAvatarView;
    SSThemedLabel *_gameNameLabel;
    SSThemedLabel *_gameGenreLabel;
    SSThemedLabel *_gameFollowInfoLabel;
    SSThemedButton *_gameIntroductionButton;
    NSMutableArray *_gameCellIconButtons;
    struct CGPoint _contentOffset;
}

+ (double)heightForConcernHomepageViewModel:(id)arg1;
@property(retain, nonatomic) NSMutableArray *gameCellIconButtons; // @synthesize gameCellIconButtons=_gameCellIconButtons;
@property(retain, nonatomic) SSThemedButton *gameIntroductionButton; // @synthesize gameIntroductionButton=_gameIntroductionButton;
@property(retain, nonatomic) SSThemedLabel *gameFollowInfoLabel; // @synthesize gameFollowInfoLabel=_gameFollowInfoLabel;
@property(retain, nonatomic) SSThemedLabel *gameGenreLabel; // @synthesize gameGenreLabel=_gameGenreLabel;
@property(retain, nonatomic) SSThemedLabel *gameNameLabel; // @synthesize gameNameLabel=_gameNameLabel;
@property(retain, nonatomic) SSThemedImageView *gameAvatarView; // @synthesize gameAvatarView=_gameAvatarView;
@property(retain, nonatomic) SSThemedView *gameInfoContainerView; // @synthesize gameInfoContainerView=_gameInfoContainerView;
@property(retain, nonatomic) SSThemedView *bannerNightMaskView; // @synthesize bannerNightMaskView=_bannerNightMaskView;
@property(retain, nonatomic) SSThemedView *bannerMaskView; // @synthesize bannerMaskView=_bannerMaskView;
@property(retain, nonatomic) SSThemedImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) SSThemedView *bannerContainerView; // @synthesize bannerContainerView=_bannerContainerView;
@property(nonatomic) _Bool isTitleAnimate; // @synthesize isTitleAnimate=_isTitleAnimate;
@property(nonatomic) _Bool isTitleShow; // @synthesize isTitleShow=_isTitleShow;
@property(retain, nonatomic) TTRotateAnimationHelper *rotateAnimationHelper; // @synthesize rotateAnimationHelper=_rotateAnimationHelper;
@property(retain, nonatomic) SSThemedImageView *refreshImageView; // @synthesize refreshImageView=_refreshImageView;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SSThemedView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(retain, nonatomic) SSThemedView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIImageView *secondBlurImageView; // @synthesize secondBlurImageView=_secondBlurImageView;
@property(retain, nonatomic) UIImageView *firstBlurImageView; // @synthesize firstBlurImageView=_firstBlurImageView;
@property(retain, nonatomic) NSArray *snapshotImages; // @synthesize snapshotImages=_snapshotImages;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double percent; // @synthesize percent=_percent;
@property(copy, nonatomic) CDUnknownBlockType refreshHandle; // @synthesize refreshHandle=_refreshHandle;
@property(retain, nonatomic) FRGameEntity *gameEntity; // @synthesize gameEntity=_gameEntity;
@property(retain, nonatomic) FRConcernEntity *concernEntity; // @synthesize concernEntity=_concernEntity;
@property(nonatomic) double minimumHeaderHeight; // @synthesize minimumHeaderHeight=_minimumHeaderHeight;
@property(retain, nonatomic) FRConcernHomepageViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSDictionary *extraTracks; // @synthesize extraTracks=_extraTracks;
@property(copy, nonatomic) NSString *umengEventName; // @synthesize umengEventName=_umengEventName;
- (void).cxx_destruct;
- (id)getIconImageNameWithIconCellEntity:(id)arg1;
- (id)takeSnapshotOfView:(id)arg1;
- (void)trackEvent:(id)arg1 forLabel:(id)arg2 extraDict:(id)arg3 containExtra:(_Bool)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)stopRefresh;
- (void)startRefresh;
- (void)processTitleContainerWithShow:(_Bool)arg1 forceAnimate:(_Bool)arg2;
- (void)processBlur;
- (void)scrolledWithPercent:(double)arg1 contentOffset:(struct CGPoint)arg2 forceProcess:(_Bool)arg3;
- (void)scrolledWithPercent:(double)arg1 contentOffset:(struct CGPoint)arg2;
- (void)refreshWithConcernEntity:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)openGameIntroduction:(id)arg1;
- (void)openGameCellIcon:(id)arg1;
- (void)refresh:(id)arg1;
- (void)createTitleComponent;
- (void)createGameInfoComponent;
- (void)createBannerComponent;
- (void)createComponent;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 refreshHandle:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

