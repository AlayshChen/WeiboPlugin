//
//  WeiboPluginHeader.h
//  WeiboPlugin
//
//  Created by CorbinChen on 16/10/23.
//  Copyright (c) 2016年 CorbinChen. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^CDUnknownBlockType)(void);

@interface WBAdManager : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0046e43d
+ (void)initialize;	// IMP=0x0046e3f9
+ (id)adQueue;	// IMP=0x0046e3c3
+ (id)sharedManager;	// IMP=0x0046e3b3
+ (id)localAdVideoPathForID:(id)arg1;	// IMP=0x0046e0ef
+ (id)localAdVideoURLForID:(id)arg1;	// IMP=0x0046e069
+ (void)deleteOutDateSound;	// IMP=0x003e2707
+ (id)p_soundCacheDir;	// IMP=0x003e25e5
+ (id)p_soundPathForModel:(id)arg1;	// IMP=0x003e2533
+ (id)p_requestForModel:(id)arg1;	// IMP=0x003e24a7
+ (void)cacheSoundForModel:(id)arg1;	// IMP=0x003e224b
+ (void)cacheImageForModel:(id)arg1;	// IMP=0x003e20c9
//@property(retain, nonatomic) WBAdModel *lastMemAdModel; // @synthesize lastMemAdModel=_lastMemAdModel;
//@property(retain, nonatomic) WBAdVideoCacheManager *videoManager; // @synthesize videoManager=_videoManager;
//- (void).cxx_destruct;	// IMP=0x0046e589
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0046e529
- (void)dealloc;	// IMP=0x0046e2c7
- (id)init;	// IMP=0x0046e193
- (BOOL)isAdFeatureEnabled:(id)arg1;	// IMP=0x0046e175
- (void)willEnterForeground;	// IMP=0x0046e059
- (void)didEnterBackground;	// IMP=0x0046e057
- (void)currentSkinDidChangeNotification:(id)arg1;	// IMP=0x0046e029
- (void)currentAccountDidChangeNotification:(id)arg1;	// IMP=0x0046dfcf
- (void)clickAdModelViewAndSendRequestWithParams:(id)arg1;	// IMP=0x0046de97
- (void)clearHomeViewPullRefreshAdModel;	// IMP=0x0046ddb1
- (id)getAdModelFromMem;	// IMP=0x0046dda1
- (id)getAdModelFromCache;	// IMP=0x0046db83
- (void)loadHomePullRefreshAdResource:(id)arg1;	// IMP=0x0046daab
- (id)getAdCommonParamsDictionary;	// IMP=0x0046d8b9
- (void)asyn_loadHomeViewPullRefreshAdModel;	// IMP=0x0046cee1
- (void)loadHomeViewPullRefreshAdModel;	// IMP=0x0046ce45
- (id)loadTimelineAdWithparams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0046c9dd
- (id)loadAdModelImmediately:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0046c657
- (void)loadServerAd;	// IMP=0x0046bf29
- (void)removeDelegate:(id)arg1;	// IMP=0x0046bf09
- (void)addDelegate:(id)arg1;	// IMP=0x0046be2d
- (void)presentAdInDelegate:(id)arg1;	// IMP=0x0046bd85
- (void)scheduleLoadingServerAd;	// IMP=0x0046bcdb
- (void)closeAd:(id)arg1;	// IMP=0x0046bcc9
- (void)closeAd:(id)arg1 inDelegate:(id)arg2;	// IMP=0x0046bab9
- (void)presentAds;	// IMP=0x0046b9f9
- (void)presentAds:(id)arg1 inDelegates:(id)arg2;	// IMP=0x0046b741
- (id)cachedAds;	// IMP=0x0046b53f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

@interface WBABTestSDK : NSObject
{
}

+ (BOOL)isFeatureEnabled:(id)arg1;	// IMP=0x009c4b47
//+ (void)runFeature:(id)arg1 whenEnabled:(CDUnknownBlockType)arg2 whenDisabled:(CDUnknownBlockType)arg3;	// IMP=0x009c4abd
//+ (void)runFeature:(id)arg1 whenEnabled:(CDUnknownBlockType)arg2;	// IMP=0x009c4a45
//+ (void)fetchWBABTestFeatures;	// IMP=0x009c4a01
//+ (void)runFeature:(id)arg1 withPolicy:(int)arg2 whenEnabled:(CDUnknownBlockType)arg3 whenDisabled:(CDUnknownBlockType)arg4;	// IMP=0x009c4977
//+ (void)runFeature:(id)arg1 withPolicy:(int)arg2 whenEnabled:(CDUnknownBlockType)arg3;	// IMP=0x009c48ff
+ (BOOL)isFeatureEnabled:(id)arg1 withPolicy:(int)arg2;	// IMP=0x009c4899

@end

@interface WBUniversialViewController : UIViewController

@end

@interface WBViewController : WBUniversialViewController

@end

@interface WBTableViewController : WBViewController

@end

@interface WBTimelineTableViewController : WBTableViewController

@end

@interface WBStatusTableViewController : WBTimelineTableViewController

@end

@interface WBStatusGroupViewController : WBStatusTableViewController

@end

@interface HomeViewController : WBStatusGroupViewController

- (void)updateHeaderViewWithAdBannerVisible:(BOOL)arg1;
- (id)refreshLoadTimelineParams:(id)arg1;

@end

@interface WBModelObject : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    NSMutableDictionary *extraProperties;
    id _parentObject;
}

