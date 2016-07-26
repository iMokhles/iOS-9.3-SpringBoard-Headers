/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBBulletinActionHandler.h>
#import <libobjc.A.dylib/NCSnippetDataSourceObserver.h>
#import <libobjc.A.dylib/NCWidgetDataSourceObserver.h>
#import <SpringBoard/SBWidgetHandlingNCColumnViewControllerDelegate.h>
#import <SpringBoard/SBTodayViewControllerDelegate.h>
#import <SpringBoard/SBModeViewControllerDelegate.h>
#import <SpringBoard/SBNotificationCenterWidgetHost.h>
#import <SpringBoard/SBTodayViewSettingsViewControllerDelegate.h>

@protocol OS_dispatch_queue, SBWidgetViewControllerDelegate, SBBulletinActionHandler;
@class SBTodayViewController, SBWidgetHandlingNCColumnViewController, NSObject, NSMutableSet, NSMutableDictionary, SBSnippetSectionInfo, SBNotificationSeparatorView, SBNotificationsViewController, SBModeViewController, NSSet, NSString;

@interface SBNotificationCenterLayoutViewController : UIViewController <SBBulletinActionHandler, NCSnippetDataSourceObserver, NCWidgetDataSourceObserver, SBWidgetHandlingNCColumnViewControllerDelegate, SBTodayViewControllerDelegate, SBModeViewControllerDelegate, SBNotificationCenterWidgetHost, SBTodayViewSettingsViewControllerDelegate> {

	SBTodayViewController* _todayViewController;
	SBWidgetHandlingNCColumnViewController* _widgetsViewController;
	long long _supportedNotificationCenterLayoutModes;
	long long _lastPresentedNotificationCenterLayoutMode;
	NSMutableDictionary* _archive;
	NSObject*<OS_dispatch_queue> _archiveWriteQueue;
	NSObject*<OS_dispatch_queue> _newWidgetsCountPostQueue;
	NSMutableSet* _defaultEnabledIDs;
	NSMutableDictionary* _identifiersToSnippetDataSources;
	NSMutableDictionary* _identifiersToWidgetDataSources;
	NSMutableDictionary* _identifiersToDatums;
	NSMutableDictionary* _dataSourceIdentifiersToDatumIdentifiers;
	NSMutableDictionary* _identifiersToDisabledInterfaceItems;
	NSMutableDictionary* _groupNamesToPendingOrderedInterfaceItems;
	SBSnippetSectionInfo* _todaySectionInfo;
	SBSnippetSectionInfo* _tomorrowSectionInfo;
	NSMutableDictionary* _identifiersToChildSections;
	SBNotificationSeparatorView* _topSeparatorView;
	BOOL _presentingEditView;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
	id<SBBulletinActionHandler> _bulletinActionHandler;
	SBNotificationsViewController* _notificationsViewController;
	SBModeViewController* _modeViewController;

}

