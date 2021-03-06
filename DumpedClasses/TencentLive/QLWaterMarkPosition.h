//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLWaterMarkPositionProtocol.h"

@class NSString;

@interface QLWaterMarkPosition : NSObject <QLWaterMarkPositionProtocol>
{
    struct CGSize _videoSize;
    struct CGSize _viewSize;
    struct CGRect _originPositon;
}

@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) struct CGRect originPositon; // @synthesize originPositon=_originPositon;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (struct CGRect)calculatePosition;
- (struct CGRect)waterMarkPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

