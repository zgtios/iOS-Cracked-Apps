//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DataLoadManager.h"

@class NSString;

@interface IQYChatRoomTipoffManager : DataLoadManager
{
    NSString *_reportUid;
    NSString *_reportedUid;
    NSString *_reportReason;
    NSString *_reportDescription;
    NSString *_roomId;
    NSString *_msgcontent;
    NSString *_authcookie;
}

@property(retain, nonatomic) NSString *authcookie; // @synthesize authcookie=_authcookie;
@property(retain, nonatomic) NSString *msgcontent; // @synthesize msgcontent=_msgcontent;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *reportDescription; // @synthesize reportDescription=_reportDescription;
@property(retain, nonatomic) NSString *reportReason; // @synthesize reportReason=_reportReason;
@property(retain, nonatomic) NSString *reportedUid; // @synthesize reportedUid=_reportedUid;
@property(retain, nonatomic) NSString *reportUid; // @synthesize reportUid=_reportUid;
- (_Bool)parse:(id)arg1;
- (id)urlStl;
- (id)init;

@end

