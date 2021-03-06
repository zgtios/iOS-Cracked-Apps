//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface TuSDKTKStatistics : NSObject
{
    NSString *_tempPath;
    NSMutableArray *_datas;
    NSMutableArray *_flushDatas;
    _Bool _isUploading;
    _Bool _isFlushing;
    _Bool _saveStatistics;
}

+ (void)flushData;
+ (void)appendWithSticker:(id)arg1;
+ (void)appendWithFilter:(id)arg1;
+ (void)appendWithComponentIdt:(unsigned long long)arg1;
+ (id)shared;
+ (void)initWithDataPath:(id)arg1;
- (void).cxx_destruct;
- (void)flushDataCompleted;
- (void)asyncFlushData:(id)arg1;
- (void)flush;
- (void)asyncConvertData:(id)arg1;
- (id)dataWithStatistics:(id)arg1;
- (void)checkStatisticsData;
- (void)configWithData:(id)arg1;
- (void)appendWithData:(id)arg1;
- (void)deleteCacheFile;
- (void)receiveUpdateStatistics:(id)arg1 arg:(id)arg2;
- (void)uploadStatisticsWithData:(id)arg1;
- (void)asyncLoadCacheData;
- (id)cacheFilePath;
- (void)initWithDataPath:(id)arg1;

@end

