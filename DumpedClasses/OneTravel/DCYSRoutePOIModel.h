//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCYSRoutePOIModel : JSONModel
{
    NSString<Optional> *_from_name;
    NSString<Optional> *_from_address;
    NSString<Optional> *_to_name;
    NSString<Optional> *_from_lat;
    NSString<Optional> *_from_lng;
    NSString<Optional> *_to_lat;
    NSString<Optional> *_to_lng;
    NSString<Optional> *_from_city_id;
    NSString<Optional> *_to_city_id;
    NSString<Optional> *_type;
}

+ (id)changeDriverRoute:(id)arg1;
+ (id)changeUserRoute:(id)arg1;
+ (id)mergeRouteEndPOIModel:(id)arg1;
+ (id)mergeRouteStartPOIModel:(id)arg1;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString<Optional> *to_city_id; // @synthesize to_city_id=_to_city_id;
@property(copy, nonatomic) NSString<Optional> *from_city_id; // @synthesize from_city_id=_from_city_id;
@property(copy, nonatomic) NSString<Optional> *to_lng; // @synthesize to_lng=_to_lng;
@property(copy, nonatomic) NSString<Optional> *to_lat; // @synthesize to_lat=_to_lat;
@property(copy, nonatomic) NSString<Optional> *from_lng; // @synthesize from_lng=_from_lng;
@property(copy, nonatomic) NSString<Optional> *from_lat; // @synthesize from_lat=_from_lat;
@property(copy, nonatomic) NSString<Optional> *to_name; // @synthesize to_name=_to_name;
@property(copy, nonatomic) NSString<Optional> *from_address; // @synthesize from_address=_from_address;
@property(copy, nonatomic) NSString<Optional> *from_name; // @synthesize from_name=_from_name;
- (void).cxx_destruct;

@end
