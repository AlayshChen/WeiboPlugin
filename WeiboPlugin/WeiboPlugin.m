//
//  WeiboPlugin.m
//  WeiboPlugin
//
//  Created by CorbinChen on 16/10/23.
//  Copyright (c) 2016年 CorbinChen. All rights reserved.
//

#import "WeiboPlugin.h"
#import "WeiboPluginHeader.h"

#pragma mark - Plugin

@implementation NSObject (WeiboPlugin)

#pragma mark - WBAdManager

+ (id)cb_sharedManager {
    return nil;
}

/*
 WBMainUnreadFeedGroup 首页
 WBTimeLineFeedGroup 好友圈
 WBDirectionalFeedGroup 群微博
 */

#pragma mark - WBMainUnreadFeedGroup

+ (Class)cb_WBMainUnreadFeedGroup_class {
    return [CBGetClass(WBMainFeedGroup) class];
}

#pragma mark - WBFeedGroup

- (NSArray *)cb_fresh_status {
    WBFeedGroup *group = (WBFeedGroup *)self;
    NSMutableArray *items = group.statusResultSet.items;
    NSMutableArray *itemsToDel = [NSMutableArray new];
    
    for (id model in items) {
        if ([model isMemberOfClass:[CBGetClass(WBStatus) class]]) {
            WBStatus *status = model;
            if (status.statusType != 0) {
                [itemsToDel addObject:status];
            }
        }
        else if ([model isMemberOfClass:CBGetClass(WBTimelineOccupiedItem)]) {
            // "上次读到这里"
        }
        else {
            [itemsToDel addObject:model];
        }
    }
    
    [items removeObjectsInArray:itemsToDel];
    return [items copy];
}

#pragma mark - WBTimeLineFeedGroup

- (NSArray *)cb_WBTimeLineFeedGroup_status {
    return [self cb_fresh_status];
}

#pragma mark - WBMainFeedGroup

- (NSArray *)cb_WBMainFeedGroup_status {
    return [self cb_fresh_status];
}

- (void)cb_WBMainFeedGroup_reloadStatusWithParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 {
    NSMutableDictionary *dic = arg1;
    if ([dic[@"moduleID"] isEqualToString:@"feed"]) {
        dic[@"refresh"] = @"auto";
    }
    [self cb_WBMainFeedGroup_reloadStatusWithParams:dic completionHandler:arg2];
}

@end

@implementation UIView (WeiboPlugin)

#pragma mark - WBAdHFlashAd

- (void)cb_show {
    [(WBAdHFlashAd *)self close];
}

#pragma mark - WBHomePullRefreshHeaderView

- (void)cb_setCurrentAdModel:(id)model {
    
}

@end

@implementation UIViewController (WeiboPlugin)

#pragma mark - HomeViewController

- (void)cb_updateHeaderViewWithAdBannerVisible:(BOOL)arg1 {
    [self cb_updateHeaderViewWithAdBannerVisible:false];
}

@end

static void __attribute__((constructor)) initialize(void) {
    NSLog(@"++++++++ WeiboPlugin loaded ++++++++");
    CBHookClassMethod(WBAdManager, @selector(sharedManager), @selector(cb_sharedManager));
    
    CBHookClassMethod(WBMainUnreadFeedGroup, @selector(class), @selector(cb_WBMainUnreadFeedGroup_class));
    
    CBHookInstanceMethod(WBTimeLineFeedGroup, @selector(status), @selector(cb_WBTimeLineFeedGroup_status));
    CBHookInstanceMethod(WBMainFeedGroup, @selector(status), @selector(cb_WBMainFeedGroup_status));
    
    CBHookInstanceMethod(WBMainFeedGroup, @selector(reloadStatusWithParams:completionHandler:), @selector(cb_WBMainFeedGroup_reloadStatusWithParams:completionHandler:))
    
    CBHookInstanceMethod(HomeViewController, @selector(updateHeaderViewWithAdBannerVisible:), @selector(cb_updateHeaderViewWithAdBannerVisible:));
    
    CBHookInstanceMethod(WBAdHFlashAd, @selector(show), @selector(cb_show));
    CBHookInstanceMethod(WBHomePullRefreshHeaderView, @selector(setCurrentAdModel:), @selector(cb_setCurrentAdModel:));
}