+ (id)objectConstructByObject:(id)arg1 withSameSuperClass:(Class)arg2;	// IMP=0x01070c99
+ (id)objectConstructBySuperClassObject:(id)arg1;	// IMP=0x01070c41
+ (void)initialize;	// IMP=0x01070449
+ (id)keyNameStoreQueue;	// IMP=0x010703cf
+ (id)objectWithDictionary:(id)arg1 beforeParseDictBlock:(CDUnknownBlockType)arg2;	// IMP=0x01070223
+ (id)objectWithDictionary:(id)arg1;	// IMP=0x010701dd
+ (id)objectsWithArray:(id)arg1 every:(CDUnknownBlockType)arg2 beforeParseDictBlock:(CDUnknownBlockType)arg3;	// IMP=0x0106ff91
+ (id)objectsWithArray:(id)arg1 every:(CDUnknownBlockType)arg2;	// IMP=0x0106ff4d
+ (id)objectsWithArray:(id)arg1;	// IMP=0x0106ff3b
+ (id)objectWithJSONDictionary:(id)arg1;	// IMP=0x0106fde3
+ (id)objectsWithJSONArray:(id)arg1 every:(CDUnknownBlockType)arg2;	// IMP=0x0106fbcf
+ (id)objectsWithJSONArray:(id)arg1;	// IMP=0x0106fbbd
+ (BOOL)isValidForDictionary:(id)arg1;	// IMP=0x0106fbb9
@property(nonatomic) __weak id parentObject; // @synthesize parentObject=_parentObject;
@property(retain, nonatomic) NSMutableDictionary *extraProperties; // @synthesize extraProperties;
//- (void).cxx_destruct;	// IMP=0x01072167
- (id)analysisParameters;	// IMP=0x010720ef
- (id)combinedAnalysisParameters;	// IMP=0x01071fe5
- (id)ownAnalysisParameters;	// IMP=0x01071fe1
- (id)featureCode;	// IMP=0x01071fdd
- (id)dictionaryRepresentation;	// IMP=0x01071afd
- (id)debugDescriptionKeys;	// IMP=0x01071ad3
- (id)debugDescription;	// IMP=0x01071a4b
- (id)description;	// IMP=0x010719c3
- (void)writeToDescription:(id)arg1 withIndent:(unsigned int)arg2 foundedObjects:(id)arg3 debug:(BOOL)arg4;	// IMP=0x0107140f
- (void)writeLineBreakToString:(id)arg1 withTabs:(unsigned int)arg2;	// IMP=0x010713b7
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x010713a7
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0107136f
- (BOOL)isEqual:(id)arg1;	// IMP=0x010712c5
@property(readonly, nonatomic) __weak id primaryKey;
//- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;	// IMP=0x01071277
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0107112b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x01070fd9
- (id)initWithCoder:(id)arg1;	// IMP=0x01070e8d
@property(readonly, nonatomic) __weak NSArray *nillableKeys;
@property(readonly, nonatomic) __weak NSArray *allKeys;
- (BOOL)updateWithDictionary:(id)arg1;	// IMP=0x0107036d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0107035b
- (id)initWithDictionary:(id)arg1 beforeParseDictBlock:(CDUnknownBlockType)arg2;	// IMP=0x01070283
- (BOOL)updateWithJSONDictionary:(id)arg1;	// IMP=0x0106fed9
- (id)initWithJSONDictionary:(id)arg1;	// IMP=0x0106fe29
@property(readonly, nonatomic, getter=isValid) BOOL isValid;
- (id)extraPropertyValueForKey:(id)arg1;	// IMP=0x0106fb4d
- (void)setExtraPropertyValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0106fa6f
- (void)dealloc;	// IMP=0x0106fa2d

@end

@interface WBTimelineTrendItem : WBModelObject

@end

@interface WBTimelineTimestampInfo : WBModelObject
{
    unsigned int timestampType;
    NSString *displayText;
    double disableTime;
}

+ (BOOL)isValidForDictionary:(id)arg1;	// IMP=0x00adab57
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText;
@property(nonatomic) unsigned int timestampType; // @synthesize timestampType;
@property(nonatomic) double disableTime; // @synthesize disableTime;
//- (void).cxx_destruct;	// IMP=0x00adaf65
- (id)dictionaryWithValues;	// IMP=0x00adadd5
- (BOOL)updateWithJSONDictionary:(id)arg1;	// IMP=0x00adacdf
- (BOOL)updateWithDictionary:(id)arg1;	// IMP=0x00adabe9

@end

@interface WBTimelineItem : WBModelObject
{
    NSString *itemID;
    NSString *v4ItemID;
    NSDate *date;
    //WBUser *user;
    BOOL sentByMe;
    NSString *text;
    WBTimelineItem *quotedItem;
    unsigned int drawingOption;
    BOOL isNew;
    NSMutableDictionary *urls;
    //WBTimelinePageInfo *pageInfo;
    NSString *clientItemID;
    NSArray *multiMedias;
    NSArray *_topics;
    NSArray *_tags;
    NSArray *_tmpTags;
    NSDictionary *_titleInfos;
    NSArray *_keywords;
    //id <WBTimeLineItemActionTypesDelegate> _actionTypesDelegate;
    WBTimelineTimestampInfo *_timestampInfo;
    unsigned long long clientTaskID;
    double _saveTime;
}

