//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseTableView.h"

@class NSMutableArray;

@interface FavoritesTableView : QQBaseTableView
{
    NSMutableArray *_favorites;
    NSMutableArray *_folders;
    unsigned long long _count;
    unsigned long long _selectCount;
    _Bool _showFavorites;
    _Bool _showCheckboxes;
    _Bool _showFolderNames;
    unsigned long long _maxSelectCount;
    NSMutableArray *_selectedItems;
}

- (void)openFavFolder:(id)arg1 viewController:(id)arg2;
- (_Bool)cancelTopItem:(unsigned long long)arg1 hasMoreFav:(_Bool)arg2;
- (_Bool)topItem:(unsigned long long)arg1;
- (void)refreshForFavItem:(unsigned long long)arg1;
- (void)deleteFolderItemAtIndexPath:(id)arg1;
- (void)deleteFavItemAtIndexPath:(id)arg1;
- (void)openCellAtIndexPath:(id)arg1 viewController:(id)arg2;
- (double)cellHeightAtIndexPath:(id)arg1;
- (void)deleteAtIndexPath:(id)arg1;
- (id)createCellAtIndexPath:(id)arg1;
- (_Bool)isModelSelected:(id)arg1;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long selectCount; // @dynamic selectCount;
@property(readonly, nonatomic) unsigned long long count; // @dynamic count;
@property(nonatomic) _Bool showFavorites; // @dynamic showFavorites;
@property(nonatomic) _Bool showCheckboxes; // @dynamic showCheckboxes;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2 dataSource:(id)arg3;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *favorites; // @dynamic favorites;
@property(retain, nonatomic) NSMutableArray *folders; // @dynamic folders;
@property(nonatomic) unsigned long long maxSelectCount; // @dynamic maxSelectCount;
@property(readonly, retain, nonatomic) NSMutableArray *selectedItems; // @dynamic selectedItems;
@property(nonatomic) _Bool showFolderNames; // @dynamic showFolderNames;

@end
