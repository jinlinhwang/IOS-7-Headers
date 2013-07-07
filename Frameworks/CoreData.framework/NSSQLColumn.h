/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CoreData/NSSQLProperty.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLColumn : NSSQLProperty
{
    NSString *_columnName;
    int _sqlType;
    unsigned int _precision;
    int _scale;
    unsigned int _fetchIndex;
    unsigned int _slot;
    unsigned int _allowAliasing;
}

- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (id)cloneForReadOnlyFetching;
- (void)setAllowAliasing:(BOOL)arg1;
- (BOOL)allowAliasing;
- (id)columnName;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (unsigned int)slot;
- (void)_setFetchIndex:(unsigned int)arg1;
- (unsigned int)fetchIndex;
- (void)_setSQLType:(unsigned int)arg1;
- (unsigned int)roughSizeEstimate;
- (unsigned int)sqlType;
- (void)setScale:(int)arg1;
- (int)scale;
- (void)setPrecision:(unsigned int)arg1;
- (unsigned int)precision;
- (void)_setColumnName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned int)arg2;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (id)initForReadOnlyFetching;

@end
