//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAVCaptureViewController.h"

@class NSTimer, UIButton, UILabel, UIView;

@interface QZFaceDetectCaptureViewController : QQAVCaptureViewController
{
    UILabel *_msgLabel;
    _Bool _shouldReset;
    UIView *_scanAnimationView;
    NSTimer *_animationTimer;
    long long _retryCount;
    UIButton *_downloadButton;
    _Bool _stopFaceDetect;
}

@property(nonatomic) _Bool stopFaceDetect; // @synthesize stopFaceDetect=_stopFaceDetect;
- (void).cxx_destruct;
- (void)downLoadFaceDetectSDKFinish;
- (void)didFaceSDKStart;
- (void)didFaceDetectFeature:(id)arg1 faceRect:(struct CGRect)arg2;
- (void)didFaceDetectFeatureInQZone:(id)arg1 msg:(id)arg2;
- (void)applySettingAndStart;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)createControlPanel;
- (void)setupMediaPicker;
- (Class)RichMediaPickerClass;
- (void)removeScanAnimation;
- (void)doScanAnimation;
- (void)beginScanAnimation;
- (void)createScanAnimationView;
- (void)handleDownloadButtonClick:(id)arg1;
- (void)handleVideoCall:(id)arg1;
- (void)onNetReachabilityDidChange:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)maskView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end

