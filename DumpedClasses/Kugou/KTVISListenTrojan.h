//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface KTVISListenTrojan : NSObject
{
    _Bool _isOpened;
    long long _inviteID;
    id <KtvISListenTrojanDelegate> _delegate;
}

@property(nonatomic) _Bool isOpened; // @synthesize isOpened=_isOpened;
@property(nonatomic) __weak id <KtvISListenTrojanDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long inviteID; // @synthesize inviteID=_inviteID;
- (void).cxx_destruct;
- (void)notify:(id)arg1;
- (void)dealloc;
- (void)close;
- (void)open;
- (id)init;

@end
