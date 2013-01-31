/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class NSString, SSAccount, NSDictionary, NSURL;

@interface HSMutableConnectionConfiguration : HSConnectionConfiguration  {
}

@property(retain) SSAccount * account;
@property(copy) NSDictionary * urlBag;
@property(copy) NSURL * baseURL;
@property(copy) NSString * buildIdentifier;
@property(copy) NSString * purchaseClientIdentifier;
@property(copy) NSDictionary * cookieHeaders;
@property(copy) NSString * userAgent;
@property long long requestReason;


- (void)setAccount:(id)arg1;
- (id)account;
- (void)setRequestReason:(long long)arg1;
- (void)setUrlBag:(id)arg1;
- (void)setCookieHeaders:(id)arg1;
- (void)setPurchaseClientIdentifier:(id)arg1;
- (void)setBuildIdentifier:(id)arg1;
- (id)urlBag;
- (id)cookieHeaders;
- (long long)requestReason;
- (id)purchaseClientIdentifier;
- (id)buildIdentifier;
- (void)setUserAgent:(id)arg1;
- (id)baseURL;
- (id)userAgent;
- (void)setBaseURL:(id)arg1;

@end