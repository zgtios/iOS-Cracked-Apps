//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray, NSString;

@interface AMPNewFriendObject : TBJSONModel
{
    _Bool _hasMore;
    NSString *_cursorStr;
    NSMutableArray *_friendDataList;
}

@property(retain, nonatomic) NSMutableArray *friendDataList; // @synthesize friendDataList=_friendDataList;
@property(retain, nonatomic) NSString *cursorStr; // @synthesize cursorStr=_cursorStr;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)arg1;

@end
