/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXBundleIdSet : NSObject {
    _DECAsset * _asset;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    }  _lock;
    struct _CFBurstTrie { } * _trie;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (BOOL)containsBundleId:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (struct _CFBurstTrie { }*)trie;

@end