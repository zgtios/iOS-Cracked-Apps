//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerAlbumImageView.h"

@class UIImageView;

@interface QYPlayerAlbumImageView : PlayerAlbumImageView
{
    int _curState;
    UIImageView *_playingImageView;
}

- (void).cxx_destruct;
- (void)setSelectState:(_Bool)arg1;
- (void)setTextLabelFrame;
- (void)reloadData:(id)arg1 playerType:(int)arg2;
- (void)updateViewByState;
- (void)updateIPadLayout;
- (void)layoutSubviews;
- (id)initWithType:(int)arg1 frame:(struct CGRect)arg2;

@end

