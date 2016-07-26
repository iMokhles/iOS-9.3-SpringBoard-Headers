/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenViewDelegate <NSObject>
@required
-(BOOL)shouldShowSlideToUnlockTextImmediately;
-(BOOL)lockScreenViewIsCurrentlyBeingDisplayed;
-(BOOL)wantsToShowStatusBarTime;
-(void)resetCoordinatedPresentingController:(id)arg1;
-(void)removeCoordinatedPresentingController:(id)arg1;
-(void)addCoordinatedPresentingController:(id)arg1;
-(BOOL)deviceInformationTextViewCanUseFullHeight;
-(void)lockScreenView:(id)arg1 didScrollToPage:(long long)arg2;
-(void)lockScreenView:(id)arg1 willScrollToPage:(long long)arg2;
-(BOOL)isAllowingWallpaperBlurUpdates;
-(void)lockScreenView:(id)arg1 didEndScrollingOnPage:(long long)arg2;
-(void)lockScreenViewDidBeginScrolling:(id)arg1;
-(BOOL)lockScreenViewPhonePluginIsActive;
-(void)lockScreenViewDidScrollWithNewScrollPercentage:(double)arg1 tracking:(BOOL)arg2;
-(void)lockScreenViewWillEndDraggingWithPercentScrolled:(double)arg1 percentScrolledVelocity:(double)arg2 targetScrollPercentage:(double)arg3;
-(id)effectiveCustomSlideToUnlockText;

@end

