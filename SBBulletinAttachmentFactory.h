/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:31 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBBulletinAttachmentFactory : NSObject
+(id)listThumbnailConstraintsForAttachmentType:(long long)arg1 ;
+(id)listImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 ;
+(CGSize)listImageSizeForAttachmentType:(long long)arg1 thumbnailWidth:(double)arg2 height:(double)arg3 ;
+(id)bannerTextForAdditionalAttachments:(unsigned long long)arg1 showingImage:(BOOL)arg2 ;
+(id)modalThumbnailConstraintsForAttachmentType:(long long)arg1 ;
+(id)modalImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 ;
+(id)listTextForAdditionalAttachmentCount:(unsigned long long)arg1 ;
+(id)_genericImageForAttachmentType:(long long)arg1 ;
+(id)_imageFromPNGData:(id)arg1 ;
+(id)_imageByCroppingOrPaddingImage:(id)arg1 toSize:(CGSize)arg2 ;
+(id)_listImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 forFloatingAlert:(BOOL)arg3 ;
+(id)_nMoreAttachments:(unsigned long long)arg1 ;
+(id)_nAttachments:(unsigned long long)arg1 ;
+(CGSize)bannerImageSizeForAttachmentType:(long long)arg1 thumbnailWidth:(double)arg2 height:(double)arg3 ;
+(id)lockScreenFloatingThumbnailContraintsForAttachmentType:(long long)arg1 ;
+(id)bannerThumbnailConstraintsForAttachmentType:(long long)arg1 ;
+(id)lockScreenFloatingImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 ;
+(id)bannerImageForAttachmentType:(long long)arg1 thumbnailData:(id)arg2 ;
@end

