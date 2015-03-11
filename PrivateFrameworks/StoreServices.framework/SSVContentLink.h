/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber, NSString, NSURL;

@interface SSVContentLink : NSObject {
    NSString *_categoryName;
    long long _contentKind;
    NSNumber *_itemIdentifier;
    NSString *_itemTitle;
    NSString *_providerName;
    NSString *_searchTerm;
    long long _targetApplication;
}

@property(readonly) NSURL * URL;
@property(copy) NSString * categoryName;
@property long long contentKind;
@property(copy) NSNumber * itemIdentifier;
@property(copy) NSString * itemTitle;
@property(copy) NSString * providerName;
@property(copy) NSString * searchTerm;
@property long long targetApplication;

- (void).cxx_destruct;
- (id)URL;
- (id)_URLSchemeWithApplication:(long long)arg1;
- (id)_stringForContentKind:(long long)arg1;
- (long long)_targetApplicationWithContentKind:(long long)arg1;
- (id)categoryName;
- (long long)contentKind;
- (id)itemIdentifier;
- (id)itemTitle;
- (id)providerName;
- (id)searchTerm;
- (void)setCategoryName:(id)arg1;
- (void)setContentKind:(long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setTargetApplication:(long long)arg1;
- (long long)targetApplication;

@end