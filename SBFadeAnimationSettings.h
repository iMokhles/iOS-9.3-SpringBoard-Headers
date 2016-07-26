/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/_UISettings.h>

@class SBAnimationSettings;

@interface SBFadeAnimationSettings : _UISettings {

	double _backlightFadeDuration;
	SBAnimationSettings* _dateInSettings;
	SBAnimationSettings* _overlayInSettings;
	SBAnimationSettings* _contentInSettings;
	SBAnimationSettings* _wallpaperInSettings;
	SBAnimationSettings* _dateOutSettings;
	SBAnimationSettings* _overlayOutSettings;
	SBAnimationSettings* _wallpaperOutSettings;
	CGRect _wallpaperInContentsRect;
	CGRect _wallpaperOutContentsRect;

}

@property (assign,nonatomic) double backlightFadeDuration;                            //@synthesize backlightFadeDuration=_backlightFadeDuration - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * dateInSettings;                    //@synthesize dateInSettings=_dateInSettings - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * overlayInSettings;                 //@synthesize overlayInSettings=_overlayInSettings - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * contentInSettings;                 //@synthesize contentInSettings=_contentInSettings - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * wallpaperInSettings;               //@synthesize wallpaperInSettings=_wallpaperInSettings - In the implementation block
@property (assign,nonatomic) CGRect wallpaperInContentsRect;                          //@synthesize wallpaperInContentsRect=_wallpaperInContentsRect - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * dateOutSettings;                   //@synthesize dateOutSettings=_dateOutSettings - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * overlayOutSettings;                //@synthesize overlayOutSettings=_overlayOutSettings - In the implementation block
@property (nonatomic,retain) SBAnimationSettings * wallpaperOutSettings;              //@synthesize wallpaperOutSettings=_wallpaperOutSettings - In the implementation block
@property (assign,nonatomic) CGRect wallpaperOutContentsRect;                         //@synthesize wallpaperOutContentsRect=_wallpaperOutContentsRect - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)overlayOutSettings;
-(SBAnimationSettings *)overlayInSettings;
-(double)backlightFadeDuration;
-(SBAnimationSettings *)dateInSettings;
-(SBAnimationSettings *)wallpaperInSettings;
-(SBAnimationSettings *)contentInSettings;
-(SBAnimationSettings *)wallpaperOutSettings;
-(CGRect)wallpaperInContentsRect;
-(SBAnimationSettings *)dateOutSettings;
-(CGRect)wallpaperOutContentsRect;
-(void)setWallpaperInContentsRect:(CGRect)arg1 ;
-(void)setWallpaperOutContentsRect:(CGRect)arg1 ;
-(void)setBacklightFadeDuration:(double)arg1 ;
-(void)setDateInSettings:(SBAnimationSettings *)arg1 ;
-(void)setOverlayInSettings:(SBAnimationSettings *)arg1 ;
-(void)setContentInSettings:(SBAnimationSettings *)arg1 ;
-(void)setWallpaperInSettings:(SBAnimationSettings *)arg1 ;
-(void)setDateOutSettings:(SBAnimationSettings *)arg1 ;
-(void)setOverlayOutSettings:(SBAnimationSettings *)arg1 ;
-(void)setWallpaperOutSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

