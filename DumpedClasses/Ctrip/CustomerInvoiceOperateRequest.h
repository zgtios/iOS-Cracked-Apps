//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface CustomerInvoiceOperateRequest : CTBusinessBean
{
    int serviceVersion;
    long long infoID;
    NSString *title;
    int operateType;
    NSString *titleType;
    NSString *taxpayerNumber;
    NSString *socialCreditCode;
    NSString *companyAddress;
    NSString *companyTelephone;
    NSString *bankName;
    NSString *bankAccount;
}

@property(copy, nonatomic) NSString *bankAccount; // @synthesize bankAccount;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName;
@property(copy, nonatomic) NSString *companyTelephone; // @synthesize companyTelephone;
@property(copy, nonatomic) NSString *companyAddress; // @synthesize companyAddress;
@property(copy, nonatomic) NSString *socialCreditCode; // @synthesize socialCreditCode;
@property(copy, nonatomic) NSString *taxpayerNumber; // @synthesize taxpayerNumber;
@property(copy, nonatomic) NSString *titleType; // @synthesize titleType;
@property(nonatomic) int operateType; // @synthesize operateType;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) long long infoID; // @synthesize infoID;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
