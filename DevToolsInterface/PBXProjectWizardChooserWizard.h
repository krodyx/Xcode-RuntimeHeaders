/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXWizardChooserWizard.h>

@interface PBXProjectWizardChooserWizard : PBXWizardChooserWizard
{
}

+ (BOOL)allowsWizardDescriptions;
- (id)preferredSortOrders;
- (void)sheetDidEndWithReturnCode:(long long)arg1 fileSystemLocations:(id)arg2 contextInfo:(void *)arg3;
- (BOOL)validateSettings;
- (void)addWizardProxiesForRegisteredWizardClasses;
- (BOOL)checkForWizardProxiesAtBaseSearchPath:(id)arg1 subpath:(id)arg2;
- (id)wizardSearchDomainSubpath;
- (id)wizardPlatformSearchPaths;
- (BOOL)wantsChooseButton;
- (BOOL)canFinish;
- (BOOL)canProceed;

@end

