/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEAttributedStringControlTextViewDelegate-Protocol.h"
#import "IDEGroupedSegmentedControlDelegate-Protocol.h"
#import "IDEParagraphStylePopoverControllerDelegate-Protocol.h"

@class DVTFontTextField, DVTSegmentColorWell, DVTStackBacktrace, IDEAttributedStringControlParagraphStylePopoverController, IDEAttributedStringControlTextView, IDEGroupedSegmentedControl, IDEGroupedSegmentedControlGroup, IDEGroupedSegmentedControlItem, NSAttributedString, NSPopover, NSScrollView, NSStepper, NSString;

@interface IDEAttributedStringControl : DVTLayoutView_ML <IDEGroupedSegmentedControlDelegate, IDEParagraphStylePopoverControllerDelegate, IDEAttributedStringControlTextViewDelegate, DVTInvalidation>
{
    NSScrollView *_scrollView;
    IDEAttributedStringControlTextView *_textView;
    DVTFontTextField *_fontControl;
    NSStepper *_fontControlStepper;
    IDEGroupedSegmentedControl *_attributesStrip;
    DVTSegmentColorWell *_foregroundColorOverlay;
    DVTSegmentColorWell *_backgroundColorOverlay;
    IDEGroupedSegmentedControlGroup *_alignmentGroup;
    IDEGroupedSegmentedControlGroup *_colorGroup;
    IDEGroupedSegmentedControlGroup *_moreGroup;
    IDEGroupedSegmentedControlItem *_leftAlignmentItem;
    IDEGroupedSegmentedControlItem *_centerAlignmentItem;
    IDEGroupedSegmentedControlItem *_rightAlignmentItem;
    IDEGroupedSegmentedControlItem *_justifiedAlignmentItem;
    IDEGroupedSegmentedControlItem *_naturalAlignmentItem;
    IDEGroupedSegmentedControlItem *_foregroundColorItem;
    IDEGroupedSegmentedControlItem *_backgroundColorItem;
    IDEGroupedSegmentedControlItem *_moreItem;
    NSPopover *_paragraphStylePopover;
    IDEAttributedStringControlParagraphStylePopoverController *_paragraphStylePopoverController;
    long long numberOfEdits;
    id _target;
    SEL _action;
}

+ (void)initialize;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)frameToPlaceView:(id)arg1 afterView:(id)arg2 withGap:(double)arg3;
- (void)layoutScrollView;
- (struct CGSize)textViewSizeForContainerSize:(struct CGSize)arg1;
- (struct CGSize)updateContainerLayoutAndComputeBounds;
- (struct CGSize)textContainerSize;
- (double)textViewWidth;
- (BOOL)isFlipped;
- (void)textDidEndEditing:(id)arg1;
- (void)textViewDidCommitEditing:(id)arg1;
- (void)paragraphStylePopoverControllerDidChangeAttributes:(id)arg1;
- (void)incrementFontSize:(id)arg1;
- (void)fontWellUpdated:(id)arg1;
- (void)changeBackgroundColor:(id)arg1;
- (void)changeForegroundColor:(id)arg1;
- (void)updateSelectedRangesWithValue:(id)arg1 forAttribute:(id)arg2;
- (void)groupedSegmentedControl:(id)arg1 userClickedItem:(id)arg2 inGroup:(id)arg3;
- (void)applyValueFromFontControl;
- (void)commitUpdatedAttributedStringValueToModelIfNeeded;
- (void)commitUpdatedAttributedStringValueToModel;
- (void)pushFontValue:(id)arg1 toFontWell:(id)arg2;
- (void)pushColorValue:(id)arg1 toColorWell:(id)arg2;
- (void)textDidChange:(id)arg1;
- (void)textViewDidChangeTypingAttributes:(id)arg1;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)refreshAttributeControls;
- (id)paragraphEditingProxiesForSelection;
- (id)attributeValuesInSelectionForAttribute:(id)arg1;
- (void)enumerateSelectedRangesForAttribute:(id)arg1 withBlock:(id)arg2;
- (void)enumerateSelectedParagraphsWithBlock:(id)arg1;
- (void)enumeratePargraphsInRange:(struct _NSRange)arg1 withBlock:(id)arg2;
- (id)rangesToScanForAttributes;
@property(copy) NSAttributedString *attributedStringValue;
- (id)defaultTypingAttributes;
@property(copy) NSString *placeholder;
- (void)awakeFromNib;
- (void)setupPargraphStylePopUp;
- (void)setupAttributesStrip;
- (void)setupColorWells;
- (void)setupLayout;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

