//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DRCBaseViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class DRCCommentDetailModel, DRCCommentEditView, DRCCustomeEvaContentView, DRCEvaluationPopView, DRCGoEditBtnView, DRCOrderCommentHeaderView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIScrollView, UITableView, UIView;

@interface DRCCommentViewController : DRCBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, UIScrollViewDelegate>
{
    _Bool _isShowCustomContent;
    _Bool _hasHeadTitle;
    _Bool _isForcedEva;
    UIScrollView *_scvMain;
    NSString *_customContent;
    NSMutableDictionary *_paras;
    UIButton *_commitBtn;
    double _lastClickDataTime;
    long long _rowCount;
    double _scvOffset;
    long long _needEvaCount;
    UIView *_scrollContentView;
    UITableView *_commentTableView;
    NSMutableArray *_listModelArray;
    DRCCommentDetailModel *_commentModel;
    DRCOrderCommentHeaderView *_headerView;
    DRCEvaluationPopView *_popView;
    DRCCommentEditView *_textContainerView;
    DRCCustomeEvaContentView *_customContentView;
    DRCGoEditBtnView *_goEditBtnView;
    CDUnknownBlockType _backButtonTapped;
    long long _orderId;
}

@property(nonatomic) _Bool isForcedEva; // @synthesize isForcedEva=_isForcedEva;
@property(nonatomic) long long orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) CDUnknownBlockType backButtonTapped; // @synthesize backButtonTapped=_backButtonTapped;
@property(retain, nonatomic) DRCGoEditBtnView *goEditBtnView; // @synthesize goEditBtnView=_goEditBtnView;
@property(retain, nonatomic) DRCCustomeEvaContentView *customContentView; // @synthesize customContentView=_customContentView;
@property(retain, nonatomic) DRCCommentEditView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(retain, nonatomic) DRCEvaluationPopView *popView; // @synthesize popView=_popView;
@property(retain, nonatomic) DRCOrderCommentHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) DRCCommentDetailModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) NSMutableArray *listModelArray; // @synthesize listModelArray=_listModelArray;
@property(retain, nonatomic) UITableView *commentTableView; // @synthesize commentTableView=_commentTableView;
@property(nonatomic) _Bool hasHeadTitle; // @synthesize hasHeadTitle=_hasHeadTitle;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(nonatomic) long long needEvaCount; // @synthesize needEvaCount=_needEvaCount;
@property(nonatomic) _Bool isShowCustomContent; // @synthesize isShowCustomContent=_isShowCustomContent;
@property(nonatomic) double scvOffset; // @synthesize scvOffset=_scvOffset;
@property(nonatomic) long long rowCount; // @synthesize rowCount=_rowCount;
@property(nonatomic) double lastClickDataTime; // @synthesize lastClickDataTime=_lastClickDataTime;
@property(retain, nonatomic) UIButton *commitBtn; // @synthesize commitBtn=_commitBtn;
@property(retain, nonatomic) NSMutableDictionary *paras; // @synthesize paras=_paras;
@property(retain, nonatomic) NSString *customContent; // @synthesize customContent=_customContent;
@property(retain, nonatomic) UIScrollView *scvMain; // @synthesize scvMain=_scvMain;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)textViewDidEndEditing:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)makeConstraints;
- (double)getTableHeight;
- (void)callPhone;
- (void)setupRightView;
- (void)showTextView;
- (void)shakeTextView;
- (void)moveScrollViewToBottom;
- (void)addCommitBtn;
- (void)addGoEditView;
- (void)submitComment;
- (void)moreAction:(id)arg1;
- (void)requestForCancelEvaluation;
- (void)popOutController;
- (void)showFeeDetail;
- (id)makeSubmitContent;
- (id)getDateByTimeInterval:(long long)arg1;
- (void)filterEvaluationContent;
- (_Bool)filterSubmitContent;
- (void)makeCommentListViewVisible:(id)arg1;
- (_Bool)isCommentListViewNotVisible:(id)arg1;
- (float)getheaderHeight;
- (void)showErrorView;
- (void)refresh;
- (void)fillListsArray;
- (void)layoutSubview;
- (void)initData;
- (void)getCommentData;
- (void)registerNotification;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
