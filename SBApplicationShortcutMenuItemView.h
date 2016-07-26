/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIImageView, UILabel, SBSApplicationShortcutItem, NSArray;

@interface SBApplicationShortcutMenuItemView : UIView {

	UIView* _iconContainer;
	UIImageView* _iconView;
	UIView* _textContainer;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _highlighted;
	SBSApplicationShortcutItem* _shortcutItem;
	long long _orientation;
	unsigned long long _options;
	double _iconMaxHeight;
	NSArray* _iconHeightConstraints;
	long long _menuPosition;

}

@property (assign,nonatomic) BOOL highlighted;                                       //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) long long menuPosition;                               //@synthesize menuPosition=_menuPosition - In the implementation block
@property (nonatomic,retain) SBSApplicationShortcutItem * shortcutItem;              //@synthesize shortcutItem=_shortcutItem - In the implementation block
@property (nonatomic,retain) UIView * iconContainer;                                 //@synthesize iconContainer=_iconContainer - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIView * textContainer;                                 //@synthesize textContainer=_textContainer - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) double iconMaxHeight;                                   //@synthesize iconMaxHeight=_iconMaxHeight - In the implementation block
@property (nonatomic,retain) NSArray * iconHeightConstraints;                        //@synthesize iconHeightConstraints=_iconHeightConstraints - In the implementation block
+(id)_imageForShortcutItem:(id)arg1 application:(id)arg2 assetManagerProvider:(id)arg3 monogrammerProvider:(id)arg4 maxHeight:(double*)arg5 ;
-(void)_setupViewsWithIcon:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setIconMaxHeight:(double)arg1 ;
-(void)_handleContentSizeCategoryChangedNotification:(id)arg1 ;
-(void)_setupConstraintsForIconAlignment:(long long)arg1 icon:(id)arg2 ;
-(double)_titleFontSize;
-(double)_subtitleFontSize;
-(void)setIconHeightConstraints:(NSArray *)arg1 ;
-(id)initWithShortcutItem:(id)arg1 menuPosition:(long long)arg2 orientation:(long long)arg3 application:(id)arg4 assetManagerProvider:(id)arg5 monogrammerProvider:(id)arg6 options:(unsigned long long)arg7 ;
-(UIView *)iconContainer;
-(void)setIconContainer:(UIView *)arg1 ;
-(double)iconMaxHeight;
-(NSArray *)iconHeightConstraints;
-(SBSApplicationShortcutItem *)shortcutItem;
-(long long)menuPosition;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(UIView *)textContainer;
-(void)setTextContainer:(UIView *)arg1 ;
-(UILabel *)subtitleLabel;
-(BOOL)highlighted;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)_updateLabelFonts;
-(void)setShortcutItem:(SBSApplicationShortcutItem *)arg1 ;
@end

