//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class UILabel, UISwitch;

@interface CTTrainOrderDeliveryProtocolCell : CTCustomeGroupTableViewCell
{
    UILabel *_mainTitleLabel;
    UILabel *_subTitleLabel;
    UISwitch *_switchControl;
    id <CTTrainOrderDeliveryProtocolCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CTTrainOrderDeliveryProtocolCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UISwitch *switchControl; // @synthesize switchControl=_switchControl;
@property(nonatomic) __weak UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(nonatomic) __weak UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
- (void).cxx_destruct;
- (void)acceptSwitchChanged:(id)arg1;
- (void)awakeFromNib;

@end
