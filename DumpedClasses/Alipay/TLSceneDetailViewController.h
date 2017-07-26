//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TLCommentBaseViewController.h"

#import "AUDialogDelegate.h"
#import "TLSceneDetailControllerDelegate.h"
#import "TLSceneOperationBarDelegate.h"
#import "TLSceneViewDelegate.h"
#import "UIActionSheetDelegate.h"

@class AUActionSheet, AUNoticeDialog, NSString, TLBarCameraButton, TLFeed, TLInputTextMaxControl, TLPlumpScene, TLSceneAdController, TLSceneDetailController, TLSceneOperationBar, TLSceneTitleView, TLSceneView, UIView;

@interface TLSceneDetailViewController : TLCommentBaseViewController <TLSceneOperationBarDelegate, TLSceneDetailControllerDelegate, AUDialogDelegate, TLSceneViewDelegate, UIActionSheetDelegate>
{
    _Bool _operationBarVisible;
    _Bool _enterInit;
    _Bool _isRewarding;
    _Bool _allFeedsDropFinish;
    _Bool _isBackGroundState;
    _Bool _isUserOpenBarrage;
    _Bool _isOpenAd;
    TLFeed *_activeFeed;
    TLPlumpScene *_activeScene;
    TLSceneDetailController *_sceneDetailController;
    TLSceneAdController *_sceneAdController;
    TLSceneOperationBar *_operationBar;
    UIView *_sceneTitleView;
    TLSceneView *_SceneView;
    TLSceneTitleView *_titleView;
    AUNoticeDialog *_sceneAlertView;
    TLInputTextMaxControl *_inputMaxCtrl;
    AUActionSheet *_shareSheet;
    TLBarCameraButton *_feedSendBtn;
    long long _totalFeeds;
    long long _playPage;
    NSString *_alertMemo;
    long long _alertErrorCode;
    double _statusOffset;
    NSString *_shareToUserId;
    NSString *_shareToUserType;
    double _intoSceneBegin;
    double _intoSceneEnd;
}

