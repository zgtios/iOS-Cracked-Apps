//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

@class FBSearchComponentModel, FBSearchResultsContext;

@interface FBPulseResultsTopHeaderModuleComponent : CKCompositeComponent
{
    FBSearchComponentModel *_resultEdgeModel;
    FBSearchResultsContext *_context;
}

+ (id)newWithModuleEdgeModel:(id)arg1 context:(id)arg2;
@property(readonly, nonatomic) FBSearchResultsContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) FBSearchComponentModel *resultEdgeModel; // @synthesize resultEdgeModel=_resultEdgeModel;
- (void).cxx_destruct;
- (void)didTapLink;

@end

