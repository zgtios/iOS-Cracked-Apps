//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ONEOperationCellModel : NSObject
{
    _Bool _shouldFolded;
    NSString *_identifier;
    NSString *_style;
    CDUnknownBlockType _clickBlock;
}

@property(nonatomic) _Bool shouldFolded; // @synthesize shouldFolded=_shouldFolded;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (long long)separateStyleAtIndexPath:(id)arg1;
- (double)heightForCell;

@end
