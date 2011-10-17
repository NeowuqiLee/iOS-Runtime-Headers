/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaToolbox.framework/MediaToolbox
 */

@class FigVideoLayerInternal;

@interface FigVideoLayer : CALayer  {
    FigVideoLayerInternal *_videoLayer;
}


- (id)initWithLayer:(id)arg1;
- (void)_sendVideoLayerIsBeingServicedNotification;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)notificationBarrier;
- (BOOL)isVideoLayerBeingServiced;
- (void)finalize;
- (id)init;
- (void)dealloc;

@end