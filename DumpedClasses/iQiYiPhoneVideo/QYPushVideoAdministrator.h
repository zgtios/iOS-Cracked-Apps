//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QYAirplayAVPlayerManagerDelegate-Protocol.h"
#import "QYPushVideoDLNANetManagerDelegate-Protocol.h"
#import "QYPushVideoModelDelegate-Protocol.h"
#import "QYPushVideoSubViewControllerDelegate-Protocol.h"
#import "QYVideoPushDelegate-Protocol.h"
#import "QYVideoPushManagerDelegate-Protocol.h"

@class NSDictionary, NSString, QYAirplayAVPlayerManager, QYDevicesPresentManager, QYPushVideoDLNANetManager, QYPushVideoModel, QYPushVideoSubViewController, QYVideoPushManager;
@protocol OS_dispatch_source, QYPushVideoAdministratorDelegate, QYVideoPushDelegate;

@interface QYPushVideoAdministrator : NSObject <QYPushVideoSubViewControllerDelegate, QYPushVideoModelDelegate, QYAirplayAVPlayerManagerDelegate, QYPushVideoDLNANetManagerDelegate, QYVideoPushDelegate, QYVideoPushManagerDelegate>
{
    QYVideoPushManager *_pushNetManager;
    QYPushVideoSubViewController *_pushViewManager;
    QYPushVideoModel *_pushModelManager;
    QYAirplayAVPlayerManager *_airplayAVPlayerManager;
    NSObject<OS_dispatch_source> *_airplayTimer;
    QYDevicesPresentManager *_dlanManager;
    QYPushVideoDLNANetManager *_pushDLNANetManager;
    double _pushStartTimeSince1970;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_source> *_offlineCacheTimer;
    _Bool _isReopenFromShortCut;
    int _pushScreenMode;
    id <QYVideoPushDelegate> _videoPushDelegate;
    id <QYPushVideoAdministratorDelegate> _delegate;
    NSDictionary *_vipAuthInfoDic;
    id _videoMessage;
}

