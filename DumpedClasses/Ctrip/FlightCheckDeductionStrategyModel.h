//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightCheckDeductionStrategyModel : CTBusinessBean
{
    NSString *startAmount;
    int deductionType;
    int deductionNewType;
    NSString *deductionAmount;
}

@property(copy, nonatomic) NSString *deductionAmount; // @synthesize deductionAmount;
@property(nonatomic) int deductionNewType; // @synthesize deductionNewType;
@property(nonatomic) int deductionType; // @synthesize deductionType;
@property(copy, nonatomic) NSString *startAmount; // @synthesize startAmount;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
