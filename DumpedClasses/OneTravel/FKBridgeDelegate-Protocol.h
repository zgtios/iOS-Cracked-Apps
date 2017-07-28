//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURLRequest, UIScrollView, UIViewController;

@protocol FKBridgeDelegate <NSObject>
- (void)showLoggerConsole;
- (void)setDebugEnable:(_Bool)arg1;
- (void)invokeJSMethod:(NSString *)arg1 funcName:(NSString *)arg2 arguments:(NSArray *)arg3;
- (void)clearCache;
- (_Bool)isLoading;
- (void)goBack;
- (id <FKExecutor>)bridgeExecutor;
- (_Bool)canGoBack;
- (void)reloadPageWithDoneHandler:(void (^)(_Bool, NSError *))arg1;
- (void)loadRequest:(NSURLRequest *)arg1 doneHandler:(void (^)(_Bool, NSError *))arg2;

@optional
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly, nonatomic) NSString *title;
@property(copy, nonatomic) CDUnknownBlockType allowNavigationURL;
@end
