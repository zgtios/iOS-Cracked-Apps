//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSString;

@interface HGPageView : UIView
{
    struct CGRect _identityFrame;
    NSString *_reuseIdentifier;
    CALayer *_maskLayer;
}

@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) struct CGRect identityFrame; // @synthesize identityFrame=_identityFrame;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end

