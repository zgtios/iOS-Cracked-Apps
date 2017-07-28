//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVObjectModel.h"

@class KTVPlayerBaseInfo, NSString;

@interface KTVChorusOpusStatus : KTVObjectModel
{
    _Bool _isDel;
    _Bool _isAllowChorus;
    NSString *_contents;
    KTVPlayerBaseInfo *_chorusPlayer;
    NSString *_vocalOpusHash;
    NSString *_pitch;
    long long _vocalOpusSize;
    NSString *_sentenceScore;
    NSString *_soundEffects;
}

@property(nonatomic) _Bool isAllowChorus; // @synthesize isAllowChorus=_isAllowChorus;
@property(retain, nonatomic) NSString *soundEffects; // @synthesize soundEffects=_soundEffects;
@property(retain, nonatomic) NSString *sentenceScore; // @synthesize sentenceScore=_sentenceScore;
@property(nonatomic) long long vocalOpusSize; // @synthesize vocalOpusSize=_vocalOpusSize;
@property(retain, nonatomic) NSString *pitch; // @synthesize pitch=_pitch;
@property(retain, nonatomic) NSString *vocalOpusHash; // @synthesize vocalOpusHash=_vocalOpusHash;
@property(retain, nonatomic) KTVPlayerBaseInfo *chorusPlayer; // @synthesize chorusPlayer=_chorusPlayer;
@property(retain, nonatomic) NSString *contents; // @synthesize contents=_contents;
@property(nonatomic) _Bool isDel; // @synthesize isDel=_isDel;
- (void).cxx_destruct;

@end
