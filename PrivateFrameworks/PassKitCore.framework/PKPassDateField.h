/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <PassKitCore/PKPassField.h>

@interface PKPassDateField : PKPassField
{
    BOOL _isRelative;
    BOOL _ignoresTimeZone;
    int _dateStyle;
    int _timeStyle;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL ignoresTimeZone; // @synthesize ignoresTimeZone=_ignoresTimeZone;
@property(nonatomic) BOOL isRelative; // @synthesize isRelative=_isRelative;
@property(nonatomic) int timeStyle; // @synthesize timeStyle=_timeStyle;
@property(nonatomic) int dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
