/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DuetLoggerProtocol.h"
#import "DuetSaveAndRestore.h"

@class AppLaunchStatsAppWorkSpace, AppLaunchStatsDelayLaunch, AppLaunchStatsLaunchQueue, AppLaunchStatsREventHandler, AppLaunchStatsSBMonitor, AppLaunchStatsSBSettings, AppLaunchStatsSaveAndRestore, AppLaunchStatsScheduler, AppLaunchStatsState, AppLaunchStatsStateHandlerQueue, BudgetPool, NSDate, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSObject<OS_xpc_object>, NSRunLoop, NSString;

@interface AppLaunchStats : NSObject <DuetLoggerProtocol, DuetSaveAndRestore>
{
    AppLaunchStatsState *aplsState;
    AppLaunchStatsAppWorkSpace *aplsAppWorkSpace;
    AppLaunchStatsDelayLaunch *aplsDelayLaunch;
    AppLaunchStatsLaunchQueue *aplsLaunchQueue;
    AppLaunchStatsSaveAndRestore *aplsSaveAndRestore;
    AppLaunchStatsSBMonitor *aplsSBMonitor;
    AppLaunchStatsSBSettings *aplsSBSettings;
    AppLaunchStatsStateHandlerQueue *aplsStateHandlerQueue;
    AppLaunchStatsREventHandler *aplsREventHandler;
    id pendingHandler;
    id recommendHandler;
    AppLaunchStatsScheduler *aplsScheduler;
    BudgetPool *topicLimiter;
    int messageStatus;
    int resourceStatus;
    NSDate *lastExternalTrigTime;
    NSDate *timeOfLastFetch;
    NSDate *oneHourBudgetReset;
    NSNumber *batteryCapacity;
    NSRunLoop *aplsRunLoop;
    NSString *fakeBundleID;
    _Bool isClassCLocked;
    _Bool isAppForecastUpdating;
    _Bool isDataBudgetUpdating;
    _Bool isInternalInstall;
    _Bool isPowerBudgetsUpdating;
    _Bool lastFetchWasTooLongAgo;
    _Bool disableFetch;
    _Bool disableHighPriorityPush;
    _Bool disableLowPriorityPush;
    _Bool disableTrending;
    int lockStateToken;
    int whiteListAppToken;
    int externalTrigToken;
    int resourceToken;
    int trendToken;
    int pushToken;
    int configToken;
    int aplsNotifyToken;
    int semaphoreSigToken;
    int classCLockedToken;
    NSObject<OS_dispatch_queue> *appLaunchStatDQueue;
    NSObject<OS_dispatch_queue> *delegateQueue;
    NSObject<OS_dispatch_queue> *pendingQueue;
    NSObject<OS_dispatch_source> *theTimer;
    NSObject<OS_dispatch_semaphore> *lowPriorityPushSemaphore;
    NSObject<OS_xpc_object> *conn;
    id <AppLaunchStatsDelegate> delegate;
}

@property(readonly, nonatomic) NSObject<OS_xpc_object> *conn; // @synthesize conn;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pendingQueue; // @synthesize pendingQueue;
@property(readonly, nonatomic) id pendingHandler; // @synthesize pendingHandler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *appLaunchStatDQueue; // @synthesize appLaunchStatDQueue;
@property(readonly, nonatomic) AppLaunchStatsState *aplsState; // @synthesize aplsState;
- (void).cxx_destruct;
- (void)logLight:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)logAll:(struct __aslclient *)arg1 withMsg:(struct __aslmsg *)arg2 withLevel:(int)arg3;
- (void)save:(id)arg1;
- (void)restore:(id)arg1;
- (void)aplsSBMonitorEvent:(int)arg1;
- (void)setDelayLaunchFor:(id)arg1 with:(double)arg2;
- (void)receiveIncomingLowPriorityPushRequestForReservationStation:(id)arg1;
- (void)receiveIncomingLowPriorityPushList:(id)arg1;
- (void)receiveBatteryNotification:(id)arg1;
- (void)setPendingWorkQueue:(id)arg1;
- (_Bool)isSpringBoardInstance;
- (id)convertTopicIDtoBundleID:(id)arg1;
- (id)doConvertTopicString:(id)arg1 withRange:(struct _NSRange)arg2 withSubStringIndex:(unsigned int)arg3;
- (void)removeAppFromLST:(id)arg1;
- (_Bool)hasOpportunisticFetchFeatureWithType:(id)arg1 withFetch:(int)arg2;
- (_Bool)hasOpportunisticFetchFeature:(id)arg1;
- (void)trendQueryLaunchApp:(id)arg1;
- (void)registerAppForTrending:(id)arg1;
- (void)updateTrendingBehavior:(unsigned long long)arg1 withBundleID:(id)arg2;
- (id)defaultsDomainReadString:(id)arg1;
- (void)updateStateFromExternalNotification:(unsigned long long)arg1;
- (void)updateResourceAvailabilityNow:(unsigned long long)arg1;
- (void)updateResourceAvailability;
- (void)updateAliveList;
- (void)setup_lstconnection;
- (void)updateAppAlivelist;
- (void)stopDataTransferWithBudgetHandler:(const char *)arg1 seqnum:(long long)arg2 handler:(id)arg3;
- (void)energyForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id)arg4;
- (void)dataForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 completionHandler:(id)arg4;
- (void)testDatabaseAge:(id)arg1;
- (void)modifyPoolValue:(id)arg1 number:(long long)arg2;
- (void)carryDailyBudget:(id)arg1 completionHandler:(id)arg2;
- (void)appActivityForecastStartingOnDate:(id)arg1 duration:(double)arg2 granularity:(int)arg3 appFilter:(id)arg4 completionHandler:(id)arg5;
- (void)retrieveAppScoresWithQueryHandler:(id)arg1;
- (void)retrieveAppScoresWithHandler:(id)arg1;
- (void)sendLSTxtqueriesWithMask:(unsigned long long)arg1;
- (void)setAppLaunchStatsPendingHandler:(id)arg1 queue:(void)arg2;
- (void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingDelegate:(id)arg1 queue:(id)arg2;
- (void)triggerLaunchQueue:(id)arg1;
- (void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
- (void)updateDailyPowerBudgets;
- (int)bundlePredictionZone:(id)arg1 launchzone:(int)arg2;
- (long long)energyPCtoMWH:(float)arg1;
- (void)updateDailyDataBudget;
- (void)updateDailyAppForecast;
- (void)onTick;
- (void)setAppLaunchRecommendationHandler:(id)arg1;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned int)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(id)arg3;
- (void)resetBudgetPool;
- (void)updatePowerBudgetPool;
- (void)whatToLaunch:(id)arg1;
- (void)replaceTimeSlot:(id)arg1;
- (void)testOneHourBudgetExpirytime;
- (void)runPCtimerHeartBeat:(_Bool)arg1;
- (void)launchExternalTriggers:(unsigned long long)arg1;
- (void)reloadConfiguration;
- (void)initSharedNotification;
- (void)initRegisterNotifications;
- (void)dealloc;
- (id)init;

@end
