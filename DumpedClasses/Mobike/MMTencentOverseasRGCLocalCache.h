//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMTencentOverseasRGCLocalCache : NSObject
{
    double _timeout;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (id)init;
- (id)outputForInput:(id)arg1;
- (void)setInput:(id)arg1 output:(id)arg2;
- (id)dictForOutput:(id)arg1 timestamp:(id)arg2;
- (id)outputForDictionary:(id)arg1 timestamp:(id *)arg2;
- (id)keyForInput:(id)arg1;

@end
