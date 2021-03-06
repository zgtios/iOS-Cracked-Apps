//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface NMShortVideoUrlInfo : NSObject
{
    NSString *_eventId;
    NSString *_urlStr;
    unsigned long long _urlType;
    long long _size;
    NSDate *_urlDate;
    long long _expiredDuration;
}

@property(nonatomic) long long expiredDuration; // @synthesize expiredDuration=_expiredDuration;
@property(retain, nonatomic) NSDate *urlDate; // @synthesize urlDate=_urlDate;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(nonatomic) unsigned long long urlType; // @synthesize urlType=_urlType;
@property(retain, nonatomic) NSString *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

