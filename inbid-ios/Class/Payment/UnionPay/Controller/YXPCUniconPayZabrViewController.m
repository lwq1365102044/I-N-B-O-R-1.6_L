//
//  YXPCUniconPayZabrViewController.m
//  Payment
//
//  Created by 胤讯测试 on 16/11/30.
//  Copyright © 2016年 胤宝. All rights reserved.
//

#import "YXPCUniconPayZabrViewController.h"
#import "UILabel+Extension.h"
#import "YXChatViewManger.h"
#import "YXPaySuccessDataModle.h"
#import "YXMyAccountGOPaymentConfirmAddressViewController.h"
#import "YXOneMouthPriceConfirmOrderViewController.h"
#import "YXPaymentHomePageController.h"
#import "YXOrderDetailViewController.h"
#import "UIBarButtonItem+Extension.h"
@interface YXPCUniconPayZabrViewController ()
@property (weak, nonatomic) IBOutlet UIButton *titleBtn;
@property (weak, nonatomic) IBOutlet UILabel *dingdannumberAndPriceLable;
@property (weak, nonatomic) IBOutlet UILabel *descLable;
@property (weak, nonatomic) IBOutlet UIButton *PayMentSuccessBtn;
@property (weak, nonatomic) IBOutlet UIButton *PayMentRequestBtn;

@property(nonatomic,strong) YXPaySuccessDataModle * reponseModle;
@end

@implementation YXPCUniconPayZabrViewController
-(void)viewWillAppear:(BOOL)animated{
    [super viewWillAppear:animated];
    self.tabBarController.tabBar.hidden = YES;
}
//-(void)viewDidDisappear:(BOOL)animated{
//    [super viewDidDisappear:animated];
//    self.tabBarController.tabBar.hidden = NO;
//}
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    
    self.title = @"PC网银扫码支付";
   
    [self setNavRightItems];
    
    NSString *moneyAmount = [YXStringFilterTool strmethodComma:[NSString stringWithFormat:@"%ld",([self.dataModel.payAmount integerValue]  )/100]];
    self.dingdannumberAndPriceLable.text = [NSString stringWithFormat:@"订单号：   %@ \n支付金额：￥%@",self.dataModel.orderId ,moneyAmount];
    
    NSString *kefuphonestr = [YXLoadZitiData objectZiTiWithforKey:@"customerPhone"];
    if (!kefuphonestr.length) {
        kefuphonestr = @"010-84177113";
    }
    self.descLable.text = [NSString stringWithFormat:@"提示：如果支付遇到问题，请联系客服或致电我们的24小时客服热线：%@",kefuphonestr];
    self.descLable.textColor = UIColorFromRGB(0x808080);
    [self.dingdannumberAndPriceLable setRowSpace:10];
    [self.descLable setRowSpace:10];
    self.titleBtn.imageEdgeInsets = UIEdgeInsetsMake(0, -20, 0, 0);
    
    self.PayMentRequestBtn.layer.cornerRadius = 4;
    self.PayMentRequestBtn.layer.masksToBounds = YES;
    self.PayMentSuccessBtn.layer.cornerRadius = 4;
    self.PayMentSuccessBtn.layer.masksToBounds = YES;
}
/**
 添加消息item
 */
-(void)setNavRightItems
{
    UIButton *Rightbtn = [[UIButton alloc]initWithFrame:CGRectMake(0, 0, 40, 40)];
    [Rightbtn setImage:[UIImage imageNamed:@"ico_payNews"] forState:UIControlStateNormal];
    [Rightbtn addTarget:self action:@selector(ClickNewsVc) forControlEvents:UIControlEventTouchUpInside];
    Rightbtn.imageEdgeInsets = UIEdgeInsetsMake(0, 0, 0, -20);
    UIBarButtonItem *rightitem = [[UIBarButtonItem alloc]initWithCustomView:Rightbtn];
    self.navigationItem.rightBarButtonItem = rightitem;
    
    UIBarButtonItem *leftBarButtonItem          = [UIBarButtonItem itemWithTarget:self
                                                                           action:@selector(requestCheckScanPayStatus)
                                                                            image:@"icon_fanhui"
                                                                        highImage:@"icon_fanhui"];
    self.navigationItem.leftBarButtonItem       = leftBarButtonItem;
    
}
-(void)ClickNewsVc
{
    [[YXChatViewManger sharedChatviewManger] LoadChatView];
    [[YXChatViewManger sharedChatviewManger] presentMQChatViewControllerInViewController:self];
}

/**
 点击支付成功
 */
- (IBAction)ClickPayMentSuccessBtn:(UIButton *)sender {
    [self requestCheckScanPayStatus];
}
/**
 点击支付遇到问题
 */
- (IBAction)ClickPayMentRequestBtn:(id)sender {
    [self requestCheckScanPayStatus];
}

/*
 forme vc
 waitpay vc
 扫码vc
 自己vc
 */
/*
 @brief 返回的时候，需要查询一下，支付是否 成功。。。。
 */
-(void)requestCheckScanPayStatus
{
    NSMutableDictionary *param = [NSMutableDictionary dictionary];
    param[@"id"] = self.dataModel.orderId;
    param[@"type"] = @(self.dataModel.transType);
    [YXRequestTool requestDataWithType:POST url:@"/api/payment/queryIsSuccess" params:param success:^(id objc, id respodHeader) {
        if ([respodHeader[@"Status"] isEqualToString:@"1"]) {
            [self NewsPush:objc];
        }
    } failure:^(NSError *error) {
    }];
}

-(void)NewsPush:(id)objc
{
    YXOrderDetailViewController *orderdeatilVC = [YXOrderDetailViewController orderDetailViewControllerWithOrderId:[self.dataModel.orderId longLongValue] andExtend:self];
    [self.navigationController pushViewController:orderdeatilVC animated:YES];
}

-(void)dealloc
{
    [YXNotificationTool removeObserver:self];
}

@end