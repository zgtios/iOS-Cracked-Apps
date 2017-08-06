//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface JLRoutes : NSObject
{
    _Bool _shouldFallbackToGlobalRoutes;
    CDUnknownBlockType _unmatchedURLHandler;
    NSMutableArray *_routes;
    NSString *_namespaceKey;
}

+ (void)verboseLogWithFormat:(id)arg1;
+ (_Bool)routeURL:(id)arg1 withController:(id)arg2 parameters:(id)arg3 executeBlock:(_Bool)arg4;
+ (_Bool)routeURL:(id)arg1 withController:(id)arg2 parameters:(id)arg3;
+ (_Bool)routeURL:(id)arg1 withController:(id)arg2;
+ (_Bool)isVerboseLoggingEnabled;
+ (void)setVerboseLoggingEnabled:(_Bool)arg1;
+ (id)description;
+ (_Bool)routeURL:(id)arg1 withParameters:(id)arg2 executeRouteBlock:(_Bool)arg3;
+ (_Bool)canRouteURL:(id)arg1 withParameters:(id)arg2;
+ (_Bool)canRouteURL:(id)arg1;
+ (_Bool)routeURL:(id)arg1 withParameters:(id)arg2;
+ (_Bool)routeURL:(id)arg1;
+ (void)unregisterRouteScheme:(id)arg1;
+ (void)removeAllRoutes;
+ (void)removeRoute:(id)arg1;
+ (void)addRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)addRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (void)addRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)routesForScheme:(id)arg1;
+ (id)globalRoutes;
+ (_Bool)shouldDecodePlusSymbols;
+ (void)setShouldDecodePlusSymbols:(_Bool)arg1;
@property(retain, nonatomic) NSString *namespaceKey; // @synthesize namespaceKey=_namespaceKey;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) CDUnknownBlockType unmatchedURLHandler; // @synthesize unmatchedURLHandler=_unmatchedURLHandler;
@property(nonatomic) _Bool shouldFallbackToGlobalRoutes; // @synthesize shouldFallbackToGlobalRoutes=_shouldFallbackToGlobalRoutes;
- (void).cxx_destruct;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)isGlobalRoutesController;
- (id)description;
- (_Bool)canRouteURL:(id)arg1 withParameters:(id)arg2;
- (_Bool)canRouteURL:(id)arg1;
- (_Bool)routeURL:(id)arg1 withParameters:(id)arg2;
- (_Bool)routeURL:(id)arg1;
- (void)removeAllRoutes;
- (void)removeRoute:(id)arg1;
- (void)registerRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addRoute:(id)arg1 priority:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)addRoutes:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addRoute:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end
