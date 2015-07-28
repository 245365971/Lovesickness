//
//  XSLUser.h
//  Lovesickness  用户账号信息
//
//  Created by w gq on 15/7/28.
//  Copyright (c) 2015年 JHH. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface XSLUser : NSObject

///用户id
@property (nonatomic,strong)NSString *userId;

///用户账号
@property (nonatomic, strong) NSString *userName;

///登陆密码
@property (nonatomic, strong) NSString *passWord;



@end
