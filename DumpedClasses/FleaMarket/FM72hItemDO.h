//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FM72hItemDO : NSObject
{
    int _serviceStatus;
    NSString *_id;
    NSString *_title;
    NSString *_picUrl;
    NSString *_price;
    NSString *_serviceType;
}

+ (_Bool)isChatityType:(id)arg1;
+ (_Bool)isDonateType:(id)arg1;
+ (_Bool)is72hSellType:(id)arg1;
@property(nonatomic) int serviceStatus; // @synthesize serviceStatus=_serviceStatus;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;

@end
