//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KGThemeLabel, KTVLisZanComGiftNumView, KtvUserAvatar, NSIndexPath, UIButton;

@interface KTVListenWorkWorkCell : KFCommedTableViewCell
{
    KGThemeLabel *opusNameLab;
    KGThemeLabel *timeLab;
    KTVLisZanComGiftNumView *lisZanComGiftNumView;
    long long playid;
    UIButton *tapActionBtn;
    KtvUserAvatar *_head;
    id <KTVListenWorkWorkCellDelegate> _delegate;
    NSIndexPath *_indexPath;
}

@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <KTVListenWorkWorkCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KtvUserAvatar *head; // @synthesize head=_head;
- (void).cxx_destruct;
- (void)tapUserHeadbtn:(id)arg1;
- (void)setCellWithInfo:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)tapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
