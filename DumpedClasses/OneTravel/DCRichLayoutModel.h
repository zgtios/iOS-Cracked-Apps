//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DCRichLabel;

@interface DCRichLayoutModel : NSObject
{
    double _margin;
    double _maxWidth;
    double _marginInsert;
    DCRichLabel *_label;
    struct CGRect _frame;
}

@property(retain, nonatomic) DCRichLabel *label; // @synthesize label=_label;
@property(nonatomic) double marginInsert; // @synthesize marginInsert=_marginInsert;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double margin; // @synthesize margin=_margin;
- (void).cxx_destruct;
@property(readonly, nonatomic) double maxBounds;
- (void)clean;

@end

