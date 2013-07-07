/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface MBAggregateDictionary : NSObject
{
    NSMutableDictionary *_scalars;
}

+ (void)pushValue:(double)arg1 forDistributionKey:(id)arg2;
+ (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
+ (void)incrementScalarKey:(id)arg1;
- (void)save;
- (void)addCountAndSizeOfFile:(id)arg1;
- (void)_addScalarValue:(unsigned long long)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *scalars;
- (void)dealloc;
- (id)init;

@end
