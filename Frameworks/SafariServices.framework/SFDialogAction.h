/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFDialogAction : NSObject {
    long long  _actionType;
    long long  _activatingKeyboardShortcut;
    NSString * _title;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) long long activatingKeyboardShortcut;
@property (nonatomic, readonly) NSString *title;

+ (id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;

- (void).cxx_destruct;
- (long long)actionType;
- (long long)activatingKeyboardShortcut;
- (id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;
- (id)title;

@end
