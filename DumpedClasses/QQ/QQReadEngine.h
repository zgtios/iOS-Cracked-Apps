//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, QQAttributedTextMaker, QQReadTxtParser, QRBookInfo;

@interface QQReadEngine : NSObject
{
    QQReadTxtParser *_parser;
    QQAttributedTextMaker *_textMaker;
    NSMutableArray *_visiblePages;
    NSString *_currentChapterTitle;
    NSString *_bookIDStr;
    long long _chapterID;
    _Bool _isOnlineBook;
    NSString *_chapterFilePath;
    _Bool _isFinishedWhenLoadFile;
    double _adParaPosY;
    double _commentParaPosY;
    long long _currentOffset;
    int _xo;
    QRBookInfo *_onlineBookInfo;
    NSDate *_createTimestamp;
    long long _createMemory;
}

+ (struct _NSRange)rangeOfData:(id)arg1 withData:(id)arg2;
+ (id)splitChapterWithFile:(id)arg1 withBookId:(id)arg2;
@property(nonatomic) long long createMemory; // @synthesize createMemory=_createMemory;
@property(retain, nonatomic) NSDate *createTimestamp; // @synthesize createTimestamp=_createTimestamp;
@property(nonatomic) __weak QRBookInfo *onlineBookInfo; // @synthesize onlineBookInfo=_onlineBookInfo;
- (void).cxx_destruct;
- (void)logTimeCost:(const char *)arg1;
- (void)logMemCost:(const char *)arg1;
- (void)updateCreateInfo;
- (_Bool)isBookFinished;
- (_Bool)isLastChapter;
- (void)cleanAllPages;
- (id)createPageWithOffset:(long long)arg1 andIsBackward:(_Bool)arg2;
- (id)getPageWithPosition:(int)arg1;
- (float)currentPercentage;
- (long long)currentBytesOffset;
- (double)commentSeizeParaPosY;
- (double)adSeizeParaPosY;
- (_Bool)isHaveCommentSeizePara;
- (_Bool)isHaveADSeizePara;
- (_Bool)isLastPage;
- (_Bool)isFirstPage;
- (id)getCurrentPageText;
- (void)drawPage:(struct CGContext *)arg1 Position:(int)arg2;
- (double)getLineDescent:(struct __CTLine *)arg1;
- (struct CGRect)getLineFrame:(struct __CTLine *)arg1 andLineOrigin:(struct CGPoint)arg2;
- (void)reloadPages:(_Bool)arg1;
- (void)changeFontTypewithFontID:(id)arg1;
- (void)changeFontSize:(float)arg1 withColor:(id)arg2;
- (_Bool)loadPreviousPage;
- (_Bool)loadNextPage;
- (void)startReadWithPercentage:(float)arg1;
- (long long)offsetWithPercentage:(float)arg1;
- (void)startReadWithPosition:(int)arg1;
- (void)closeEngine;
- (_Bool)openFile:(id)arg1 withBookID:(id)arg2 withOnlineBookInfo:(id)arg3 withChapterID:(id)arg4 andIsOnlineBook:(id)arg5;
- (void)dealloc;
- (void)newAdInitialHandler;
- (id)init;

// Remaining properties
@property(nonatomic) double adParaPosY; // @dynamic adParaPosY;
@property(copy, nonatomic) NSString *bookIDStr; // @dynamic bookIDStr;
@property(copy, nonatomic) NSString *chapterFilePath; // @dynamic chapterFilePath;
@property(nonatomic) long long chapterID; // @dynamic chapterID;
@property(nonatomic) double commentParaPosY; // @dynamic commentParaPosY;
@property(copy, nonatomic) NSString *currentChapterTitle; // @dynamic currentChapterTitle;
@property(nonatomic) _Bool isFinishedWhenLoadFile; // @dynamic isFinishedWhenLoadFile;
@property(nonatomic) _Bool isOnlineBook; // @dynamic isOnlineBook;
@property(retain, nonatomic) QQReadTxtParser *parser; // @dynamic parser;
@property(retain, nonatomic) QQAttributedTextMaker *textMaker; // @dynamic textMaker;
@property(retain, nonatomic) NSMutableArray *visiblePages; // @dynamic visiblePages;

@end

