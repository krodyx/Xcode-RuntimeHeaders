/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IDERunnable, NSArray, NSMutableArray, NSMutableSet, NSSet;

@interface IDETestRunner : NSObject
{
    NSMutableArray *_skippedTests;
    NSMutableArray *_testResults;
    NSMutableSet *_runningTests;
    id <IDETestable> _testable;
    IDERunnable *_host;
    id <IDETestingSpecifier> _testingSpecifier;
}

+ (void)initialize;
@property(retain) IDERunnable *host; // @synthesize host=_host;
@property(retain) id <IDETestingSpecifier> testingSpecifier; // @synthesize testingSpecifier=_testingSpecifier;
@property(retain) id <IDETestable> testable; // @synthesize testable=_testable;
- (void).cxx_destruct;
- (void)willRunTest:(id)arg1;
- (void)didRunTest:(id)arg1 withResult:(id)arg2;
- (id)testOperationsForExecutionEnvironment:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 testOperationErrorBlock:(id)arg5 error:(void)arg6 launchParametersBlock:(id *)arg7;
- (id)testOperationsForExecutionEnvironment:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3 workspace:(id)arg4 error:(id *)arg5 launchParametersBlock:(id)arg6;
- (id)init;

// Remaining properties
@property(readonly) NSMutableArray *mutableRunningTests; // @dynamic mutableRunningTests;
@property(readonly) NSMutableArray *mutableSkippedTests; // @dynamic mutableSkippedTests;
@property(readonly) NSMutableArray *mutableTestResults; // @dynamic mutableTestResults;
@property(copy) NSSet *runningTests; // @dynamic runningTests;
@property(copy) NSArray *skippedTests; // @dynamic skippedTests;
@property(copy) NSArray *testResults; // @dynamic testResults;

@end

