//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightModifyInvoiceInformationModel : CTBusinessBean
{
    int _invoiceIndex;
    int _invoiceTitleType;
    NSString *_sequences;
    NSString *_title;
    NSString *_taxNo;
    NSString *_passengerName;
    long long _invoiceId;
}

@property(nonatomic) long long invoiceId; // @synthesize invoiceId=_invoiceId;
@property(nonatomic) int invoiceTitleType; // @synthesize invoiceTitleType=_invoiceTitleType;
@property(copy, nonatomic) NSString *passengerName; // @synthesize passengerName=_passengerName;
@property(copy, nonatomic) NSString *taxNo; // @synthesize taxNo=_taxNo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int invoiceIndex; // @synthesize invoiceIndex=_invoiceIndex;
@property(copy, nonatomic) NSString *sequences; // @synthesize sequences=_sequences;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

