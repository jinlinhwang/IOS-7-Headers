/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

@class NSMutableDictionary;

@interface PUCollectionViewLayoutCache : UICollectionViewLayout
{
    NSMutableDictionary *_itemLayoutAttributesByIndexPath;
    NSMutableDictionary *_supplementaryViewLayoutAttributesByKind;
    NSMutableDictionary *_decorationViewLayoutAttributesByKind;
    id <PUCollectionViewLayoutProvider> _layoutProvider;
    struct {
        unsigned int hasSupplementaryLayoutAttributes:1;
        unsigned int hasDecorationLayoutAttributes:1;
    } _layoutProviderFlags;
    BOOL _cachesResults;
}

@property(nonatomic) BOOL cachesResults; // @synthesize cachesResults=_cachesResults;
@property(readonly, nonatomic) id <PUCollectionViewLayoutProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
- (void).cxx_destruct;
- (void)invalidateLayoutCache;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;
- (id)initWithProvider:(id)arg1;

@end
