//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTViewController.h"

#import "BLDatePickerViewDelegate.h"
#import "BLDateSelectTextFieldViewDelegate.h"

@class BLDatePickerModel, BLDatePickerView, BLDateSelectTextFieldView, BLHomeListViewController, NSString, UIButton, UILabel;

@interface BLDateSelectViewController : DTViewController <BLDateSelectTextFieldViewDelegate, BLDatePickerViewDelegate>
{
    BLHomeListViewController *_superController;
    UIButton *_typeSwitchButton;
    BLDateSelectTextFieldView *_dateSelectTextFieldView;
    BLDatePickerView *_dayView;
    BLDatePickerView *_monthView;
    UILabel *_tipLabel;
    BLDatePickerModel *_dateModel;
}

@property(retain, nonatomic) BLDatePickerModel *dateModel; // @synthesize dateModel=_dateModel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) BLDatePickerView *monthView; // @synthesize monthView=_monthView;
@property(retain, nonatomic) BLDatePickerView *dayView; // @synthesize dayView=_dayView;
@property(retain, nonatomic) BLDateSelectTextFieldView *dateSelectTextFieldView; // @synthesize dateSelectTextFieldView=_dateSelectTextFieldView;
@property(retain, nonatomic) UIButton *typeSwitchButton; // @synthesize typeSwitchButton=_typeSwitchButton;
@property(nonatomic) __weak BLHomeListViewController *superController; // @synthesize superController=_superController;
- (void).cxx_destruct;
- (void)clearLabel;
- (void)clickDayLabel;
- (void)clickMonthLabel;
- (void)didSelectDay:(id)arg1;
- (void)didSelectMonth:(id)arg1;
- (void)cancel;
- (void)submit;
- (void)switchDateType;
- (void)initDateType:(unsigned long long)arg1;
- (void)initDayStatus;
- (void)initMonthStatus;
- (void)setupView;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)initWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
