/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:30 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBIconIndexNode <NSObject>
@required
-(id)nodeIdentifier;
-(BOOL)containsNodeIdentifier:(id)arg1;
-(void)addNodeObserver:(id)arg1;
-(void)removeNodeObserver:(id)arg1;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned long long)arg2;
-(id)nodeDescriptionWithPrefix:(id)arg1;

@end

