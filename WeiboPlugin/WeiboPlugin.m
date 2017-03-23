//
//  WeiboPlugin.m
//  WeiboPlugin
//
//  Created by CorbinChen on 2017/3/23.
//  Copyright (c) 2017年 CorbinChen. All rights reserved.
//

#import "WeiboPlugin.h"
#import "WeiboPluginHeader.h"

#pragma mark - Plugin

@implementation NSObject (WeiboPlugin)

@end

@implementation UIView (WeiboPlugin)

@end

@implementation UIViewController (WeiboPlugin)

@end

static void __attribute__((constructor)) initialize(void) {
    NSLog(@"++++++++ WeiboPlugin loaded ++++++++");
}