@property (assign,nonatomic,__weak) id<SBBulletinActionHandler> bulletinActionHandler;                   //@synthesize bulletinActionHandler=_bulletinActionHandler - In the implementation block
@property (nonatomic,readonly) SBNotificationsViewController * notificationsViewController;              //@synthesize notificationsViewController=_notificationsViewController - In the implementation block
@property (nonatomic,readonly) SBModeViewController * modeViewController;                                //@synthesize modeViewController=_modeViewController - In the implementation block
@property (nonatomic,copy,readonly) NSSet * widgetHandlingViewControllers; 
@property (nonatomic,copy,readonly) NSSet * visibleContentViewControllers; 
@property (nonatomic,retain) SBSnippetSectionInfo * todaySectionInfo;                                    //@synthesize todaySectionInfo=_todaySectionInfo - In the implementation block
@property (nonatomic,retain) SBSnippetSectionInfo * tomorrowSectionInfo;                                 //@synthesize tomorrowSectionInfo=_tomorrowSectionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBWidgetViewControllerDelegate> widgetDelegate;                   //@synthesize widgetDelegate=_widgetDelegate - In the implementation block
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)runScrollTest:(id)arg1 iterations:(long long)arg2 delta:(long long)arg3 useAAGView:(BOOL)arg4 ;
-(id)orderedInterfaceItemIdentifiersForWidgetHandlingNCColumnViewController:(id)arg1 ;
-(BOOL)todayViewSettingsViewController:(id)arg1 isInterfaceItemWithIdentifierEnabled:(id)arg2 ;
-(void)widgetHandlingNCColumnViewControllerVisibleContentDidChange:(id)arg1 ;
-(id<SBWidgetViewControllerDelegate>)widgetDelegate;
-(void)setWidgetDelegate:(id<SBWidgetViewControllerDelegate>)arg1 ;
-(void)widgetHandlingNCColumnViewController:(id)arg1 requestsEnablingForDebuggingWidgetsWithIdentifiers:(id)arg2 ;
-(BOOL)widgetHandlingNCColumnViewControllerShouldRequestWidgetRemoteViewControllers:(id)arg1 ;
-(long long)layoutModeForTodayViewSettingsViewController:(id)arg1 ;
-(id)todayViewSettingsViewController:(id)arg1 interfaceItemsForGroup:(id)arg2 ;
-(void)todayViewSettingsViewController:(id)arg1 didReorderInterfaceItems:(id)arg2 inGroup:(id)arg3 ;
-(void)todayViewSettingsViewControllerWillPresent:(id)arg1 ;
-(void)todayViewSettingsViewControllerWillDismiss:(id)arg1 ;
-(id)groupsForTodayViewSettingsViewController:(id)arg1 ;
-(id)disabledInterfaceItemsForTodayViewSettingsViewController:(id)arg1 ;
-(BOOL)todayViewSettingsViewController:(id)arg1 canReorderInterfaceItem:(id)arg2 ;
-(id)todayViewSettingsViewController:(id)arg1 defaultGroupForInterfaceItem:(id)arg2 ;
-(BOOL)todayViewSettingsViewController:(id)arg1 isInterfaceItemWithIdentifierNew:(id)arg2 ;
-(BOOL)todayViewSettingsViewController:(id)arg1 setEnabled:(BOOL)arg2 forInterfaceItems:(id)arg3 ;
-(void)todayViewSettingsViewController:(id)arg1 acknowledgeInterfaceItems:(id)arg2 ;
-(id<SBBulletinActionHandler>)bulletinActionHandler;
-(BOOL)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSSet *)widgetHandlingViewControllers;
-(void)setBulletinActionHandler:(id<SBBulletinActionHandler>)arg1 ;
-(id)todaySectionInfoForTodayViewController:(id)arg1 ;
-(id)tomorrowSectionInfoForTodayViewController:(id)arg1 ;
-(id)childSectionIdentifiersForTodayViewController:(id)arg1 ;
-(id)todayViewController:(id)arg1 childSectionInfoForIdentifier:(id)arg2 ;
-(id)todayViewController:(id)arg1 snippetsForChildSectionWithIdentifier:(id)arg2 ;
-(void)todayViewController:(id)arg1 visibleContentIsClipping:(BOOL)arg2 ;
-(id)presentationContextDefininingViewControllerForTodayViewController:(id)arg1 ;
-(BOOL)_isElementWithIdentifierEnabled:(id)arg1 ;
-(NSSet *)visibleContentViewControllers;
-(id)widgetHandlingViewControllerForWidgetWithIdentifier:(id)arg1 ;
-(id)initForNotificationCenterLayoutMode:(long long)arg1 ;
-(SBNotificationsViewController *)notificationsViewController;
-(SBModeViewController *)modeViewController;
-(void)_loadContentViewControllers;
-(void)buddyCompleted:(id)arg1 ;
-(void)_beginObservingDataSourcesIfNecessary;
-(BOOL)_managesTwoColumns;
-(BOOL)_shouldLayoutInTwoColumnsInLayoutMode:(long long)arg1 ;
-(id)_localizableTitleForColumnViewController:(id)arg1 ;
-(void)_setUpColumnViewController:(id)arg1 ;
-(void)_setUpWidgetHandlingNCColumnViewController:(id)arg1 ;
-(BOOL)_isDeviceMoreThanUILocked;
-(BOOL)_areWidgetViewControllersAvailable;
-(BOOL)_shouldLayoutInTwoColumnsInActiveLayoutMode;
-(id)_widgetsViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(id)_todayViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)_areNotificationsViewControllersAvailable;
-(id)_notificationsViewControllerCreateIfNecessary:(BOOL)arg1 ;
-(BOOL)_needsLayoutAfterLoadingContentViewControllers;
-(BOOL)_isParentElementEnabledForElementWithID:(id)arg1 ;
-(BOOL)_shouldPublishWidgetDatum:(id)arg1 ;
-(id)_defaultGroupForInterfaceItemWithIdentifier:(id)arg1 ;
-(id)_widgetHandlingViewControllerForGroup:(id)arg1 ;
-(long long)_notificationCenterLayoutModeForCurrentState;
-(void)_repopulateWidgetHandlingViewController:(id)arg1 ;
-(void)_layoutTodayViewControllerIfNecessary;
-(void)_layoutModeViewController;
-(SBSnippetSectionInfo *)todaySectionInfo;
-(void)setTodaySectionInfo:(SBSnippetSectionInfo *)arg1 ;
-(SBSnippetSectionInfo *)tomorrowSectionInfo;
-(void)setTomorrowSectionInfo:(SBSnippetSectionInfo *)arg1 ;
-(void)_dataSourcesDidChange:(id)arg1 withExistingCollection:(id)arg2 addObserverBlock:(/*^block*/id)arg3 removeObserverBlock:(/*^block*/id)arg4 ;
-(void)_snippetDataSourcesDidChange:(id)arg1 ;
-(void)_widgetDataSourcesDidChange:(id)arg1 ;
-(void)_batteryDevicesDidChange:(id)arg1 ;
-(id)_snippetSectionInfoForElementWithIdentifier:(id)arg1 ;
-(id)_parentSectionInfoForSnippetCategory:(long long)arg1 ;
-(BOOL)_shouldPublishBatteryWidget;
-(BOOL)_isElementWithIdentifierKnown:(id)arg1 ;
-(BOOL)_setEnabled:(BOOL)arg1 forElementWithIdentifier:(id)arg2 ;
-(id)_targetViewControllerForWidgetDatum:(id)arg1 ;
-(void)_calculateAndPostNewWidgetsCount;
-(long long)_insertionIndexForBatteryWidgetInIdentifiers:(id)arg1 ;
-(void)_publishBatteryWidget;
-(id)_groupKeyForWidgetHandlingNCColumnViewController:(id)arg1 ;
-(void)_registerDefaultEnabledWidgetIdentifiers:(id)arg1 ;
-(id)_childDelegateForGroup:(id)arg1 ;
-(UIEdgeInsets)contentInsetsForModeViewController:(id)arg1 ;
-(id)todayViewSettingsViewController:(id)arg1 displayNameForGroup:(id)arg2 ;
-(void)dealloc;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)snippetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(void)widgetDataSource:(id)arg1 replaceWithDatum:(id)arg2 ;
-(void)widgetDataSource:(id)arg1 removeDatum:(id)arg2 ;
-(long long)layoutMode;
@end

