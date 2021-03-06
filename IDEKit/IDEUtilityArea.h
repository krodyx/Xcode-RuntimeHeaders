/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEViewController.h>

#import "IDENavigableItemCoordinatorDelegate-Protocol.h"

@class DVTBorderedView, DVTChoice, DVTChooserView, DVTDelayedInvocation, DVTDisclosureView, DVTExtension, DVTMutableOrderedSet, DVTNotificationToken, DVTStackView_ML, IDEEditorDocument, IDENavigableItemCoordinator, IDESelection, IDEUtilityPlaceholderView, NSArray, NSMapTable, NSScrollView, NSSet;

@interface IDEUtilityArea : IDEViewController <IDENavigableItemCoordinatorDelegate>
{
    DVTChooserView *_chooserView;
    DVTBorderedView *_borderedView;
    DVTStackView_ML *_stackView;
    NSScrollView *_scrollView;
    DVTDisclosureView *_lastDisclosureView;
    DVTChoice *_selectedCategoryChoice;
    NSMapTable *_categoriesToChoices;
    NSMapTable *_sliceExtensionsToContentViews;
    NSMapTable *_sliceExtensionsToWrappingViews;
    NSMapTable *_installedSliceExtensionsToContentViews;
    NSArray *_builtinCategories;
    DVTMutableOrderedSet *_userPreferredCategories;
    NSSet *_displayedSliceExtensions;
    NSArray *_observedParentNavigableItemTokens;
    DVTDelayedInvocation *_refreshInvocation;
    DVTExtension *_displayedCategory;
    IDESelection *_content;
    id <DVTCancellable> _installToken;
    id <DVTCancellable> _clipViewFillToken;
    NSSet *_selectedDocuments;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDEUtilityPlaceholderView *_placeholderView;
    IDEEditorDocument *_retainedDocument;
    DVTNotificationToken *_retainedDocumentWillCloseNotificationToken;
    DVTNotificationToken *_frameChangeToken;
    BOOL _forceInputSelectionToEmpty;
    NSSet *_inputURLs;
}

+ (id)utilityConfiguredDisclosureView;
+ (id)notApplicablePlaceholder;
+ (id)emptySelectionPlaceholder;
+ (id)defaultViewNibName;
@property(readonly) NSSet *displayedSliceExtensions; // @synthesize displayedSliceExtensions=_displayedSliceExtensions;
@property(copy, nonatomic) NSArray *builtinCategories; // @synthesize builtinCategories=_builtinCategories;
@property(readonly) DVTStackView_ML *stackView; // @synthesize stackView=_stackView;
@property(readonly) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(readonly) DVTChooserView *chooserView; // @synthesize chooserView=_chooserView;
- (void).cxx_destruct;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)invalidateContentView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)workspaceWindowIsClosing;
- (void)clearInputsAndStopObserving;
- (void)loadView;
- (void)userSelectedCategoryChoiceFromMenu:(id)arg1;
- (void)simulateUserSelectionOfChoice:(id)arg1;
- (void)chooserView:(id)arg1 userDidSelectChoices:(id)arg2;
- (void)noteUserDidExplicitlyChooseChoice:(id)arg1;
- (id)willReplaceSliceViewControllers:(SEL)arg1;
- (void)_rebuildCategoriesAndStack;
- (id)deriveInputSelection;
- (id)navigableItemsForSelection:(id)arg1;
- (id)_preferredChoiceForChoices:(id)arg1;
- (void)_rebuildStackWithNavigableItems:(id)arg1;
- (void)pushContentNavigables:(id)arg1 toInstalledSliceExentions:(id)arg2;
- (void)prepareToRemoveSliceExtensions:(id)arg1 forCategory:(id)arg2;
- (void)prepareToAddSliceExtensions:(id)arg1 forCategory:(id)arg2;
- (id)selectedDocuments;
- (void)setSelectedDocuments:(id)arg1;
- (void)autoreleaseEditorDocument:(id)arg1;
- (id)computeSelectedDocumentsForNavigables:(id)arg1;
- (BOOL)documentsNeededForSlices:(id)arg1;
- (void)_inputEditorDocumentWillClose:(id)arg1;
- (void)_stackClippingViewFrameChanged:(id)arg1;
- (void)_updateLastDisclosureViewBorderColor;
- (id)_categoriesForNavigables:(id)arg1;
- (id)_editorContributedCategoryExtensionsForNavigable:(id)arg1;
- (id)_categoriesForCategoryIdentifiers:(id)arg1;
- (id)_categoryForCategoryIdentifier:(id)arg1;
- (id)choiceMatchingExtensionIdentifier:(id)arg1;
- (id)defaultChoice;
- (id)_choicesForCategories:(id)arg1;
- (id)_choiceForCategory:(id)arg1;
- (id)_sliceViewsForSliceExtensions:(id)arg1 inCategory:(id)arg2;
- (id)_cachedSliceViewForSliceExtension:(id)arg1 inCategory:(id)arg2;
- (id)_disclosureViewForWrappingContentView:(id)arg1 fromSliceExtension:(id)arg2;
- (id)_cachedContentViewForSliceExtension:(id)arg1 inCategory:(id)arg2;
- (id)_contentViewForSliceExtension:(id)arg1 inCategory:(id)arg2;
- (id)viewControllerForExtension:(id)arg1;
- (id)viewControllerForContentView:(id)arg1;
- (id)_currentlyInstalledContentViewForSliceExtension:(id)arg1;
- (id)navigableItemCoordinator:(id)arg1 editorDocumentForNavigableItem:(id)arg2;
- (void)dropRetainedDocument;
- (void)setSelectedCategoryChoices:(id)arg1;
- (id)selectedCategoryChoices;
@property(readonly) DVTChoice *selectedCategoryChoice;
- (void)validateIfNeeded;
- (id)selectedCategory;
- (void)prepareToRemoveContentView:(id)arg1 forSliceExtension:(id)arg2 inCategory:(id)arg3;
- (void)prepareToAddContentView:(id)arg1 forSliceExtension:(id)arg2 inCategory:(id)arg3;
- (id)placeholderStringForInputNavigableItems:(id)arg1 derivedItems:(id)arg2 inCategory:(id)arg3;
- (id)navigableItemsForInputNavigableItems:(id)arg1 inCategory:(id)arg2;
- (id)titleKeyPathForSliceExtension:(id)arg1;
- (id)titleForSliceExtension:(id)arg1;
- (id)toolTipForCategoryExtension:(id)arg1;
- (id)titleForCategoryExtension:(id)arg1;
- (id)imageForCategoryExtension:(id)arg1;
- (BOOL)categorySupportsMultipleSlices:(id)arg1;
- (id)sliceExtensionsForNavigableItems:(id)arg1 inCategory:(id)arg2 withWorkspaceDocument:(id)arg3;
- (id)categoryIdentifiersForEditorExtension:(id)arg1;
- (id)preferredCategoriesPersistenceKey;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

