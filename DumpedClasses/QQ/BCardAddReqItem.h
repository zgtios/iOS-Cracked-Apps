//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SAMRequestItem.h"

@class BCardInfoModel;

@interface BCardAddReqItem : SAMRequestItem
{
    _Bool _ADD_IS_MINE;
    BCardInfoModel *_ADD_CARD_INFO;
}

@property(retain, nonatomic) BCardInfoModel *ADD_CARD_INFO; // @synthesize ADD_CARD_INFO=_ADD_CARD_INFO;
@property(nonatomic) _Bool ADD_IS_MINE; // @synthesize ADD_IS_MINE=_ADD_IS_MINE;
- (void).cxx_destruct;
- (id)notifyRespBuffer:(const char *)arg1 len:(int)arg2 seq:(int)arg3;
- (char *)getRequestBuffer;
- (id)serviceCmd;

@end
