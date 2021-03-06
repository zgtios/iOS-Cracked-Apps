//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseViewController.h"

#import "MKHorizMenuDataSource.h"
#import "MKHorizMenuDelegate.h"
#import "QLHomeActivityJumpProtocal.h"
#import "QLPageNavigatorDatasource.h"
#import "QLPageNavigatorDelegate.h"

@class MKHorizMenu, NSMutableDictionary, NSString, QLPageNavigator, QLVRssChannelModel;

@interface QLVRssViewController : QLBaseViewController <MKHorizMenuDelegate, MKHorizMenuDataSource, QLPageNavigatorDatasource, QLPageNavigatorDelegate, QLHomeActivityJumpProtocal>
{
    MKHorizMenu *_horizMenu;
    QLVRssChannelModel *_channelModel;
    QLPageNavigator *_pageNavi;
    NSMutableDictionary *_dicCtls;
    long long _lastPageIndex;
}

@property long long lastPageIndex; // @synthesize lastPageIndex=_lastPageIndex;
- (void).cxx_destruct;
- (void)allowPageNavigatorScrollViewScroll;
- (void)pageNagatorScrollStatus:(id)arg1;
- (void)scrollToTop;
- (id)getCurrentViewCtl;
- (void)horizMenu:(id)arg1 itemDoubleClickAtIndex:(unsigned long long)arg2;
- (void)preLoadBesidesPages;
- (void)horizMenu:(id)arg1 itemSelectedAtIndex:(unsigned long long)arg2;
- (void)leavePageWithIndex:(long long)arg1;
- (void)enterPageWithIndex:(long long)arg1;
- (id)getCurrentPageCtl;
- (void)requestModelDidFinishLoad:(id)arg1;
- (void)pageNavigatorDidScroll:(id)arg1;
- (void)pageNavigator:(id)arg1 didNaviToIndex:(long long)arg2;
- (id)pageNavigator:(id)arg1 viewCtlForIndex:(long long)arg2;
- (_Bool)pageNavigator:(id)arg1 pageExsistAtIndex:(long long)arg2;
- (long long)numberOfPagesInNavigator:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)needCustomStatusBarScrollTopGesture;
- (unsigned long long)eachItemWidthForMenu:(id)arg1;
- (id)horizMenu:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsForMenu:(id)arg1;
- (id)backgroundColorForMenu:(id)arg1;
- (id)selectedItemImageForMenu:(id)arg1;
- (void)retryDown:(id)arg1;
- (id)pathStrForRemark;
- (_Bool)clearPtagValue;
- (id)pageChineseName;
- (_Bool)isCurrentCtlContainSubPageCtl;
- (void)searchVideosClicked:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (void)jumpToChannelWithChannelID:(id)arg1 channelTitle:(id)arg2 otherParam:(id)arg3;
- (_Bool)checkValidityWithTabName:(id)arg1 tabIndex:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