+ (Class)textContentViewClass;	// IMP=0x00d10661
+ (Class)contentViewClass;	// IMP=0x00d10645
+ (Class)drawingContextClass;	// IMP=0x00d10629
+ (Class)tableViewCellClass;	// IMP=0x00d1060d
@property(retain, nonatomic) WBTimelineTimestampInfo *timestampInfo; // @synthesize timestampInfo=_timestampInfo;
@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
//@property(nonatomic) __weak id <WBTimeLineItemActionTypesDelegate> actionTypesDelegate; // @synthesize actionTypesDelegate=_actionTypesDelegate;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSDictionary *titleInfos; // @synthesize titleInfos=_titleInfos;
@property(retain, nonatomic) NSArray *tmpTags; // @synthesize tmpTags=_tmpTags;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSArray *multiMedias; // @synthesize multiMedias;
@property(nonatomic) unsigned long long clientTaskID; // @synthesize clientTaskID;
@property(retain, nonatomic) NSString *clientItemID; // @synthesize clientItemID;
//@property(retain, nonatomic) WBTimelinePageInfo *pageInfo; // @synthesize pageInfo;
@property(retain, nonatomic) NSMutableDictionary *urls; // @synthesize urls;
@property(nonatomic) unsigned int drawingOption; // @synthesize drawingOption;
@property(nonatomic) BOOL isNew; // @synthesize isNew;
@property(retain, nonatomic) WBTimelineItem *quotedItem; // @synthesize quotedItem;
@property(nonatomic) BOOL sentByMe; // @synthesize sentByMe;
//@property(retain, nonatomic) WBUser *user; // @synthesize user;
@property(retain, nonatomic) NSDate *date; // @synthesize date;
@property(retain, nonatomic) NSString *text; // @synthesize text;
@property(retain, nonatomic) NSString *v4ItemID; // @synthesize v4ItemID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID;
//- (void).cxx_destruct;	// IMP=0x00d1254f
- (BOOL)isEqual:(id)arg1;	// IMP=0x00d12093
//@property(nonatomic) WBQueueJob *clientTask; // @dynamic clientTask;
- (id)titleItemText;	// IMP=0x00d12023
- (id)nonnullText;	// IMP=0x00d11fcd
- (id)briefQuotedItemText;	// IMP=0x00d11df9
- (id)briefItemText;	// IMP=0x00d11cbf
- (BOOL)hasLocalVideo;	// IMP=0x00d11a65
- (BOOL)updateWithJSONDictionary:(id)arg1;	// IMP=0x00d11759
- (BOOL)updateWithDictionary:(id)arg1;	// IMP=0x00d11339
- (BOOL)shouldShowSourceText;	// IMP=0x00d11335
- (BOOL)deletable;	// IMP=0x00d11325
- (id)typeName;	// IMP=0x00d11321
- (void)dealloc;	// IMP=0x00d111c5
- (BOOL)isLocalSendingItem;	// IMP=0x00d105fd
- (BOOL)isLocalItem;	// IMP=0x00d105c1
- (BOOL)showsReadCount;	// IMP=0x00d111b1
- (id)accessibilityQuotedItemValue;	// IMP=0x00d11103
- (id)accessibilityItemValue;	// IMP=0x00d110f3
- (id)actionButtonTypes;	// IMP=0x00d110ef
- (id)readableTimeText;	// IMP=0x00d110a9
- (BOOL)isShowTime;	// IMP=0x00d11045
- (id)displayTimeLineTimeTextWithColor:(struct CGColor **)arg1;	// IMP=0x00d10f9f
- (id)displayTimeText;	// IMP=0x00d10d4f
- (id)displayTimeTextWithTextColor:(struct CGColor **)arg1;	// IMP=0x00d10c71
- (id)displayTopRightCommonButton;	// IMP=0x00d10c6d
- (id)displaySourceScheme;	// IMP=0x00d10c69
- (id)displaySourceWithFrom;	// IMP=0x00d10c65
- (id)displaySource;	// IMP=0x00d10c61
- (BOOL)shouldShowProducts;	// IMP=0x00d10c5d
- (BOOL)shouldShowQuotedItemProducts;	// IMP=0x00d10c59
- (BOOL)shouldShowItemProducts;	// IMP=0x00d10c55
- (BOOL)shouldShowImageIndicator;	// IMP=0x00d10c51
- (BOOL)shouldShowImages;	// IMP=0x00d10c4d
- (BOOL)shouldShowQuotedItemImages;	// IMP=0x00d10c49
- (BOOL)shouldShowItemImages;	// IMP=0x00d10c45
- (BOOL)showQuotedVideo;	// IMP=0x00d10c41
- (BOOL)showVideo;	// IMP=0x00d10c3d
- (BOOL)shouldShowItemTypes;	// IMP=0x00d10c39
- (BOOL)shouldShowSourceText;	// IMP=0x00d10c35
- (BOOL)shouldShowMapImage;	// IMP=0x00d10c31
- (BOOL)shouldShowQuotedItemActionButtons;	// IMP=0x00d10c2d
- (BOOL)shouldShowActionButtons;	// IMP=0x00d10c29
- (id)prepareDrawingContextWithUserInfo:(id)arg1;	// IMP=0x00d108a9
- (id)prepareDrawingContext;	// IMP=0x00d10897
- (id)reusableCellOfTableView:(id)arg1;	// IMP=0x00d106e3
- (float)rowHeightOfTableView:(id)arg1;	// IMP=0x00d10691
- (void)didSelectRowOfTableView:(id)arg1 inViewController:(id)arg2;	// IMP=0x00d1067d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

