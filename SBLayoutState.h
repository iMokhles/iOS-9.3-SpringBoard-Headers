/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLayoutContext.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSSet, NSString;

@interface SBLayoutState : NSObject <SBLayoutContext, BSDescriptionProviding> {

	NSSet* _elements;
	long long _interfaceOrientation;

}

@property (nonatomic,readonly) NSSet * elements;                            //@synthesize elements=_elements - In the implementation block
@property (nonatomic,readonly) long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)initialLayoutState;
+(long long)_defaultOrientation;
-(id)layoutStateForTransitionContext:(id)arg1 ;
-(BOOL)layoutContainsRole:(long long)arg1 ;
-(id)_initWithElements:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(BOOL)isEqualToLayoutState:(id)arg1 ;
-(id)_layoutStateForTransitionContext:(id)arg1 ;
-(id)_stateWithElements:(id)arg1 interfaceOrientation:(long long)arg2 ;
-(id)_initWithElements:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(long long)interfaceOrientation;
-(NSSet *)elements;
-(id)elementWithIdentifier:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)elementWithRole:(long long)arg1 ;
@end

