/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@class NSNumberFormatter, UIImageView, UILabel;

@interface PLProgressView : UIView
{
    UIImageView *_backgroundView;
    UILabel *_labelView;
    UIImageView *_progressView;
    UIImageView *_wellView;
    unsigned int _didLayout:1;
    unsigned int _didSetPermanantTextOnLabelView:1;
    NSNumberFormatter *_progressFormatter;
    float _percentComplete;
}

@property(nonatomic) float percentComplete;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLabelText:(id)arg1;
- (void)_updateProgressView;
- (void)updateUIForPublishingAgent:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;

@end

