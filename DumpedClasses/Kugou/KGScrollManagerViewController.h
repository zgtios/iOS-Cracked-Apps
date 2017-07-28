//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "KGPageViewProtocol.h"
#import "KGScrollPageViewDelegate.h"
#import "KGScrollViewExtendDelegate.h"
#import "TabViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class BaseTabView, KGContentContainerView, KGDefaultTopView, KGTopViewPageIndicatorView, LazyAllocSet, NSArray, NSMutableArray, NSString, UIActivityIndicatorView, UIScrollView;

@interface KGScrollManagerViewController : KGViewController <TabViewDelegate, KGScrollPageViewDelegate, UIScrollViewDelegate, KGScrollViewExtendDelegate, KGPageViewProtocol>
{
    int _scrollViewStatus;
    int _scrollViewPositionType;
    KGDefaultTopView *_top;
    NSMutableArray *_pageTitles;
    unsigned long long _defaultPageIndex;
    unsigned long long _currentPageIndex;
    unsigned long long _lastPageIndex;
    unsigned long long _currenReferencePageIndex;
    double _currentReferenceContentOffsetY;
    double *_pageReferenceContentOffsetYArray;
    double *_pageDefaultContentInsetsTopArray;
    double _defaultcontentContainerViewHeight;
    double _topViewReferenceHeight;
    double _tabViewReferenceHeight;
    _Bool _isShowcontentContainerView;
    _Bool _isNotTopShowTabView;
    _Bool _isNotTopShowTabViewAdjusting;
    _Bool _isInitingPageView;
    _Bool _isClickedTabItem;
    _Bool _isAlwaysShowTabView;
    _Bool _isMovableContenView;
    _Bool _scrollEnabled;
    _Bool _isFlexibleScrollViewInset;
    _Bool _isFixTabViewToTop;
    double _backgroundImgReferenceHeight;
    BaseTabView *_tabView;
    KGTopViewPageIndicatorView *_topViewPageIndicatorView;
    KGContentContainerView *_contentContainerView;
    LazyAllocSet *_lazyPageViewControllerSet;
    UIActivityIndicatorView *_activityIndicatorView;
    UIScrollView *_pageScrollView;
    double _pageReferenceContentOffsetY;
}

@property(retain, nonatomic) NSArray *pageTitles; // @synthesize pageTitles=_pageTitles;
@property(nonatomic) double pageReferenceContentOffsetY; // @synthesize pageReferenceContentOffsetY=_pageReferenceContentOffsetY;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) LazyAllocSet *lazyPageViewControllerSet; // @synthesize lazyPageViewControllerSet=_lazyPageViewControllerSet;
@property(retain, nonatomic) KGContentContainerView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) KGTopViewPageIndicatorView *topViewPageIndicatorView; // @synthesize topViewPageIndicatorView=_topViewPageIndicatorView;
@property(readonly, nonatomic) BaseTabView *tabView; // @synthesize tabView=_tabView;
@property(nonatomic) double backgroundImgReferenceHeight; // @synthesize backgroundImgReferenceHeight=_backgroundImgReferenceHeight;
@property(nonatomic) _Bool isFixTabViewToTop; // @synthesize isFixTabViewToTop=_isFixTabViewToTop;
@property(nonatomic) _Bool isFlexibleScrollViewInset; // @synthesize isFlexibleScrollViewInset=_isFlexibleScrollViewInset;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool isMovableContenView; // @synthesize isMovableContenView=_isMovableContenView;
@property(nonatomic) _Bool isAlwaysShowTabView; // @synthesize isAlwaysShowTabView=_isAlwaysShowTabView;
@property(readonly) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
- (void).cxx_destruct;
- (void)onBecomeActive:(id)arg1;
- (void)onEnterBack:(id)arg1;
- (void)addNotification;
- (id)pageSrollview;
- (long long)currentPage;
- (long long)totalPageCount;
- (void)scrollViewDidPositioning:(id)arg1 Position:(int)arg2;
- (void)scrollViewEndOrientationOfMovementing:(id)arg1 orientation:(int)arg2;
- (void)scrollViewDidOrientationOfMovementing:(id)arg1 orientation:(int)arg2;
- (_Bool)managerLayTopState;
- (double)managerTabViewHeight;
- (unsigned long long)indexOfPage:(id)arg1;
- (void)pagePushViewControllerToKGNavigation:(id)arg1 animated:(_Bool)arg2;
- (void)pageScrollViewWillBeginDecelerating:(id)arg1;
- (void)pageScrollViewViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)btnClicked:(long long)arg1;
- (void)p_displayTopViewWithOffset:(double)arg1;
- (void)p_applicationChangeStateWithNotification:(id)arg1;
- (void)p_viewManagerRefreshContentView;
- (void)p_viewManagerChangeState:(int)arg1;
- (void)p_pageViewDidExit:(unsigned long long)arg1 mode:(long long)arg2;
- (void)p_pageViewDidExit:(unsigned long long)arg1;
- (void)p_pageViewDidEnter:(unsigned long long)arg1 mode:(long long)arg2;
- (void)p_pageLaytopWillChange:(_Bool)arg1;
- (void)p_pageViewDidEnter:(unsigned long long)arg1;
- (void)p_deallocPageViews;
- (void)p_refreshPageViewEnabled;
- (void)p_adjustingPageViewOfScrollView:(unsigned long long)arg1;
- (void)p_scrollPageView;
- (void)p_addPageViewToScrollViewAtIndex:(unsigned long long)arg1;
- (void)p_initView;
- (void)p_initproperty;
- (unsigned long long)defaultPageIndex;
- (id)pageViewControllerWithIndexTitle:(id)arg1;
- (void)jumpingPageViewAtIndex:(id)arg1 animated:(_Bool)arg2;
- (id)manualPath;
- (void)beforePageScrollViewDidScroll:(id)arg1;
- (void)topViewShowBackground:(_Bool)arg1;
- (void)didSelectTabItemIndex:(unsigned long long)arg1;
- (void)refreshContentView:(id)arg1;
- (void)initialContentView:(id)arg1 backgroundImage:(id)arg2 defaultIndex:(unsigned long long)arg3 tabview:(id)arg4 lazyPageViewControllers:(id)arg5;
- (void)initialContentView:(id)arg1 backgroundImage:(id)arg2 defaultIndex:(unsigned long long)arg3 lazyPageViewControllers:(id)arg4;
- (void)initialContentView:(id)arg1 defaultIndex:(unsigned long long)arg2 lazyPageViewControllers:(id)arg3;
- (void)setLayTop:(_Bool)arg1;
- (void)setTabView:(id)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewFrameChanged;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
