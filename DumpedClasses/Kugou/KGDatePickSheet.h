//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIDatePicker;

@interface KGDatePickSheet : UIView
{
    id <KGDatePickSheetDelegate> _delegate;
    UIView *_backView;
    UIView *_contentView;
    UIDatePicker *_datePickView;
}

@property(nonatomic) __weak UIDatePicker *datePickView; // @synthesize datePickView=_datePickView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak id <KGDatePickSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)modifyTextColor:(long long)arg1;
- (void)sureBtnClick;
- (void)cancelBtnClick;
- (void)dismiss;
- (void)show;
- (void)createUI;
- (id)init;

@end