@property(nonatomic) double intoSceneEnd; // @synthesize intoSceneEnd=_intoSceneEnd;
@property(nonatomic) double intoSceneBegin; // @synthesize intoSceneBegin=_intoSceneBegin;
@property(nonatomic) _Bool isOpenAd; // @synthesize isOpenAd=_isOpenAd;
@property(nonatomic) _Bool isUserOpenBarrage; // @synthesize isUserOpenBarrage=_isUserOpenBarrage;
@property(nonatomic) _Bool isBackGroundState; // @synthesize isBackGroundState=_isBackGroundState;
@property(retain, nonatomic) NSString *shareToUserType; // @synthesize shareToUserType=_shareToUserType;
@property(retain, nonatomic) NSString *shareToUserId; // @synthesize shareToUserId=_shareToUserId;
@property(nonatomic) double statusOffset; // @synthesize statusOffset=_statusOffset;
@property(nonatomic) long long alertErrorCode; // @synthesize alertErrorCode=_alertErrorCode;
@property(retain, nonatomic) NSString *alertMemo; // @synthesize alertMemo=_alertMemo;
@property(nonatomic) long long playPage; // @synthesize playPage=_playPage;
@property(nonatomic) _Bool allFeedsDropFinish; // @synthesize allFeedsDropFinish=_allFeedsDropFinish;
@property(nonatomic) _Bool isRewarding; // @synthesize isRewarding=_isRewarding;
@property(nonatomic) _Bool enterInit; // @synthesize enterInit=_enterInit;
@property(nonatomic) _Bool operationBarVisible; // @synthesize operationBarVisible=_operationBarVisible;
@property(nonatomic) long long totalFeeds; // @synthesize totalFeeds=_totalFeeds;
@property(retain, nonatomic) TLBarCameraButton *feedSendBtn; // @synthesize feedSendBtn=_feedSendBtn;
@property(retain, nonatomic) AUActionSheet *shareSheet; // @synthesize shareSheet=_shareSheet;
@property(retain, nonatomic) TLInputTextMaxControl *inputMaxCtrl; // @synthesize inputMaxCtrl=_inputMaxCtrl;
@property(retain, nonatomic) AUNoticeDialog *sceneAlertView; // @synthesize sceneAlertView=_sceneAlertView;
@property(retain, nonatomic) TLSceneTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) TLSceneView *SceneView; // @synthesize SceneView=_SceneView;
@property(retain, nonatomic) UIView *sceneTitleView; // @synthesize sceneTitleView=_sceneTitleView;
@property(retain, nonatomic) TLSceneOperationBar *operationBar; // @synthesize operationBar=_operationBar;
@property(retain, nonatomic) TLSceneAdController *sceneAdController; // @synthesize sceneAdController=_sceneAdController;
@property(retain, nonatomic) TLSceneDetailController *sceneDetailController; // @synthesize sceneDetailController=_sceneDetailController;
@property(retain, nonatomic) TLPlumpScene *activeScene; // @synthesize activeScene=_activeScene;
@property(retain, nonatomic) TLFeed *activeFeed; // @synthesize activeFeed=_activeFeed;
- (void).cxx_destruct;
- (void)responseTimeLineApplicationWillPauseNotification:(id)arg1;
- (void)responseTimeLineApplicationWillResumeNotification:(id)arg1;
- (void)restorePlayerPlay;
- (void)pausePlayerPlay;
- (void)pauseBarrage;
- (void)restoreBarrage;
- (void)statusBarFrameChanged:(id)arg1;
- (void)barrangeSwipe;
- (id)mTitleView;
- (void)appEnterForground;
- (void)appEnterBackground;
- (void)removeApplicationStateNoti;
- (void)addAppicationStateNoti;
- (void)addGlobalNotification;
- (void)publishWarning;
- (void)gotoSceneDescription;
- (void)shareScene2Friend:(id)arg1;
- (void)sendSceneToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dialogView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)urlEncodeWithSrcString:(id)arg1;
- (void)doShareScene;
- (void)sceneDetailControllerFinishReward:(id)arg1;
- (void)closeMe;
- (void)sceneDetailController:(id)arg1 failFetchSceneFeedList:(id)arg2 validSceneFeedList:(id)arg3;
- (void)sceneDetailController:(id)arg1 finishFetchSceneFeedList:(id)arg2;
- (void)closeMeBecauseOfRunOff;
- (void)sceneDetailController:(id)arg1 failEnterSceneDetail:(id)arg2 enterLiveShowPlumpScene:(id)arg3 validSceneFeedList:(id)arg4;
- (void)sceneDetailController:(id)arg1 finishEnterLiveShow:(id)arg2 newFeeds:(id)arg3 alertMemo:(id)arg4;
- (void)updateDiscountInfo;
- (void)videoReadyPlayTaped:(id)arg1;
- (void)allDropItemsFinishPlay;
- (void)playItemWillChange:(id)arg1 curentPage:(long long)arg2 leaveItemNumber:(long long)arg3;
- (id)inputMaxControl;
- (void)videoTapToPlayNext;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (id)mSceneAdController;
- (id)mOperationBar;
- (id)mSceneDetailController;
- (void)viewLongPress;
- (void)viewTapped;
- (void)doSceneReward;
- (void)operationBar:(id)arg1 doOperation:(long long)arg2 isSwitch:(_Bool)arg3;
- (_Bool)promotionOperationBar:(id)arg1 doOperation:(long long)arg2 isSwitch:(_Bool)arg3;
- (void)showUnCertifiedAlert;
- (void)enterScene;
- (void)publishFeed;
- (void)sceneSubmitMultiMedia;
- (void)gotoSceneDetail;
- (void)didReceiveMemoryWarning;
- (void)clearResource;
- (void)dealloc;
- (void)viewWillDestroy;
- (void)dropFeeds:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)autohideNavigationBar;
- (_Bool)chouldJumpToNext;
- (void)closeKeyboard:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)removeNotifications;
- (void)addNotifications;
- (id)initWithCurrentSceneId:(id)arg1 sceneTitle:(id)arg2;
- (id)initWithCurrentScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
