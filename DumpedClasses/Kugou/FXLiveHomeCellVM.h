//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBaseJSONModel.h"

@class NSString;

@interface FXLiveHomeCellVM : FXBaseJSONModel
{
    _Bool _isSubscribe;
    _Bool _isShow;
    _Bool _isHiddenLine;
    int _concertType;
    long long _concertId;
    long long _roomId;
    unsigned long long _roomStatus;
    unsigned long long _enterRoomCondition;
    NSString *_coverUrl;
    NSString *_title;
    NSString *_actorName;
    long long _subscribeCount;
    long long _onlineCount;
    long long _time;
    long long _endTime;
    long long _markTime;
    long long _playCnt;
    long long _starNum;
    NSString *_desc;
    long long _h5Switch;
    NSString *_h5Url;
    NSString *_heraldUrl;
    NSString *_reviewUrl;
    NSString *_mvHash;
    NSString *_bookingPageUrl;
    NSString *_bookingPageUrlPc;
    long long _bookingPageUrlSwitch;
    NSString *_typeName;
    NSString *_coverImg;
    long long _liveType;
    long long _playNum;
    NSString *_singer;
    long long _startTime;
    unsigned long long _status;
    NSString *_summaryContent;
    long long _vipSwitch;
    double _cellHeight;
}

@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(nonatomic) _Bool isHiddenLine; // @synthesize isHiddenLine=_isHiddenLine;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) long long vipSwitch; // @synthesize vipSwitch=_vipSwitch;
@property(copy, nonatomic) NSString *summaryContent; // @synthesize summaryContent=_summaryContent;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *singer; // @synthesize singer=_singer;
@property(nonatomic) long long playNum; // @synthesize playNum=_playNum;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
@property(copy, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(nonatomic) long long bookingPageUrlSwitch; // @synthesize bookingPageUrlSwitch=_bookingPageUrlSwitch;
@property(copy, nonatomic) NSString *bookingPageUrlPc; // @synthesize bookingPageUrlPc=_bookingPageUrlPc;
@property(copy, nonatomic) NSString *bookingPageUrl; // @synthesize bookingPageUrl=_bookingPageUrl;
@property(retain, nonatomic) NSString *mvHash; // @synthesize mvHash=_mvHash;
@property(retain, nonatomic) NSString *reviewUrl; // @synthesize reviewUrl=_reviewUrl;
@property(retain, nonatomic) NSString *heraldUrl; // @synthesize heraldUrl=_heraldUrl;
@property(copy, nonatomic) NSString *h5Url; // @synthesize h5Url=_h5Url;
@property(nonatomic) long long h5Switch; // @synthesize h5Switch=_h5Switch;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long starNum; // @synthesize starNum=_starNum;
@property(nonatomic) _Bool isSubscribe; // @synthesize isSubscribe=_isSubscribe;
@property(nonatomic) long long playCnt; // @synthesize playCnt=_playCnt;
@property(nonatomic) long long markTime; // @synthesize markTime=_markTime;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long onlineCount; // @synthesize onlineCount=_onlineCount;
@property(nonatomic) long long subscribeCount; // @synthesize subscribeCount=_subscribeCount;
@property(nonatomic) int concertType; // @synthesize concertType=_concertType;
@property(copy, nonatomic) NSString *actorName; // @synthesize actorName=_actorName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(nonatomic) unsigned long long enterRoomCondition; // @synthesize enterRoomCondition=_enterRoomCondition;
@property(nonatomic) unsigned long long roomStatus; // @synthesize roomStatus=_roomStatus;
@property(nonatomic) long long roomId; // @synthesize roomId=_roomId;
@property(nonatomic) long long concertId; // @synthesize concertId=_concertId;
- (void).cxx_destruct;

@end
