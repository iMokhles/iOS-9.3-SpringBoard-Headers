/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelApplicationDataSource.h>

@protocol SBStarkSessionConfiguring;
@class NSDictionary, NSString;

@interface SBStarkIconModelApplicationDataSource : NSObject <SBIconModelApplicationDataSource> {

	id<SBStarkSessionConfiguring> _configuration;
	BOOL _loadedCustomIconState;
	NSDictionary* _customIconState;

}

@property (nonatomic,copy) NSDictionary * customIconState;                                            //@synthesize customIconState=_customIconState - In the implementation block
@property (assign,getter=hasLoadedCustomIconState,nonatomic) BOOL loadedCustomIconState;              //@synthesize loadedCustomIconState=_loadedCustomIconState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setCustomIconOrder:(id)arg1 ;
+(id)persistedCustomIconOrderPath;
+(id)customIconOrder;
+(id)defaultIconOrder;
-(id)defaultIconState;
-(id)firstPageLeafIdentifiers;
-(BOOL)hasLoadedCustomIconState;
-(void)setCustomIconState:(NSDictionary *)arg1 ;
-(void)setLoadedCustomIconState:(BOOL)arg1 ;
-(void)_loadCustomIconStateIfNecessary;
-(NSDictionary *)customIconState;
-(void)resetCustomIconOrder;
-(id)allApplications;
-(id)initWithConfiguration:(id)arg1 ;
@end

