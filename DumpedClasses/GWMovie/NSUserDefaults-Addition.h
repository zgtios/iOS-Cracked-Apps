//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (Addition)
+ (id)todayKey;
+ (id)objectForMemberTodayKey:(id)arg1;
+ (void)addObject:(id)arg1 forMemberTodayKey:(id)arg2;
+ (void)setStandardUserDefaultsObject:(id)arg1 forKey:(id)arg2;
+ (id)objectForKey:(id)arg1;
+ (_Bool)isStandardUserDefaultsContainObjectForKey:(id)arg1;
+ (_Bool)isStandardUserDefaultsContainObjectForMemberIDKey:(id)arg1;
+ (id)objectForMemberIDKey:(id)arg1;
+ (void)addObject:(id)arg1 forMemberIDKey:(id)arg2;
- (void)addObject:(id)arg1 forKey:(id)arg2;
- (_Bool)hasObjectForKey:(id)arg1;
@end
