//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

@class NSDictionary;

@interface _TtC7Lingome10UserConfig : MTLModel
{
    // Error parsing type: , name: colorPreference
    // Error parsing type: , name: pmPolicy
    // Error parsing type: , name: pushForumLikeOff
    // Error parsing type: , name: pushForumReplyOff
    // Error parsing type: , name: pushForumInviteOff
    // Error parsing type: , name: pushFollowOff
}

+ (id)JSONKeyPathsByPropertyKey;
+ (id)object:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, readonly) NSDictionary *dictionaryValue;
@property(nonatomic) _Bool pushFollowOff; // @synthesize pushFollowOff;
@property(nonatomic) _Bool pushForumInviteOff; // @synthesize pushForumInviteOff;
@property(nonatomic) _Bool pushForumReplyOff; // @synthesize pushForumReplyOff;
@property(nonatomic) _Bool pushForumLikeOff; // @synthesize pushForumLikeOff;
@property(nonatomic) long long pmPolicy; // @synthesize pmPolicy;
@property(nonatomic) long long colorPreference; // @synthesize colorPreference;
@property(nonatomic, readonly) _Bool userConfigIsEmpty;

@end

