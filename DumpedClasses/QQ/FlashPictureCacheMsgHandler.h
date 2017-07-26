//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface FlashPictureCacheMsgHandler : NSObject
{
    NSMutableArray *_cacheImageModels;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    _Bool _isDelThumbFlashPic;
}

@property(nonatomic) _Bool isDelThumbFlashPic; // @synthesize isDelThumbFlashPic=_isDelThumbFlashPic;
- (void).cxx_destruct;
- (id)cacheFilePath;
- (void)asyncSaveWithModel;
- (void)loadCaches;
- (void)cacheFullHandler;
- (void)pollOvertimeCache;
- (void)deleteImageCacheWithMessageModel:(id)arg1;
- (id)getCacheModel:(id)arg1;
- (void)addImageCacheWithMessage:(id)arg1;
- (id)pGetFlashImagePath:(id)arg1 imageType:(int)arg2;
- (id)getOriginalWithMessageModel:(id)arg1;
- (id)getThumbPathWithMessageModel:(id)arg1;
- (void)onMsgStateChange:(id)arg1;
- (id)init;
- (void)dealloc;

@end
