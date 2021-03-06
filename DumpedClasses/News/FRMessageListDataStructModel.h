//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FRBaseModel.h"

@class FRMessageListDataGroupStructModel, FRMessageListUserInfoStructModel<Optional>, NSNumber<Optional>, NSString<Optional>;

@interface FRMessageListDataStructModel : FRBaseModel
{
    FRMessageListDataGroupStructModel *_group;
    NSNumber<Optional> *_cursor;
    NSNumber<Optional> *_create_time;
    FRMessageListUserInfoStructModel<Optional> *_user;
    NSNumber<Optional> *_dongtai_id;
    NSNumber<Optional> *_type;
    NSNumber<Optional> *_msg_id;
    NSString<Optional> *_content;
}

@property(retain, nonatomic) NSString<Optional> *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber<Optional> *msg_id; // @synthesize msg_id=_msg_id;
@property(retain, nonatomic) NSNumber<Optional> *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber<Optional> *dongtai_id; // @synthesize dongtai_id=_dongtai_id;
@property(retain, nonatomic) FRMessageListUserInfoStructModel<Optional> *user; // @synthesize user=_user;
@property(retain, nonatomic) NSNumber<Optional> *create_time; // @synthesize create_time=_create_time;
@property(retain, nonatomic) NSNumber<Optional> *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) FRMessageListDataGroupStructModel *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