@interface WBUniversalStatus : WBTimelineItem
{
    NSString *source;
    NSString *sourceScheme;
    NSString *favorID;
    NSString *rid;
    NSDate *originalDate;
    BOOL favorited;
    NSString *thumbnailImageURL;
    NSString *middleImageURL;
    NSString *originalImageURL;
    //    WBStatusWPInfo *wpInfo;
    //    WBStatusComplaintInfo *complaintInfo;
    unsigned int retweetCount;
    unsigned int commentCount;
    int likeCount;
    //    CDStruct_2c43369c location;
    double distance;
    BOOL isKeepTop;
    int statusType;
    NSString *statusTypeName;
    NSString *adMark;
    NSString *feedGroupID;
    NSString *smartFeedID;
    unsigned int statusLikeState;
    NSArray *buttonModels;
    NSArray *dynamicButtons;
    NSArray *dynamicMenus;
    int readCount;
    NSString *sharedUrl;
    int sharedCount;
    BOOL _sourceUrlEnable;
    BOOL _deleted;
    BOOL _isDisableHeightlightTime;
    NSString *directionGroupID;
    NSArray *pictures;
    WBUniversalStatus *retweetByStatus;
    int recom_state;
    NSString *scheme;
    int weiboIndex;
    //    WBTimelineTimestampInfo *timestampInfo;
    NSArray *products;
    NSDictionary *_sourceSchemeDict;
    NSString *_textSource;
    NSDictionary *_textSourceSchemeDict;
    NSString *_sourceUrl;
    NSString *_sourceType;
    NSDictionary *_placeDic;
    NSArray *_recentComments;
    int _blockType;
    int _mlevel;
    NSString *_bgPic;
    NSString *_bgType;
    NSString *_bgScheme;
    NSString *_bgCardId;
    NSString *_bgText;
    //    WBPromotion *_promotion;
    NSString *_deleteWeiboText;
    int _preloadType;
    NSDictionary *_continueTag;
    NSString *_preloadInfo;
    NSArray *_preloadArticleIDs;
    NSDictionary *_preloadData;
    //    WBUniversalLongStatus *_longStatus;
    //    WBStatusExtraButtonInfo *_extraButtonInfo;
    int _isShowBulletin;
    double saveTime;
}

