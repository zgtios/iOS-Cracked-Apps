//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FullscreenOverlayView.h"

@class NSArray, NSMutableArray, NSString, QQWeakProxy, SimpleAlertMsgView, UIImageView, UILabel, UIView;

@interface SimpleAlertView : FullscreenOverlayView
{
    NSString *_title;
    NSString *_message;
    UILabel *_titleLabel;
    SimpleAlertMsgView *_msgView;
    UIView *_container;
    UIImageView *_backgroundView;
    float _maxMiddenHeight;
    NSMutableArray *_buttonTitleArray;
    NSMutableArray *_buttonArray;
    id _object;
    int _state;
    UIImageView *_verticalLine;
    UIImageView *_horizontalline;
    UIImageView *_titleImageView;
    UIView *_topView;
    id <SimpleAlertViewDelegate> _delegate;
    int _xo;
    QQWeakProxy *_weakDelegate;
    _Bool _shouldParseOfflineLink;
}

@property(nonatomic) _Bool shouldParseOfflineLink; // @synthesize shouldParseOfflineLink=_shouldParseOfflineLink;
@property(retain, nonatomic) NSArray *buttonArray; // @synthesize buttonArray=_buttonArray;
- (void)cancelButtonClick:(id)arg1;
- (void)dismiss;
- (void)setMessageAlignmentCenter:(_Bool)arg1;
- (void)setTitle:(id)arg1 message:(id)arg2;
- (void)layoutSubviews;
- (void)roundView:(id)arg1 onCorner:(unsigned long long)arg2 radius:(float)arg3;
- (id)getTopView;
- (id)initWithOverlayImage:(id)arg1 contentBackground:(id)arg2 buttonNormalImage:(id)arg3 buttonHighlightImage:(id)arg4 delegate:(id)arg5 title:(id)arg6 message:(id)arg7 buttonArray:(id)arg8 titleImage:(id)arg9;
- (id)initWithOverlayImage:(id)arg1 contentBackground:(id)arg2 buttonNormalImage:(id)arg3 buttonHighlightImage:(id)arg4 delegate:(id)arg5 title:(id)arg6 message:(id)arg7 buttonArray:(id)arg8;
- (id)initWithStyle:(int)arg1 delegate:(id)arg2 title:(id)arg3 message:(id)arg4 buttonArray:(id)arg5 titleImage:(id)arg6;
- (id)initWithStyle:(int)arg1 delegate:(id)arg2 title:(id)arg3 message:(id)arg4 buttonArray:(id)arg5;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <SimpleAlertViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) float maxMiddenHeight; // @dynamic maxMiddenHeight;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) id object; // @dynamic object;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(readonly, nonatomic) UIImageView *titleImageView; // @dynamic titleImageView;
@property(readonly, nonatomic) UILabel *titleLabel; // @dynamic titleLabel;

@end
