//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMCartContextDataSource.h"

@class NSArray, NSString;

@interface NVMRetailCartContext : NSObject <NVMCartContextDataSource>
{
    _Bool _isCoOrder;
    _Bool _canOrderFood;
    _Bool _isDeliveryValid;
    _Bool _isFengNiaoDeliveryModel;
    _Bool _shouldPromoteCoOrder;
    _Bool _needShowEssentialInfo;
    _Bool _isOriginPriceThreshold;
    _Bool _isExclusiveWithFoodActivity;
    _Bool _isQualityRestaurant;
    id <NVMPiecewiseAgentFeeDelegate> _piecewiseAgentFee;
    NSString *_restaurantID;
    NSString *_rankID;
    NSString *_attributeStringIcon;
    NSArray *_allSingleSpecFoods;
    double _minDeliverAmount;
    long long _maxPromotionQuantity;
    CDUnknownBlockType _confirmCartViewAction;
    unsigned long long _maxWeight;
    NSArray *_unavailableActivities;
}

@property(copy, nonatomic) NSArray *unavailableActivities; // @synthesize unavailableActivities=_unavailableActivities;
@property(nonatomic) unsigned long long maxWeight; // @synthesize maxWeight=_maxWeight;
@property(copy, nonatomic) CDUnknownBlockType confirmCartViewAction; // @synthesize confirmCartViewAction=_confirmCartViewAction;
@property(nonatomic) _Bool isQualityRestaurant; // @synthesize isQualityRestaurant=_isQualityRestaurant;
@property(nonatomic) _Bool isExclusiveWithFoodActivity; // @synthesize isExclusiveWithFoodActivity=_isExclusiveWithFoodActivity;
@property(nonatomic) _Bool isOriginPriceThreshold; // @synthesize isOriginPriceThreshold=_isOriginPriceThreshold;
@property(nonatomic) _Bool needShowEssentialInfo; // @synthesize needShowEssentialInfo=_needShowEssentialInfo;
@property(nonatomic) _Bool shouldPromoteCoOrder; // @synthesize shouldPromoteCoOrder=_shouldPromoteCoOrder;
@property(nonatomic) _Bool isFengNiaoDeliveryModel; // @synthesize isFengNiaoDeliveryModel=_isFengNiaoDeliveryModel;
@property(nonatomic) _Bool isDeliveryValid; // @synthesize isDeliveryValid=_isDeliveryValid;
@property(nonatomic) _Bool canOrderFood; // @synthesize canOrderFood=_canOrderFood;
@property(nonatomic) _Bool isCoOrder; // @synthesize isCoOrder=_isCoOrder;
@property(nonatomic) long long maxPromotionQuantity; // @synthesize maxPromotionQuantity=_maxPromotionQuantity;
@property(nonatomic) double minDeliverAmount; // @synthesize minDeliverAmount=_minDeliverAmount;
@property(copy, nonatomic) NSArray *allSingleSpecFoods; // @synthesize allSingleSpecFoods=_allSingleSpecFoods;
@property(copy, nonatomic) NSString *attributeStringIcon; // @synthesize attributeStringIcon=_attributeStringIcon;
@property(copy, nonatomic) NSString *rankID; // @synthesize rankID=_rankID;
@property(copy, nonatomic) NSString *restaurantID; // @synthesize restaurantID=_restaurantID;
@property(retain, nonatomic) id <NVMPiecewiseAgentFeeDelegate> piecewiseAgentFee; // @synthesize piecewiseAgentFee=_piecewiseAgentFee;
- (void).cxx_destruct;
- (id)allSpecFoods;
- (void)setupForStore:(id)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

