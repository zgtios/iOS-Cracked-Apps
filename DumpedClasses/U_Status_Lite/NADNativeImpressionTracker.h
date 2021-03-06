//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_source;

@interface NADNativeImpressionTracker : NSObject
{
    NSMutableSet *_trackingViews;
    NSObject<OS_dispatch_source> *_timerSource;
}

+ (id)sharedTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain, nonatomic) NSMutableSet *trackingViews; // @synthesize trackingViews=_trackingViews;
- (void).cxx_destruct;
- (void)sendImpressionForAd:(id)arg1;
- (void)trackImpression;
- (void)stopTracking;
- (void)startTracking;
- (void)removeTrackingView:(id)arg1;
- (void)addTrackingView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

