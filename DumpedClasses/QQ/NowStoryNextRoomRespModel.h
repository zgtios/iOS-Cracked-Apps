//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

@class NSArray, NSString;

@interface NowStoryNextRoomRespModel : QQModel
{
    NSString *_topic_name;
    long long _is_find;
    long long _index;
    long long _interval;
    long long _error_code;
    NSArray *_roomList;
}

@property(retain, nonatomic) NSArray *roomList; // @synthesize roomList=_roomList;
@property(nonatomic) long long error_code; // @synthesize error_code=_error_code;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) long long is_find; // @synthesize is_find=_is_find;
@property(retain, nonatomic) NSString *topic_name; // @synthesize topic_name=_topic_name;
- (void).cxx_destruct;
- (id)description;

@end
