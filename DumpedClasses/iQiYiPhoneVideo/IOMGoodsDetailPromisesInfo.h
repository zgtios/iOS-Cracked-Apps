//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IOMCommonActionTarget, NSString;

@interface IOMGoodsDetailPromisesInfo : NSObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_image;
    IOMCommonActionTarget *_toUrl;
}

@property(retain, nonatomic) IOMCommonActionTarget *toUrl; // @synthesize toUrl=_toUrl;
@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)parseDataDic:(id)arg1;

@end

