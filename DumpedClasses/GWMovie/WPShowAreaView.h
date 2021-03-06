//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBXML, UIImageView, UIScrollView;

@interface WPShowAreaView : UIView <UIScrollViewDelegate>
{
    _Bool _isScale;
    double _scaleNumber;
    NSArray *_areasArray;
    CDUnknownBlockType _selectedAreaBlock;
    NSMutableArray *_svgPathModelArray;
    TBXML *_xml;
    struct _TBXMLElement *_rootElement;
    UIImageView *_originalImageView;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *originalImageView; // @synthesize originalImageView=_originalImageView;
@property(nonatomic) _Bool isScale; // @synthesize isScale=_isScale;
@property(nonatomic) struct _TBXMLElement *rootElement; // @synthesize rootElement=_rootElement;
@property(retain, nonatomic) TBXML *xml; // @synthesize xml=_xml;
@property(retain, nonatomic) NSMutableArray *svgPathModelArray; // @synthesize svgPathModelArray=_svgPathModelArray;
@property(copy, nonatomic) CDUnknownBlockType selectedAreaBlock; // @synthesize selectedAreaBlock=_selectedAreaBlock;
@property(retain, nonatomic) NSArray *areasArray; // @synthesize areasArray=_areasArray;
@property(nonatomic) double scaleNumber; // @synthesize scaleNumber=_scaleNumber;
- (void).cxx_destruct;
- (void)updateImageVAction:(id)arg1;
- (id)searchAreaInfoWithPathModel:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)decodeRectElement:(struct _TBXMLElement *)arg1;
- (void)decodePathElement:(struct _TBXMLElement *)arg1;
- (void)generateAreaLayer:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

