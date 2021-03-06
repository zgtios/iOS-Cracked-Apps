//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"
#import "NSNetServiceDelegate-Protocol.h"
#import "PTHStreamHandlerDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSNetServiceBrowser, NSString, NSTimer;
@protocol PTHNetServiceClientDelegate;

@interface PTHNetServiceClient : NSObject <PTHStreamHandlerDelegate, NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    NSString *_type;
    NSString *_name;
    _Bool _running;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_services;
    NSMutableDictionary *_servicesInfo;
    unsigned long long _outputFormat;
    id <PTHNetServiceClientDelegate> _delegate;
    NSTimer *_reconnectTimer;
}

@property(nonatomic) unsigned long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) __weak id <PTHNetServiceClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)outputObject:(id)arg1 forNetService:(id)arg2;
- (_Bool)outputObject:(id)arg1;
- (void)streamHandlerDidClose:(id)arg1;
- (void)streamHandler:(id)arg1 didOutputObject:(id)arg2;
- (void)streamHandler:(id)arg1 didReceiveObject:(id)arg2;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(_Bool)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(_Bool)arg3;
- (void)reconnect;
- (void)stop;
- (void)start;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)services;
- (id)outputObjectsForNetService:(id)arg1;
- (id)netServiceForStreamHandler:(id)arg1;
- (id)streamHandlerForNetService:(id)arg1;
- (id)serviceInfoForNetService:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2;
- (id)initWithType:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

