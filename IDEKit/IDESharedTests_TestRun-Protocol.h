/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;

@protocol IDESharedTests_TestRun <NSObject>
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_failureSummaries;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_UUID;
@property(readonly, nonatomic) NSImage *ide_sharedTests_statusImage;
@property(readonly, nonatomic) id <IDESharedTests_Device> ide_sharedTests_testedDevice;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testName;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetrics;

@optional
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_sharedTests_schemeActionsInvocationRecord;
@property(readonly, nonatomic) BOOL ide_sharedTests_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_schemeActionRunDestinationRecord;
- (void)ide_sharedTests_schemeActionsInvocationRecord:(id)arg1;
@end
