/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol GQZArchiveInputStream <NSObject>
- (long long)size;
- (void)readFromOffset:(long long)arg1 size:(unsigned long)arg2 buffer:(char *)arg3;
- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long)arg2 end:(long long)arg3 readSize:(unsigned int *)arg4;
@end
