//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSObject<AddFriendListViewDelegate>, NSString, SSListNotifyBarView, UIActivityIndicatorView, UIButton, UITableView;

@interface AddFriendListView : SSViewBase <UITableViewDataSource, UITableViewDelegate>
{
    int _type;
    _Bool _isLoading;
    _Bool _isLoadMore;
    NSArray *_sectionTitles;
    UIButton *_synchornizeButton;
    NSObject<AddFriendListViewDelegate> *_delegate;
    UITableView *_friendView;
    SSListNotifyBarView *_listNotifyBarView;
    NSArray *_joinedFriends;
    NSArray *_suggestUsers;
    UIActivityIndicatorView *_indicator;
    NSString *_umengEventName;
    NSArray *_friendsList;
}

@property(retain, nonatomic) NSArray *friendsList; // @synthesize friendsList=_friendsList;
@property(retain, nonatomic) NSString *umengEventName; // @synthesize umengEventName=_umengEventName;
@property(retain, nonatomic) UIActivityIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) NSArray *suggestUsers; // @synthesize suggestUsers=_suggestUsers;
@property(retain, nonatomic) NSArray *joinedFriends; // @synthesize joinedFriends=_joinedFriends;
@property(retain, nonatomic) SSListNotifyBarView *listNotifyBarView; // @synthesize listNotifyBarView=_listNotifyBarView;
@property(retain, nonatomic) UITableView *friendView; // @synthesize friendView=_friendView;
@property(nonatomic) __weak NSObject<AddFriendListViewDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *synchornizeButton; // @synthesize synchornizeButton=_synchornizeButton;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sectionTitles;
- (void)displayNotifyMessage:(id)arg1 duration:(double)arg2;
- (void)refreshData;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadJoinedFriends:(id)arg1 suggsetFriends:(id)arg2;
- (void)reloadFriends:(id)arg1;
- (void)loadMore;
- (void)endRefreshing;
- (void)stopLoadingInView:(id)arg1;
- (void)hideMineHUDInView:(id)arg1;
- (void)startLoadingInView:(id)arg1;
- (void)scrollToTop;
- (void)layoutSubviews;
- (void)loadView;
- (void)setScrollsEnable:(_Bool)arg1;
- (void)dealloc;
- (void)themeChanged:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
