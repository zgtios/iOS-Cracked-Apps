//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface APGSuggestTableViewCell : UITableViewCell
{
    UIImageView *_searchIcon;
    UILabel *_titleLabel;
}

+ (double)cellHeight;
+ (id)reuseIdentifier;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *searchIcon; // @synthesize searchIcon=_searchIcon;
- (void).cxx_destruct;
- (void)setModel:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
