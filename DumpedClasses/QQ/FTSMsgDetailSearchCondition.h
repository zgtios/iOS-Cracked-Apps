//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSBaseSearchCondition.h"

@class FTSFeedMsgModel, NSString;

@interface FTSMsgDetailSearchCondition : FTSBaseSearchCondition
{
    int _xo;
    long long _ftsSessionType;
    NSString *_ftsSearchRelationId;
    NSString *_ftsSearchRelationName;
    unsigned long long _ftsSessionItemCount;
    FTSFeedMsgModel *_ftsFeedMsgModel;
}

@property(retain, nonatomic) FTSFeedMsgModel *ftsFeedMsgModel; // @synthesize ftsFeedMsgModel=_ftsFeedMsgModel;
- (void).cxx_destruct;
- (Class)viewControllerClass;

// Remaining properties
@property(copy, nonatomic) NSString *ftsSearchRelationId; // @dynamic ftsSearchRelationId;
@property(copy, nonatomic) NSString *ftsSearchRelationName; // @dynamic ftsSearchRelationName;
@property(nonatomic) unsigned long long ftsSessionItemCount; // @dynamic ftsSessionItemCount;
@property(nonatomic) long long ftsSessionType; // @dynamic ftsSessionType;

@end

