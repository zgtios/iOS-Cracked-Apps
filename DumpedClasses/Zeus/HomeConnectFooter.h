//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface HomeConnectFooter : UIView
{
    UIButton *_maskButton;
    CDUnknownBlockType _whenClicked;
    UILabel *_lblTip;
    UIImageView *_icon;
}

@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *lblTip; // @synthesize lblTip=_lblTip;
@property(copy, nonatomic) CDUnknownBlockType whenClicked; // @synthesize whenClicked=_whenClicked;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
- (void).cxx_destruct;
- (void)doWiFiList;
- (void)setup;
- (struct CGSize)tipSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

