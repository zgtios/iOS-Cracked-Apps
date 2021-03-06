//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class ESPRestaurantVideo, ESPRestaurantVideoNameView, UIImageView, UILabel;

@interface ESPRestaurantVideoCoverView : UIView
{
    CDUnknownBlockType _videoButtonTapAction;
    ESPRestaurantVideo *_video;
    UIImageView *_coverView;
    ESPRestaurantVideoNameView *_nameLabel;
    UILabel *_statusLabel;
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) ESPRestaurantVideoNameView *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) ESPRestaurantVideo *video; // @synthesize video=_video;
@property(copy, nonatomic) CDUnknownBlockType videoButtonTapAction; // @synthesize videoButtonTapAction=_videoButtonTapAction;
- (void).cxx_destruct;
- (void)play;
- (void)loadNameLabel;
- (void)loadStatusLabel;
- (void)configAction;
- (void)loadCoverView;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

