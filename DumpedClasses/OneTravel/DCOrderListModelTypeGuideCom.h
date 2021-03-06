//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseComponent.h"

@class DCBlueBarApiModel, DCModelTypeGuideView, NSTimer, UIView;

@interface DCOrderListModelTypeGuideCom : DCBaseComponent
{
    _Bool _forbiddenAnimation;
    _Bool _isShowing;
    CDUnknownBlockType _hideCallbackAction;
    CDUnknownBlockType _hideCallbackActionWithId;
    DCModelTypeGuideView *_guideView;
    UIView *_fatherView;
    DCBlueBarApiModel *_dataModel;
    long long _timeCount;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long timeCount; // @synthesize timeCount=_timeCount;
@property(retain, nonatomic) DCBlueBarApiModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak UIView *fatherView; // @synthesize fatherView=_fatherView;
@property _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(retain, nonatomic) DCModelTypeGuideView *guideView; // @synthesize guideView=_guideView;
@property(copy, nonatomic) CDUnknownBlockType hideCallbackActionWithId; // @synthesize hideCallbackActionWithId=_hideCallbackActionWithId;
@property(copy, nonatomic) CDUnknownBlockType hideCallbackAction; // @synthesize hideCallbackAction=_hideCallbackAction;
@property(nonatomic) _Bool forbiddenAnimation; // @synthesize forbiddenAnimation=_forbiddenAnimation;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidateTimer;
- (void)timerEvents;
- (void)revokeDisplaySetup;
- (void)setupTimer;
- (void)setVerticalOffset:(double)arg1;
- (void)hideWithFadeAnimation;
- (void)showWithFadeAnimation;
- (void)hide;
- (void)show;
- (void)showBeyondTimer;
- (void)showInCustomView:(id)arg1;
- (void)setupData:(id)arg1 displayType:(unsigned long long)arg2 arrowPosition:(double)arg3 fatherView:(id)arg4;
- (void)setupData:(id)arg1 displayType:(unsigned long long)arg2 arrowPosition:(double)arg3;

// Remaining properties
@property(nonatomic) __weak id <DCOrderListModelTypeGuideComDelegate> delegate;

@end

