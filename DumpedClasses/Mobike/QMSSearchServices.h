//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface QMSSearchServices : NSObject
{
    NSString *_apiKey;
}

+ (id)sharedServices;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *SDKVersion;

@end

