/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <QuickLook/QLPreviewParts.h>

@interface QLBasePreviewParts : QLPreviewParts
{
}

+ (void *)dataCallbackForUTI:(id)arg1 andSize:(unsigned int)arg2;
+ (void *)urlCallbackForUTI:(id)arg1;
+ (BOOL)isBundleURL:(id)arg1;
+ (BOOL)canConvertDocumentType:(id)arg1;
- (void)computePreview;

@end
