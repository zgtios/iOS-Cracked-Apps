//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface QYApmNetworkConfiguration : NSObject
{
    NSString *_requestBaseUrl;
    NSString *_requestPingbackHttpUrl;
    NSString *_requestPingbackViewControllerUrl;
    NSString *_requestPingbackLaunchUrl;
    NSString *_requestPingbackMonitorUrl;
    NSString *_requestPingbackWebViewUrl;
    NSDictionary *_requestCommonParameters;
    NSDictionary *_reqeustCommonHeaders;
    NSDictionary *_requestCommonBodyData;
    long long _pingbackInterval;
    double _pingbackSendRate;
    NSArray *_whiteList;
}

+ (id)defaultConfiguration;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(nonatomic) double pingbackSendRate; // @synthesize pingbackSendRate=_pingbackSendRate;
@property(nonatomic) long long pingbackInterval; // @synthesize pingbackInterval=_pingbackInterval;
@property(retain, nonatomic) NSDictionary *requestCommonBodyData; // @synthesize requestCommonBodyData=_requestCommonBodyData;
@property(retain, nonatomic) NSDictionary *reqeustCommonHeaders; // @synthesize reqeustCommonHeaders=_reqeustCommonHeaders;
@property(retain, nonatomic) NSDictionary *requestCommonParameters; // @synthesize requestCommonParameters=_requestCommonParameters;
@property(retain, nonatomic) NSString *requestPingbackWebViewUrl; // @synthesize requestPingbackWebViewUrl=_requestPingbackWebViewUrl;
@property(retain, nonatomic) NSString *requestPingbackMonitorUrl; // @synthesize requestPingbackMonitorUrl=_requestPingbackMonitorUrl;
@property(retain, nonatomic) NSString *requestPingbackLaunchUrl; // @synthesize requestPingbackLaunchUrl=_requestPingbackLaunchUrl;
@property(retain, nonatomic) NSString *requestPingbackViewControllerUrl; // @synthesize requestPingbackViewControllerUrl=_requestPingbackViewControllerUrl;
@property(retain, nonatomic) NSString *requestPingbackHttpUrl; // @synthesize requestPingbackHttpUrl=_requestPingbackHttpUrl;
@property(retain, nonatomic) NSString *requestBaseUrl; // @synthesize requestBaseUrl=_requestBaseUrl;
- (void).cxx_destruct;

@end

