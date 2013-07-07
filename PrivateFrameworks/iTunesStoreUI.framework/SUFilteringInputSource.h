/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUInputSource.h>

@class SUFilteringDataConsumer;

@interface SUFilteringInputSource : SUInputSource
{
    id <SUCollectingDataConsumer> _dataCollector;
    SUFilteringDataConsumer *_dataConsumer;
    SUInputSource *_inputSource;
}

@property(readonly, nonatomic) SUInputSource *inputSource; // @synthesize inputSource=_inputSource;
@property(readonly, nonatomic) SUFilteringDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id *)arg3;
- (BOOL)open:(id *)arg1;
- (unsigned int)minimumReadLength;
- (BOOL)hasBytesAvailable;
- (long long)expectedLength;
- (void)close;
- (void)dealloc;
- (id)initWithInputSource:(id)arg1 dataConsumer:(id)arg2;

@end
