//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TTActivityContentItemSelectedProtocol.h"

@class NSString;

@interface TTFavouriteContentItem : NSObject <TTActivityContentItemSelectedProtocol>
{
    _Bool _selected;
    CDUnknownBlockType _customAction;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) CDUnknownBlockType customAction; // @synthesize customAction=_customAction;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *activityImageName;
@property(readonly, nonatomic) NSString *contentItemType;

// Remaining properties
@property(copy, nonatomic) NSString *contentTitle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
