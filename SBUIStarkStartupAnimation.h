/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIStarkScreenAnimationController.h>

@class UIView;

@interface SBUIStarkStartupAnimation : SBUIStarkScreenAnimationController {

	UIView* _fromLockoutView;

}

@property (nonatomic,readonly) UIView * fromLockoutView;              //@synthesize fromLockoutView=_fromLockoutView - In the implementation block
-(id)_getTransitionWindow;
-(void)_cleanupAnimation;
-(UIView *)fromLockoutView;
-(void)_cancelAnimation;
-(id)initFromLockoutView:(id)arg1 starkScreenController:(id)arg2 ;
-(id)initWithActivatingApp:(id)arg1 fromLockoutView:(id)arg2 starkScreenController:(id)arg3 ;
-(void)_begin;
@end

