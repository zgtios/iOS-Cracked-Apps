//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CTSearchIntentionManager : NSObject
{
    NSArray *_cachedSearchIntetionModel;
}

+ (_Bool)isExpVersion;
+ (id)getChannelString:(int)arg1;
+ (id)getBizTypeString:(int)arg1;
+ (id)updateDictDataWithOriginalDict:(id)arg1 NewDict:(id)arg2;
+ (id)updateStringDataWithOriginalStr:(id)arg1 NewStr:(id)arg2;
+ (id)updateModelWithOriginalModel:(id)arg1 NewModel:(id)arg2;
+ (void)UpdateSearchIntentionDatasWithModel:(id)arg1;
+ (id)getAllSearchIntentionDatas;
+ (id)getSearchIntentionDatasWithBizType:(int)arg1 Channel:(int)arg2;
+ (void)sendGetSearchIntetionDataWithChannel;
+ (id)shareInstance;
+ (id)dict2obejctArray:(id)arg1;
+ (id)objectArray2Dict:(id)arg1;
+ (id)getHybridSearchIntentionDatasWithBizType:(id)arg1 Channel:(id)arg2;
@property(retain, nonatomic) NSArray *cachedSearchIntetionModel; // @synthesize cachedSearchIntetionModel=_cachedSearchIntetionModel;
- (void).cxx_destruct;

@end

