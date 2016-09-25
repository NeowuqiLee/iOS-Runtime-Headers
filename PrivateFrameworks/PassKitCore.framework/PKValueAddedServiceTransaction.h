/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding> {
    BOOL  _didSucceed;
    int  _error;
    NSString * _identifier;
    PKValueAddedMerchant * _merchant;
    NSString * _merchantURL;
    NSNumber * _terminalApplicationVersion;
    int  _terminalMode;
    NSDate * _transactionDate;
}

@property (nonatomic) BOOL didSucceed;
@property (nonatomic) int error;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) PKValueAddedMerchant *merchant;
@property (nonatomic, retain) NSString *merchantURL;
@property (nonatomic, retain) NSNumber *terminalApplicationVersion;
@property (nonatomic) int terminalMode;
@property (nonatomic, retain) NSDate *transactionDate;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (BOOL)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (int)error;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)merchant;
- (id)merchantURL;
- (void)setDidSucceed:(BOOL)arg1;
- (void)setError:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMerchant:(id)arg1;
- (void)setMerchantURL:(id)arg1;
- (void)setTerminalApplicationVersion:(id)arg1;
- (void)setTerminalMode:(int)arg1;
- (void)setTransactionDate:(id)arg1;
- (id)terminalApplicationVersion;
- (int)terminalMode;
- (id)transactionDate;

@end