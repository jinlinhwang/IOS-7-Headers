/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSCountedSet, NSMutableDictionary;

@interface BBAttachments : NSObject <NSCopying, NSCoding>
{
    int primaryType;
    NSCountedSet *_additionalAttachments;
    NSMutableDictionary *_clientSideComposedImageInfos;
}

@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos; // @synthesize clientSideComposedImageInfos=_clientSideComposedImageInfos;
@property(retain, nonatomic) NSCountedSet *additionalAttachments; // @synthesize additionalAttachments=_additionalAttachments;
@property(nonatomic) int primaryType; // @synthesize primaryType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqualToAttachments:(id)arg1;
- (unsigned int)numberOfAdditionalAttachmentsOfType:(int)arg1;
- (unsigned int)numberOfAdditionalAttachments;
- (void)addAttachmentOfType:(int)arg1;
- (void)dealloc;

@end
