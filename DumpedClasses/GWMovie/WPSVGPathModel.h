//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString, UIBezierPath;

@interface WPSVGPathModel : GWObject
{
    NSString *_pathID;
    NSString *_fillColor;
    NSString *_strokeWidth;
    NSString *_strokeColor;
    NSString *_opacity;
    NSString *_coordinate;
    UIBezierPath *_bezierPath;
    double _rectX;
    double _rectY;
    double _rectWidth;
    double _rectHeight;
}

@property(nonatomic) double rectHeight; // @synthesize rectHeight=_rectHeight;
@property(nonatomic) double rectWidth; // @synthesize rectWidth=_rectWidth;
@property(nonatomic) double rectY; // @synthesize rectY=_rectY;
@property(nonatomic) double rectX; // @synthesize rectX=_rectX;
@property(retain, nonatomic) UIBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(copy, nonatomic) NSString *coordinate; // @synthesize coordinate=_coordinate;
@property(copy, nonatomic) NSString *opacity; // @synthesize opacity=_opacity;
@property(copy, nonatomic) NSString *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) NSString *strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(copy, nonatomic) NSString *fillColor; // @synthesize fillColor=_fillColor;
@property(copy, nonatomic) NSString *pathID; // @synthesize pathID=_pathID;
- (void).cxx_destruct;

@end

