//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBPowerLogsSQLClient;

@interface FBDiagnosticsAnalyser : NSObject
{
    FBPowerLogsSQLClient *_client;
}

- (void).cxx_destruct;
- (void)processForAttributionEnergyFrom:(id)arg1 to:(id)arg2 allApps:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)processTable:(id)arg1 foreignTable:(id)arg2 from:(id)arg3 toDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)process:(id)arg1 from:(id)arg2 toDate:(id)arg3 bundleId:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)process:(id)arg1 from:(id)arg2 toDate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithLogfile:(id)arg1;

@end

