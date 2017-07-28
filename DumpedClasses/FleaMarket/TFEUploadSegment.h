//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TFEUploadSegment : NSObject
{
    int _partNumber;
    unsigned long long _offset;
    unsigned long long _length;
    NSString *_md5;
    NSString *_requestId;
    double _startTime;
    double _endTime;
}

+ (id)segmentWithOffset:(unsigned long long)arg1 partNumber:(int)arg2 length:(unsigned long long)arg3 md5:(id)arg4 startTime:(double)arg5 endTime:(double)arg6;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned long long length; // @synthesize length=_length;
@property(nonatomic) int partNumber; // @synthesize partNumber=_partNumber;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOffset:(unsigned long long)arg1 partNumber:(int)arg2 length:(unsigned long long)arg3 md5:(id)arg4 startTime:(double)arg5 endTime:(double)arg6;
- (id)initWithOffset:(unsigned int)arg1 length:(unsigned int)arg2 md5:(id)arg3 startTime:(double)arg4 endTime:(double)arg5;

@end
