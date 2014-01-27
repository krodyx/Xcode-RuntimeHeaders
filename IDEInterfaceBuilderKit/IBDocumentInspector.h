/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorViewController.h"

@class DVTDelayedInvocation, DVTNotificationToken, IBMutableIdentityDictionary, NSArray, NSString;

@interface IBDocumentInspector : IDEInspectorViewController
{
    IBMutableIdentityDictionary *observingTokensByDocument;
    DVTDelayedInvocation *useAutolayoutStateInvocation;
    DVTDelayedInvocation *targetMenusInvocation;
    long long useAutolayoutState;
    NSArray *deploymentMenuItems;
    NSArray *developmentMenuItems;
    NSString *deploymentSummary;
    NSString *developmentSummary;
    BOOL developmentEnabled;
    BOOL deploymentEnabled;
    BOOL useAutolayoutStateIsVisible;
    BOOL canEditUseAutolayoutState;
    BOOL allDocumentsAreUsingAutolayout;
    BOOL anyDocumentIsUsingAutolayout;
    BOOL isInstalled;
    DVTNotificationToken *updateDependenciesNotification;
}

@property BOOL useAutolayoutStateIsVisible; // @synthesize useAutolayoutStateIsVisible;
@property BOOL canEditUseAutolayoutState; // @synthesize canEditUseAutolayoutState;
@property(nonatomic) long long useAutolayoutState; // @synthesize useAutolayoutState;
@property(copy) NSString *developmentSummary; // @synthesize developmentSummary;
@property(copy) NSString *deploymentSummary; // @synthesize deploymentSummary;
@property(copy) NSArray *developmentMenuItems; // @synthesize developmentMenuItems;
@property(copy) NSArray *deploymentMenuItems; // @synthesize deploymentMenuItems;
@property BOOL developmentEnabled; // @synthesize developmentEnabled;
@property BOOL deploymentEnabled; // @synthesize deploymentEnabled;
- (void).cxx_destruct;
- (void)setContent:(id)arg1;
- (void)startObservingDocuments:(id)arg1;
- (void)stopObservingDocuments:(id)arg1;
- (void)updateUseAutolayoutState;
- (void)refreshTargetMenus;
- (id)menuItemsForDocumentDependencies:(id)arg1 andDocuments:(id)arg2 type:(id)arg3 summary:(id *)arg4;
- (id)menuItemForDefaultVersionOfDependency:(id)arg1 andDocuments:(id)arg2;
- (BOOL)isValidVersion:(long long)arg1 forDocumentDependency:(id)arg2 documents:(id)arg3 andType:(id)arg4;
- (id)versionItemWithTitle:(id)arg1 version:(id)arg2 andDependency:(id)arg3;
- (id)categoryHeaderItemWithTitle:(id)arg1;
- (void)disableAutolayoutForDocuments:(id)arg1;
- (void)enableAutolayoutForDocuments:(id)arg1;
- (void)finishEnablingAutolayoutForDocuments:(id)arg1;
- (id)explicitVersionForUpgradingDocumentDependencyToEnableAutolayout:(id)arg1;
- (BOOL)anyDocumentNeedsToUpgradeDependencyToEnableAutolayout:(id)arg1;
- (BOOL)documentNeedsToUpgradeDependencyToEnableAutolayout:(id)arg1;
- (id)upgradeTargetsForDocuments:(id)arg1;
- (id)headingForEnablingAutoLayoutAlert:(id)arg1;
- (id)alertForEnablingAutoLayoutWithHeading:(id)arg1 informativeText:(id)arg2;
- (id)autolayoutDependencyExtensionParameterForDocument:(id)arg1 matchingVersion:(id)arg2;
- (void)setUseAutolayoutStateForUIOnly:(long long)arg1;
- (void)resetLocalizationLocking:(id)arg1;
- (void)takeDocumentDependency:(id)arg1;
- (void)didApplyDependencyValue:(id)arg1 toDependency:(id)arg2 forDocument:(id)arg3;
- (void)documentUpdatedDependencies:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
