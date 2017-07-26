//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, TBOComment, TBOFeed, TBOTopic, UIImage;

@interface TBOSendData : NSObject
{
    TBOComment *_commentComment;
    TBOFeed *_commentFeed;
    NSString *_commentText;
    NSString *_createTime;
    TBOTopic *_topic;
    TBOFeed *_feed;
    NSArray *_imageArray;
    NSArray *_imagePathArray;
    UIImage *_image;
    NSString *_imagePath;
    NSString *_videoPath;
    UIImage *_videoCoverImage;
    NSString *_videoCoverImagePath;
    NSNumber *_videoDuration;
    NSString *_videoCreateTime;
    NSString *_videoBitRate;
    NSString *_videoFileSize;
}

@property(retain, nonatomic) NSString *videoFileSize; // @synthesize videoFileSize=_videoFileSize;
@property(retain, nonatomic) NSString *videoBitRate; // @synthesize videoBitRate=_videoBitRate;
@property(retain, nonatomic) NSString *videoCreateTime; // @synthesize videoCreateTime=_videoCreateTime;
@property(retain, nonatomic) NSNumber *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *videoCoverImagePath; // @synthesize videoCoverImagePath=_videoCoverImagePath;
@property(retain, nonatomic) UIImage *videoCoverImage; // @synthesize videoCoverImage=_videoCoverImage;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSArray *imagePathArray; // @synthesize imagePathArray=_imagePathArray;
@property(retain, nonatomic) NSArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) TBOFeed *feed; // @synthesize feed=_feed;
@property(retain, nonatomic) TBOTopic *topic; // @synthesize topic=_topic;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(retain, nonatomic) TBOFeed *commentFeed; // @synthesize commentFeed=_commentFeed;
@property(retain, nonatomic) TBOComment *commentComment; // @synthesize commentComment=_commentComment;
- (void).cxx_destruct;
- (_Bool)needsCacheToLocal;
- (_Bool)needsUploadAttachments;
- (_Bool)hasVideoContentData;
- (_Bool)hasItemContentData;
- (_Bool)hasImageArrayContentData;
- (_Bool)hasImageContentData;

@end
