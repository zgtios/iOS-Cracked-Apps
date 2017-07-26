//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MFWidgetPluginProtocol.h"

@class CLoadMoreView, NSString, UILabel;

@interface HCCommentHasMoreView : UIView <MFWidgetPluginProtocol>
{
    id <HCCommentHasMoreViewDelegate> _delegate;
    CLoadMoreView *_loadIngView;
    UILabel *_hasMoreView;
}

+ (id)subType;
+ (id)tagType;
+ (struct CGSize)sizeOfWidgetWithData:(id)arg1 cssItem:(id)arg2 superFrame:(struct CGRect)arg3 extendInfo:(id)arg4;
@property(retain, nonatomic) UILabel *hasMoreView; // @synthesize hasMoreView=_hasMoreView;
@property(retain, nonatomic) CLoadMoreView *loadIngView; // @synthesize loadIngView=_loadIngView;
@property(nonatomic) __weak id <HCCommentHasMoreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setMFDelegate:(id)arg1;
- (void)bindAndLayoutWithData:(id)arg1 cssItem:(id)arg2 extendInfo:(id)arg3;
- (void)commentAction:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