+ (id)commonButtonIdsFromMblogLocalList:(id)arg1;	// IMP=0x00d9c34b
+ (void)updateStatusWithUserRelationship:(int)arg1 userID:(id)arg2 saveToDB:(id)arg3;	// IMP=0x00d9b3db
+ (id)loadStatusWithID:(id)arg1 fromDB:(id)arg2;	// IMP=0x00d9b2d9
+ (id)databaseMapDictionary;	// IMP=0x00d9b1a5
+ (void)updateFwdCmtLikeCountOfStatus:(id)arg1 saveToDB:(id)arg2;	// IMP=0x00d99d17
+ (void)updateProductWishStatus:(id)arg1 saveToDB:(id)arg2;	// IMP=0x00d99b5b
+ (void)updateReadsCountForStatus:(id)arg1 saveToDB:(id)arg2;	// IMP=0x00d99a6b
+ (void)updateLikeStateForStatus:(id)arg1 saveToDB:(id)arg2;	// IMP=0x00d9993d
+ (void)setLikeState:(unsigned int)arg1 forStatus:(id)arg2 saveToDB:(id)arg3;	// IMP=0x00d998dd
+ (void)deleteAllTrendItemsFromDB:(id)arg1 type:(id)arg2;	// IMP=0x00d99855
+ (void)deleteStatusFromDB:(id)arg1 statusIDs:(id)arg2 type:(id)arg3;	// IMP=0x00d9960f
+ (BOOL)deleteStatusFromDB:(id)arg1 clientTaskID:(unsigned long long)arg2;	// IMP=0x00d99557
+ (void)deleteStatusFromDB:(id)arg1 clientItemIDs:(id)arg2 type:(id)arg3;	// IMP=0x00d99311
+ (BOOL)deleteStatusFromDB:(id)arg1 clientItemID:(id)arg2;	// IMP=0x00d99287
+ (void)deleteStatus:(id)arg1 fromDB:(id)arg2;	// IMP=0x00d991cd
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2 olderThen:(id)arg3;	// IMP=0x00d990c9
+ (void)deleteAllFromDB:(id)arg1 directionalGroupId:(id)arg2;	// IMP=0x00d99041
+ (void)deleteAllFromDB:(id)arg1 type:(id)arg2;	// IMP=0x00d98fb9
+ (void)deleteAllAndStandStatusFromDB:(id)arg1 type:(id)arg2;	// IMP=0x00d98f31
+ (void)resetSpecialStatusesAsNormalInDB:(id)arg1 forType:(id)arg2;	// IMP=0x00d98cd5
+ (void)saveSmartDictStatuses:(id)arg1 intoDB:(id)arg2 type:(id)arg3;	// IMP=0x00d98a99
+ (void)saveStatuses:(id)arg1 intoDB:(id)arg2 type:(id)arg3;	// IMP=0x00d98a95
+ (void)saveDictStatuses:(id)arg1 intoDB:(id)arg2 directionalGroupId:(id)arg3 shouldRemoveHistory:(BOOL)arg4;	// IMP=0x00d98923
+ (void)saveDictStatuses:(id)arg1 intoDB:(id)arg2 type:(id)arg3 shouldRemoveHistory:(BOOL)arg4;	// IMP=0x00d987b1
+ (void)saveDictStatus:(id)arg1 intoDB:(id)arg2 directionalGroupId:(id)arg3;	// IMP=0x00d9868d
+ (void)saveDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3;	// IMP=0x00d98569
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 directionGroupId:(id)arg3;	// IMP=0x00d9851f
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3;	// IMP=0x00d984d5
+ (id)v3DictionaryArrayForStatuses:(id)arg1;	// IMP=0x00d9838d
+ (id)v3DictionaryWithStatus:(id)arg1;	// IMP=0x00d94f0d
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 directionGroupId:(id)arg3 feedPriority:(int)arg4;	// IMP=0x00d93d11
+ (void)insertDictStatus:(id)arg1 intoDB:(id)arg2 type:(id)arg3 feedPriority:(int)arg4;	// IMP=0x00d92af7
+ (id)generateDBExtraPropertiesFromV3Dictionary:(id)arg1;	// IMP=0x00d927bb
+ (id)dictionaryRepresentationOfRecentComment:(id)arg1;	// IMP=0x00d91e53
+ (id)recentCommentWithDictionary:(id)arg1;	// IMP=0x00d91a19
+ (id)simplifiedRecentCommentDictionaryFromDictionary:(id)arg1;	// IMP=0x00d919cd
+ (Class)quotedItemClass;	// IMP=0x00d90dc1
+ (BOOL)retweetableWithStatusType:(int)arg1;	// IMP=0x00d90db1
+ (void)mblogTypeAndVisibleWithStatusType:(int)arg1 mblogType:(int *)arg2 visible:(int *)arg3;	// IMP=0x00d8ba45
+ (int)statusTypeWithMBlogType:(int)arg1 visible:(int)arg2;	// IMP=0x00d8b9f5
+ (id)arrayWithRepostList:(id)arg1;	// IMP=0x00d8b8eb
+ (id)statusInRepostListWithDictionary:(id)arg1;	// IMP=0x00d8b3a1
+ (id)keyForBaseColor:(int)arg1;	// IMP=0x00d8b341
+ (void)initialize;	// IMP=0x00d8b10d
@property(nonatomic) int isShowBulletin; // @synthesize isShowBulletin=_isShowBulletin;
//@property(retain, nonatomic) WBStatusExtraButtonInfo *extraButtonInfo; // @synthesize extraButtonInfo=_extraButtonInfo;
//@property(retain, nonatomic) WBUniversalLongStatus *longStatus; // @synthesize longStatus=_longStatus;
@property(retain, nonatomic) NSDictionary *preloadData; // @synthesize preloadData=_preloadData;
@property(retain, nonatomic) NSArray *preloadArticleIDs; // @synthesize preloadArticleIDs=_preloadArticleIDs;
@property(retain, nonatomic) NSString *preloadInfo; // @synthesize preloadInfo=_preloadInfo;
@property(retain, nonatomic) NSDictionary *continueTag; // @synthesize continueTag=_continueTag;
@property(nonatomic) int preloadType; // @synthesize preloadType=_preloadType;
@property(retain, nonatomic) NSString *deleteWeiboText; // @synthesize deleteWeiboText=_deleteWeiboText;
@property(nonatomic) BOOL isDisableHeightlightTime; // @synthesize isDisableHeightlightTime=_isDisableHeightlightTime;
//@property(retain, nonatomic) WBPromotion *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSString *bgText; // @synthesize bgText=_bgText;
@property(retain, nonatomic) NSString *bgCardId; // @synthesize bgCardId=_bgCardId;
@property(retain, nonatomic) NSString *bgScheme; // @synthesize bgScheme=_bgScheme;
@property(retain, nonatomic) NSString *bgType; // @synthesize bgType=_bgType;
@property(retain, nonatomic) NSString *bgPic; // @synthesize bgPic=_bgPic;
@property(nonatomic) int mlevel; // @synthesize mlevel=_mlevel;
@property(nonatomic) int blockType; // @synthesize blockType=_blockType;
@property(nonatomic) BOOL deleted; // @synthesize deleted=_deleted;
@property(retain, nonatomic) NSArray *recentComments; // @synthesize recentComments=_recentComments;
@property(retain, nonatomic) NSDictionary *placeDic; // @synthesize placeDic=_placeDic;
@property(nonatomic) BOOL sourceUrlEnable; // @synthesize sourceUrlEnable=_sourceUrlEnable;
@property(retain, nonatomic) NSString *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl=_sourceUrl;
@property(retain, nonatomic) NSDictionary *textSourceSchemeDict; // @synthesize textSourceSchemeDict=_textSourceSchemeDict;
@property(copy, nonatomic) NSString *textSource; // @synthesize textSource=_textSource;
@property(retain, nonatomic) NSDictionary *sourceSchemeDict; // @synthesize sourceSchemeDict=_sourceSchemeDict;
@property(nonatomic) int sharedCount; // @synthesize sharedCount;
@property(retain, nonatomic) NSArray *products; // @synthesize products;
- (void)setTimestampInfo:(id)arg1;	// IMP=0x00d9cc13
- (id)timestampInfo;	// IMP=0x00d9cc03
- (void)setSaveTime:(double)arg1;	// IMP=0x00d9cbef
- (double)saveTime;	// IMP=0x00d9cbd7
@property(retain, nonatomic) NSString *sharedUrl; // @synthesize sharedUrl;
@property(nonatomic) int readCount; // @synthesize readCount;
@property(nonatomic) int weiboIndex; // @synthesize weiboIndex;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme;
@property(nonatomic) int recom_state; // @synthesize recom_state;
@property(nonatomic) __weak WBUniversalStatus *retweetByStatus; // @synthesize retweetByStatus;
@property(retain, nonatomic) NSArray *dynamicMenus; // @synthesize dynamicMenus;
@property(retain, nonatomic) NSArray *dynamicButtons; // @synthesize dynamicButtons;
@property(retain, nonatomic) NSArray *buttonModels; // @synthesize buttonModels;
@property(retain, nonatomic) NSArray *pictures; // @synthesize pictures;
@property(retain, nonatomic) NSDate *originalDate; // @synthesize originalDate;
@property(nonatomic) unsigned int statusLikeState; // @synthesize statusLikeState;
@property(retain, nonatomic) NSString *directionGroupID; // @synthesize directionGroupID;
@property(retain, nonatomic) NSString *feedGroupID; // @synthesize feedGroupID;
@property(retain, nonatomic) NSString *smartFeedID; // @synthesize smartFeedID;
@property(retain, nonatomic) NSString *adMark; // @synthesize adMark;
@property(retain, nonatomic) NSString *statusTypeName; // @synthesize statusTypeName;
@property(nonatomic) int statusType; // @synthesize statusType;
@property(nonatomic) BOOL isKeepTop; // @synthesize isKeepTop;
@property(readonly, nonatomic) double distance; // @synthesize distance;
//@property(readonly, nonatomic) CDStruct_2c43369c location; // @synthesize location;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(nonatomic) unsigned int commentCount; // @synthesize commentCount;
@property(nonatomic) unsigned int retweetCount; // @synthesize retweetCount;
@property(nonatomic) BOOL favorited; // @synthesize favorited;
//@property(retain, nonatomic) WBStatusComplaintInfo *complaintInfo; // @synthesize complaintInfo;
//@property(retain, nonatomic) WBStatusWPInfo *wpInfo; // @synthesize wpInfo;
@property(retain, nonatomic) NSString *originalImageURL; // @synthesize originalImageURL;
@property(retain, nonatomic) NSString *thumbnailImageURL; // @synthesize thumbnailImageURL;
@property(retain, nonatomic) NSString *rid; // @synthesize rid;
@property(retain, nonatomic) NSString *favorID; // @synthesize favorID;
@property(retain, nonatomic) NSString *sourceScheme; // @synthesize sourceScheme;
@property(copy, nonatomic) NSString *source; // @synthesize source;
//- (void).cxx_destruct;	// IMP=0x00d9d183
- (id)extraMenuModelWithType:(unsigned int)arg1;	// IMP=0x00d9c4d9
- (id)analysisDynamicMenusFromServer:(id)arg1;	// IMP=0x00d9c1c7
- (id)analysisDynamicButtonsFromServer:(id)arg1;	// IMP=0x00d9b80d
- (id)searchItem;	// IMP=0x00d9b49b
- (id)valueForDatabaseKey:(id)arg1;	// IMP=0x00d9b2d5
- (void)loadFromRS:(id)arg1 andDB:(id)arg2 mergeTaskIfNeeded:(BOOL)arg3;	// IMP=0x00d99eb5
- (void)loadFromRS:(id)arg1 andDB:(id)arg2;	// IMP=0x00d99e7d
- (void)dealloc;	// IMP=0x00d9253b
- (BOOL)isNeedShowBulletinComments;	// IMP=0x00d923f3
- (BOOL)containsOneOfTheMlevelAttributes:(int)arg1;	// IMP=0x00d923d5
- (BOOL)containsAllTheMlevelAttributes:(int)arg1;	// IMP=0x00d923ab
- (id)systemVersionSuffix;	// IMP=0x00d92319
- (id)bgPicUrl;	// IMP=0x00d920e9
@property(readonly, nonatomic) __weak NSArray *statusPictures;
- (BOOL)setLikeStateAndUpdateLikeCount:(unsigned int)arg1;	// IMP=0x00d9188f
- (id)fixedAdMark;	// IMP=0x00d917f7
- (id)typeName;	// IMP=0x00d917e7
- (id)availableAvatarImageURLs;	// IMP=0x00d917a1
- (id)firstPictureImageURLs;	// IMP=0x00d9173b
- (id)availableImageForShare;	// IMP=0x00d91391
- (id)availableOriginalImageURL;	// IMP=0x00d91313
- (id)availableMiddleImageURL;	// IMP=0x00d91295
- (id)availableThumbnailImageURL;	// IMP=0x00d91217
@property(retain, nonatomic) NSString *middleImageURL; // @synthesize middleImageURL;
@property(readonly, nonatomic) BOOL hasProduct;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasPhoto;
@property(readonly, nonatomic) BOOL hasRetweet;
- (void)setRetweetedStatus:(id)arg1;	// IMP=0x00d90ee7
- (id)retweetedStatus;	// IMP=0x00d90ed3
- (id)displaySource;	// IMP=0x00d90e53
- (BOOL)retweetable;	// IMP=0x00d90d6d
- (id)sourceUrlDictFromSource:(id)arg1;	// IMP=0x00d90a87
- (id)getPreloadDataArray;	// IMP=0x00d90929
- (BOOL)updateWithDictionary:(id)arg1;	// IMP=0x00d8e8a7
- (void)commonButtonDidChangeNotification:(id)arg1;	// IMP=0x00d8df5f
- (BOOL)updateWithJSONDictionary:(id)arg1;	// IMP=0x00d8baf5
- (id)init;	// IMP=0x00d8ba99
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00d8b025
- (id)valueForKey:(id)arg1;	// IMP=0x00d8aec9
- (id)analysisParameters;	// IMP=0x00cd04b9
- (id)ownAnalysisParameters;	// IMP=0x00cd02fd
- (void)updateWithDictionaryAndKeepAnalysisInfo:(id)arg1;	// IMP=0x00cd0237
- (id)featureCode;	// IMP=0x00cd01d1
- (id)ananyticsFeedGroupID;	// IMP=0x00cd00d9

