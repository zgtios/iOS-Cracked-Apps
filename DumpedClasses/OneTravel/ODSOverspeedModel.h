//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>;

@interface ODSOverspeedModel : JSONModel
{
    NSNumber<Optional> *_horizontalAccuracy;
    NSNumber<Optional> *_limitSpeed;
    NSNumber<Optional> *_timeSpan;
}

@property(copy, nonatomic) NSNumber<Optional> *timeSpan; // @synthesize timeSpan=_timeSpan;
@property(copy, nonatomic) NSNumber<Optional> *limitSpeed; // @synthesize limitSpeed=_limitSpeed;
@property(copy, nonatomic) NSNumber<Optional> *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
- (void).cxx_destruct;
- (_Bool)isValid;

@end
