/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SBControlCenterStatusUpdate : NSObject {

	int _type;
	NSString* _reason;
	NSArray* _statusStrings;

}

@property (nonatomic,copy) NSString * reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSArray * statusStrings;              //@synthesize statusStrings=_statusStrings - In the implementation block
@property (assign,nonatomic) int type;                           //@synthesize type=_type - In the implementation block
+(id)statusUpdateWithString:(id)arg1 reason:(id)arg2 ;
-(void)addStatusString:(id)arg1 ;
-(NSArray *)statusStrings;
-(id)popStatusString;
-(void)setStatusStrings:(NSArray *)arg1 ;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end

