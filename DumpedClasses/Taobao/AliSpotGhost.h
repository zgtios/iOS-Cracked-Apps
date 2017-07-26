//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FMDatabase, NSString;

@interface AliSpotGhost : NSObject
{
    long long _dbMaxNum;
    FMDatabase *_db;
    NSString *_database_path;
}

@property(retain, nonatomic) NSString *database_path; // @synthesize database_path=_database_path;
@property(retain, nonatomic) FMDatabase *db; // @synthesize db=_db;
@property(nonatomic) long long dbMaxNum; // @synthesize dbMaxNum=_dbMaxNum;
- (void).cxx_destruct;
- (long long)getMinDataByUserCount;
- (id)selectDataByBeDowning;
- (id)selectDataFromId:(id)arg1;
- (id)selectDataFromTitle:(id)arg1;
- (void)deleteDataById:(id)arg1;
- (void)deleteData:(id)arg1;
- (void)updateUseCount:(id)arg1;
- (void)updateData:(id)arg1;
- (void)insertData:(id)arg1;
- (void)createTable;
- (void)createDbFile;
- (_Bool)getTableItemCount:(id)arg1;
- (id)initWithMaxCount:(long long)arg1;
- (void)ghost;
- (void)dealloc;

@end
