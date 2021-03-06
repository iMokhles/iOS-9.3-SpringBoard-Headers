/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSSettingDescriptionProvider.h>
#import <SpringBoard/SBDeactivationSettings.h>

@protocol SBDeactivationSettings <NSObject>
@required
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1;
-(void)clearDeactivationSettings;
-(void)applyDeactivationSettings:(id)arg1;
-(long long)flagForDeactivationSetting:(unsigned)arg1;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2;
-(id)objectForDeactivationSetting:(unsigned)arg1;
-(id)copyDeactivationSettings;

@end

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString;

@interface SBDeactivationSettings : NSObject <BSSettingDescriptionProvider, SBDeactivationSettings, NSCopying, BSDescriptionProviding> {

	BSMutableSettings* _settings;

}

@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFlag:(long long)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(BOOL)boolForDeactivationSetting:(unsigned)arg1 ;
-(void)clearDeactivationSettings;
-(void)applyDeactivationSettings:(id)arg1 ;
-(long long)flagForDeactivationSetting:(unsigned)arg1 ;
-(void)setObject:(id)arg1 forDeactivationSetting:(unsigned)arg2 ;
-(id)objectForDeactivationSetting:(unsigned)arg1 ;
-(id)copyDeactivationSettings;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEmpty;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

