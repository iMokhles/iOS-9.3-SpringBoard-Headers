/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBLayoutElementContainerViewDelegate.h>

@protocol SBLayoutElementViewControllerDelegate;
@class FBSDisplay, SBLayoutElement, SBLayoutState, FBDisplayLayoutElement, NSString;

@interface SBLayoutElementViewController : UIViewController <SBLayoutElementContainerViewDelegate> {

	FBSDisplay* _display;
	SBLayoutElement* _layoutElement;
	SBLayoutState* _layoutState;
	id<SBLayoutElementViewControllerDelegate> _delegate;
	FBDisplayLayoutElement* _displayLayoutElement;

}

@property (nonatomic,readonly) FBSDisplay * display;                                                 //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) SBLayoutElement * layoutElement;                                      //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) SBLayoutState * layoutState;                                          //@synthesize layoutState=_layoutState - In the implementation block
@property (assign,nonatomic,__weak) id<SBLayoutElementViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double preferredLayoutLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)configureWithEntity:(id)arg1 forElement:(id)arg2 layoutState:(id)arg3 ;
-(void)setWantsPinResizeGrabber:(BOOL)arg1 ;
-(SBLayoutElement *)layoutElement;
-(id)layoutStateForLayoutElementContainingView:(id)arg1 ;
-(void)handleReturnActionForLayoutElementContainingView:(id)arg1 ;
-(BOOL)shouldAllowSwipeInDimmingViewAtStartLocation:(CGPoint)arg1 inLayoutElementContainingView:(id)arg2 ;
-(BOOL)supportsReuse;
-(void)willBeginTransitionToVisible:(BOOL)arg1 ;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(void)_updateDisplayLayoutElementToVisible:(BOOL)arg1 ;
-(double)preferredLayoutLevel;
-(void)setDelegate:(id<SBLayoutElementViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLayoutElementViewControllerDelegate>)delegate;
-(id)view;
-(id)snapshotView;
-(void)invalidate;
-(FBSDisplay *)display;
-(void)loadView;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(SBLayoutState *)layoutState;
-(id)initWithDisplay:(id)arg1 ;
@end

