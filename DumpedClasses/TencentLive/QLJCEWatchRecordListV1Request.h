//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEWatchRecordListV1Request : JceObjectV2
{
    long long jcev2_p_0_r_dataVersion;
    NSString *jcev2_p_1_o_pageContext;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_pageContext, setter=setJce_pageContext:) NSString *jcev2_p_1_o_pageContext; // @synthesize jcev2_p_1_o_pageContext;
@property(nonatomic, getter=jce_dataVersion, setter=setJce_dataVersion:) long long jcev2_p_0_r_dataVersion; // @synthesize jcev2_p_0_r_dataVersion;
- (void).cxx_destruct;
- (id)init;

@end

