//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface KQPoiTypeEntity : NSObject
{
    long long _category;
    NSString *_name;
    NSMutableArray *_typeArr;
}

@property(copy, nonatomic) NSMutableArray *typeArr; // @synthesize typeArr=_typeArr;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)dicObjectWithDictionary:(id)arg1;

@end

