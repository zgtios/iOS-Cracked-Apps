//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QiXiuBaseVC.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QXCardMonthCell, QXCardMonthModel, QXCardRankCell, UITableView, UIView;

@interface QXCardClockViewController : QiXiuBaseVC <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate>
{
    _Bool _currentMonth;
    NSString *_anchorId;
    NSString *_roomId;
    UITableView *_contentView;
    UIView *_tableFooterView;
    QXCardMonthModel *_currentModel;
    QXCardMonthModel *_lastModel;
    QXCardRankCell *_rankCell;
    QXCardMonthCell *_monthCell;
}

@property(nonatomic) _Bool currentMonth; // @synthesize currentMonth=_currentMonth;
@property(retain, nonatomic) QXCardMonthCell *monthCell; // @synthesize monthCell=_monthCell;
@property(retain, nonatomic) QXCardRankCell *rankCell; // @synthesize rankCell=_rankCell;
@property(retain, nonatomic) QXCardMonthModel *lastModel; // @synthesize lastModel=_lastModel;
@property(retain, nonatomic) QXCardMonthModel *currentModel; // @synthesize currentModel=_currentModel;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(copy, nonatomic) NSString *anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;
- (void)changeMonth:(_Bool)arg1;
- (void)parseClockCardResult:(id)arg1 currentMonth:(_Bool)arg2 currentDay:(_Bool)arg3;
- (void)clockCardAction:(id)arg1 currentMonth:(_Bool)arg2 currentDay:(_Bool)arg3;
- (void)payNotification:(id)arg1;
- (void)clockCard:(id)arg1 currentMonth:(_Bool)arg2 currentDay:(_Bool)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)parseFetchResult:(id)arg1 currentMonth:(_Bool)arg2 fillClock:(_Bool)arg3 animation:(_Bool)arg4;
- (void)fetchMonthData:(_Bool)arg1 fillClock:(_Bool)arg2 animation:(_Bool)arg3;
- (void)fetchCurrentMonthData:(_Bool)arg1 fillClock:(_Bool)arg2;
- (void)fetchLastMonthData:(_Bool)arg1 fillClock:(_Bool)arg2;
- (void)initData;
- (void)initContentView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

