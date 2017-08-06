//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSTimer;

@interface CCHLinkGestureRecognizer : UIGestureRecognizer
{
    int _result;
    double _minimumPressDuration;
    double _allowableMovement;
    NSTimer *_timer;
    struct CGPoint _initialPoint;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) struct CGPoint initialPoint; // @synthesize initialPoint=_initialPoint;
@property(nonatomic) int result; // @synthesize result=_result;
@property(nonatomic) double allowableMovement; // @synthesize allowableMovement=_allowableMovement;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration=_minimumPressDuration;
- (void).cxx_destruct;
- (_Bool)touchIsCloseToInitialPoint:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)longPressed:(id)arg1;
- (void)reset;
- (void)setUp;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (id)init;

@end
