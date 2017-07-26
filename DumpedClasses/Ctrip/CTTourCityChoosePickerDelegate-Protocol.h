//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTTourCityChoosePickerController, CTTourSaleCityModel, NSIndexPath, NSNumber, NSString, UISearchBar;

@protocol CTTourCityChoosePickerDelegate <NSObject>
- (void)clearHistoryData;
- (void)didSelectedAtLocationButton:(CTTourCityChoosePickerController *)arg1 didSelectedCity:(CTTourSaleCityModel *)arg2;
- (void)cityHistoryPicker:(CTTourCityChoosePickerController *)arg1 didSelectedCity:(NSString *)arg2 cityId:(NSNumber *)arg3 virtualCityName:(NSString *)arg4 virtualCityId:(NSNumber *)arg5 indexPath:(NSIndexPath *)arg6;
- (void)cityChoosePicker:(CTTourCityChoosePickerController *)arg1 didSelectedCity:(NSString *)arg2 cityId:(NSNumber *)arg3 countryId:(NSNumber *)arg4 parentCity:(NSNumber *)arg5 indexPath:(NSIndexPath *)arg6;
- (void)endSearch:(UISearchBar *)arg1;
- (void)beginSearch:(UISearchBar *)arg1;
@end
