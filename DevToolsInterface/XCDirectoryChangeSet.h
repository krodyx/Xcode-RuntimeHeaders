/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDirectoryEnumerator, NSMutableDictionary, NSMutableSet, NSNotification, NSString;

@interface XCDirectoryChangeSet : NSObject
{
    NSString *_dir1;
    NSString *_dir2;
    NSMutableDictionary *_dir1FileAttributes;
    NSMutableDictionary *_dir2FileAttributes;
    NSMutableDictionary *_dir1FileTypes;
    NSMutableDictionary *_dir2FileTypes;
    NSDirectoryEnumerator *_dir1Enum;
    NSDirectoryEnumerator *_dir2Enum;
    NSNotification *_scanNotice;
    NSMutableSet *_unprocessedFiles;
    NSMutableSet *_entriesToIgnore;
    NSMutableSet *_addedEntries;
    NSMutableSet *_deletedEntries;
    NSMutableSet *_replacedEntries;
    NSMutableSet *_attributesChangedEntries;
    NSMutableSet *_addedFiles;
    NSMutableSet *_deletedFiles;
    NSMutableSet *_changedFiles;
    NSMutableSet *_allFiles;
    BOOL _compareFileContents;
    NSMutableSet *_uncomparedChangedFiles;
    BOOL _skipHidden;
    BOOL _skipXcodeGenerated;
    BOOL _recursiveScan;
}

- (BOOL)hasChanges;
- (id)dir2;
- (id)dir1;
- (id)deletedFiles;
- (id)addedFiles;
- (id)replacedEntries;
- (id)changedFiles;
- (id)attributesChangedEntries;
- (id)deletedEntries;
- (id)addedEntries;
- (id)dir2FileTypeForEntry:(id)arg1;
- (id)dir1FileTypeForEntry:(id)arg1;
- (id)allDir2Entries;
- (id)allDir1Entries;
- (void)_endComparing;
- (void)_beginComparing;
- (void)_collectAttributesForEntries:(id)arg1 fromAttributes:(id)arg2 toFileTypes:(id)arg3;
- (void)_doFileComparison:(id)arg1;
- (void)_processScannedFiles:(id)arg1;
- (void)_doSomeScanning:(id)arg1;
- (BOOL)_processSomeFiles:(id)arg1 usingDict:(id)arg2 addToSet:(id)arg3;
- (BOOL)_shouldIgnoreEntry:(id)arg1;
- (void)ignoreEntries:(id)arg1;
- (void)stopScanning;
- (void)startScanning;
- (id)description;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1 andDirectory:(id)arg2 compareFileContents:(BOOL)arg3 recursiveScan:(BOOL)arg4 skipHidden:(BOOL)arg5 skipXcodeGenerated:(BOOL)arg6;
- (id)initWithDirectory:(id)arg1 andDirectory:(id)arg2;

@end

