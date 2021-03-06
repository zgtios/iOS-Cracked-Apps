//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NVMModel.h"

@class NSString, NSURL, UIColor;

@interface ESPSearchEntry : NVMModel
{
    NSString *_title;
    NSString *_detail;
    NSString *_titleColorString;
    NSString *_detailColorString;
    NSString *_iconHash;
    NSURL *_link;
    NSString *_entryID;
    UIColor *_titleColor;
    UIColor *_detailColor;
    unsigned long long _businessFlag;
}

+ (id)detailColorJSONTransformer;
+ (id)titleColorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long businessFlag; // @synthesize businessFlag=_businessFlag;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) NSString *entryID; // @synthesize entryID=_entryID;
@property(copy, nonatomic) NSURL *link; // @synthesize link=_link;
@property(copy, nonatomic) NSString *iconHash; // @synthesize iconHash=_iconHash;
@property(copy, nonatomic) NSString *detailColorString; // @synthesize detailColorString=_detailColorString;
@property(copy, nonatomic) NSString *titleColorString; // @synthesize titleColorString=_titleColorString;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end

