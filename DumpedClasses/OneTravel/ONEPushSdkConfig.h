//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ONEPushSdkConfig : NSObject
{
    unsigned long long _msgQueueDefaultCapacity;
    unsigned long long _connChannelTaskQueueCapacity;
    unsigned long long _connChannelDNSTimeout;
    unsigned long long _connChannelConnectTimeout;
    unsigned long long _connChannelHeartbeatInterval;
    unsigned long long _connChannelHeartbeatRetryCount;
    unsigned long long _connChannelHeartbeatRetryInterval;
    unsigned long long _connChannelRecvBufferSize;
    unsigned long long _fileChannelTaskQueueCapacity;
    unsigned long long _fileChannelConnectionNumber;
    unsigned long long _fileChannelDNSTimeout;
    unsigned long long _fileChannelConnectionTimeout;
    unsigned long long _fileChannelTaskTimeout;
    unsigned long long _dnsCacheCapacity;
    unsigned long long _dnsCacheTimeout;
    unsigned long long _taskTimeoutListCapacity;
    unsigned long long _taskTimeout;
    unsigned long long _connChannelNTPListCapacity;
    unsigned long long _connChannelNTPListAdjustOffset;
}

@property(nonatomic) unsigned long long connChannelNTPListAdjustOffset; // @synthesize connChannelNTPListAdjustOffset=_connChannelNTPListAdjustOffset;
@property(nonatomic) unsigned long long connChannelNTPListCapacity; // @synthesize connChannelNTPListCapacity=_connChannelNTPListCapacity;
@property(nonatomic) unsigned long long taskTimeout; // @synthesize taskTimeout=_taskTimeout;
@property(nonatomic) unsigned long long taskTimeoutListCapacity; // @synthesize taskTimeoutListCapacity=_taskTimeoutListCapacity;
@property(nonatomic) unsigned long long dnsCacheTimeout; // @synthesize dnsCacheTimeout=_dnsCacheTimeout;
@property(nonatomic) unsigned long long dnsCacheCapacity; // @synthesize dnsCacheCapacity=_dnsCacheCapacity;
@property(nonatomic) unsigned long long fileChannelTaskTimeout; // @synthesize fileChannelTaskTimeout=_fileChannelTaskTimeout;
@property(nonatomic) unsigned long long fileChannelConnectionTimeout; // @synthesize fileChannelConnectionTimeout=_fileChannelConnectionTimeout;
@property(nonatomic) unsigned long long fileChannelDNSTimeout; // @synthesize fileChannelDNSTimeout=_fileChannelDNSTimeout;
@property(nonatomic) unsigned long long fileChannelConnectionNumber; // @synthesize fileChannelConnectionNumber=_fileChannelConnectionNumber;
@property(nonatomic) unsigned long long fileChannelTaskQueueCapacity; // @synthesize fileChannelTaskQueueCapacity=_fileChannelTaskQueueCapacity;
@property(nonatomic) unsigned long long connChannelRecvBufferSize; // @synthesize connChannelRecvBufferSize=_connChannelRecvBufferSize;
@property(nonatomic) unsigned long long connChannelHeartbeatRetryInterval; // @synthesize connChannelHeartbeatRetryInterval=_connChannelHeartbeatRetryInterval;
@property(nonatomic) unsigned long long connChannelHeartbeatRetryCount; // @synthesize connChannelHeartbeatRetryCount=_connChannelHeartbeatRetryCount;
@property(nonatomic) unsigned long long connChannelHeartbeatInterval; // @synthesize connChannelHeartbeatInterval=_connChannelHeartbeatInterval;
@property(nonatomic) unsigned long long connChannelConnectTimeout; // @synthesize connChannelConnectTimeout=_connChannelConnectTimeout;
@property(nonatomic) unsigned long long connChannelDNSTimeout; // @synthesize connChannelDNSTimeout=_connChannelDNSTimeout;
@property(nonatomic) unsigned long long connChannelTaskQueueCapacity; // @synthesize connChannelTaskQueueCapacity=_connChannelTaskQueueCapacity;
@property(nonatomic) unsigned long long msgQueueDefaultCapacity; // @synthesize msgQueueDefaultCapacity=_msgQueueDefaultCapacity;
- (void)setDebugMode;
- (void)configurePushSdk:(struct tagPushSdk *)arg1;
- (void)setDefault;
- (id)init;

@end
