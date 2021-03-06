//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseTableRefreshViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDictionary, NSString, UITableView, XYEmptyPlaceholderView, XYPHRefreshBaseDataSource;

@interface XYPHTagAreaViewController : XYPHBaseTableRefreshViewController <UITableViewDelegate, UITableViewDataSource>
{
    XYPHRefreshBaseDataSource *_dataSource;
    NSString *_tagId;
    NSDictionary *_params;
    id <UIScrollViewDelegate> _superScrolldelegate;
    UITableView *_tableView;
    XYEmptyPlaceholderView *_emptyPlaceholderView;
}

@property(retain, nonatomic) XYEmptyPlaceholderView *emptyPlaceholderView; // @synthesize emptyPlaceholderView=_emptyPlaceholderView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <UIScrollViewDelegate> superScrolldelegate; // @synthesize superScrolldelegate=_superScrolldelegate;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *tagId; // @synthesize tagId=_tagId;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
- (id)emptyDataView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)dataSource;
- (void)setup;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

