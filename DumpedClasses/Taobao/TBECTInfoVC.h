//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UILabel, UITextView;

@interface TBECTInfoVC : UIViewController
{
    UILabel *_versionShowLabel;
    UILabel *_infoShowLabel;
    UITextView *_utdidTextView;
    UILabel *_getoffFlyInfoLabel;
}

@property(retain, nonatomic) UILabel *getoffFlyInfoLabel; // @synthesize getoffFlyInfoLabel=_getoffFlyInfoLabel;
@property(retain, nonatomic) UITextView *utdidTextView; // @synthesize utdidTextView=_utdidTextView;
@property(retain, nonatomic) UILabel *infoShowLabel; // @synthesize infoShowLabel=_infoShowLabel;
@property(retain, nonatomic) UILabel *versionShowLabel; // @synthesize versionShowLabel=_versionShowLabel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)getOffFlyRobotNotification:(id)arg1;
- (void)renewRobotInfo;
- (void)updateRobotVersion;
- (void)updateLocalInfo:(id)arg1;
- (void)clearRobotButtonPress;
- (void)updateRequestButtonPress;
- (void)ceshiRukou;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
