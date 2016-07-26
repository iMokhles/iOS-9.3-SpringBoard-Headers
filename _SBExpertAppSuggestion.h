/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBestAppSuggestion.h>

@class _DECAppItem, _DECResult, NSUUID;

@interface _SBExpertAppSuggestion : SBBestAppSuggestion {

	_DECAppItem* _appSuggestion;
	_DECResult* _result;

}

@property (nonatomic,readonly) _DECAppItem * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
@property (nonatomic,readonly) _DECResult * result;                      //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSUUID * resultUUID; 
-(_DECAppItem *)appSuggestion;
-(BOOL)isArrivedAtHomePrediction;
-(BOOL)isArrivedAtWorkPrediction;
-(BOOL)isLocationBasedSuggestion;
-(BOOL)isLocallyGeneratedSuggestion;
-(BOOL)isPrediction;
-(BOOL)isFirstWakePrediction;
-(BOOL)isCarPlayPrediction;
-(BOOL)isHeadphonesPrediction;
-(BOOL)isBluetoothPrediction;
-(NSUUID *)resultUUID;
-(id)initWithAppSuggestion:(id)arg1 result:(id)arg2 ;
-(BOOL)isBluetoothAudioPrediction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)bundleIdentifier;
-(_DECResult *)result;
-(id)originatingDeviceName;
@end

