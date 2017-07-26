//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface BWPlainLogEvent : NSObject
{
    NSMutableArray *_values;
    float _eventDuration;
    NSString *_pageID;
    NSString *_eventID;
    NSString *_eventOwner;
    long long _stTime;
    NSString *_spNo;
    NSString *_orderNo;
}

@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
@property(retain, nonatomic) NSString *spNo; // @synthesize spNo=_spNo;
@property(nonatomic) long long stTime; // @synthesize stTime=_stTime;
@property(retain, nonatomic) NSString *eventOwner; // @synthesize eventOwner=_eventOwner;
@property(retain, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(nonatomic) float eventDuration; // @synthesize eventDuration=_eventDuration;
@property(retain, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (void)addAdditionValue:(id)arg1;
- (id)toDictionary;
- (id)init;

@end
