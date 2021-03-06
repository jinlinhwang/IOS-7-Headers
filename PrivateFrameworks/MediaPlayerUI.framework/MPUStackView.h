/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSArray, NSMutableArray, NSString, UIWindow;

@interface MPUStackView : UIView
{
    int _distanceIgnoreCount;
    NSMutableArray *_items;
    UIWindow *_window;
    id <MPUStackViewDataSource> _dataSource;
    Class _itemClass;
    NSString *_itemReuseIdentifier;
    int _numberOfItems;
    UIView *_perspectiveTargetView;
    struct CGSize _baseSize;
    struct UIOffset _maximumRelativeOffsetStep;
    struct CGSize _sizeInsetStep;
    struct CGPoint _vanishingPoint;
}

@property(nonatomic) struct CGPoint vanishingPoint; // @synthesize vanishingPoint=_vanishingPoint;
@property(nonatomic) struct CGSize sizeInsetStep; // @synthesize sizeInsetStep=_sizeInsetStep;
@property(nonatomic) __weak UIView *perspectiveTargetView; // @synthesize perspectiveTargetView=_perspectiveTargetView;
@property(readonly, nonatomic) int numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) struct UIOffset maximumRelativeOffsetStep; // @synthesize maximumRelativeOffsetStep=_maximumRelativeOffsetStep;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *itemReuseIdentifier; // @synthesize itemReuseIdentifier=_itemReuseIdentifier;
@property(readonly, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) __weak id <MPUStackViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) struct CGSize baseSize; // @synthesize baseSize=_baseSize;
- (void).cxx_destruct;
- (struct UIOffset)_relativeOffsetForMinimumRelativeOffset:(struct UIOffset)arg1 maximumRelativeOffset:(struct UIOffset)arg2 normalizedDistanceFromVanishingPoint:(struct CGSize)arg3;
- (struct CGSize)_normalizedDistanceFromVanishingPointForCenter:(struct CGPoint)arg1 perspectiveTargetView:(id)arg2;
- (id)_dequeueReusableItem;
- (struct CGPoint)_centerInPerspectiveTargetViewCoordinates;
- (void)_applyLayoutToItem:(id)arg1 atIndex:(int)arg2 centerInPerspectiveTargetViewCoordinates:(struct CGPoint)arg3;
- (void)updateForChangedDistanceFromVanishingPoint;
- (struct CGSize)sizeOfItemAtIndex:(float)arg1;
- (void)reloadDataWithTransition:(int)arg1;
- (void)reloadData;
- (struct UIOffset)relativeOffsetOfItemAtIndex:(float)arg1 withCenter:(struct CGPoint)arg2;
- (id)itemAtIndex:(int)arg1;
- (void)endIgnoringDistanceUpdates;
- (void)beginIgnoringDistanceUpdates;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 itemClass:(Class)arg2 itemReuseIdentifier:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

