//
//  XSLMood.h
//  相思路--动态发表
//
//  Created by tarenaios on 15/7/27.
//  Copyright (c) 2015年 tarenaios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "XSLUserDataID.h"
typedef NS_ENUM(NSInteger, enumOfState) {
    LookForAPartnerInMarriage,        //找对象
    FindAFriend,                      //找朋友
    JustTakeALook                     //只是随便看看
};
@interface XSLMood : NSObject
//动态

//个人id 包含姓名、性别、年龄、身高、签名、头像
@property (nonatomic,assign) NSInteger  userID;//标示个人

@property (nonatomic,assign) NSInteger  moodID;//表示动态

//发表位置
@property (nonatomic,assign) CLLocationCoordinate2D * position;
//发表时距当前的时间
@property (nonatomic,strong) NSDate * date;
//当前时间
@property (nonatomic,strong) NSString * currentDate;
//内容
@property (nonatomic,strong) NSString * content;
//点赞数量
@property (nonatomic,assign) NSUInteger  praiseNum;

//当前交友状态状态 {找对象、找朋友、随便看看}
@property (nonatomic,assign) enumOfState  state;


//图片数组
@property (nonatomic, strong) NSMutableArray  * allImages;

//获取一条动态的所有信息
+(id)getContentsDate;
@end
