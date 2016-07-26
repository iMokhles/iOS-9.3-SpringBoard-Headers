/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface SBTodayTableHeaderView : UIView {

	UILabel* _dateLabel;
	UILabel* _lunarDateLabel;
	BOOL _isContentValid;
	CGRect _calculatedDateLabelFrame;
	BOOL _achievedPreferredDateLabelLayout;
	CGSize _sizeThatFitsCalculatedDateLabelFrame;
	CGRect _calculatedLunarDateLabelFrame;
	long long _layoutMode;
	UIView* _miniMonthView;

}

@property (assign,nonatomic) long long layoutMode;                //@synthesize layoutMode=_layoutMode - In the implementation block
@property (nonatomic,readonly) double visibleMinY; 
@property (nonatomic,retain) UIView * miniMonthView;              //@synthesize miniMonthView=_miniMonthView - In the implementation block
+(id)defaultLunarDateFont;
+(id)defaultDateFontForMode:(long long)arg1 ;
+(double)lunarDateBaselineOffset;
+(id)defaultTextColor;
+(id)defaultBackgroundColor;
-(void)setLayoutMode:(long long)arg1 ;
-(void)_updateForContentCategorySizeDidChange;
-(void)invalidateContent;
-(id)dateHeaderOnSingleLine:(BOOL)arg1 ;
-(id)lunarCalendarIdentifier;
-(double)_dateLabelWidthForSize:(CGSize)arg1 layoutMode:(long long)arg2 ;
-(BOOL)_dateLabelNeedsLayoutForSize:(CGSize)arg1 ;
-(id)dateHeaderAttributedStringOnSingleLine:(BOOL)arg1 ;
-(BOOL)_isCachedSizeThatFitsValidForSize:(CGSize)arg1 ;
-(CGRect)dateLabelFrameForBounds:(CGRect)arg1 force:(BOOL)arg2 ;
-(BOOL)showsLunarDate;
-(id)lunarDateHeaderString;
-(CGRect)_lunarDateLabelFrameForBounds:(CGRect)arg1 ;
-(void)_layoutLunarDateLabel;
-(double)visibleMinY;
-(UIView *)miniMonthView;
-(void)setMiniMonthView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_layoutDateLabel;
-(long long)layoutMode;
@end

