//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface XYPHPostModelAtUserTableViewCell : UITableViewCell
{
    UIImageView *_avatar;
    UILabel *_descLabel;
    UILabel *_nameLabel;
    UILabel *_centerNameLabel;
}

+ (double)estimatedHeight;
@property(retain, nonatomic) UILabel *centerNameLabel; // @synthesize centerNameLabel=_centerNameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (void)configWithMessageFan:(id)arg1;
- (void)configWithUser:(id)arg1;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
