//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class QLNewMessageLabel, UILabel, UIView;

@interface QLFanTuanChannelNewMsgEntryCell : QLBaseTabelViewCell
{
    QLNewMessageLabel *_messageLbl;
    UILabel *_tipLbl;
    long long _msgCount;
    UIView *_realLine;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(retain, nonatomic) UIView *realLine; // @synthesize realLine=_realLine;
@property(nonatomic) long long msgCount; // @synthesize msgCount=_msgCount;
@property(retain, nonatomic) UILabel *tipLbl; // @synthesize tipLbl=_tipLbl;
@property(retain, nonatomic) QLNewMessageLabel *messageLbl; // @synthesize messageLbl=_messageLbl;
- (void).cxx_destruct;
- (void)didTapNewMsgPromptLabel:(id)arg1;
- (void)setUnreadMsgcount:(unsigned long long)arg1 userImageUrl:(id)arg2;
- (void)setUInfo:(id)arg1;
- (void)layoutSubviews;
- (void)doReuseInitialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
