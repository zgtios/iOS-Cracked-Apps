//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIView;
@protocol GWPhotoBrowserViewControllerDelegate;

@interface GWPhotoBrowserViewController : UIPageViewController <UIActionSheetDelegate, UIPageViewControllerDataSource, UIPageViewControllerDelegate>
{
    NSMutableArray *photoControllers;
    _Bool barHidden;
    UIView *narBar;
    UILabel *titleLabel;
    id <GWPhotoBrowserViewControllerDelegate> browserDelegate;
    long long nowIndex;
    NSMutableArray *thumbImageArray;
    NSMutableArray *imageArray;
}

@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray;
@property(retain, nonatomic) NSMutableArray *thumbImageArray; // @synthesize thumbImageArray;
@property(nonatomic) long long nowIndex; // @synthesize nowIndex;
@property(nonatomic) __weak id <GWPhotoBrowserViewControllerDelegate> browserDelegate; // @synthesize browserDelegate;
- (void).cxx_destruct;
- (void)hide;
- (void)showInWindow:(id)arg1;
- (void)show;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)titleRefresh;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (long long)judgeNumber;
- (void)deleteImage;
- (void)barMove;
- (void)initBarView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

