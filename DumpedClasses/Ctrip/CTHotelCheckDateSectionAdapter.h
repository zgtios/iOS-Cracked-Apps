//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTHotelSectionAdapter.h"

#import "CTBasicCalendarViewControllerDelegate.h"
#import "CTHotelOverseaPersonViewControllerDelegate.h"
#import "CTHotelSelectSheetDelegate.h"
#import "CTMapPopOrderViewDelegate.h"

@class CTHotelCheckDateCell, CTHotelDetailCacheBean, CTHotelSelectSheet, NSString;

@interface CTHotelCheckDateSectionAdapter : CTHotelSectionAdapter <CTHotelSelectSheetDelegate, CTHotelOverseaPersonViewControllerDelegate, CTMapPopOrderViewDelegate, CTBasicCalendarViewControllerDelegate>
{
    _Bool _isSelectCheckOut;
    id <CTHotelSectionAdapterDelegate> _delegate;
    CTHotelDetailCacheBean *_detailCacheBean;
    long long _loadStatus;
    double _pinnedStart;
    NSString *_viewToken;
    CTHotelSelectSheet *_roomCountSelectSheet;
    CTHotelCheckDateCell *_cell;
}

@property(retain, nonatomic) CTHotelCheckDateCell *cell; // @synthesize cell=_cell;
@property(retain, nonatomic) CTHotelSelectSheet *roomCountSelectSheet; // @synthesize roomCountSelectSheet=_roomCountSelectSheet;
@property(nonatomic) _Bool isSelectCheckOut; // @synthesize isSelectCheckOut=_isSelectCheckOut;
@property(retain, nonatomic) NSString *viewToken; // @synthesize viewToken=_viewToken;
@property(nonatomic) double pinnedStart; // @synthesize pinnedStart=_pinnedStart;
@property(nonatomic) long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(nonatomic) __weak CTHotelDetailCacheBean *detailCacheBean; // @synthesize detailCacheBean=_detailCacheBean;
@property(nonatomic) __weak id <CTHotelSectionAdapterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sheet:(id)arg1 didSelected:(id)arg2 withIndex:(long long)arg3;
- (void)calendarViewController:(id)arg1 didSelectedDate:(id)arg2;
- (void)ctHotelBeforeDownView:(id)arg1 didSelectedAtIndexpath:(id)arg2;
- (void)ctMapSearchPopOrderView:(id)arg1 didSelectedAtIndexpath:(id)arg2;
- (void)hotelOverseaPersonViewControllerDelegate:(id)arg1;
- (void)dismissCalendarView:(id)arg1;
- (void)popCallendarViewController;
- (void)checkDateViewSelectedMorningOrder:(id)arg1;
- (void)checkDateViewSelectedClientCount:(id)arg1;
- (void)checkDateViewSelectedCheckout:(id)arg1;
- (void)checkDateViewSelectedCheckin:(id)arg1;
- (double)getCellHeight:(id)arg1;
- (id)getCellView:(id)arg1;
- (struct CGPoint)getCellPointInScreen;
- (void)doPinned:(_Bool)arg1 with:(id)arg2;
- (void)dealloc;
- (void)initNotif;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
