/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSystemStateProvider;

@interface SBBulletinSystemStateAdapter : NSObject {

	BBSystemStateProvider* _stateProvider;
	BOOL _quietModeEnabled;

}
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_lockStateChanged:(id)arg1 ;
-(void)_screenDimmed:(id)arg1 ;
-(void)_lostModeStateChanged;
-(void)dealloc;
-(id)init;
@end

