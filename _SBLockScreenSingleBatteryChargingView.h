/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLockScreenBatteryChargingView.h>

@class UIView, _UIBackdropView, SBLockScreenBatteryFillView, _UILegibilityLabel, NSArray, NSLayoutConstraint;

@interface _SBLockScreenSingleBatteryChargingView : SBLockScreenBatteryChargingView {

	UIView* _batteryContainerView;
	_UIBackdropView* _batteryBlurView;
	SBLockScreenBatteryFillView* _batteryFillView;
	_UILegibilityLabel* _chargePercentLabel;
	NSArray* _batteryConstraints;
	NSLayoutConstraint* _batteryTopOffset;

}

@property (nonatomic,retain) _UILegibilityLabel * chargePercentLabel;              //@synthesize chargePercentLabel=_chargePercentLabel - In the implementation block
-(void)setPrimaryChargePercentage:(long long)arg1 isCharging:(BOOL)arg2 detailed:(BOOL)arg3 ;
-(BOOL)batteryVisible;
-(void)setBatteryVisible:(BOOL)arg1 ;
-(double)desiredVisibilityDuration;
-(id)_chargePercentFont;
-(void)setChargePercentLabel:(_UILegibilityLabel *)arg1 ;
-(double)_chargingTextBaselineOffset;
-(double)_batteryBaseline;
-(double)_batteryNoseOffset;
-(_UILegibilityLabel *)chargePercentLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)_prepareConstraints;
@end

