//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSString, QLJCEAction;

@interface QLJCEIconTagText : JceObjectV2
{
    NSString *jcev2_p_0_r_text;
    NSArray *jcev2_p_1_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
    QLJCEAction *jcev2_p_2_o_action;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_action, setter=setJce_action:) QLJCEAction *jcev2_p_2_o_action; // @synthesize jcev2_p_2_o_action;
@property(retain, nonatomic, getter=jce_markLabelList, setter=setJce_markLabelList:) NSArray *jcev2_p_1_o_markLabelList__b0x9i_VOQLJCEMarkLabel; // @synthesize jcev2_p_1_o_markLabelList__b0x9i_VOQLJCEMarkLabel;
@property(retain, nonatomic, getter=jce_text, setter=setJce_text:) NSString *jcev2_p_0_r_text; // @synthesize jcev2_p_0_r_text;
- (void)dealloc;
- (id)init;

@end
