//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

#import "NSCoding.h"

@class NSString;

@interface XTravelSearchLabelRequest : CTBusinessBean <NSCoding>
{
    NSString *keyword;
    int poiId;
    int placeType;
}

@property(nonatomic) int placeType; // @synthesize placeType;
@property(nonatomic) int poiId; // @synthesize poiId;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
