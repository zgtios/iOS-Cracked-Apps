//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FALiveNormalRoomInfo, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface FALiveFansListView : FAView <UITableViewDataSource, UITableViewDelegate>
{
    int _nSelectIndex;
    FALiveNormalRoomInfo *_normalRoomInfo;
    UITableView *_tableView;
    NSMutableArray *_currentRankSource;
    NSMutableArray *_thirtyDaysRankSource;
    long long _style;
    UIView *_championView;
    UIView *_segmentView;
    UIButton *_currentRankBtn;
    UIButton *_thirtyDayRankBtn;
}

@property(retain, nonatomic) UIButton *thirtyDayRankBtn; // @synthesize thirtyDayRankBtn=_thirtyDayRankBtn;
@property(retain, nonatomic) UIButton *currentRankBtn; // @synthesize currentRankBtn=_currentRankBtn;
@property(retain, nonatomic) UIView *segmentView; // @synthesize segmentView=_segmentView;
@property(nonatomic) int nSelectIndex; // @synthesize nSelectIndex=_nSelectIndex;
@property(retain, nonatomic) UIView *championView; // @synthesize championView=_championView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSMutableArray *thirtyDaysRankSource; // @synthesize thirtyDaysRankSource=_thirtyDaysRankSource;
@property(retain, nonatomic) NSMutableArray *currentRankSource; // @synthesize currentRankSource=_currentRankSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) FALiveNormalRoomInfo *normalRoomInfo; // @synthesize normalRoomInfo=_normalRoomInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateContributeWithList:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)segmentBtnClick:(id)arg1;
- (void)showNoDataViewAndCallBack;
- (void)getFansThirtyDayRankList;
- (void)getFansCurrentRankList;
- (void)configSubViews;
- (void)enterRoomSEL;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

