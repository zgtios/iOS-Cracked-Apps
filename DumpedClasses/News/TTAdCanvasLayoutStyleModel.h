//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TTAdCanvasLayoutStyleModel : JSONModel
{
    NSNumber<Optional> *_height;
    NSNumber<Optional> *_width;
    NSNumber<Optional> *_marginTop;
    NSNumber<Optional> *_marginBottom;
    NSNumber<Optional> *_marginLeft;
    NSNumber<Optional> *_marginRight;
    NSNumber<Optional> *_fontSize;
    NSNumber<Optional> *_lineHeight;
    NSString<Optional> *_color;
    NSString<Optional> *_textAlign;
    NSString<Optional> *_borderColor;
    NSNumber<Optional> *_borderRadius;
    NSNumber<Optional> *_borderWidth;
    NSNumber<Optional> *_borderStyle;
    NSString<Optional> *_backgroundColor;
}

@property(retain, nonatomic) NSString<Optional> *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSNumber<Optional> *borderStyle; // @synthesize borderStyle=_borderStyle;
@property(retain, nonatomic) NSNumber<Optional> *borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) NSNumber<Optional> *borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain, nonatomic) NSString<Optional> *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSString<Optional> *textAlign; // @synthesize textAlign=_textAlign;
@property(retain, nonatomic) NSString<Optional> *color; // @synthesize color=_color;
@property(retain, nonatomic) NSNumber<Optional> *lineHeight; // @synthesize lineHeight=_lineHeight;
@property(retain, nonatomic) NSNumber<Optional> *fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) NSNumber<Optional> *marginRight; // @synthesize marginRight=_marginRight;
@property(retain, nonatomic) NSNumber<Optional> *marginLeft; // @synthesize marginLeft=_marginLeft;
@property(retain, nonatomic) NSNumber<Optional> *marginBottom; // @synthesize marginBottom=_marginBottom;
@property(retain, nonatomic) NSNumber<Optional> *marginTop; // @synthesize marginTop=_marginTop;
@property(retain, nonatomic) NSNumber<Optional> *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber<Optional> *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (long long)textAlignment;

@end

