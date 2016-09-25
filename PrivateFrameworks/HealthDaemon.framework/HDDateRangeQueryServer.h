/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDateRangeQueryServer : HDQueryServer <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDProfile * _profile;
    BOOL  _resultsDirty;
    NSMutableSet * _sampleTypesToReFetch;
    NSMutableDictionary * _timePeriodsBySampleType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deliverErrorToClient:(id)arg1;
- (void)_queue_protectedDataBecameAvailable;
- (void)_queue_samplesAdded:(id)arg1;
- (void)_queue_samplesOfTypesWereRemoved:(id)arg1;
- (void)_queue_sendUpdatedResultsToClient;
- (void)_queue_start;
- (id)_queue_timePeriodForType:(id)arg1;
- (void)_queue_updateTimePeriodsForSampleTypes:(id)arg1;
- (id)_sampleTypeFromNumber:(id)arg1;
- (BOOL)_shouldListenForUpdates;
- (BOOL)_shouldObserveAllSampleTypes;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;

@end