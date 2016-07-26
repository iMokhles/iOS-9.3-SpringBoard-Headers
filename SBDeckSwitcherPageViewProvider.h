/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppSwitcherPageViewDelegate.h>
#import <SpringBoard/SBSwitcherAppViewWrapperPageContentViewDelegate.h>
#import <SpringBoard/SBAppViewHostRequester.h>

@protocol SBDeckSwitcherPageViewProviderDelegate, OS_dispatch_queue;
@class NSObject, SBDeckSwitcherPageView, NSMutableDictionary, NSString;

@interface SBDeckSwitcherPageViewProvider : NSObject <SBAppSwitcherPageViewDelegate, SBSwitcherAppViewWrapperPageContentViewDelegate, SBAppViewHostRequester> {

	id<SBDeckSwitcherPageViewProviderDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	NSRange _lastVisibleRange;
	SBDeckSwitcherPageView* _homeScreenPageView;
	NSMutableDictionary* _hostedApps;
	NSMutableDictionary* _appSnapshots;
	NSMutableDictionary* _switcherServiceViewControllerMap;

}

@property (assign,nonatomic,__weak) id<SBDeckSwitcherPageViewProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_useSnapshotsWhenPossible;
-(long long)resizingPolicyForPageView:(id)arg1 ;
-(CGAffineTransform)contentViewTransformForPageView:(id)arg1 ;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(id)_initialDisplayItem;
-(id)_viewForRemoteAlert:(id)arg1 placeholder:(BOOL)arg2 displayItem:(id)arg3 ;
-(unsigned long long)_totalItemsForWhichToKeepAroundSnapshots;
-(BOOL)_isSnapshotDisplayItem:(id)arg1 ;
-(id)_initialLayoutState;
-(void)purgePageViewForDisplayItem:(id)arg1 ;
-(void)updateCachedPageViewsWithVisibleItemRange:(NSRange)arg1 scrollDirection:(BOOL)arg2 allItems:(id)arg3 ;
-(id)currentlyHostedDisplayItems;
-(id)pageViewForDisplayItem:(id)arg1 synchronously:(BOOL)arg2 ;
-(CGSize)_pageViewSizeForDisplayItem:(id)arg1 ;
-(id)_homePageContentView;
-(BOOL)_shouldHostAppDisplayItem:(id)arg1 ;
-(id)_contextHostingAppViewForDisplayItem:(id)arg1 ;
-(id)_viewForService:(id)arg1 displayItem:(id)arg2 ;
-(id)_snapshotViewForDisplayItem:(id)arg1 preferringDownscaledSnapshot:(BOOL)arg2 synchronously:(BOOL)arg3 ;
-(void)_updateCachedPageViewsWithVisibleItemRange:(NSRange)arg1 scrollDirection:(BOOL)arg2 allItems:(id)arg3 ;
-(CGSize)_contentSizeForDisplayItem:(id)arg1 ;
-(id)_containerViewController;
-(CGSize)sizeForAppView:(id)arg1 representing:(id)arg2 ;
-(void)setDelegate:(id<SBDeckSwitcherPageViewProviderDelegate>)arg1 ;
-(id)init;
-(id<SBDeckSwitcherPageViewProviderDelegate>)delegate;
-(long long)_interfaceOrientation;
-(id)initWithDelegate:(id)arg1 ;
@end

