/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTPopoverContentViewController.h"

#import "NSTextFieldDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class DYRangeSlider, DYRenderingAttributes, DYResourceObject, NSBox, NSButton, NSSlider, NSTextField, NSView;

// Not exported
@interface GPUTraceResourceSettingsBubble : DVTPopoverContentViewController <NSWindowDelegate, NSTextFieldDelegate>
{
    NSView *_parentView;
    DYResourceObject *_resource;
    DYRenderingAttributes *_dispAttr;
    BOOL _showDepth;
    BOOL _isLuminance;
    id <GPUTraceBubbleOwner> _owner;
    unsigned int _channelCount;
    unsigned int _alphaChannelIndex;
    BOOL _hasRed;
    BOOL _hasGreen;
    BOOL _hasBlue;
    BOOL _hasAlpha;
    NSButton *_redButton;
    NSButton *_grnButton;
    NSButton *_bluButton;
    NSButton *_alfButton;
    NSBox *_visibleRangeBox;
    NSSlider *_dummySlider;
    NSTextField *_rangeEditMin;
    NSTextField *_rangeEditMax;
    DYRangeSlider *_visibleRangeSlider;
}

+ (unsigned int)_internalFormatForResource:(id)arg1;
- (void).cxx_destruct;
- (void)updateToneMapRangeFields:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)updateToneMapRange:(id)arg1;
- (void)_setupVisibleRangeSlider;
- (void)_resetChannelToolTips;
- (void)_resetButtonState;
- (void)_setupChannelEnableControl;
- (void)viewDidInstall;
- (void)toggleChannelEnable:(id)arg1;
- (void)updateChannelEnableImages;
- (void)setButtonToolTipText:(id)arg1 withChannel:(id)arg2;
- (void)close;
- (void)_cleanUpAfterClosingPopupWindow;
- (void)showAtPoint:(struct CGPoint)arg1;
- (id)getAlphaButton;
- (id)initWithResource:(id)arg1 withDisplayAttributes:(id)arg2 withShowDepth:(BOOL)arg3 parentView:(id)arg4 owner:(id)arg5;
- (int)numChannelsSelectedInImage;

@end

