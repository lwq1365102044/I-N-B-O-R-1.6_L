//
//  YXNoPayMoneyCell.h
//  Payment
//
//  Created by 郑键 on 16/11/30.
//  Copyright © 2016年 胤宝. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YXPaymentHomepageViewDataModel;

@interface YXNoPayMoneyCell : UITableViewCell

/**
 数据模型
 */
@property (nonatomic, strong) YXPaymentHomepageViewDataModel *dataModel;

@end