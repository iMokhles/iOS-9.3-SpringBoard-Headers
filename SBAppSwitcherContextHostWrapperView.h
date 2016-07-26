/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBMainAppSwitcherPageContentView.h>

@protocol FBSceneHostView;
@class FBWindowContextHostManager, UIView, SBWallpaperEffectView, NSString;

@interface SBAppSwitcherContextHostWrapperView : UIView <SBMainAppSwitcherPageContentView> {

	FBWindowContextHostManager* _contextHostManager;
	UIView* _containerView;
	UIView*<FBSceneHostView> _contextHostView;
	UIView* _snapshotView;
	SBWallpaperEffectView* _wallpaperEffectView;
	long long _orientation;

}

@property (assign,nonatomic) long long orientation;                 //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_viewPresenting:(id)arg1 ;
-(void)_viewDismissing:(id)arg1 ;
-(void)_viewDidAnimatePresentation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 application:(id)arg2 sideApplication:(id)arg3 ;
-(CGAffineTransform)_rotationTransformForOrientation:(long long)arg1 ;
-(void)_viewDidAnimateDismissal:(id)arg1 ;
-(void)_viewWillPresent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)invalidate;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)didMoveToSuperview;
@end

