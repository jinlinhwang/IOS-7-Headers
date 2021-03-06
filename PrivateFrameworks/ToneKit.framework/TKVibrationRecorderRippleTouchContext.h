/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@interface TKVibrationRecorderRippleTouchContext : NSObject
{
    float _speed;
    double _creationTimestamp;
    CDStruct_6e3f967a _location;
}

@property(nonatomic, setter=_setSpeed:) float _speed; // @synthesize _speed;
@property(nonatomic, setter=_setLocation:) CDStruct_6e3f967a _location; // @synthesize _location;
@property(nonatomic, setter=_setCreationTimestamp:) double _creationTimestamp; // @synthesize _creationTimestamp;
- (void)reset;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CDStruct_6e3f967a)arg2 speed:(float)arg3;
- (void)configureWithTimeIntervalSinceCreation:(double)arg1 location:(CDStruct_6e3f967a)arg2;
- (double)timeIntervalSinceCreation;
@property(readonly, nonatomic) float speed;
@property(readonly, nonatomic) CDStruct_6e3f967a location;
- (id)init;

@end

