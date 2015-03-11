/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@class NSMapTable, NSObject<OS_dispatch_queue>, NSString, NSUUID, NSXPCConnection;

@interface LSUserActivityManager : NSObject <LSUserActivityClientResponseProtocol> {
    NSUUID *_activeUserActivityUUID;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_serverQ;
    NSMapTable *_userActivitiesByUUID;
    bool_activityContinuationIsEnabled;
    bool_connectionInitializationSucceeded;
    bool_needToSendInitialMessage;
    bool_supportsActivityContinuation;
}

@property(copy) NSUUID * activeUserActivityUUID;
@property(readonly) bool activityContinuationIsEnabled;
@property(retain,readonly) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) NSObject<OS_dispatch_queue> * serverQ;
@property(readonly) Class superclass;
@property(readonly) bool supportsActivityContinuation;
@property(retain) NSMapTable * userActivitiesByUUID;

+ (id)defaultManager;
+ (bool)shouldSupportActivityContinuation;
+ (bool)userActivityContinuationSupported;

- (id)_findUserActivityForUUID:(id)arg1;
- (id)activeUserActivityUUID;
- (bool)activityContinuationIsEnabled;
- (void)addUserActivity:(id)arg1;
- (void)askClientUserActivityToSave:(id)arg1 completionHandler:(id)arg2;
- (void)askClientUserActivityToSave:(id)arg1;
- (id)connection;
- (id)createByDecodingUserActivity:(id)arg1;
- (void)dealloc;
- (void)didReceiveInputStreamWithUUID:(id)arg1 inputStream:(id)arg2 outputStream:(id)arg3;
- (id)encodeUserActivity:(id)arg1;
- (void)fetchUUID:(id)arg1 withCompletionHandler:(id)arg2;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)makeActive:(id)arg1;
- (void)makeInactive:(id)arg1;
- (void)markUserActivityAsDirty:(id)arg1 forceImmediate:(bool)arg2;
- (void)removeUserActivity:(id)arg1;
- (void)sendInitialMessage;
- (void)sendUserActivityInfoToLSUserActivityd:(id)arg1 makeCurrent:(bool)arg2;
- (id)serverQ;
- (void)setActiveUserActivityUUID:(id)arg1;
- (void)setUserActivitiesByUUID:(id)arg1;
- (bool)supportsActivityContinuation;
- (void)tellClientUserActivityItWasResumed:(id)arg1;
- (void)tellDaemonAboutNewLSUserActivity:(id)arg1;
- (id)userActivitiesByUUID;
- (bool)userActivityIsActive:(id)arg1;

@end