//
//  XSLUserSpouse.h
//  Lovesickness
//
//  Created by w gq on 15/7/28.
//  Copyright (c) 2015年 JHH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XSLUserInfo.h"
@interface XSLUserSpouse : NSObject

///用户id
@property (nonatomic,strong)NSString *userId;

///年龄
@property (nonatomic, strong) NSString *slectedAge;

///身高
@property (nonatomic, assign) NSString *selectedHeight;

///学历
@property (nonatomic, strong) NSString *selectedEducation;

///月收入
@property (nonatomic, assign) NSString *selectedSalary;

///居住地区
@property (nonatomic, strong) NSString *selectedRegion;

///婚姻状况
@property (nonatomic) MaritalStatus slectedMaritalStatus;

///购房情况
@property (nonatomic, strong) NSString *selectedHousingSituation;

///有无子女
@property (nonatomic) BOOL selectedIsChildren;


@end
