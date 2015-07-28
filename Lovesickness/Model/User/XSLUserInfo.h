//
//  XSLUserInfo.h
//  Lovesickness  用户个人信息
//
//  Created by w gq on 15/7/28.
//  Copyright (c) 2015年 JHH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XSLUserInfo : NSObject


typedef NS_ENUM(NSInteger, MaritalStatus) {
    NONEMARITAL, //未婚
    MARITAL,     //已婚
    DIVORCED     //离异
};

//----------------------------------基本资料----------------------------

///用户id
@property (nonatomic,strong)NSString *userId;

///昵称
@property (nonatomic, strong) NSString *nickName;

///电话号码
@property (nonatomic, strong) NSString *telephoneNumber;

///头像
@property (nonatomic, strong) NSString *headImageName;

///年龄
@property (nonatomic, strong) NSString *age;

///真实姓名
@property (nonatomic, strong) NSString *realName;

///生日
@property (nonatomic, strong) NSString *birthday;

///居住地区
@property (nonatomic, strong) NSString *region;

///性别
@property (nonatomic) BOOL *sex;

///身高
@property (nonatomic, assign) NSString *height;

///婚姻状况
@property (nonatomic) MaritalStatus maritalStatus;

///有无子女
@property (nonatomic) BOOL isChildren;

///情感状态
@property (nonatomic, strong) NSString *emotionalState;



//---------------------------小档案--------------------------------------


///家乡
@property (nonatomic, strong) NSString *hometown;

///名族
@property (nonatomic, strong) NSString *ethnic;

///属相
@property (nonatomic, strong) NSString *zodiac;

///星座
@property (nonatomic, strong) NSString *star;

///血型
@property (nonatomic, strong) NSString *bloodType;

///宗教信仰
@property (nonatomic, strong) NSString *religious;


//----------------------------外貌-------------------------------------


///体型
@property (nonatomic, strong) NSString *bodySize;

///体重
@property (nonatomic, strong) NSString *weight;

///相貌自评
@property (nonatomic, strong) NSString *selfEvaluation;



//----------------------教育 工作 经济情况-------------------------------

///学历id
@property (nonatomic, strong) NSString *educationId;

///毕业学校
@property (nonatomic, strong) NSString *schoolId;

///职业
@property (nonatomic, strong) NSString *professionId;

///购车情况
@property (nonatomic, strong) NSString *isCar;

///购房情况
@property (nonatomic, strong) NSString *housingSituation;

///月收入
@property (nonatomic, assign) double salary;

@end
