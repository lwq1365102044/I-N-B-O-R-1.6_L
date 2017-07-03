//
//  YXMySendAuctionEndBid.h
//  inbid-ios
//
//  Created by 郑键 on 16/9/19.
//  Copyright © 2016年 胤讯. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YXMySendAuctionEndBid : NSObject

/**
 * 拍卖编号
 */
//private Long id;
@property (nonatomic, assign) long long bidId;
/**
 * 商品编号
 */
//private Long prodId;
@property (nonatomic, assign) long long prodId;
/**
 * 商品名称
 */
//private String prodName;
@property (nonatomic, copy) NSString *prodName;
/**
 * 当前最高价用户编号
 */
//private Long memberId;
@property (nonatomic, assign) long long memberId;
/**
 * 当前最高价用户昵称
 */
//private String nickName;
@property (nonatomic, copy) NSString *nickName;
/**
 * 用户头像地址
 */
//private String head;
@property (nonatomic, copy) NSString *head;
/**
 * 当前价格,单位为分
 */
//private Long currentPrice;
@property (nonatomic, assign) NSInteger currentPrice;
/**
 * 用户加价金额
 */
//private Long addPrice;
@property (nonatomic, assign) NSInteger addPrice;
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
 * 起拍价格
 */
//private Long startPrice;
@property (nonatomic, assign) NSInteger startPrice;
/**
 * 最小加价
 */
//private Long minAddPrice;
@property (nonatomic, assign) NSInteger minAddPrice;
/**
 * 保证金
 */
//private Long marginPrice;
@property (nonatomic, assign) NSInteger marginPrice;
/**
 * 拍卖状态：1=未开拍，2=拍卖中，3=中拍未支付，4=拍卖完成，5=流拍
 */
//private Integer bidStatus;
@property (nonatomic, assign) NSInteger bidStatus;
/**
 * 是否自营,0表示个人,1表示自营
 */
//private Integer isSelf;
@property (nonatomic, assign) NSInteger isSelf;
/**
 * 出价次数
 */
//private Integer bidCount;
@property (nonatomic, assign) NSInteger bidCount;
/**
 * 参与人数
 */
//private Integer actorNum;
@property (nonatomic, assign) NSInteger actorNum;
/**
 * 商品图片地址
 */
//private String imgUrl;
@property (nonatomic, copy) NSString *imgUrl;
/**
 * 订单总金额
 */
//private Long orderTotalAmount;
@property (nonatomic, assign) NSInteger orderTotalAmount;
/**
 * 打款状态; 1=平台未打款,2=平台打款中,3=平台已打款
 */
//private Integer paymentStatus;
@property (nonatomic, assign) NSInteger paymentStatus;
/**
 * 退回状态,1,未申请 2,已申请,3,退回中,4,已退回
 */
//private Integer refundStatus;
@property (nonatomic, assign) NSInteger refundStatus;

@property (nonatomic, assign) NSInteger currentPage;

@end
