//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQRelationSearchFilter.h"

@class NSMutableArray;

@interface QQPublicAccountFilter : QQRelationSearchFilter
{
    NSMutableArray *_publicAccounts;
    long long _type;
    _Bool _offlineSearch;
}

+ (void)sortResults:(id)arg1 keyWord:(id)arg2;
+ (void)publicAccountSortWeightCalc:(id)arg1 keyword:(id)arg2;
+ (_Bool)isCrmIvrVoipRecord:(id)arg1;
+ (id)getModel:(id)arg1;
- (void).cxx_destruct;
- (id)copyAllSearchResults:(id)arg1 excludeUinList:(id)arg2;
- (void)doInit;
- (void)ClickPercentConvert:(id)arg1 totalClicks:(unsigned long long)arg2;
- (id)initWithFliter:(long long)arg1 offLineSearch:(_Bool)arg2;
- (id)init;

@end
