/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCNetworkFeedbackController : NSObject <WCMClientDelegate, WRMClientDelegate> {
    VCWCMClient * _WCMClient;
    WRMClient * _WRMClient;
    unsigned int  _clientTargetBitrate;
    unsigned int  _clientTargetBitrateCap;
    VCConnectionManager * _connectionManager;
    VCRecommendedNetworkSettings * _recommendedSettings;
    <VCNetworkFeedbackControllerDelegate> * _weakDelegate;
}

@property unsigned int clientTargetBitrate;
@property unsigned int clientTargetBitrateCap;
@property (readonly) unsigned int recommendedTargetBitrateCap;

- (void)cleanupWCMClient;
- (void)cleanupWRMClient;
- (unsigned int)clientTargetBitrate;
- (unsigned int)clientTargetBitrateCap;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 connectionManager:(id)arg2;
- (unsigned int)recommendedTargetBitrateCap;
- (void)requestWRMNotification;
- (void)setClientTargetBitrate:(unsigned int)arg1;
- (void)setClientTargetBitrateCap:(unsigned int)arg1;
- (void)setWRMMetricConfig:(struct { unsigned long long x1; }*)arg1;
- (void)setWRMNotification:(struct { int x1; int x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; }*)arg1;
- (void)setupWCMClient;
- (void)setupWRMClient;
- (void)start;
- (void)stop;
- (id)strongDelegate;
- (void)wcmGetCallConfig:(unsigned int*)arg1 targetBitrate:(unsigned int*)arg2;
- (void)wcmSetCallConfig:(unsigned int)arg1 interferenceLevel:(unsigned int)arg2;

@end