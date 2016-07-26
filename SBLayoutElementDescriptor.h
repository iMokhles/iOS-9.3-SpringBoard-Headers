/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLayoutElementDescriptor <SBLayoutElementIdentity>
@property (nonatomic,readonly) long long layoutRole; 
@property (nonatomic,readonly) unsigned long long supportedLayoutRoles; 
@property (nonatomic,readonly) unsigned long long layoutAttributes; 
@property (nonatomic,readonly) Class viewControllerClass; 
@property (nonatomic,copy,readonly) id entityGenerator; 
@required
-(BOOL)supportsLayoutRole:(long long)arg1;
-(unsigned long long)supportedLayoutRoles;
-(id)entityGenerator;
-(Class)viewControllerClass;
-(unsigned long long)layoutAttributes;
-(long long)layoutRole;
-(BOOL)hasLayoutAttributes:(unsigned long long)arg1;

@end

