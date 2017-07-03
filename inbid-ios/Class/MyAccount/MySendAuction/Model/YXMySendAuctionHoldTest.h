//
//  YXMySendAuctionHoldTest.h
//  inbid-ios
//
//  Created by 郑键 on 16/9/18.
//  Copyright © 2016年 胤讯. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXMySendAuctionHoldTest : NSObject

/**
 * 鉴定订单ID
 */
//private Long id;
@property (nonatomic, assign) long long  orderId;
/**
 * 商品ID
 */
//private String prodId;
@property (nonatomic, copy) NSString *prodId;
/**
 * 商品名称
 */
//private String prodName;
@property (nonatomic, copy) NSString *prodName;
/**
 * 关于商品的描述内容
 */
//private String orderContent;
@property (nonatomic, copy) NSString *orderContent;

//private Date createTime;
@property (nonatomic, copy) NSString *createTime;
/**
 * 显示图片
 */
//private String imgUrl;
@property (nonatomic, copy) NSString *imgUrl;
/**
 * 建议价
 */
//private Long suggestMoney;
@property (nonatomic, assign) NSInteger suggestMoney;
/**
 * 回收价
 */
//private Long recycleMoney;
@property (nonatomic, assign) NSInteger recycleMoney;
/**
 * 订单状态
 * 1为刚提交，2为审核不通过，3为审核通过 ，4部分付款，5待发货，6待确认收货，7交易完成，8交易取消
 */
//private Integer orderStatus;
@property (nonatomic, assign) NSInteger orderStatus;
/**
 * 鉴定状态
 * 0待鉴定 1为鉴定中，2为鉴定成功；3为鉴定失败
 */
//private Integer identifyStatus;
@property (nonatomic, assign) NSInteger identifyStatus;
/**
 * 起拍价格
 */
//private Long startPrice;
@property (nonatomic, assign) NSInteger startPrice;
/**
 * 鉴定费
 */
//private Long identifyMoney;
@property (nonatomic, assign) NSInteger identifyMoney;
/**
 * 用户昵称
 */
//private String nickname;
@property (nonatomic, copy) NSString *nickname;
/**
 * 订单最终成交价
 */
//private Long orderTotalAmount;
@property (nonatomic, assign) NSInteger orderTotalAmount;
/**
 * 拍卖开始时间
 */
//private Date startTime;
@property (nonatomic, copy) NSString *startTime;
/**
 * 拍卖结束时间
 */
//private Date endTime;
@property (nonatomic, copy) NSString *endTime;
/**
 * 订单完成或者取消时间
 */
//private Date orderDealedCancelTime;
@property (nonatomic, copy) NSString *orderDealedCancelTime;
/**
 * 当前价
 */
//private Long currentPrice;
@property (nonatomic, assign) NSInteger currentPrice;
/**
 * 参与人数
 */
//private Integer memberCount;
@property (nonatomic, assign) NSInteger memberCount;
/**
 * 出价次数
 */
//private Integer bidCount;
@property (nonatomic, assign) NSInteger bidCount;
/**
 * 对商品的处理状态
 * 1为不同意交易；2为平台寄拍；3为回收价卖给平台
 */
//private Integer manageStatus;
@property (nonatomic, assign) NSInteger manageStatus;
/**
 * 状态生成的时间日志
 */
//private List<IdentifyStatusLog> logs;
@property (nonatomic, strong) NSArray *timeList;


//** 当前组 */
@property (nonatomic, assign) NSInteger currentSection;

//** 建议最高价 */
@property (nonatomic, assign) NSInteger maxSuggestMoney;

//** 建议最低价 */
@property (nonatomic, assign) NSInteger minSuggestMoney;

/**
 * 退回状态,1,未申请 2,已申请,3,退回中,4,已退回
 */
//private Integer refundStatus;
@property (nonatomic, assign) NSInteger refundStatus;

@property (nonatomic, assign) NSInteger currentPage;
/**
 * 配送方式（0快递发货，1会员自提）
 */
//private Integer isDelivery;
//@property (nonatomic, assign) NSInteger isDelivery;
@property (nonatomic, assign) NSInteger deliveryType;
/**
 * 审核结果
 */
//private String verifyResult;
@property (nonatomic, copy) NSString *verifyResult;
/**
 * 鉴定结果
 */
//private String identifyResult;
@property (nonatomic, copy) NSString *identifyResult;

/**
 一口价商品状态
 */
@property (nonatomic, assign) NSInteger bidStatus;

/**
 流拍转换状态：1寄拍，2一口价，3平台回收，4退回
 */
@property (nonatomic, assign) NSInteger auctionStatus;

/**
 打款状态 1.平台未打款 2.平台打款中3.平台已打款
 */
@property (nonatomic, assign) NSInteger paymentStatus;

@end
