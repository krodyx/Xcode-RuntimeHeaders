/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class DVTStackView_ML, NSArray;

@interface IBAccessorizedScrollViewButtonBar : DVTLayoutView_ML
{
    DVTStackView_ML *_leftStack;
    DVTStackView_ML *_rightStack;
    double _barHeight;
}

+ (id)barButtonWithImageName:(id)arg1;
+ (id)barButtonWithImage:(id)arg1;
+ (id)barButtonWithImages:(id)arg1 titles:(id)arg2 tags:(id)arg3;
+ (id)barButtonWithImageNames:(id)arg1 titles:(id)arg2 tags:(id)arg3;
@property(nonatomic) double barHeight; // @synthesize barHeight=_barHeight;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (void)removeRightView:(id)arg1;
- (void)removeLeftView:(id)arg1;
- (void)addRightView:(id)arg1;
- (void)addLeftView:(id)arg1;
@property(copy) NSArray *rightViews;
@property(copy) NSArray *leftViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

