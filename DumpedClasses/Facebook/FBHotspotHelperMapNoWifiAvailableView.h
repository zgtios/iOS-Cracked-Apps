//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol FBHotspotHelperMapNoWifiAvailableViewDelegate;

@interface FBHotspotHelperMapNoWifiAvailableView : UIView
{
    UILabel *_wifiNotFoundLabel;
    UIButton *_tryAgainButton;
    UIView *_horizontalLine;
    id <FBHotspotHelperMapNoWifiAvailableViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBHotspotHelperMapNoWifiAvailableViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapTryAgainButton;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end

