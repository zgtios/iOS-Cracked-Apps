//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "AliSelectionControlDelegate.h"

@class AliDetailModel, NSArray<AliDetailElementModel>, NSMutableArray, NSMutableDictionary, NSString;

@interface AliTradeComponentsSelectionControl : UIControl <AliSelectionControlDelegate>
{
    AliDetailModel *_detailModel;
    NSMutableArray *_componentTitles;
    NSMutableArray *_componentElementsSelectControls;
    NSMutableDictionary *_componentElementsDescs;
    NSMutableArray *_endLines;
    NSArray<AliDetailElementModel> *_elementsList;
    NSMutableArray *_subTextLabels;
}

@property(retain, nonatomic) NSMutableArray *subTextLabels; // @synthesize subTextLabels=_subTextLabels;
@property(retain, nonatomic) NSArray<AliDetailElementModel> *elementsList; // @synthesize elementsList=_elementsList;
@property(retain, nonatomic) NSMutableArray *endLines; // @synthesize endLines=_endLines;
@property(retain, nonatomic) NSMutableDictionary *componentElementsDescs; // @synthesize componentElementsDescs=_componentElementsDescs;
@property(retain, nonatomic) NSMutableArray *componentElementsSelectControls; // @synthesize componentElementsSelectControls=_componentElementsSelectControls;
@property(retain, nonatomic) NSMutableArray *componentTitles; // @synthesize componentTitles=_componentTitles;
@property(nonatomic) __weak AliDetailModel *detailModel; // @synthesize detailModel=_detailModel;
- (void).cxx_destruct;
- (void)utOfValueClick:(id)arg1;
- (void)clickedControl:(id)arg1 index:(unsigned long long)arg2;
- (void)performLayoutSubviews;
- (id)createTitle:(id)arg1;
- (void)createSkuPropertyValueControl;
- (void)gotoSubpage:(id)arg1;
- (void)didReceiveFinishChooseContractInfoNotification:(id)arg1;
- (void)configDescView:(id)arg1 element:(id)arg2 contract:(id)arg3 propertySelectControl:(id)arg4;
- (void)componentPropChanged:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
