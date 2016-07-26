/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:32 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISuggestionsViewDelegate <NSObject>
@optional
-(double)statusBarHeightForSuggestionsView:(id)arg1;
-(double)statusViewHeightForSuggestionsView:(id)arg1;
-(void)getNextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(id)nextSuggestionsForSuggestionsView:(id)arg1 maxSuggestions:(unsigned long long)arg2;
-(void)didShowSuggestionsForSuggestionsView:(id)arg1;
-(void)suggestionsView:(id)arg1 didHideVibrantView:(id)arg2;

@end

