//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber;

@protocol NMPlayUIProtocol <NSObject>
- (void)reloadData;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)hideActionView;
- (void)remoteSeekEnd;
- (void)remoteSeekWithTimeInterval:(double)arg1;
- (void)remoteSeekBegin;
- (void)remoteSeekReset;
- (void)playCurrentSong;
- (void)playPreviousSong;
- (void)loadNextSong;
- (void)playNextSong:(NSNumber *)arg1;
- (void)playOrPause;
- (void)unpause;
- (void)pause;
- (void)hide;
- (void)show;
@end

