/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureDeviceFormat, AVCaptureDeviceInternal, NSArray, NSString;

@interface AVCaptureDevice : NSObject
{
    AVCaptureDeviceInternal *_internal;
}

+ (id)_devices;
+ (id)deviceWithUniqueID:(id)arg1;
+ (id)defaultDeviceWithMediaType:(id)arg1;
+ (id)devices;
+ (id)devicesWithMediaType:(id)arg1;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (BOOL)doesHandleNotification:(id)arg1;
- (void)setFigCaptureStreamFactoryTestProperty:(struct __CFString *)arg1 withValue:(void *)arg2 error:(id *)arg3;
- (void *)copyFigCaptureStreamFactoryTestProperty:(struct __CFString *)arg1 error:(id *)arg2;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(BOOL)arg1;
- (BOOL)automaticallyEnablesLowLightBoostWhenAvailable;
- (BOOL)isLowLightBoostEnabled;
- (BOOL)isLowLightBoostSupported;
- (BOOL)isYoMamaWearsCombatBootsSupported;
- (BOOL)HDRUsesPreBracketedFrameAsEV0;
- (BOOL)isHDRSupported;
- (float)videoZoomUpsamplingThreshold;
- (void)cancelVideoZoomRamp;
- (BOOL)isRampingVideoZoom;
- (void)rampToVideoZoomFactor:(float)arg1 withRate:(float)arg2;
- (void)setVideoZoomFactor:(float)arg1;
- (float)videoZoomFactor;
- (void)setContrast:(float)arg1;
- (float)contrast;
- (void)setSaturation:(float)arg1;
- (float)saturation;
- (void)setImageControlMode:(int)arg1;
- (int)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(BOOL)arg1;
- (BOOL)automaticallyAdjustsImageControlMode;
- (BOOL)isImageControlModeSupported:(int)arg1;
- (BOOL)isAdjustingWhiteBalance;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setWhiteBalanceMode:(int)arg1;
- (int)whiteBalanceMode;
- (BOOL)isWhiteBalanceModeSupported:(int)arg1;
- (BOOL)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)exposurePointOfInterest;
- (BOOL)isExposurePointOfInterestSupported;
- (void)setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(BOOL)arg1;
- (BOOL)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)exposureDuration;
- (void)setExposureMode:(int)arg1;
- (int)exposureMode;
- (BOOL)isExposureModeSupported:(int)arg1;
- (void)setSmoothAutoFocusEnabled:(BOOL)arg1;
- (BOOL)isSmoothAutoFocusEnabled;
- (BOOL)isSmoothAutoFocusSupported;
- (void)setManualFocusSupportEnabled:(BOOL)arg1;
- (BOOL)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (void)setAutoFocusRangeRestriction:(int)arg1;
- (int)autoFocusRangeRestriction;
- (BOOL)isAutoFocusRangeRestrictionSupported;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (BOOL)isAdjustingFocus;
- (struct CGPoint)focusPointOfInterest;
- (BOOL)isFocusPointOfInterestSupported;
- (void)setFocusMode:(int)arg1;
- (int)focusMode;
- (BOOL)isFocusModeSupported:(int)arg1;
- (BOOL)setTorchModeOnWithLevel:(float)arg1 error:(id *)arg2;
- (void)setTorchMode:(int)arg1;
- (int)torchMode;
- (BOOL)isTorchActive;
- (BOOL)isTorchAvailable;
- (BOOL)isTorchModeSupported:(int)arg1;
- (float)torchLevel;
- (BOOL)hasTorch;
- (void)setFlashMode:(int)arg1;
- (int)flashMode;
- (BOOL)isFlashModeSupported:(int)arg1;
- (BOOL)isFlashActive;
- (BOOL)isFlashAvailable;
- (BOOL)hasFlash;
- (int)position;
- (void)stopUsingDevice;
- (BOOL)startUsingDevice:(id *)arg1;
- (void)_stopUsingDevice;
- (BOOL)_startUsingDevice:(id *)arg1;
- (void)close;
- (BOOL)open:(id *)arg1;
- (BOOL)isOpen;
- (void)unlockForConfiguration;
- (BOOL)lockForConfiguration:(id *)arg1;
- (BOOL)isLockedForConfiguration;
- (struct OpaqueCMClock *)deviceClock;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(BOOL)arg2;
- (void)_setActiveVideoMaxFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 activeVideoMaxFrameDuration;
- (void)_setActiveVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
@property(nonatomic) CDStruct_1b6d18a9 activeVideoMinFrameDuration;
@property(retain, nonatomic) AVCaptureDeviceFormat *activeFormat;
@property(readonly, nonatomic) NSArray *formats;
@property(readonly, nonatomic, getter=isConnected) BOOL connected;
- (BOOL)isInUseByAnotherApplication;
- (BOOL)isMachineReadableCodeDetectionSupported;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDebugMetadataReportingEnabled;
- (int)faceRectangleAngle;
- (struct CGRect)faceRectangle;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(BOOL)arg1;
- (BOOL)isFaceDetectionDrivenImageProcessingEnabled;
- (BOOL)isFaceDetectionDuringVideoPreviewSupported;
- (BOOL)isFaceDetectionSupported;
- (void)setSubjectAreaChangeMonitoringEnabled:(BOOL)arg1;
- (BOOL)isSubjectAreaChangeMonitoringEnabled;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)setActiveInput:(id)arg1;
- (id)activeInput;
- (void)removeInput:(id)arg1;
- (BOOL)addInput:(id)arg1;
- (id)session;
- (BOOL)supportsAVCaptureSessionPreset:(id)arg1;
- (BOOL)hasMediaType:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) NSString *modelID;
@property(readonly, nonatomic) NSString *uniqueID;
- (id)description;
- (void)dealloc;
- (id)init;

@end

