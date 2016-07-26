/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkBannerItem.h>

@class BBBulletin, SBUISound;

@interface SBStarkBulletinBannerItem : SBStarkBannerItem {

	BBBulletin* _bulletin;
	SBUISound* _sound;
	unsigned long long _feed;

}
-(id)sourceDate;
-(BOOL)_supportsSubActions;
-(id)_uiBannerActionForBBAction:(id)arg1 context:(id)arg2 ;
-(long long)defaultActionType;
-(id)categoryImage;
-(BOOL)matchesContext:(id)arg1 ;
-(id)initWithBulletin:(id)arg1 feed:(unsigned long long)arg2 configuration:(id)arg3 ;
-(id)_bbDismissAppearance;
-(id)bbSupplementaryActions;
-(id)_bbDismissAction;
-(id)bbAllActions;
-(void)updateBulletinToInstance:(id)arg1 ;
-(/*^block*/id)action;
-(id)title;
-(id)message;
-(id)initWithConfiguration:(id)arg1 ;
-(id)subActions;
-(BOOL)shouldShowModalSubActions;
-(id)subActionLabels;
-(id)subTitle;
-(id)sound;
@end

