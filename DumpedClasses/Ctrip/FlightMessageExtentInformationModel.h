//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface FlightMessageExtentInformationModel : CTBusinessBean
{
    int extentType;
    NSString *extentContent;
}

@property(copy, nonatomic) NSString *extentContent; // @synthesize extentContent;
@property(nonatomic) int extentType; // @synthesize extentType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end

