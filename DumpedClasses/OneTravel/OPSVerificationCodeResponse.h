//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OPSResponseModel.h"

@class NSString<Optional>;

@interface OPSVerificationCodeResponse : OPSResponseModel
{
    NSString<Optional> *_cell;
    NSString<Optional> *_email;
}

@property(copy, nonatomic) NSString<Optional> *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString<Optional> *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;

@end

