//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SOperationFormCellModel.h"

@class NSArray, NSString;

@interface SOptEstimateCellModel : SOperationFormCellModel
{
    _Bool _isLoading;
    NSString *_loadingDesc;
    NSString *_failDesc;
    NSArray *_priceModels;
    NSArray *_loadingAnimationImages;
}

@property(copy, nonatomic) NSArray *loadingAnimationImages; // @synthesize loadingAnimationImages=_loadingAnimationImages;
@property(copy, nonatomic) NSArray *priceModels; // @synthesize priceModels=_priceModels;
@property(copy, nonatomic) NSString *failDesc; // @synthesize failDesc=_failDesc;
@property(copy, nonatomic) NSString *loadingDesc; // @synthesize loadingDesc=_loadingDesc;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void).cxx_destruct;
- (double)heightForCell;

@end
