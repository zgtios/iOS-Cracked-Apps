//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class FBProfileMediaDeeplinkAttachment, FBProfilePictureOverlayDependencyWrapper, NSArray, NSDate, NSString;

@interface FBProfileStartupFlowTraits : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_uploadProfileVideoStartupFlow_profileVideoComposerSessionID;
    NSString *_uploadProfileVideoStartupFlow_profileVideoCTAVideoID;
    NSString *_uploadStickerOverlayProfilePictureFlow_stickerId;
    NSString *_uploadStickerOverlayProfilePictureFlow_frameUri;
    NSDate *_uploadStickerOverlayProfilePictureFlow_defaultExpirationTime;
    NSString *_uploadStickerOverlayProfilePictureFlow_frameSearch;
    NSString *_uploadStickerOverlayProfilePictureFlow_categoryId;
    FBProfilePictureOverlayDependencyWrapper *_uploadStickerOverlayProfilePictureFlow_dependencyWrapper;
    unsigned long long _uploadStickerOverlayProfilePictureFlow_ctaType;
    NSString *_uploadStickerOverlayProfilePictureFlow_title;
    NSArray *_uploadStickerOverlayProfilePictureFlow_trackingCodes;
    NSString *_uploadStickerOverlayProfilePictureFlow_entryPoint;
    _Bool _uploadStickerOverlayProfilePictureFlow_mediaTypeIsVideo;
    NSString *_uploadStickerOverlayProfilePictureFlow_sourceMediaID;
    NSString *_uploadProfileVideoCameraRollFlow_profileVideoComposerSessionID;
    NSString *_uploadProfileVideoCameraRollFlow_profileVideoCTAVideoID;
    FBProfileMediaDeeplinkAttachment *_uploadProfileMediaDeeplinkStartupFlow_deeplinkAttachment;
    NSString *_uploadProfileMediaDeeplinkStartupFlow_profileVideoComposerSessionID;
    NSString *_uploadStickerOverlayStagingGroundFlow_stickerId;
    NSString *_uploadStickerOverlayStagingGroundFlow_frameUri;
    NSString *_uploadStickerOverlayStagingGroundFlow_profilePictureUri;
    NSString *_uploadStickerOverlayStagingGroundFlow_profilePhotoID;
    NSString *_uploadStickerOverlayStagingGroundFlow_analyticsModule;
}

+ (id)uploadStickerOverlayStagingGroundFlowWithStickerId:(id)arg1 frameUri:(id)arg2 profilePictureUri:(id)arg3 profilePhotoID:(id)arg4 analyticsModule:(id)arg5;
+ (id)uploadStickerOverlayProfilePictureFlowWithStickerId:(id)arg1 frameUri:(id)arg2 defaultExpirationTime:(id)arg3 frameSearch:(id)arg4 categoryId:(id)arg5 dependencyWrapper:(id)arg6 ctaType:(unsigned long long)arg7 title:(id)arg8 trackingCodes:(id)arg9 entryPoint:(id)arg10 mediaTypeIsVideo:(_Bool)arg11 sourceMediaID:(id)arg12;
+ (id)uploadProfileVideoStartupFlowWithProfileVideoComposerSessionID:(id)arg1 profileVideoCTAVideoID:(id)arg2;
+ (id)uploadProfileVideoCameraRollFlowWithProfileVideoComposerSessionID:(id)arg1 profileVideoCTAVideoID:(id)arg2;
+ (id)uploadProfileMediaDeeplinkStartupFlowWithDeeplinkAttachment:(id)arg1 profileVideoComposerSessionID:(id)arg2;
+ (id)profilePictureUpdateFlow;
+ (id)openMLEComposerStartupFlow;
+ (id)introCardEditIntroCardFlow;
+ (id)introCardEditFeaturedPhotosFlow;
+ (id)introCardEditBioFlow;
+ (id)introCardEditAboutFlow;
- (void).cxx_destruct;
- (void)matchIntroCardEditIntroCardFlow:(CDUnknownBlockType)arg1 introCardEditBioFlow:(CDUnknownBlockType)arg2 introCardEditFeaturedPhotosFlow:(CDUnknownBlockType)arg3 introCardEditAboutFlow:(CDUnknownBlockType)arg4 profilePictureUpdateFlow:(CDUnknownBlockType)arg5 uploadProfileVideoStartupFlow:(CDUnknownBlockType)arg6 uploadStickerOverlayProfilePictureFlow:(CDUnknownBlockType)arg7 uploadProfileVideoCameraRollFlow:(CDUnknownBlockType)arg8 openMLEComposerStartupFlow:(CDUnknownBlockType)arg9 uploadProfileMediaDeeplinkStartupFlow:(CDUnknownBlockType)arg10 uploadStickerOverlayStagingGroundFlow:(CDUnknownBlockType)arg11;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

