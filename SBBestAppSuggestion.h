/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString, NSDate;

@interface SBBestAppSuggestion : NSObject

@property (copy,readonly) NSUUID * uniqueIdentifier; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSString * activityType; 
@property (copy,readonly) NSDate * lastUpdateTime; 
@property (copy,readonly) NSString * originatingDeviceIdentifier; 
@property (copy,readonly) NSString * originatingDeviceName; 
@property (copy,readonly) NSString * originatingDeviceType; 
-(BOOL)isSiriSuggestion;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isPrediction;
-(BOOL)isFirstWakePrediction;
-(BOOL)isCarPlayPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isBluetoothPrediction;
-(BOOL)isNotificationSuggestion;
-(BOOL)isOpenURLSuggestion;
-(BOOL)isCallContinuitySuggestion;
-(BOOL)isBluetoothAudioPrediction;
-(NSString *)originatingDeviceIdentifier;
-(NSString *)bundleIdentifier;
-(NSString *)activityType;
-(NSUUID *)uniqueIdentifier;
-(NSString *)originatingDeviceType;
-(NSString *)originatingDeviceName;
-(NSDate *)lastUpdateTime;
@end

