/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBSceneLayoutWorkspaceTransactionDelegate <NSObject>
@optional
-(BOOL)transactionShouldConsiderLockStateForForegroundScenesDuringTransition:(id)arg1;

@required
-(void)transactionWillBeginLayoutTransition:(id)arg1;
-(void)transaction:(id)arg1 performTransitionWithCompletion:(/*^block*/id)arg2;
-(void)transaction:(id)arg1 didEndLayoutTransitionWithContinuation:(/*^block*/id)arg2;

@end

