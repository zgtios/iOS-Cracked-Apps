//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCELiveVIPRightItem : JceObjectV2
{
    NSString *jcev2_p_0_r_title;
    NSString *jcev2_p_1_r_imageUrl;
    NSString *jcev2_p_2_o_des;
    QLJCEAction *jcev2_p_3_o_action;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_3_o_action; // @synthesize jcev2_p_3_o_action;
@property(retain, nonatomic, getter=jce_des, setter=setJce_des:) NSString *jcev2_p_2_o_des; // @synthesize jcev2_p_2_o_des;
@property(retain, nonatomic, getter=jce_imageUrl, setter=setJce_imageUrl:) NSString *jcev2_p_1_r_imageUrl; // @synthesize jcev2_p_1_r_imageUrl;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_0_r_title; // @synthesize jcev2_p_0_r_title;
- (void).cxx_destruct;
- (id)init;

@end

