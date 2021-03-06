/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEBotExecution.h"

@class DVTDocumentLocation, DVTFileDataType, NSImage, NSString;

@interface IDEBotExecution (IDEKitAdditions)
+ (id)keyPathsForValuesAffectingSubtitle;
+ (id)keyPathsForValuesAffectingEndedTimeDisplayString;
+ (id)keyPathsForValuesAffectingStartedTimeDisplayString;
+ (id)keyPathsForValuesAffectingNavigableItem_progressValue;
+ (id)keyPathsForValuesAffectingShourtTitle;
+ (id)keyPathsForValuesAffectingTitle;
- (id)buildFileWithStatusCollectionWithPaths:(id)arg1 withRelativeBase:(id)arg2;
- (void)buildSourceControlDatasourceFromCommitInfo:(id)arg1 workspace:(id)arg2 completionBlock:(id)arg3;
- (void)sourceControlInformationForWorkspace:(id)arg1 completionBlock:(id)arg2;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *endedTimeDisplayString;
@property(readonly, nonatomic) NSString *startedTimeDisplayString;
@property(readonly, nonatomic) long long navigableItem_progressValue;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) NSString *shortTitle;
@property(readonly, nonatomic) NSString *title;
@end

