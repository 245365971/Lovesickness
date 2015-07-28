//
//  XSLComment.h
//  相思路--动态发表
//
//  Created by tarenaios on 15/7/27.
//  Copyright (c) 2015年 tarenaios. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "XSLUserDataID.h"
@interface XSLComment : NSObject
//评论人信息
@property (nonatomic,strong) XSLUserDataID * otherUserDataID;

//评论内容
@property (nonatomic,strong) NSString * commentContents;

//动态ID
@property (nonatomic,assign) NSInteger moodID ;

@end
