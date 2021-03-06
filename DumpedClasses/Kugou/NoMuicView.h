//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeLabel;

@interface NoMuicView : UIView
{
    int _noViewStyle;
    id <NoMusicViewDelegate> noMusicDelegate;
    KGThemeLabel *tipLabel;
    KGThemeButton *_button1;
    KGThemeButton *_button2;
    KGThemeLabel *_label1;
}

@property(nonatomic) __weak KGThemeLabel *label1; // @synthesize label1=_label1;
@property(nonatomic) __weak KGThemeButton *button2; // @synthesize button2=_button2;
@property(nonatomic) __weak KGThemeButton *button1; // @synthesize button1=_button1;
@property(nonatomic) int noViewStyle; // @synthesize noViewStyle=_noViewStyle;
@property(retain, nonatomic) KGThemeLabel *tipLabel; // @synthesize tipLabel;
@property(nonatomic) __weak id <NoMusicViewDelegate> noMusicDelegate; // @synthesize noMusicDelegate;
- (void).cxx_destruct;
- (_Bool)isNeedTwoLinesWithFixedWith:(double)arg1 text:(id)arg2;
- (void)gotoRecordStore;
- (void)gotoSingleSongBestseller;
- (void)gotoBuyMusicPackagePage;
- (void)gotoMVTable;
- (void)createCollect;
- (void)backUp;
- (void)textLinkEvent;
- (void)guidToAddIpod;
- (void)createCollection;
- (void)translateSong;
- (void)checkMediaLibraryAuthorizationStatusWithPreBlock:(CDUnknownBlockType)arg1 Complete:(CDUnknownBlockType)arg2;
- (void)syncIpod;
- (void)toMusicLib;
- (id)initWithFrame:(struct CGRect)arg1 withImageName:(id)arg2 withTipsLabelText:(id)arg3 withfirstTitle:(id)arg4 withSecondTitle:(id)arg5 withShowTextLink:(_Bool)arg6;
- (id)initWithFrameWithDefaultStyle:(struct CGRect)arg1;
- (id)initWithFrameWithIpodStyle:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

