//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class DCNoteInfoModel<Optional>, DCPreCalcPriceInfoModel<Optional>, NSArray<Optional><DCPreCalcPriceTextModel>, NSNumber<Optional>, NSString<Optional>;

@interface DCPreCalcPriceModel : TRBaseModel
{
    NSNumber<Optional> *_disabled;
    DCPreCalcPriceInfoModel<Optional> *_top_info;
    DCPreCalcPriceInfoModel<Optional> *_bottom_info;
    NSString<Optional> *_tag;
    NSString<Optional> *_disabled_msg;
    DCNoteInfoModel<Optional> *_tip;
    NSString<Optional> *_err_info;
    NSString<Optional> *_price;
    NSString<Optional> *_model_type;
    NSString<Optional> *_detail_url;
    NSString<Optional> *_price_info;
    NSString<Optional> *_is_carpool;
    NSString<Optional> *_title;
    NSArray<Optional><DCPreCalcPriceTextModel> *_price_txt;
}

@property(retain, nonatomic) NSArray<Optional><DCPreCalcPriceTextModel> *price_txt; // @synthesize price_txt=_price_txt;
@property(copy, nonatomic) NSString<Optional> *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString<Optional> *is_carpool; // @synthesize is_carpool=_is_carpool;
@property(copy, nonatomic) NSString<Optional> *price_info; // @synthesize price_info=_price_info;
@property(copy, nonatomic) NSString<Optional> *detail_url; // @synthesize detail_url=_detail_url;
@property(copy, nonatomic) NSString<Optional> *model_type; // @synthesize model_type=_model_type;
@property(copy, nonatomic) NSString<Optional> *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString<Optional> *err_info; // @synthesize err_info=_err_info;
@property(copy, nonatomic) DCNoteInfoModel<Optional> *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) NSString<Optional> *disabled_msg; // @synthesize disabled_msg=_disabled_msg;
@property(copy, nonatomic) NSString<Optional> *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) DCPreCalcPriceInfoModel<Optional> *bottom_info; // @synthesize bottom_info=_bottom_info;
@property(retain, nonatomic) DCPreCalcPriceInfoModel<Optional> *top_info; // @synthesize top_info=_top_info;
@property(retain, nonatomic) NSNumber<Optional> *disabled; // @synthesize disabled=_disabled;
- (void).cxx_destruct;
- (_Bool)enable;

@end

