//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPageDataBaseModel.h"

@class NSArray, NSMutableArray, NSString;

@interface QLFullScreenVideoDetailModel : QLPageDataBaseModel
{
    NSMutableArray *_movieTitles;
    NSMutableArray *_movieVids;
    NSMutableArray *_movieinfos;
    NSMutableArray *_screenshots;
    NSMutableArray *_movieFullTags;
    NSArray *_aryAttentItems;
    NSString *_cacheDataKey;
    NSString *_cid;
    NSString *_vid;
}

@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *cacheDataKey; // @synthesize cacheDataKey=_cacheDataKey;
@property(retain, nonatomic) NSArray *aryAttentItems; // @synthesize aryAttentItems=_aryAttentItems;
@property(retain, nonatomic) NSMutableArray *movieFullTags; // @synthesize movieFullTags=_movieFullTags;
@property(retain, nonatomic) NSMutableArray *screenshots; // @synthesize screenshots=_screenshots;
@property(retain, nonatomic) NSMutableArray *movieinfos; // @synthesize movieinfos=_movieinfos;
@property(retain, nonatomic) NSMutableArray *movieVids; // @synthesize movieVids=_movieVids;
@property(retain, nonatomic) NSMutableArray *movieTitles; // @synthesize movieTitles=_movieTitles;
- (void).cxx_destruct;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)load:(int)arg1 more:(_Bool)arg2;
- (void)resetDataModel;
- (id)initWithCID:(id)arg1 VID:(id)arg2;

@end
