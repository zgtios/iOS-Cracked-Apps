//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

#import "XMPPReconnectDelegate.h"
#import "XMPPRoomDelegate.h"
#import "XMPPStreamDelegate.h"
#import "XMPPStreamManagementDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString, NSTimer, XMPPIDTracker, XMPPReconnect, XMPPStream;

@interface XMPPCtripChat : XMPPModule <XMPPStreamManagementDelegate, XMPPStreamDelegate, XMPPRoomDelegate, XMPPReconnectDelegate>
{
    XMPPIDTracker *xmppIDTracker;
    NSMutableDictionary *messageDict;
    int messageReSendCount;
    unsigned char _config;
    id <XMPPCtripChatStorage> _xmppCtripChatStorage;
    XMPPReconnect *_conectManager;
    NSMutableSet *_messageTempSet;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *messageTempSet; // @synthesize messageTempSet=_messageTempSet;
@property(nonatomic) unsigned char config; // @synthesize config=_config;
@property(readonly, nonatomic) XMPPReconnect *conectManager; // @synthesize conectManager=_conectManager;
@property(readonly, nonatomic) id <XMPPCtripChatStorage> xmppCtripChatStorage; // @synthesize xmppCtripChatStorage=_xmppCtripChatStorage;
- (void).cxx_destruct;
- (_Bool)xmppReconnect:(id)arg1 shouldAttemptAutoReconnect:(unsigned int)arg2;
- (void)xmppReconnect:(id)arg1 didDetectAccidentalDisconnect:(unsigned int)arg2;
- (void)handleResponse:(id)arg1;
- (void)didSendMessage:(id)arg1;
- (void)xmppStreamManagement:(id)arg1 getIsHandled:(_Bool *)arg2 stanzaId:(id *)arg3 forReceivedElement:(id)arg4;
- (id)getMessageDetail:(id)arg1;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (id)xmppStream:(id)arg1 willReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;
- (void)xmppStream:(id)arg1 didSendMessage:(id)arg2;
- (id)xmppStream:(id)arg1 willSendMessage:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)handleMessgaeTrack:(id)arg1 withInfo:(id)arg2;
- (void)trackeMessageWithTimeout:(id)arg1;
- (void)sendMessageFail;
- (void)reTry;
- (void)invalidTimer;
- (void)putInQueue:(id)arg1;
- (void)reConnect;
- (void)sendTcpMessage:(id)arg1;
@property(readonly, nonatomic) XMPPStream *xmppConnectingStream;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
