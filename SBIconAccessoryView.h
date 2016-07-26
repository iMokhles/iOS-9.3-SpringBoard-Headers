/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconAccessoryView <SBReusableView>
@required
+(id)checkoutAccessoryImagesForIcon:(id)arg1 location:(int)arg2;
-(void)configureAnimatedForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3 withPreparation:(/*^block*/id)arg4 animation:(/*^block*/id)arg5 completion:(/*^block*/id)arg6;
-(void)configureForIcon:(id)arg1 location:(int)arg2 highlighted:(BOOL)arg3;
-(CGPoint*)accessoryOriginForIconBounds:(CGRect)arg1;
-(BOOL)displayingAccessory;
-(void)setAccessoryBrightness:(double)arg1;

@end

