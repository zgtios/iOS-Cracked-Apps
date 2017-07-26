//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBLIActorProtocol.h"
#import "TBLIComponentProtocol.h"

@class NSDictionary, NSObject, NSString, TBLIInteractiveModel;

@interface TBLIComponent : UIView <TBLIComponentProtocol, TBLIActorProtocol>
{
    int _renderState;
    NSObject *director;
    TBLIInteractiveModel *_model;
    NSDictionary *_utParams;
    CDUnknownBlockType _finishBlock;
    struct CGRect _instanceFrame;
}

@property(nonatomic) int renderState; // @synthesize renderState=_renderState;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(retain, nonatomic) TBLIInteractiveModel *model; // @synthesize model=_model;
@property(nonatomic) struct CGRect instanceFrame; // @synthesize instanceFrame=_instanceFrame;
@property(nonatomic) __weak NSObject *director; // @synthesize director;
- (void).cxx_destruct;
- (void)onHidden;
- (void)onShow;
- (void)dealloc;
- (id)getView;
- (void)refreshComponent:(id)arg1;
- (_Bool)isRenderFinished;
- (void)renderView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
