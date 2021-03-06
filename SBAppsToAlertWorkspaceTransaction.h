/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>
#import <SpringBoard/SBUIAnimationControllerObserver.h>

@class NSArray, SBWorkspaceAlert, SBUIAnimationController, FBDisplayLayoutTransition, NSString;

@interface SBAppsToAlertWorkspaceTransaction : SBMainWorkspaceTransaction <SBUIAnimationControllerObserver> {

	NSArray* _topApplications;
	SBWorkspaceAlert* _activatingAlert;
	SBUIAnimationController* _animation;
	/*^block*/id _alertActivationBlock;
	BOOL _animatedAppDeactivation;
	FBDisplayLayoutTransition* _layoutTransition;
	BOOL _deferAlertActivationForAnimationCompletion;

}

@property (nonatomic,copy) id alertActivationBlock;                 //@synthesize alertActivationBlock=_alertActivationBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(BOOL)_isFromMainSwitcher;
-(void)_activateAlert;
-(void)_updateSceneLayout;
-(id)alertActivationBlock;
-(void)setAlertActivationBlock:(id)arg1 ;
-(void)_willBegin;
-(void)dealloc;
-(NSString *)debugDescription;
-(void)_didComplete;
-(void)_begin;
@end