@end

@interface WBStatus : WBUniversalStatus
{
    BOOL _positiveRecomHasDisplayed;
    //    WBPageCard *card;
    //    WBTimelineTrendItem *contentTimelineTrendItem;
    int _showUnionInfo;
    NSArray *_summaryOrderArray;
    //    WBStatusLikeSummary *_likeSummary;
    //    WBStatusForwardSummary *_forwardSummary;
    //    WBStatusCommmentSummary *_commentSummary;
    int _positiveRecomFlag;
    NSNumber *_topRightButtonType;
}

+ (int)statusCountInDB:(id)arg1 byGroupID:(id)arg2;	// IMP=0x00cd880b
+ (int)statusCountInDB:(id)arg1;	// IMP=0x00cd8793
+ (BOOL)hasTaskRelatedStatusInDB:(id)arg1 clientTaskID:(unsigned long long)arg2;	// IMP=0x00cd8179
+ (void)updateLikeStateOfUnionAreaForwardStatus:(id)arg1 ofStatus:(id)arg2 saveToDB:(id)arg3;	// IMP=0x00cd7c8f
+ (void)updateLikeStateOfUnionAreaComment:(id)arg1 ofStatus:(id)arg2 saveToDB:(id)arg3;	// IMP=0x00cd77b9
+ (id)v3DictionaryWithStatus:(id)arg1;	// IMP=0x00cd748f
+ (id)loadStatusWithTaskID:(unsigned long long)arg1 fromDB:(id)arg2;	// IMP=0x00cd16d1
+ (id)statusWithTask:(id)arg1;	// IMP=0x00cd05d1
+ (Class)textContentViewClass;	// IMP=0x00cd1cb5
+ (Class)contentViewClass;	// IMP=0x00cd1c99
+ (Class)drawingContextClass;	// IMP=0x00cd1c7d
+ (Class)tableViewCellClass;	// IMP=0x00cd1c61
+ (void)setSpecialBackgroundServerConfigs:(id)arg1;	// IMP=0x00cd18cd
@property(retain, nonatomic) NSNumber *topRightButtonType; // @synthesize topRightButtonType=_topRightButtonType;
@property(nonatomic) BOOL positiveRecomHasDisplayed; // @synthesize positiveRecomHasDisplayed=_positiveRecomHasDisplayed;
@property(nonatomic) int positiveRecomFlag; // @synthesize positiveRecomFlag=_positiveRecomFlag;
//@property(retain, nonatomic) WBStatusCommmentSummary *commentSummary; // @synthesize commentSummary=_commentSummary;
//@property(retain, nonatomic) WBStatusForwardSummary *forwardSummary; // @synthesize forwardSummary=_forwardSummary;
//@property(retain, nonatomic) WBStatusLikeSummary *likeSummary; // @synthesize likeSummary=_likeSummary;
@property(retain, nonatomic) NSArray *summaryOrderArray; // @synthesize summaryOrderArray=_summaryOrderArray;
@property(nonatomic) int showUnionInfo; // @synthesize showUnionInfo=_showUnionInfo;
//@property(retain, nonatomic) WBTimelineTrendItem *contentTimelineTrendItem; // @synthesize contentTimelineTrendItem;
//@property(retain, nonatomic) WBPageCard *card; // @synthesize card;
//- (void).cxx_destruct;	// IMP=0x00cd8a71
- (id)briefQuotedItemText;	// IMP=0x00cd8533
- (void)mergeFromLocalStatus:(id)arg1;	// IMP=0x00cd8257
- (BOOL)updateWithJSONDictionary:(id)arg1;	// IMP=0x00cd7159
- (BOOL)updateWithDictionary:(id)arg1;	// IMP=0x00cd6e07
- (id)retweetedStatus;	// IMP=0x00cd6ddb
- (id)realItemID;	// IMP=0x00cd6dc7
- (id)itemID;	// IMP=0x00cd6d91
- (void)dealloc;	// IMP=0x00cd6d25
- (id)init;	// IMP=0x00cd6c99
@property(readonly, nonatomic) long long extraMessageUid;
- (id)extraMessageID;	// IMP=0x0024398b
- (int)extraMessageType;	// IMP=0x00243987
@property(readonly, nonatomic) unsigned int contentLength;
//@property(readonly, nonatomic) WBTimelineURL *miniCard;
- (id)composeJobPropertiesWithComposeElement:(id)arg1;	// IMP=0x002437f7
//@property(readonly, nonatomic) WBTimelinePageInfo *sharingPageInfo;
@property(readonly, nonatomic) int composeSharingType;
- (id)shareToWeiboActionSheetItemWithAnalysisParameter:(id)arg1;	// IMP=0x00cd474f
- (id)shareText;	// IMP=0x00cd4699
- (id)statusShareActionSheetWithAnalysisParameters:(id)arg1;	// IMP=0x00cd3311
- (BOOL)isLocalStatus;	// IMP=0x00cd1867
- (BOOL)isLocalSendingItem;	// IMP=0x00cd17fd
- (void)loadFromRS:(id)arg1 andDB:(id)arg2 mergeTaskIfNeeded:(BOOL)arg3;	// IMP=0x00cd15f9
- (void)mergeFromTask:(id)arg1;	// IMP=0x00cd0b5b
- (id)displayTopRightCommonButton;	// IMP=0x00cd2a67
- (BOOL)showsReadCount;	// IMP=0x00cd299f
- (id)actionButtonTypes;	// IMP=0x00cd21ed
- (BOOL)shouldShowProducts;	// IMP=0x00cd21af
- (BOOL)shouldShowQuotedItemProducts;	// IMP=0x00cd214f
- (BOOL)shouldShowItemProducts;	// IMP=0x00cd210f
- (BOOL)shouldShowImageIndicator;	// IMP=0x00cd209d
- (BOOL)shouldShowImages;	// IMP=0x00cd1fe7
- (BOOL)shouldShowQuotedItemImages;	// IMP=0x00cd1f3f
- (BOOL)shouldShowItemImages;	// IMP=0x00cd1eb9
- (BOOL)shouldShowMapImage;	// IMP=0x00cd1e7b
- (BOOL)showQuotedVideo;	// IMP=0x00cd1e1b
- (BOOL)showVideo;	// IMP=0x00cd1ddb
- (BOOL)shouldShowQuotedItemActionButtons;	// IMP=0x00cd1d89
- (BOOL)shouldShowActionButtons;	// IMP=0x00cd1d0f
- (BOOL)shouldShowSourceText;	// IMP=0x00cd1ce5
- (void)didSelectRowOfTableView:(id)arg1 inViewController:(id)arg2;	// IMP=0x00cd1cd1
- (id)displaySourceScheme;	// IMP=0x00cd1c1f
- (int)displaySourceType;	// IMP=0x00cd1b21
- (id)displaySourceWithFrom;	// IMP=0x00cd1973
- (id)displaySource;	// IMP=0x00cd1925
- (id)specialBackgroundImage;	// IMP=0x00cd1877
- (id)uniqueDrawingContextIdentifier;	// IMP=0x00cd2aad
//@property(readonly, nonatomic) WBVideoTimelineStatusLayout *vt_layout;
//@property(readonly, nonatomic) WBVideoItem *vt_videoItem;
- (id)vp_gifVideoPictures;	// IMP=0x01686717
- (id)vp_largeVideoCardPageInfo;	// IMP=0x016866d1
- (id)vp_originalStatusUser;	// IMP=0x01686651
- (id)vp_followedCardIDForAnalysisParameter:(id)arg1;	// IMP=0x016864af
@property(nonatomic) BOOL vp_disableFollowButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSString *pageUrl;
@property(readonly, nonatomic) BOOL removable;
@property(readonly) Class superclass;

