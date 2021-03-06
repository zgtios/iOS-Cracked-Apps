//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<DGPSearchSuggestOperateCityIDModel>, NSString<Optional>;

@interface DGPSearchSuggestOperateModel : JSONModel
{
    NSArray<DGPSearchSuggestOperateCityIDModel> *_openCities;
    NSString<Optional> *_type;
    NSString<Optional> *_brief;
    NSString<Optional> *_closeTime;
    NSString<Optional> *_openTime;
    NSString<Optional> *_activityDescription;
    NSString<Optional> *_lineId;
    NSString<Optional> *_lineName;
    NSString<Optional> *_urlStr;
    NSString<Optional> *_sugHistoryIcon;
}

+ (id)keyMapper;
@property(retain, nonatomic) NSString<Optional> *sugHistoryIcon; // @synthesize sugHistoryIcon=_sugHistoryIcon;
@property(retain, nonatomic) NSString<Optional> *urlStr; // @synthesize urlStr=_urlStr;
@property(retain, nonatomic) NSString<Optional> *lineName; // @synthesize lineName=_lineName;
@property(retain, nonatomic) NSString<Optional> *lineId; // @synthesize lineId=_lineId;
@property(retain, nonatomic) NSString<Optional> *activityDescription; // @synthesize activityDescription=_activityDescription;
@property(retain, nonatomic) NSString<Optional> *openTime; // @synthesize openTime=_openTime;
@property(retain, nonatomic) NSString<Optional> *closeTime; // @synthesize closeTime=_closeTime;
@property(retain, nonatomic) NSString<Optional> *brief; // @synthesize brief=_brief;
@property(retain, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSArray<DGPSearchSuggestOperateCityIDModel> *openCities; // @synthesize openCities=_openCities;
- (void).cxx_destruct;

@end

