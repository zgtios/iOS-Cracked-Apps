//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IOMMessageBaseObject.h"

@class NSString;

@interface IOMMessageChatObject : IOMMessageBaseObject
{
    NSString *_userNick;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
- (void).cxx_destruct;

@end

