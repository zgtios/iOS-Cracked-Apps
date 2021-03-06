//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, WifiSendMusicView;

@interface BrowserTransferViewController : UIViewController <UIAlertViewDelegate>
{
    WifiSendMusicView *_wifiSendView;
}

@property(retain, nonatomic) WifiSendMusicView *wifiSendView; // @synthesize wifiSendView=_wifiSendView;
- (void)stopSending;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initSubview;
- (void)backAction:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

