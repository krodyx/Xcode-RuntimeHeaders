/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class IBMutableIdentityDictionary, NSView;

@interface IBStructureAreaDockLabelContainer : DVTLayoutView_ML
{
    IBMutableIdentityDictionary *installedLabels;
    IBMutableIdentityDictionary *previouslyInstalledLabels;
    NSView *labelLayoutToken;
}

- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)uninstallDockLabel:(id)arg1;
- (void)installDockLabel:(id)arg1 withFrameLocator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

