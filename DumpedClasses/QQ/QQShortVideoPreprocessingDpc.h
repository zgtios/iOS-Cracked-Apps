//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QQShortVideoPreprocessingDpc : NSObject
{
    _Bool _preprocessEnable;
}

+ (id)getInstance;
@property(readonly, nonatomic) _Bool preprocessEnable; // @synthesize preprocessEnable=_preprocessEnable;
- (void)dealloc;
- (void)loadDpc;
- (id)init;

@end
