//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface GuaranteeInformationModel : CTBusinessBean
{
    NSString *brandId;
    NSString *brandType;
    NSString *channelId;
    NSString *paymentWayID;
}

@property(copy, nonatomic) NSString *paymentWayID; // @synthesize paymentWayID;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId;
@property(copy, nonatomic) NSString *brandType; // @synthesize brandType;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end
