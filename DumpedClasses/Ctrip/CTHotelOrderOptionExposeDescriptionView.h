//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelOrderOptionView.h"

@class HotelOptionExposeInfoViewModel;

@interface CTHotelOrderOptionExposeDescriptionView : CTHotelOrderOptionView
{
    id <CTHotelOrderOptionDespDelegate> _optionDespDelegate;
    HotelOptionExposeInfoViewModel *_optionData;
}

+ (double)getViewHeight:(id)arg1;
@property(retain, nonatomic) HotelOptionExposeInfoViewModel *optionData; // @synthesize optionData=_optionData;
@property(nonatomic) __weak id <CTHotelOrderOptionDespDelegate> optionDespDelegate; // @synthesize optionDespDelegate=_optionDespDelegate;
- (void).cxx_destruct;
- (void)optionDespViewDelegate:(unsigned long long)arg1;
- (void)updateTicketHolderNumber;
- (void)cancelBtnAction:(id)arg1;
- (void)subPressed:(id)arg1;
- (void)addPressed:(id)arg1;
- (void)setData:(id)arg1;

@end
