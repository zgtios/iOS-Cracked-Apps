//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface DiSysConfig : NSObject
{
    _Bool _isWriteGPS;
    _Bool _isSamedispPassengerUseV2;
    _Bool _isEraseNaviRoute;
    _Bool _isWriteServerData;
    _Bool _isNORouteNoAnimated;
    _Bool _isWriteGLLayerLog;
    _Bool _httpsEnabled;
    _Bool _httpsSelfCertsOnly;
    int _serverType;
    int _clientType;
    NSArray *_httpsCerts;
    long long _maplanguageType;
    long long _defaultArrowWidth;
    NSString *_externalBundleName;
}

+ (id)defaultManager;
@property(nonatomic) int clientType; // @synthesize clientType=_clientType;
@property(retain, nonatomic) NSString *externalBundleName; // @synthesize externalBundleName=_externalBundleName;
@property(nonatomic) long long defaultArrowWidth; // @synthesize defaultArrowWidth=_defaultArrowWidth;
@property(nonatomic) long long maplanguageType; // @synthesize maplanguageType=_maplanguageType;
@property(readonly, nonatomic) NSArray *httpsCerts; // @synthesize httpsCerts=_httpsCerts;
@property(nonatomic) _Bool httpsSelfCertsOnly; // @synthesize httpsSelfCertsOnly=_httpsSelfCertsOnly;
@property(nonatomic) _Bool httpsEnabled; // @synthesize httpsEnabled=_httpsEnabled;
@property(nonatomic) _Bool isWriteGLLayerLog; // @synthesize isWriteGLLayerLog=_isWriteGLLayerLog;
@property _Bool isNORouteNoAnimated; // @synthesize isNORouteNoAnimated=_isNORouteNoAnimated;
@property _Bool isWriteServerData; // @synthesize isWriteServerData=_isWriteServerData;
@property _Bool isEraseNaviRoute; // @synthesize isEraseNaviRoute=_isEraseNaviRoute;
@property(nonatomic) int serverType; // @synthesize serverType=_serverType;
@property _Bool isSamedispPassengerUseV2; // @synthesize isSamedispPassengerUseV2=_isSamedispPassengerUseV2;
@property(nonatomic) _Bool isWriteGPS; // @synthesize isWriteGPS=_isWriteGPS;
- (void).cxx_destruct;
- (void)resetVersions;
- (id)configVersions;
- (void)setHttpsCerts:(id)arg1;
- (id)offlineMapServer;
- (id)mapConfigServer;
- (id)trafficServer;
- (id)routeServer;
- (id)tileServerName;
- (id)tileServer;
- (id)protocol;
- (id)internalResBundle;
- (id)internalResBundlePath;
- (id)mapResBundle;
- (id)mapResBundlePath;

@end
