//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, WIHttpClient;

@interface SOSOWifiAuthen : NSObject
{
    WIHttpClient *_httpClient;
    NSString *_loginUrl;
    NSMutableDictionary *_loginParms;
    NSString *_called;
}

@property(retain, nonatomic) NSString *called; // @synthesize called=_called;
@property(retain, nonatomic) NSMutableDictionary *loginParms; // @synthesize loginParms=_loginParms;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(retain, nonatomic) WIHttpClient *httpClient; // @synthesize httpClient=_httpClient;
- (void)dealloc;
- (void)sosoWifiDisconnect;
- (void)sosoWifiConnect:(id)arg1 password:(id)arg2;
- (void)initSOSOProder:(id)arg1;
- (id)init;

@end

