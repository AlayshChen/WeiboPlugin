# WeiboPlugin
Plugin to make weibo greater.  

## 功能说明  
* 去除微博广告
* 修复首页乱序问题

## 使用说明
* 如果你想自己实现，欢迎使用我整理的插件工程模版 [XcodeAppPluginTemplate](https://github.com/AlayshChen/XcodeAppPluginTemplate)
* 确保存在[insert_dylib](https://github.com/Tyilo/insert_dylib)命令或者自行修改`Weibo`target中Run Script对应脚本
* 自行解密App Store上微博客户端，将解密后的Weibo.app放置在工程目录下

![](http://ofg6kncyv.bkt.clouddn.com/20170323/0.png)

* 执行命令pod install, 打开工程选择`Weibo`target, command + R

![](http://ofg6kncyv.bkt.clouddn.com/20170323/4.png)
![](http://ofg6kncyv.bkt.clouddn.com/20170323/2.png)
![](http://ofg6kncyv.bkt.clouddn.com/20170323/3.png)
