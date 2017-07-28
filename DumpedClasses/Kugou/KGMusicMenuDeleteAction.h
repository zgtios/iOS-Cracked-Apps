//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KGMusicMenuDeleteAction : UserActionRecord
{
    int userActionID;
    unsigned long long errorCode;
    NSString *functionName;
    NSString *fromSource;
    NSString *musicName;
    NSString *musicHash;
    long long musicType;
    long long fileQuality;
    NSString *selectType;
}

@property(copy, nonatomic) NSString *selectType; // @synthesize selectType;
@property(nonatomic) long long fileQuality; // @synthesize fileQuality;
@property(nonatomic) long long musicType; // @synthesize musicType;
@property(copy, nonatomic) NSString *musicHash; // @synthesize musicHash;
@property(copy, nonatomic) NSString *musicName; // @synthesize musicName;
@property(nonatomic) int userActionID; // @synthesize userActionID;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode;
- (void)coding;
- (void)dealloc;

@end