@end

@interface WBTimelineTableViewCell : UITableViewCell

+ (float)rowHeightOfDataObject:(WBStatus *)status tableView:(UITableView *)tableView;

@end

@interface WBResultSet : NSObject
{
    NSMutableArray *items;
    BOOL useForceHasMore;
    BOOL forceHasMore;
    NSMutableDictionary *userInfo;
    NSString *keyword;
    unsigned int pageSize;
    unsigned int currentPage;
    unsigned int expectedItemCount;
    BOOL hasMore;
    BOOL _disableAutoLoadMore;
    BOOL _endCursor;
}

@property(readonly, nonatomic) NSMutableArray *items;

- (void)removeItem:(id)arg1;

@end

@interface WBFeedGroup : NSObject

@property(retain, nonatomic) WBResultSet *statusResultSet;

+ (instancetype)group;
- (NSArray *)status;

@end

@interface WBTimeLineFeedGroup : WBFeedGroup

@end

@interface WBMainUnreadFeedGroup : WBTimeLineFeedGroup

- (BOOL)shouldInsertLocalStatusToResultSet:(id)arg1;

@end

@interface WBMainFeedGroup : WBTimeLineFeedGroup

- (void)loadMoreStatusFromNetWorkWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 isLoadedLocal:(BOOL)arg3;	// IMP=0x002146dd
- (void)loadMoreStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x002145a3
- (void)insertStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0021316d
- (void)reloadStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldInsertLocalStatusToResultSet:(id)arg1;
- (id)statusLoadRequest;

@end

@interface WBAd : UIView

@end

@interface WBAdHFlashAd : WBAd

- (void)show;	// IMP=0x009eaecd
- (void)showWithMain;	// IMP=0x009ea411
- (void)close;
- (void)hideAdWindow;

@end

@interface WBHomePullRefreshHeaderView : UIView

- (void)setAdModelFromManager;
- (void)setCurrentAdModel:(id)model;

@end

@interface WBContactEngine : NSObject

- (void)addContact:(id)arg1 toGroup:(id)arg2 extraParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end

@interface WBCustomGroupSearchViewController : UIViewController

@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts;
@property(retain, nonatomic) WBFeedGroup *contactGroup; // @synthesize contactGroup;
@property(retain, nonatomic) WBContactEngine *contactEngine;

- (id)analysisParameters;

@end

@interface WBContactManager : NSObject

+ (id)sharedManager;
- (BOOL)isContact:(id)arg1 inGroup:(id)arg2;

@end
