//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZStudyGroupMessageCell.h"

@class NSLayoutConstraint, UIImageView;

@interface EZStudyGroupImageMessageCell : EZStudyGroupMessageCell
{
    UIImageView *_contentImageView;
    NSLayoutConstraint *_imageWidthCons;
    NSLayoutConstraint *_imageHeightCons;
}

@property(nonatomic) __weak NSLayoutConstraint *imageHeightCons; // @synthesize imageHeightCons=_imageHeightCons;
@property(nonatomic) __weak NSLayoutConstraint *imageWidthCons; // @synthesize imageWidthCons=_imageWidthCons;
@property(nonatomic) __weak UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
- (void).cxx_destruct;
- (void)imageButtonTapped:(id)arg1;
- (void)prepareForReuse;
- (void)updateImageLayoutWithImage:(id)arg1;
- (void)configForMessage:(id)arg1;
- (void)awakeFromNib;

@end

