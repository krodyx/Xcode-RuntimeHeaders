/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCElementDisplay.h>

@class NSFont;

@interface XCElementViewDisplay : XCElementDisplay
{
    unsigned long long _controlSize;
    NSFont *_font;
}

- (void)dealloc;
- (void)clearViewForDisplayer:(struct NSObject *)arg1;
- (void)_releaseValuesViewDisplay;
- (void)removeFromViewForDisplayer:(struct NSObject *)arg1;
- (void)addToViewForDisplayer:(struct NSObject *)arg1;
- (id)displayer:(struct NSObject *)arg1 cursorAt:(struct CGPoint)arg2;
- (BOOL)displayer:(struct NSObject *)arg1 validMouseDownLoc:(struct CGPoint)arg2 inFrame:(struct CGRect)arg3;
- (void)displayer:(struct NSObject *)arg1 finishPositioningInContentFrame:(struct CGRect)arg2;
- (void)discardEditingForDisplayer:(struct NSObject *)arg1;
- (void)abortEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)commitEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isEditingForDisplayer:(struct NSObject *)arg1;
- (BOOL)isInEditingStateForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 installWithConfiguration:(id)arg2 useLocalData:(BOOL)arg3 initialData:(id)arg4;
- (void)variableStateChangedForDisplayer:(struct NSObject *)arg1;
- (void)_removeViewFrameObserverForDisplayer:(struct NSObject *)arg1;
- (void)_addViewFrameObserverForDisplayer:(struct NSObject *)arg1;
- (struct CGSize)sizeProposalForDisplayer:(struct NSObject *)arg1;
- (id)defaultDataBinding;
- (id)viewForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 swapView:(id)arg2;
- (void)displayer:(struct NSObject *)arg1 setView:(id)arg2;
- (id)newDefaultView;
- (id)configurationForDisplayer:(struct NSObject *)arg1;
- (void)displayer:(struct NSObject *)arg1 setConfiguration:(id)arg2;
- (void)configureForControlSize:(unsigned long long)arg1 font:(id)arg2;
- (id)font;
- (void)setFont:(id)arg1;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;

@end
