//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMFashionSong, NMFashionUser;

@interface NMNearBy : NSObject
{
    NMFashionUser *_user;
    NMFashionSong *_song;
}

@property(retain, nonatomic) NMFashionUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NMFashionSong *song; // @synthesize song=_song;
- (void).cxx_destruct;
- (id)description;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

