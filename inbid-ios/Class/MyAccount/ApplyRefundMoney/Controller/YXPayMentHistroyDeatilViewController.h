//
//  YXPayMentHistroyDeatilViewController.h
//  inbid-ios
//
//  Created by 胤讯测试 on 16/12/20.
//  Copyright © 2016年 胤讯. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YXNewsRefundMoneyBaseViewController.h"
#import "YXPayHistroyModle.h"
@class YXPayAndIncomeDetailModel;

@interface YXPayMentHistroyDeatilViewController : YXNewsRefundMoneyBaseViewController

/**
 详情中 没有接口 数据从 列表中拿到
 */
@property(nonatomic,strong) YXPayHistroyModle * DeatilModle;

/**
 钱包明细详情获取的数据
 */
@property (nonatomic, strong) YXPayAndIncomeDetailModel *detailModel;

@end
