/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIButton.h>

@class SBIconBlurryBackgroundView, UIView, UIImageView, SBIconColorSettings;

@interface SBCloseBoxView : UIButton {

	SBIconBlurryBackgroundView* _backgroundView;
	UIView* _whiteTintView;
	UIImageView* _xColorBurnView;
	UIImageView* _xPlusDView;
	SBIconColorSettings* _colorSettings;
	CGPoint _wallpaperRelativeCenter;

}
-(void)setWallpaperRelativeCenter:(CGPoint)arg1 ;
-(void)setSuppressesBlurryBackgroundChanges:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLegibilityStyle:(long long)arg1 ;
@end

