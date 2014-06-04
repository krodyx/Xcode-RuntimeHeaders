/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDEContinuousIntegrationBotMonitor-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSArray, NSMapTable, NSString;

@interface XCSWorkspaceBotMonitor : NSObject <DVTInvalidation, IDEContinuousIntegrationBotMonitor>
{
    BOOL _filterBotsToWorkspace;
    id _scmNotificationToken;
    DVTObservingToken *_serviceManagerServicesObservingToken;
    NSMapTable *_integrationCallbackBlocks;
    NSMapTable *_botStatusCallbackBlocks;
    NSMapTable *_integrationStatusUpdateObservers;
    NSMapTable *_botIntegrationUpdatesObservers;
    NSMapTable *_servicesConnectedObservers;
    IDEWorkspace *_workspace;
    NSArray *_bots;
}

+ (long long)resultForIntegrationID:(id)arg1;
+ (long long)currentStepForIntegrationID:(id)arg1;
+ (id)_activityStreamLogAspect;
+ (id)_workspaceBotMonitorLogAspect;
+ (void)initialize;
@property(copy, nonatomic) NSArray *bots; // @synthesize bots=_bots;
@property(retain, nonatomic) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (id)addBotIntegrationUpdatesObserver:(id)arg1 forBot:(id)arg2 updatesBlock:(id)arg3;
- (id)addStatusUpdatesObserver:(id)arg1 forIntegration:(id)arg2 updatesBlock:(id)arg3;
- (void)notifyClientsOfIntegrationStatusUpdates:(id)arg1 step:(long long)arg2 result:(long long)arg3;
- (void)notifyClientsOfIntegrationCreationOrDeletion:(id)arg1 botID:(id)arg2;
- (void)notifyClientsOfUpdatesToBot:(id)arg1;
- (void)updateBotClientsInService:(id)arg1;
- (void)filterBotsToWorkspace:(BOOL)arg1;
- (void)_updateBotsFromService:(id)arg1;
- (void)startObservingServiceManager;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
