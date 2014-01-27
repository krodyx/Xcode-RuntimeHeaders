/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEInspectorProperty.h"

@class NSArray;

@interface IBAbstractSizeInspectorProperty : IDEInspectorProperty
{
}

+ (id)keyPathsForValuesAffectingEnableHorizontalSizing;
+ (id)keyPathsForValuesAffectingEnableVerticalSizing;
+ (id)keyPathsForValuesAffectingEnableOriginChanges;
+ (id)keyPathsForValuesAffectingInspectedDocumentObjects;
@property(readonly) BOOL enableHorizontalSizing;
@property(readonly) BOOL enableVerticalSizing;
@property(readonly) BOOL enableOriginChanges;
@property(readonly) NSArray *inspectedDocumentObjects;
- (id)inspectorController;

@end
