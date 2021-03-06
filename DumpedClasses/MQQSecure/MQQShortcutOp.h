//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MQQDBWrapper;

@interface MQQShortcutOp : NSObject
{
    MQQDBWrapper *_dbWrapper;
}

- (long long)maxSortNumOfShortcuts;
- (long long)AllShortcutItemsCount;
- (id)searchShortcutWithKeyword:(id)arg1;
- (id)allShortcutItemsWithSubItemsIgnoreCategoryBySort;
- (id)subItemsWithShortcutId:(id)arg1;
- (_Bool)deleteShortcutItems:(id)arg1;
- (_Bool)isShortcutItemExist:(id)arg1;
- (_Bool)updateShortcutItemsWithoutSubItem:(id)arg1;
- (_Bool)updateShortcutItems:(id)arg1;
- (_Bool)insertShortcutItemsWithoutSubItem:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (void)dealloc;

@end

