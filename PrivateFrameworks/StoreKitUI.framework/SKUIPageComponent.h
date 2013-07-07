/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface SKUIPageComponent : NSObject
{
    NSString *_metricsLocationIdentifier;
}

- (void)_setMetricsLocationIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *metricsLocationIdentifier; // @synthesize metricsLocationIdentifier=_metricsLocationIdentifier;
- (void).cxx_destruct;
- (void)_enumerateMissingItemIdentifiersFromLockups:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromLinks:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
- (void)_enumerateMissingItemIdentifiersFromBricks:(id)arg1 startIndex:(int)arg2 usingBlock:(id)arg3;
@property(readonly, nonatomic) NSString *metricsElementName;
@property(readonly, nonatomic, getter=isMissingItemData) BOOL missingItemData;
- (void)enumerateMissingItemIdentifiersFromIndex:(int)arg1 usingBlock:(id)arg2;
@property(readonly, nonatomic) int componentType;
- (id)initWithFeaturedContentContext:(id)arg1 kind:(int)arg2;
- (id)initWithCustomPageContext:(id)arg1;

@end
