//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KGAckUpdateProtocol.h"

@class NSArray, NSString;

@interface KGWebSocketUrlManager : NSObject <KGAckUpdateProtocol>
{
    NSArray *_priorityUrlsArray;
    NSArray *_reserseUrlsArray;
}

@property(readonly) NSArray *reserseUrlsArray; // @synthesize reserseUrlsArray=_reserseUrlsArray;
@property(readonly) NSArray *priorityUrlsArray; // @synthesize priorityUrlsArray=_priorityUrlsArray;
- (void).cxx_destruct;
- (void)updateAckConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

