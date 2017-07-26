//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLFeedCell.h"

#import "TBHLSwipeViewDataSource.h"
#import "TBHLSwipeViewDelegate.h"

@class NSMutableArray, NSString, TBHLSwipeView, UIImageView, UILabel;

@interface HLZhuankanCell : HLFeedCell <TBHLSwipeViewDataSource, TBHLSwipeViewDelegate>
{
    UIImageView *_allImageView;
    CDUnknownBlockType _itemTappedHandler;
    UILabel *_subtitleLbl;
    TBHLSwipeView *_swipeView;
    NSMutableArray *_itemDOs;
}

@property(retain, nonatomic) NSMutableArray *itemDOs; // @synthesize itemDOs=_itemDOs;
@property(retain, nonatomic) TBHLSwipeView *swipeView; // @synthesize swipeView=_swipeView;
@property(retain, nonatomic) UILabel *subtitleLbl; // @synthesize subtitleLbl=_subtitleLbl;
@property(copy, nonatomic) CDUnknownBlockType itemTappedHandler; // @synthesize itemTappedHandler=_itemTappedHandler;
@property(retain, nonatomic) UIImageView *allImageView; // @synthesize allImageView=_allImageView;
- (void).cxx_destruct;
- (void)swipeView:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CGSize)swipeViewItemSize:(id)arg1;
- (id)swipeView:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInSwipeView:(id)arg1;
- (void)innerUpdateCell:(id)arg1;
- (void)updateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
