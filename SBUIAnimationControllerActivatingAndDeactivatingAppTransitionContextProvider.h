/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationControllerTransitionContextProvider.h>

@class SBWorkspaceApplication, NSSet, NSString;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject <SBUIAnimationControllerTransitionContextProvider> {

	SBWorkspaceApplication* _activatingApp;
	SBWorkspaceApplication* _deactivatingApp;

}

@property (nonatomic,retain) SBWorkspaceApplication * activatingApp;                //@synthesize activatingApp=_activatingApp - In the implementation block
@property (nonatomic,retain) SBWorkspaceApplication * deactivatingApp;              //@synthesize deactivatingApp=_deactivatingApp - In the implementation block
@property (nonatomic,copy,readonly) NSSet * activatingApps; 
@property (nonatomic,copy,readonly) NSSet * deactivatingApps; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transitionContextProviderWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(NSSet *)activatingApps;
-(SBWorkspaceApplication *)activatingApp;
-(NSSet *)deactivatingApps;
-(SBWorkspaceApplication *)deactivatingApp;
-(id)initWithActivatingApp:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)setActivatingApp:(SBWorkspaceApplication *)arg1 ;
-(void)setDeactivatingApp:(SBWorkspaceApplication *)arg1 ;
@end

