//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOneCallXCom.h"

@interface SOfoOneCallXUnit : SOneCallXCom
{
    _Bool _isFromBusSource;
}

@property(nonatomic) _Bool isFromBusSource; // @synthesize isFromBusSource=_isFromBusSource;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (void)needGoToSourcePage;
- (void)enterOfoConfirmOrderPageFromBusWithDic:(id)arg1;
- (void)addOneCallOfoFromBusCar;
- (void)addOneObservers;

@end

