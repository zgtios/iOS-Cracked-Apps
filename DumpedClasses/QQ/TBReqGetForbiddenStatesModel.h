//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ITBPBGetData.h"

@class NSArray, NSString;

@interface TBReqGetForbiddenStatesModel : NSObject <ITBPBGetData>
{
    NSArray *_uidAry;
    NSArray *_unionIDArray;
}

@property(retain, nonatomic) NSArray *unionIDArray; // @synthesize unionIDArray=_unionIDArray;
@property(retain, nonatomic) NSArray *uidAry; // @synthesize uidAry=_uidAry;
- (id)getRequestPBData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

