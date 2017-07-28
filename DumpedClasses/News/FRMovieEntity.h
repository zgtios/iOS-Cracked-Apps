//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, NSNumber<Optional>, NSString, NSString<Optional>;

@interface FRMovieEntity : JSONModel
{
    NSString *_name;
    NSString *_englishName;
    NSString *_type;
    NSString *_areaInfo;
    NSString *_actors;
    NSString *_rate;
    NSNumber *_days;
    NSString *_imageUrl;
    NSString *_movieID;
    NSString<Optional> *_uniqueID;
    NSString<Optional> *_groupFlags;
    NSString<Optional> *_purchaseUrl;
    NSNumber<Optional> *_rateUserCount;
    NSString *_produceArea;
    NSString *_releaseArea;
    NSString *_releaseDate;
    NSString *_duration;
    NSString *_directorsStr;
    NSString *_actorsStr;
}

+ (id)keyMapper;
@property(copy, nonatomic) NSString *actorsStr; // @synthesize actorsStr=_actorsStr;
@property(copy, nonatomic) NSString *directorsStr; // @synthesize directorsStr=_directorsStr;
@property(copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *releaseDate; // @synthesize releaseDate=_releaseDate;
@property(copy, nonatomic) NSString *releaseArea; // @synthesize releaseArea=_releaseArea;
@property(copy, nonatomic) NSString *produceArea; // @synthesize produceArea=_produceArea;
@property(retain, nonatomic) NSNumber<Optional> *rateUserCount; // @synthesize rateUserCount=_rateUserCount;
@property(copy, nonatomic) NSString<Optional> *purchaseUrl; // @synthesize purchaseUrl=_purchaseUrl;
@property(copy, nonatomic) NSString<Optional> *groupFlags; // @synthesize groupFlags=_groupFlags;
@property(copy, nonatomic) NSString<Optional> *uniqueID; // @synthesize uniqueID=_uniqueID;
@property(copy, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSNumber *days; // @synthesize days=_days;
@property(copy, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(copy, nonatomic) NSString *actors; // @synthesize actors=_actors;
@property(copy, nonatomic) NSString *areaInfo; // @synthesize areaInfo=_areaInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *englishName; // @synthesize englishName=_englishName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
