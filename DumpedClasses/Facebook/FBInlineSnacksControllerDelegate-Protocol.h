//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInlineSnacksController, FBInlineSnacksModel;

@protocol FBInlineSnacksControllerDelegate <NSObject>
- (void)snacksController:(FBInlineSnacksController *)arg1 reloadModel:(FBInlineSnacksModel *)arg2;
- (void)snacksController:(FBInlineSnacksController *)arg1 didUpdateModel:(FBInlineSnacksModel *)arg2;
@end

