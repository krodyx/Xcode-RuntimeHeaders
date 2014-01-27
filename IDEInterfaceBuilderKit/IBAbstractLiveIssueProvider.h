/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEIssueProvider.h"

@class DVTDelayedInvocation, DVTObservingToken, NSMutableSet, NSSet;

@interface IBAbstractLiveIssueProvider : IDEIssueProvider
{
    DVTDelayedInvocation *_batchedUpdateInvocation;
    DVTObservingToken *_openDocumentsChangedToken;
    BOOL _openDocumentsChanged;
    NSSet *_observedDocumentFilePaths;
    NSMutableSet *_changedDocumentFilePaths;
    id <DVTInvalidation> _fileReferenceObserverToken;
    NSMutableSet *_workspaceFilePaths;
    BOOL _workspaceContentChanged;
}

+ (int)providerType;
- (void).cxx_destruct;
- (id)documentDataTypeIdentifiers;
- (Class)documentClass;
- (id)ideModelObjectTypeIdentifier;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (void)processBatchedChanges:(id)arg1;
- (void)processDocumentIssues;
- (id)updatedIssuesForDocument:(id)arg1;
- (void)noticeOpenDocumentChanges;
- (void)invalidateWarningsForDocument:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;

@end
