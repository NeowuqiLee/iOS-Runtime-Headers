/* Generated by RuntimeBrowser.
 */

@protocol SCNAnimatable <NSObject>

@required

- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (BOOL)isAnimationForKeyPaused:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAnimationForKey:(NSString *)arg1 fadeOutDuration:(float)arg2;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)setSpeed:(float)arg1 forAnimationKey:(NSString *)arg2;

@end