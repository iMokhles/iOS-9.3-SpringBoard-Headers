/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBCCSettingModule.h>

@interface SBCCWiFiSetting : SBCCSettingModule
+(id)identifier;
+(id)displayName;
-(id)aggdKey;
-(BOOL)_toggleState;
-(id)glyphImageForState:(int)arg1 ;
-(void)_updateWifiNotification:(id)arg1 ;
-(void)dealloc;
-(void)deactivate;
-(void)_updateState;
-(void)activate;
-(void)_tearDown;
@end
