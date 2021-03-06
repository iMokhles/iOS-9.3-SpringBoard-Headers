/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLayoutElementContainerView.h>

@class SBOrientationTransformWrapperView, UIView;

@interface SBSideSwitcherContainerView : SBLayoutElementContainerView {

	SBOrientationTransformWrapperView* _backgroundWrapperView;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIView * backgroundView; 
-(CGRect)contentRectForLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setOrientation:(long long)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
@end

