//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMBaseViewController.h"

@class NSString, UIButton, UILabel, UIView;

@interface IOMAlertViewController : IOMBaseViewController
{
    CDUnknownBlockType _handleAlertCanceleButtonAction;
    CDUnknownBlockType _handleAlertOkButtonAction;
    UIView *_customContentView;
    UILabel *_titleLabel;
    UIButton *_cancelButton;
    UIButton *_okButton;
    NSString *_alertTitle;
    NSString *_okStr;
    NSString *_cancelStr;
}

@property(retain, nonatomic) NSString *cancelStr; // @synthesize cancelStr=_cancelStr;
@property(retain, nonatomic) NSString *okStr; // @synthesize okStr=_okStr;
@property(retain, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property(copy, nonatomic) CDUnknownBlockType handleAlertOkButtonAction; // @synthesize handleAlertOkButtonAction=_handleAlertOkButtonAction;
@property(copy, nonatomic) CDUnknownBlockType handleAlertCanceleButtonAction; // @synthesize handleAlertCanceleButtonAction=_handleAlertCanceleButtonAction;
- (void).cxx_destruct;
- (void)cancelButtonAction:(id)arg1;
- (void)okButtonAction:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 cancelStr:(id)arg2 okStr:(id)arg3;

@end

