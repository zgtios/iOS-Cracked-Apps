//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEAlarmServiceDataSource.h"
#import "ONEAlarmServiceDelegate.h"
#import "ONEUserStoreDelegate.h"

@class NSString;

@interface ONEAlarmModule : NSObject <ONEAlarmServiceDelegate, ONEAlarmServiceDataSource, ONEUserStoreDelegate>
{
}

+ (id)sharedInstance;
- (void)contactStoreDidChange:(id)arg1;
- (void)didClickOnContactSettingButton:(id)arg1;
- (void)stopBackgroundLocation;
- (void)startBackgroundLocation;
- (void)showToastOnView:(id)arg1 string:(id)arg2;
- (void)showAlarmViewController;
- (void)showRecoveryAlertView:(id)arg1;
- (id)userInfo;
- (id)emergencyContacts;
- (long long)networkStatus;
- (struct CLLocationCoordinate2D)userLocation;
- (id)requestBaseURL;
- (id)emergencyPhoneNumber;
- (id)imei;
- (id)daijiaUserToken;
- (id)daijiaPid;
- (id)userToken;
- (void)ONEUserStoreDidKickOff;
- (void)ONEUserStoreDidLogout;
- (void)ONEUserStoreDidLogin;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

