//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMCommentInboxReplyRequest : NMBaseRequest
{
    NSString *_combinedId;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *combinedId; // @synthesize combinedId=_combinedId;
- (void).cxx_destruct;
- (id)initWithCombinedId:(id)arg1 content:(id)arg2;

@end
