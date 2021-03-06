//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADStatisticDictionaryDelegate-Protocol.h"

@class GADAd, GADContentQueue, GADScheduler, GADSession, GADStatisticDictionary, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol NSObject, OS_dispatch_queue;

@interface GADApplication : NSObject <GADStatisticDictionaryDelegate>
{
    GADAd *_backgroundingAd;
    id <NSObject> _appBecameActiveObserver;
    GADContentQueue *_contentQueue;
    GADScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSArray *_availableAdapterNames;
    unsigned int _activeViewID;
    NSString *_version;
    NSString *_mainBundleIdentifier;
    BOOL _appFinishedLaunching;
    GADSession *_currentSession;
    GADStatisticDictionary *_statistics;
    NSObject<OS_dispatch_queue> *_notificationSerialQueue;
    NSObject<OS_dispatch_queue> *_statisticsSerialQueue;
    NSMutableSet *_adStatistics;
    NSMutableDictionary *_slotStatistics;
    unsigned long long _sequenceNumber;
}

+ (id)sharedInstance;
+ (void)load;
@property(readonly, nonatomic) NSMutableDictionary *slotStatistics; // @synthesize slotStatistics=_slotStatistics;
@property(readonly, nonatomic) NSMutableSet *adStatistics; // @synthesize adStatistics=_adStatistics;
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL appFinishedLaunching; // @synthesize appFinishedLaunching=_appFinishedLaunching;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *statisticsSerialQueue; // @synthesize statisticsSerialQueue=_statisticsSerialQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationSerialQueue; // @synthesize notificationSerialQueue=_notificationSerialQueue;
@property(readonly, nonatomic) GADStatisticDictionary *statistics; // @synthesize statistics=_statistics;
@property(readonly, nonatomic) GADSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (unsigned int)nextActiveViewID;
- (void)GADLinkCategories;
- (void)didUpdateStatisticDictionary:(id)arg1;
- (id)notificationQueue;
- (id)pendingAdStatistics;
- (id)iTunesMetadata;
- (id)iTunesMetadataPath;
- (BOOL)isAppActive;
@property(readonly, copy, nonatomic) NSString *mainBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *version;
- (void)runEarlyActivities;
- (void)dealloc;
- (id)init;
- (void)stopContentHashing;
- (void)startContentHashing;
- (id)fingerprintWithServedPenaltyDeduction;
- (void)updateAvailableAdapterNamesWithPotentialAdapterNames:(id)arg1;
- (void)setAvailableAdapterNames:(id)arg1;
@property(readonly, copy) NSArray *availableAdapterNames;
- (id)nextRequestStatisticsDictionaryForSlot:(id)arg1;
- (id)timeSinceFirstAdRequestInMilliseconds;
- (id)nextSequenceNumberAsString;
- (void)incrementSequenceNumber;
- (void)incrementTotalAdClickCount;
- (void)decrementTotalAdRequestCount;
- (void)incrementTotalAdRequestCount;
- (void)didNotSendAdStatistics:(id)arg1;
- (void)didBecomeActive;
- (void)willLeaveApplicationDueToClickOnAd:(id)arg1;
- (id)slotStatisticsDictionary;
- (id)slotStatisticsForSlotID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

