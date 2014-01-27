/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEEditorDocument.h"

#import "IDEDocumentStructureProviding-Protocol.h"

@class NSArray;

@interface IDEQuickLookDocument : IDEEditorDocument <IDEDocumentStructureProviding>
{
    unsigned long long _numberOfPages;
}

+ (id)keyPathsForValuesAffectingIdeTopLevelStructureObjects;
@property unsigned long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (id)diffDataSource;
@property(readonly) NSArray *ideTopLevelStructureObjects;
- (BOOL)readFromFileWrapper:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)canSave;
- (id)objectSpecifier;

@end
