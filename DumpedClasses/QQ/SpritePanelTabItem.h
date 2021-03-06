//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "IAsynDownloadImageObserver.h"

@class NSString, SpritePackageModel, UIImageView;

@interface SpritePanelTabItem : UIView <IAsynDownloadImageObserver>
{
    UIImageView *_imageView;
    SpritePackageModel *_packageModel;
    int _state;
    UIImageView *_redPoint;
    id <SpritePanelTabItemDelegate> _delegate;
}

@property(nonatomic) id <SpritePanelTabItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SpritePackageModel *packageModel; // @synthesize packageModel=_packageModel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)downloadImageFinished:(id)arg1;
- (void)setState:(int)arg1;
- (void)dealloc;
- (void)hidddenRed;
- (_Bool)isRedShow;
- (void)showRed;
- (id)initWithFrame:(struct CGRect)arg1 PackageModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

