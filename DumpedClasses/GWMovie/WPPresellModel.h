//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPPresellModel : GWObject
{
    NSString *_iPresellID;
    NSString *_sPresellName;
    NSString *_sReceiveTime;
    NSString *_sDueTime;
    NSString *_sMovieList;
    NSString *_sCinema;
    NSString *_sVersion;
    NSString *_sPackageDesc;
    NSString *_sRichReminder;
    long long _iStatus;
    long long _availableType;
    NSString *_iLimitPrice;
    NSString *_iReduceEndValueStr;
    NSString *_sBonusDesc;
    long long _iCount;
    long long _iBuyOrderId;
    double _iReduceEndValue;
}

+ (id)bestPresellWithBonusArray:(id)arg1 limit:(long long)arg2;
+ (long long)availabelCountOfArray:(id)arg1;
+ (void)savePresell:(id)arg1;
+ (id)cachePresell;
+ (id)mj_replacedKeyFromPropertyName;
@property(nonatomic) double iReduceEndValue; // @synthesize iReduceEndValue=_iReduceEndValue;
@property(nonatomic) long long iBuyOrderId; // @synthesize iBuyOrderId=_iBuyOrderId;
@property(nonatomic) long long iCount; // @synthesize iCount=_iCount;
@property(retain, nonatomic) NSString *sBonusDesc; // @synthesize sBonusDesc=_sBonusDesc;
@property(retain, nonatomic) NSString *iReduceEndValueStr; // @synthesize iReduceEndValueStr=_iReduceEndValueStr;
@property(retain, nonatomic) NSString *iLimitPrice; // @synthesize iLimitPrice=_iLimitPrice;
@property(nonatomic) long long availableType; // @synthesize availableType=_availableType;
@property(nonatomic) long long iStatus; // @synthesize iStatus=_iStatus;
@property(retain, nonatomic) NSString *sRichReminder; // @synthesize sRichReminder=_sRichReminder;
@property(retain, nonatomic) NSString *sPackageDesc; // @synthesize sPackageDesc=_sPackageDesc;
@property(retain, nonatomic) NSString *sVersion; // @synthesize sVersion=_sVersion;
@property(retain, nonatomic) NSString *sCinema; // @synthesize sCinema=_sCinema;
@property(retain, nonatomic) NSString *sMovieList; // @synthesize sMovieList=_sMovieList;
@property(retain, nonatomic) NSString *sDueTime; // @synthesize sDueTime=_sDueTime;
@property(retain, nonatomic) NSString *sReceiveTime; // @synthesize sReceiveTime=_sReceiveTime;
@property(retain, nonatomic) NSString *sPresellName; // @synthesize sPresellName=_sPresellName;
@property(retain, nonatomic) NSString *iPresellID; // @synthesize iPresellID=_iPresellID;
- (void).cxx_destruct;

@end

