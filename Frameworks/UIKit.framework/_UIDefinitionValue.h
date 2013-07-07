/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ASAsset, NSAttributedString, NSString;

__attribute__((visibility("hidden")))
@interface _UIDefinitionValue : NSObject
{
    NSString *_localizedDictionaryName;
    NSString *_term;
    NSAttributedString *_definition;
    ASAsset *_rawAsset;
}

@property(retain, nonatomic) ASAsset *rawAsset; // @synthesize rawAsset=_rawAsset;
@property(readonly) NSAttributedString *definition; // @synthesize definition=_definition;
@property(readonly) NSString *term; // @synthesize term=_term;
@property(readonly) NSString *localizedDictionaryName; // @synthesize localizedDictionaryName=_localizedDictionaryName;
- (id)description;
- (void)dealloc;
- (id)initWithLocalizedDictionaryName:(id)arg1 term:(id)arg2 definition:(id)arg3;

@end