+ (id)getPushCoverRootView_player;
+ (id)getPushedDeviceName_player;
+ (double)screenScale;
+ (id)stringWithOutQuotation:(id)arg1;
+ (_Bool)isPushStateValid:(long long)arg1;
+ (id)activeAirplayOutputRouteName;
+ (id)getPushedDeviceName;
@property(nonatomic) double pushStartTimeSince1970; // @synthesize pushStartTimeSince1970=_pushStartTimeSince1970;
@property(retain, nonatomic) id videoMessage; // @synthesize videoMessage=_videoMessage;
@property(retain, nonatomic) NSDictionary *vipAuthInfoDic; // @synthesize vipAuthInfoDic=_vipAuthInfoDic;
@property(nonatomic) _Bool isReopenFromShortCut; // @synthesize isReopenFromShortCut=_isReopenFromShortCut;
@property(nonatomic) __weak id <QYPushVideoAdministratorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int pushScreenMode; // @synthesize pushScreenMode=_pushScreenMode;
@property(nonatomic) __weak id <QYVideoPushDelegate> videoPushDelegate; // @synthesize videoPushDelegate=_videoPushDelegate;
@property(retain, nonatomic) QYPushVideoDLNANetManager *pushDLNANetManager; // @synthesize pushDLNANetManager=_pushDLNANetManager;
@property(retain, nonatomic) QYDevicesPresentManager *dlanManager; // @synthesize dlanManager=_dlanManager;
@property(retain, nonatomic) QYAirplayAVPlayerManager *airplayAVPLayerManager; // @synthesize airplayAVPLayerManager=_airplayAVPlayerManager;
@property(retain, nonatomic) QYPushVideoModel *pushModelManager; // @synthesize pushModelManager=_pushModelManager;
@property(retain, nonatomic) QYPushVideoSubViewController *pushViewManager; // @synthesize pushViewManager=_pushViewManager;
@property(retain, nonatomic) QYVideoPushManager *pushNetManager; // @synthesize pushNetManager=_pushNetManager;
- (void).cxx_destruct;
- (id)getPushVideoVipAuthInfoDic:(id)arg1;
- (void)checkMiTing_player;
- (void)reopenPushFromShortCut_player:(id)arg1;
- (void)reopenPushFromShortCut_player;
- (void)openPushTestVideo_player;
- (void)pushVideoFromVip_player:(id)arg1;
- (void)pushVideo_player:(id)arg1;
- (void)pushVideoToAirplay_player:(id)arg1;
- (void)updateMiTingView_player:(unsigned long long)arg1;
- (void)updatePushNextEpisodeMessage_player:(id)arg1;
- (id)getPushListType;
- (void)pushSecondDataRequestSuccess:(id)arg1;
- (void)pushDataRequestFail:(id)arg1 withRequestManager:(id)arg2;
- (void)pushDataRequestSuccess:(id)arg1;
- (long long)getPushdPlayingTime;
- (long long)getPushdPlayDuration;
- (void)setPushedPlayDuration:(long long)arg1;
- (void)setCurrentPushVideoData:(id)arg1;
- (void)registerPushObservers;
- (id)getCurrentPushedTitle;
- (void)qimoQuitToPumaPlayer;
- (void)quitPushDeviceForAirPlay;
- (void)keepPushPlayerRecord:(id)arg1;
- (void)changePlayByUserType:(int)arg1 data:(id)arg2 vvlogDic:(id)arg3;
- (_Bool)isPushFromBroadCast;
- (_Bool)isPushFromUGC;
- (_Bool)isExistPushVideo;
- (_Bool)isAirplayed;
- (_Bool)canPushReopenCurrentEpisode;
- (_Bool)isPushed;
- (void)repushCurrentVideo;
- (void)resetQimoFromShortCut;
- (_Bool)isQimoReopenFromShortCut;
- (id)getPushVideoView;
- (id)getCurrentPushedAVItem;
- (id)getPushVideoMessage;
- (void)resetLocalizePushVideoMessage;
- (void)localizePushVideoMessage;
- (void)closePushVideoService;
- (void)handlePushBeforeCloseService;
- (void)createDelegate;
- (id)init;
- (void)dealloc;
- (void)showToastForKimoSetSkipFailure;
- (void)updateSettingSkipSwitch:(_Bool)arg1;
- (void)updateMiTingView:(unsigned long long)arg1;
- (_Bool)isRefreshingProgress;
- (void)updatePushNextEpisodeMessage:(id)arg1;
- (void)updatePushStateMessage:(id)arg1;
- (void)pushModelChangeEpisodes:(id)arg1;
- (void)pushNextEpisode;
- (id)getNextBision;
- (void)qimoMoveToNextEpisode:(id)arg1;
- (id)qimoGetPlayerMessage:(id)arg1;
- (_Bool)qimoCanShowNextEpisode:(id)arg1;
- (int)getCurrentPushDevice;
- (_Bool)qimoCanShowEpisodes:(id)arg1;
- (_Bool)qimoIsFromBroadCast:(id)arg1;
- (void)qimoChangeScreenMode:(id)arg1;
- (void)qimoChangeEpisode:(id)arg1;
- (void)qimoCoverDoBackAction:(id)arg1;
- (void)updatePushState:(int)arg1 deviceMessage:(id)arg2;
- (void)showPushVideoCover;
- (id)getPushCoverRootView;
- (void)pushModelOfflineChangeCacheState:(int)arg1 message:(id)arg2;
- (void)pushModelChangePlayList:(id)arg1;
- (void)pushModelChangeTitle:(id)arg1;
- (void)pushModelChangeCurrentRate:(long long)arg1;
- (void)pushModelChangeDataRates:(id)arg1;
- (void)pushModelChangePlayState:(_Bool)arg1;
- (void)pushModelChangePlayingTime:(long long)arg1;
- (void)pushModelChangePlayDuration:(long long)arg1;
- (void)quitAirplayForDLNAQIMO;
- (void)removeMovieForAirplay;
- (void)airplayPlayPositionChange:(long long)arg1;
- (void)onIsPlayingStateChanged:(_Bool)arg1;
- (void)airplayPlayStateChange:(int)arg1 message:(id)arg2;
- (void)closeAirplayManager;
- (void)reopenAirplay:(id)arg1;
- (void)reopenAirplayOperationInterface;
- (void)closeAirplayOperationInterface;
- (void)playAirPlay;
- (void)pauseAirPlay;
- (void)seekAirplayPosition:(long long)arg1;
- (void)handleAirplayM3u8Message:(id)arg1 finish:(CDUnknownBlockType)arg2;
- (void)pushVideoToAirplay:(id)arg1;
- (void)handleDLNARequestFailed:(id)arg1;
- (void)dLNAManager:(id)arg1 getDLNAMessageFailed:(id)arg2;
- (void)dLNAManager:(id)arg1 getDLNAMessageSuccess:(id)arg2;
- (void)requestDLNAVideoInfo:(id)arg1 message:(id)arg2;
- (void)pushForCurrentPlayData:(id)arg1;
- (int)getCurrentScreenMode;
- (void)createPushTableSheeet:(id)arg1;
- (void)handleExistPushTableSheeetIsShow:(_Bool)arg1;
- (void)qimoToBuyDongle:(id)arg1;
- (id)getVideoSkipStartKey;
- (void)changeVideoSkipStart:(_Bool)arg1;
- (void)updateMiTingConnectState:(unsigned long long)arg1;
- (void)notifyMiTingForceSync;
- (void)muteMiTing:(_Bool)arg1;
- (unsigned long long)miTingStatus;
- (void)checkMiTing;
- (_Bool)isMiTingPaused;
- (void)switchMiTingButton:(_Bool)arg1;
- (void)resetMiTingResumeFlag;
- (void)stopMiTing;
- (void)startMiTing;
- (void)handleDLNAPlayList;
- (void)pushSeekDLNATime;
- (void)handleRemoteVideoState:(id)arg1;
- (void)handleVIPTestView;
- (void)repushCurrentVideoForVIPDataRate;
- (void)handleVIPDateRates;
- (void)playPushedVideoWithAlbumid:(id)arg1 tvid:(id)arg2;
- (void)deviceEvent:(id)arg1 serviceID:(id)arg2 vars:(id)arg3;
- (void)handleDeviceOffline;
- (void)didPushDeviceOffline:(id)arg1;
- (void)didReconnectedPushDevice:(id)arg1;
- (void)didWillChangeConnectedDevice:(id)arg1;
- (void)didRemoteAvailableDeviceChanged:(id)arg1;
- (void)updateAvailableDevice;
- (void)didAppEnterForground:(id)arg1;
- (void)didEnsureGetValidPushData:(id)arg1;
- (void)showWeakNetAlertView:(_Bool)arg1;
- (void)didHandleWeekNetWork:(id)arg1;
- (void)updateAdSound:(id)arg1;
- (_Bool)isAppForground;
- (void)appEnterBackground:(id)arg1;
- (void)resetReconnectiongState;
- (void)appEnterForground:(id)arg1;
- (void)registerPushHandlers;
- (void)updatePushPlayingTime:(long long)arg1;
- (void)updatePushPlayingProgress;
- (void)stopUpdatePushPlayingProgress;
- (void)changeVideoPlayState:(id)arg1;
- (void)changeVideoVolume:(_Bool)arg1;
- (void)sendQuitOrderToDevice;
- (void)seekToTime:(id)arg1;
- (void)changeVideoDataRate:(id)arg1;
- (void)sendPlayListToPushedDevice:(id)arg1;
- (id)getPushPlayList:(id)arg1;
- (void)quitPushDevice:(id)arg1;
- (void)resetPushVideo:(id)arg1;
- (void)resetLastDataRateForQiMo;
- (void)stopUpdateOfflineState;
- (void)handleOfflineCacheState:(id)arg1;
- (void)startUpdateOfflineState;
- (void)pushVideoToDevice:(id)arg1;
- (id)getOfflineURL:(id)arg1;
- (id)getVideoLocalPathByTVID:(id)arg1;
- (void)pushCurrentVideoForDateRateAndTime:(long long)arg1;
- (id)pushGetSubjectID;
- (void)pushCurrentVideoToDevice;
- (void)changePushDevice:(id)arg1;
- (void)pushVideo:(id)arg1;
- (void)pushVideoFromVip:(id)arg1;
- (id)getCurrentPlayerMessage;
- (id)getPumaPlayTitle;
- (id)getPushCurrentPlayedVideo;
- (void)allowAirPlayPush;
- (long long)getPlayerCurrentPlayDuration;
- (long long)getPlayerCurrentPlayingTime;
- (void)deletePumaPlayController;
- (void)requestPushCurrentVideoData;
- (void)reloadNextEpisodeMessage;
- (void)reopenPushFromShortCut;
- (void)reopenPushFromShortCut:(id)arg1;
- (void)showIPHONEToastWithText:(id)arg1;
- (void)showIPADToastWithText:(id)arg1;
- (void)showTestPushVideoToast:(id)arg1;
- (void)openPushTestVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

