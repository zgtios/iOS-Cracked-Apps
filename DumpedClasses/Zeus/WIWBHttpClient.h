//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WIHttpClient.h"

@interface WIWBHttpClient : WIHttpClient
{
}

- (_Bool)reportEventParamsArray:(id)arg1;
- (_Bool)updateAuthModuleInfo:(int)arg1 token:(id)arg2 sdkPartnerKey:(id)arg3 osType:(int)arg4 clientAccountVersion:(int)arg5 serverAccountVersion:(int)arg6 time:(id)arg7 clientVersion:(id)arg8;
- (_Bool)qureyWifiHostInfoListUserId:(int)arg1 token:(id)arg2 page:(int)arg3 pageSize:(int)arg4 latitude:(float)arg5 longitude:(float)arg6 apType:(id)arg7 radius:(int)arg8 osType:(int)arg9 clientVersion:(id)arg10;
- (_Bool)getApListUserId:(int)arg1 token:(id)arg2 time:(id)arg3 apversion:(int)arg4 osType:(int)arg5 clientVersion:(id)arg6;
- (_Bool)reportHotspotLocation:(int)arg1 token:(id)arg2 apId:(int)arg3 apMac:(id)arg4 latitude:(float)arg5 longitude:(float)arg6 province:(id)arg7 city:(id)arg8 connected:(int)arg9 time:(id)arg10 geoSupplier:(int)arg11 ssid:(id)arg12 psk:(id)arg13 businessType:(int)arg14 osType:(int)arg15 clientVersion:(id)arg16;
- (_Bool)heartbeat:(int)arg1 token:(id)arg2 accountId:(int)arg3 networkType:(id)arg4 local:(int)arg5 time:(id)arg6 apid:(int)arg7 clientVersion:(id)arg8 osType:(int)arg9;
- (_Bool)shareAp:(int)arg1 token:(id)arg2 apid:(int)arg3 ssid:(id)arg4 mac:(id)arg5 latitude:(id)arg6 longitude:(id)arg7 geoSupplier:(int)arg8 psk:(id)arg9 security:(id)arg10 bussinessType:(int)arg11 apType:(int)arg12 time:(id)arg13 clientVersion:(id)arg14 osType:(int)arg15;
- (_Bool)offlineApAccount:(int)arg1 token:(id)arg2 time:(id)arg3 clientVersion:(id)arg4 osType:(int)arg5;
- (_Bool)notifyConnection:(int)arg1 token:(id)arg2 apId:(int)arg3 successApAccount:(id)arg4 failedApAccount:(id)arg5 sdk:(int)arg6 local:(int)arg7 time:(id)arg8 clientVersion:(id)arg9 osType:(int)arg10;
- (_Bool)getOfficialApAccount:(int)arg1 token:(id)arg2 apId:(int)arg3 nation:(id)arg4 province:(id)arg5 city:(id)arg6 networkType:(id)arg7 time:(id)arg8 partnerarg:(id)arg9 apMac:(id)arg10 clientVersion:(id)arg11 osType:(int)arg12 localAccountId:(int)arg13;
- (_Bool)updateLocalApAccount:(int)arg1 token:(id)arg2 nation:(id)arg3 province:(id)arg4 city:(id)arg5 accountVersion:(int)arg6 osType:(int)arg7 clientVersion:(id)arg8;
- (_Bool)login:(id)arg1 password:(id)arg2 loginType:(int)arg3 deviceId:(id)arg4 mac:(id)arg5 imei:(id)arg6 udid:(id)arg7 openUDID:(id)arg8 uuid:(id)arg9 idfa:(id)arg10 osType:(int)arg11 osVersion:(id)arg12 manufacture:(id)arg13 deviceType:(id)arg14 clientVersion:(id)arg15 platformCode:(int)arg16 sdkPartnerKey:(id)arg17 sdkPartnerUserId:(id)arg18 time:(id)arg19 verify:(id)arg20 signature:(id)arg21 certification:(id)arg22 packageName:(id)arg23 lang:(id)arg24 appName:(id)arg25 appVersion:(id)arg26 cpuabi:(id)arg27 cpuDiscription:(id)arg28 cpuCoreNum:(id)arg29 cpuFrequency:(id)arg30 cpuImplementor:(id)arg31 gpuVendor:(id)arg32 gpuRenderer:(id)arg33 memoryTotal:(id)arg34 memoryFree:(id)arg35 sdCardStorageTotal:(id)arg36 sdCardStorageFree:(id)arg37 batteryCapacity:(id)arg38 pixelmetric:(id)arg39 displametricWidth:(id)arg40 displametricHeight:(id)arg41 displametricDensity:(id)arg42 romInfo:(id)arg43 imsi:(id)arg44 simid:(id)arg45 carrier:(id)arg46 phoneNumber:(id)arg47 timezone:(id)arg48 simoperator:(id)arg49 networkoperator:(id)arg50 lac:(id)arg51;
- (id)init;

@end

