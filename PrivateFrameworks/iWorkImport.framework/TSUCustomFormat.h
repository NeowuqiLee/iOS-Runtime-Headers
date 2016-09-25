/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUCustomFormat : NSObject <NSCopying, NSMutableCopying> {
    NSMutableArray * mConditionList;
    TSUCustomFormatData * mDefaultFormatData;
    NSString * mFormatName;
    NSString * mFormatNameStem;
    NSString * mFormatNameTag;
    int  mFormatType;
}

@property (nonatomic, readonly) unsigned int conditionCount;
@property (nonatomic, readonly) NSMutableArray *conditionList;
@property (nonatomic, readonly) TSUCustomFormatData *defaultFormatData;
@property (nonatomic, readonly) NSString *formatName;
@property (nonatomic, readonly) NSString *formatNameStem;
@property (nonatomic, readonly) NSString *formatNameTag;
@property (nonatomic, readonly) int formatType;

- (unsigned int)conditionCount;
- (id)conditionList;
- (id)conditionalFormatAtIndex:(unsigned int)arg1;
- (id)conditionalFormatDataForKey:(unsigned int)arg1;
- (id)conditionalFormatDataForValue:(double)arg1;
- (id)conditionalFormatDataForValue:(double)arg1 outKey:(unsigned int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFormatWithNewName:(id)arg1;
- (void)dealloc;
- (id)defaultFormatData;
- (id)description;
- (id)formatName;
- (id)formatNameStem;
- (id)formatNameTag;
- (int)formatType;
- (id)formattedBodyStringForDoubleValue:(double)arg1 customFormatListKey:(id)arg2 formatType:(int)arg3 locale:(id)arg4;
- (unsigned int)hash;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3;
- (id)initWithName:(id)arg1 formatType:(int)arg2 data:(id)arg3 conditionList:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualWithStemNameMatching:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)p_addConditionOfType:(int)arg1 value:(double)arg2 data:(id)arg3;
- (BOOL)p_isEqual:(id)arg1 matchingFullName:(BOOL)arg2;
- (void)p_makeFormatNameStemAndTag;

@end