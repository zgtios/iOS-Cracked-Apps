//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextSelectionRect.h"

#import "NSCopying.h"

@interface YYTextSelectionRect : UITextSelectionRect <NSCopying>
{
    _Bool _containsStart;
    _Bool _containsEnd;
    _Bool _isVertical;
    long long _writingDirection;
    struct CGRect _rect;
}

@property(nonatomic) _Bool isVertical; // @synthesize isVertical=_isVertical;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=_containsStart;
@property(nonatomic) long long writingDirection; // @synthesize writingDirection=_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
