//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QYPlayerReadAdCellData : NSObject
{
    int _clickType;
    int _fromWhere;
    NSString *_adId;
    NSString *_slot_id;
    NSString *_clickUrl;
    NSString *_name;
    NSString *_poster;
    NSString *_promotion;
    NSString *_BookId;
    NSString *_category;
    NSString *_author;
    NSString *_startWhere;
}

@property(nonatomic) int fromWhere; // @synthesize fromWhere=_fromWhere;
@property(copy, nonatomic) NSString *startWhere; // @synthesize startWhere=_startWhere;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *BookId; // @synthesize BookId=_BookId;
@property(copy, nonatomic) NSString *promotion; // @synthesize promotion=_promotion;
@property(copy, nonatomic) NSString *poster; // @synthesize poster=_poster;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int clickType; // @synthesize clickType=_clickType;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *slot_id; // @synthesize slot_id=_slot_id;
@property(copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;

@end

