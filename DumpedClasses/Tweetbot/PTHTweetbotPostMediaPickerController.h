//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHViewController.h"

#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, PTHTweetbotPostDraft, PTHTweetbotPostMediaView, UIControl, UIView;
@protocol PTHTweetbotPostViewDelegate;

@interface PTHTweetbotPostMediaPickerController : PTHViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    UIControl *_backgroundView;
    PTHTweetbotPostDraft *_draft;
    PTHTweetbotPostMediaView *_mediaView;
    UIView *_mediaViewContainer;
    id <PTHTweetbotPostViewDelegate> _oldDelegate;
}

+ (id)removeMediaAccessoryView:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <PTHTweetbotPostViewDelegate> oldDelegate; // @synthesize oldDelegate=_oldDelegate;
@property(retain, nonatomic) UIView *mediaViewContainer; // @synthesize mediaViewContainer=_mediaViewContainer;
@property(retain, nonatomic) PTHTweetbotPostMediaView *mediaView; // @synthesize mediaView=_mediaView;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)animateTransition:(id)arg1;
- (void)dismissTransition:(id)arg1;
- (void)presentTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)selectedMedium:(id)arg1 control:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithDraft:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

