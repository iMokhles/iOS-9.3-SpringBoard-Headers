/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBUIBannerView, SBUIBannerSource;
@class UIView;

@interface SBBannerViewCallbackManager : NSObject {

	UIView*<SBUIBannerView> _view;
	id<SBUIBannerSource> _source;
	BOOL _sentWillAppear;
	BOOL _sentDidAppear;
	BOOL _sentWillDismiss;
	BOOL _sentDidDismiss;
	int _dismissReason;

}
-(id)initWithBannerView:(id)arg1 ;
-(BOOL)hasSentAnyCallbacks;
-(void)noteDidDismissWithReason:(int)arg1 ;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(void)matchPreviousCallbacks:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

