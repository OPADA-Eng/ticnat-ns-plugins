//
//  MWIFIManager.h
//  Printer
//
//  Created by apple on 16/4/5.
//  Copyright © 2016年 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class MWIFIManager;
typedef void(^MWIFIBlock)(BOOL isConnect);
typedef void(^MWIFICallBackBlock)(NSData *data);
enum {
    SocketOfflineByServer,// 服务器掉线，默认为0
    SocketOfflineByUser,  // 用户主动cut
};

/**
 *连接多个设备
 * 采用 MWIFIManager *manager = [[MWIFIManager alloc] init] 实例化对象，
 * 将 manager 保存，发送指令时指定相对应的 manager 发送指令
 */
@protocol MWIFIManagerDelegate <NSObject>

// 成功连接主机
- (void)MWIFIManager:(MWIFIManager *)manager didConnectedToHost:(NSString *)host port:(UInt16)port;
// 断开连接
- (void)MWIFIManager:(MWIFIManager *)manager willDisconnectWithError:(NSError *)error;
// 写入数据成功
- (void)MWIFIManager:(MWIFIManager *)manager didWriteDataWithTag:(long)tag;
// 收到回传
- (void)MWIFIManager:(MWIFIManager *)manager didReadData:(NSData *)data tag:(long)tag;
// 断开连接
- (void)MWIFIManagerDidDisconnected:(MWIFIManager *)manager;
@end

@interface MWIFIManager : NSObject
{
    int commandSendMode; //命令发送模式 0:立即发送 1：批量发送
}
#pragma mark - 基本属性
// 主机地址
@property (nonatomic,copy) NSString *hostStr;
// 端口
@property (nonatomic,assign) UInt16 port;
// 是否连接成功
@property (nonatomic,assign) BOOL connectOK;
// 是自动断开连接 还是 手动断开
@property (nonatomic,assign) BOOL isAutoDisconnect;

@property (nonatomic,weak) id<MWIFIManagerDelegate> delegate;
// 连接回调
@property (nonatomic,copy) MWIFIBlock callBack;
// 接收服务端返回的数据
@property (nonatomic,copy) MWIFICallBackBlock callBackBlock;
@property (nonatomic,strong) NSMutableArray *commandBuffer;
//发送队列数组
#pragma mark - 基本方法
+ (instancetype)shareWifiManager;
//连接主机
-(void)MConnectWithHost:(NSString *)hostStr port:(UInt16)port completion:(MWIFIBlock)block;
// 断开主机
- (void)MDisConnect;

//修改版本的推荐使用发送数据的两个方法
-(void)MWriteCommandWithData:(NSData *)data;

-(void)MWriteCommandWithData:(NSData *)data withResponse:(MWIFICallBackBlock)block;

// 发送TSC完整指令
- (void)MSendMSGWith:(NSString *)str;
// 发送M完整指令
//- (void)MWriteMCommandWithData:(NSData *)data withResponse:(MWIFICallBackBlock)block;
//#pragma mark - 打印机指令
//#pragma mark - ====================TSC指令===================
///**
// * 1.设置标签尺寸
// * width : 标签宽度
// * height : 标签高度
// */
//- (void)MaddSizeWidth:(int)width height:(int)height;
///**
// * 2.设置间隙长度
// * gap : 间隙长度
// */
//- (void)MaddGap:(int)gap;
///**
// * 3.产生钱箱控制脉冲
// * m : 钱箱引脚号
// * t1 : 高电平时间
// * t2 : 低电平时间
// */
//- (void)MaddCashDrwer:(int)m  t1:(int)t1  t2:(int)t2;
///**
// * 4.控制每张标签的停止位置
// * offset : 停止偏移量
// */
//- (void)MaddOffset:(float)offset;
///**
// * 5.设置打印速度
// * speed : 打印速度
// */
//- (void)MaddSpeed:(float)speed;
///**
// * 6.设置打印浓度
// * n : 打印浓度
// */
//- (void)MaddDensity:(int)n;
///**
// * 7.设置打印方向和镜像
// * n : 打印方向
// */
//- (void)MaddDirection:(int)n;
///**
// * 8.设置原点坐标
// * x : 原点横坐标
// * y : 原点纵坐标
// */
//- (void)MaddReference:(int)x  y:(int)y;
///**
// * 9.清除打印缓冲区数据
// */
//- (void)MaddCls;
///**
// * 10.走纸
// * feed : 走纸长度
// */
//- (void)MaddFeed:(int)feed;
///**
// * 11.退纸
// * feed : 退纸长度
// */
//- (void)MaddBackFeed:(int)feed;
///**
// * 12.走一张标签纸距离
// */
//- (void)MaddFormFeed;
///**
// * 13.标签位置进行一次校准
// */
//- (void)MaddHome;
///**
// * 14.打印标签
// * m : 打印的标签份数
// */
//- (void)MaddPrint:(int)m;
///**
// * 15.设置国际代码页
// * page : 国际代码页
// */
//- (void)MaddCodePage:(int)page;
///**
// * 16.设置蜂鸣器
// * level: 声音阶级
// * interval : 声音长短
// */
//- (void)MaddSound:(int)level interval:(int)interval;
///**
// * 17.设置打印机报错
// * feed : 走纸长度
// */
//- (void)MaddLimitFeed:(int)feed;
///**
// * 18.在打印缓冲区绘制黑块
// * x : 其实横坐标
// * y : 起始纵坐标
// * width: 线宽
// * height: 线高
// */
//- (void)MaddBar:(int)x y:(int)y width:(int)width height:(int)height;
///**
// * 19.在打印缓冲区绘制一维条码
// * x : 其实横坐标
// * y : 起始纵坐标
// * type : 条码类型
// * height : 条码高度
// * readable : 是否打印可识别字符
// * rotation : 条码旋转角度0,90,180,270
// * conten: 条码数据，数据需参考条码规则输入
// */
//- (void)Madd1DBarcodeX:(int)x
//                      y:(int)y
//                   type:(NSString *)type
//                 height:(int)height
//               readable:(int)readable
//               rotation:(int)rotation
//                 narrow:(int)narrow
//                   wide:(int)wide
//                content:(NSString *)content;
///**
// * 20.在打印缓冲区绘制矩形
// * x : 其实横坐标
// * y : 起始纵坐标
// * xend : 终点横坐标
// * yend : 终点纵坐标
// */
//- (void)MaddBox:(int)x y:(int)y xend:(int)xend yend:(int)yend;
///**
// * 21.在打印缓冲区绘制位图
// * x : 起始横坐标
// * y : 起始纵坐标
// * width: 位图打印宽度
// * height: 高度
// */
//- (void)MaddBitmap:(int)x
//                  y:(int)y
//              width:(int)width
//             height:(int)height
//               mode:(int)mode data:(int)data;
///**
// * 22.擦除打印缓冲区中指定区域的数据
// * x : 起始横坐标
// * y : 起始纵坐标
// * xwidth : 横向宽度
// * yheight : 纵向高度
// */
//- (void)MaddErase:(int)x y:(int)y xwidth:(int)xwidth yheight:(int)yheight;
///**
// * 23.将指定区域的数据黑白反色
// * x : 起始横坐标
// * y : 起始纵坐标
// * xwidth : 横向宽度
// * yheight : 纵向高度
// */
//- (void)MaddReverse:(int)x y:(int)y xwidth:(int)xwidth yheight:(int)yheight;
///**
// * 24.在打印缓冲区中绘制文字
// * x : 起始横坐标
// * y : 起始纵坐标
// * font : 字体类型
// * rotation : 旋转角度
// * xmul : 横向放大系数1-10倍
// * ymul : 纵向放大系数1-10倍
// * content : 文字字符串
// */
//- (void)MaddText:(int)x y:(int)y font:(NSString *)font rotation:(int)rotation x_mul:(int)xmul y_mul:(int)ymul content:(NSString *)content;
///**
// * 25.在打印缓冲区中绘制文字
// * x : 起始横坐标
// * y : 起始纵坐标
// * level : 纠错级别
// * cellWidth : 单元大小
// * totation : 旋转角度
// * dataStr : 打印文字
// */
//- (void)MaddQRCode:(int)x y:(int)y level:(int)level cellWidth:(int)cellWidth rotation:(int)totation data:(NSString *)dataStr;
///**
// * 26.设置剥离功能是否开启
// * enable : 是否使能
// */
//- (void)MaddPeel:(NSString *)enable;
///**
// * 27.设置撕离功能是否开启
// * enable : 是否使能
// */
//- (void)MaddTear:(NSString *)enable;
//
///**
// * 28.设置切刀功能是否开启
// * enable : 是否使能
// */
//- (void)MaddCut:(NSString *)enable;
///**
// * 29.设置打印机出错时，是否打印上一张内容
// * enable : 是否使能
// */
//- (void)MaddReprint:(NSString *)enable;
///**
// * 30.设置是否按走纸键打印最近一张标签
// * enable : 是否使能
// */
//- (void)MaddPrintKeyEnable:(NSString *)enable;
///**
// * 31.设置按走纸键打印最近一张标签的份数
// * m : 打印份数
// */
//- (void)MaddPrintKeyNum:(int)m;
//
//
//#pragma mark - ================M指令====================
///**
// *1.水平定位
// */
//- (void)MhorizontalMition;
///**
// * 2.打印并换行
// */
//- (void)MprintAndFeed;
///**
// * 3.打印并回到标准模式
// */
//- (void)MPrintAndBackToNormalModel;
///**
// * 4.页模式下取消打印数据
// */
//- (void)MCancelPrintData;
///**
// * 5.实时状态传送
// * param:指定所要传送的打印状态
// *   1 <= param <= 4
// * callBlock : 打印机返回的相关状态
// */
//- (void)MUpdataPrinterState:(int)param completion:(MWIFICallBackBlock)callBlock;
///**
// * 6.实时对打印机请求
// * param : 表示对打印机发送的请求
// *  1 <= param <= 2
// */
//- (void)MUpdataPrinterAnswer:(int)param;
///**
// * 7.实时产生钱箱开启脉冲
// *  m : 指定钱箱插座的引脚
// *  t : 电平时间
// *  n = 1
// *  m = 0,1
// *  1 <= t <= 8
// */
//- (void)MOpenBoxAndPulse:(int) n m:(int) m t:(int) t;
///**
// * 8.页模式下打印
// */
//- (void)MPrintOnPageModel;
///**
// * 9.设置字符右间距
// * n : 表示字符间距
// *  0 <= n <= 255
// */
//- (void)MSetCharRightMargin:(int)n;
///**
// * 10.选择打印模式
// * n : 根据n的值设置字符打印模式
// *  0 <= n <= 255
// */
//- (void)MSelectPrintModel:(int)n;
///**
// * 11.设置绝对打印位置
// *  0 <= nL <= 255
// *  0 <= nh <= 255
// */
//- (void)MSetPrintLocationWithParam:(int)nL nH:(int)nH;
///**
// * 12.选择/取消用户自定义字符
// *   0 <= n <= 255
// */
//- (void)MSelectOrCancelCustomCharacter:(int)n;
//
///**
// * 13.定义用户自定义字符
// *  y=3
// *  32<=c1<=c2<=127
// *  0<=x<=12 标准ASCII码字体A（12 x 24）
// *  0<=x<=9 压缩SCII码字体（9 x 17）
// *  0<=d1 ... d(y*xk)<=255
// *  points : 点矩阵数组,数组元素位字符串类型
// */
//- (void)MDefinCustomCharacter:(int)y c1:(int)c1 c2:(int)c2 dx:(NSArray *)points;
///**
// * 14.选择位图模式
// * 选择由m指定的一种位图模式，位图点数由nL和nH确定
// * m=0,1,32,33
// * 0<=nL<=255
// * 0<=nH<=3
// * 0<=d<=255
// */
//- (void)MSelectBitmapModel:(int)m nL:(int)nL nH:(int)nH dx:(NSArray *)points;
//
///**
// * 15.取消下划线模式
// * 0<=n<=2,48<=n<=50
// * 根据n的值选择或取消下划线模式
// */
//- (void)MCancelUnderLineModelWith:(int)n;
///**
// * 16.设置默认行间距
// */
//- (void)MSetDefaultLineMargin;
///**
// * 17.设置行间距
// * 0<=n<=255
// * 设置行间距位【n*纵向或横向移动单位】
// */
//- (void)MSetLineMarginWith:(int)n;
///**
// * 18.选择打印机
// * 0<=n<=1
// */
//- (void)MSelectPrinterWith:(int)n;
///**
// * 19.取消用户自定义字符
// * 32<=n<=127
// */
//- (void)MCancelCustomCharacterWith:(int)n;
///**
// * 20.初始化打印机
// *
// */
//- (void)MInitializePrinter;
///**
// * 21.设置横向跳格位置
// * 1<=n<=255
// * 0<=k<=32
// */
//- (void)MSetTabLocationWith:(NSArray *)points;
///**
// * 22.选择/取消加粗模式
// * 0<=n<=255
// * n最低位为0时，取消加粗模式，位1时，选择加粗模式
// */
//- (void)MSelectOrCancelBoldModelWith:(int)n;
///**
// * 23.选择/取消双重打印模式
// * 0<=n<=255
// * n最低位：0 取消
// *         1 加粗
// */
//- (void)MSelectOrCancelDoublePrintModel:(int)n;
///**
// * 24.打印并走纸
// * 0<=n<=255
// * 打印缓冲区数据并走纸【n*纵向或横向移动单位】
// */
//- (void)MPrintAndPushPageWith:(int)n;
///**
// * 25.选择页模式
// */
//- (void)MSelectPageModel;
///**
// * 26.选择字体
// * n = 0,1,48,49
// */
//- (void)MSelectFontWith:(int)n;
///**
// * 27.选择国际字符集
// * 0<=n<=15
// */
//- (void)MSelectINTL_CHAR_SETWith:(int)n;
///**
// * 28.选择标准模式
// */
//- (void)MSelectNormalModel;
///**
// * 29.在页模式下选择打印区域方向
// * 0<=n<=3  48<=n<=51
// * n指定打印区域的方向和起始位置
// */
//- (void)MSelectPrintDirectionOnPageModel:(int)n;
///**
// * 30.选择/取消顺时针旋转90度
// * 0<=n<=1  48<=n<=49
// * 0,48 : 取消
// * 1,49 : 选择
// */
//- (void)MSelectOrCancelRotationClockwise:(int)n;
///**
// * 31.页模式下设置打印区域
// * 范围：0<=xL,xH,yL,yH,dxL,dxH,dyL,dyH<=255
// */
//- (void)MSetprintLocationOnPageModelWithXL:(int)xL
//                                         xH:(int)xH
//                                         yL:(int)yL
//                                         yH:(int)yH
//                                        dxL:(int)dxL
//                                        dxH:(int)dxH
//                                        dyL:(int)dyL
//                                        dyH:(int)dyH;
//
///**
// * 32.设置横向打印位置
// * 范围： nL  0 - 255
// nH  0 - 255
// */
//- (void)MSetHorizonLocationWith:(int)nL nH:(int)nH;
///**
// * 33.选择对齐方式
// * 范围： n  0 - 2
// 48 - 50
// */
//- (void)MSelectAlignmentWithN:(int)n;
///**
// * 34.选择打印纸传感器以输出信号
// * 范围： n  0 - 255
// */
//- (void)MSelectSensorForOutputSignal:(int)n;
///**
// * 35.选择打印纸传感器以停止打印
// * 范围： n  0 - 255
// */
//- (void)MSelectSensorForStopPrint:(int)n;
///**
// * 36.允许/禁止按键
// * 范围： n  0 - 255
// */
//- (void)MAllowOrDisableKeypress:(int)n;
///**
// * 37.打印并向前走纸 N 行
// * 范围： n  0 - 255
// */
//- (void)MPrintAndPushPageRow:(int)n;
///**
// * 38.产生钱箱控制脉冲
// * 范围：m  0 , 1 , 48 , 49
// t1 0  - 255
// t2 0 - 255
// */
//- (void)MMakePulseWithCashboxWithM:(int)m t1:(int)t1 t2:(int)t2;
///**
// * 39.选择字符代码表
// * 范围： n  0 - 10 或 16 - 19
// */
//- (void)MSelectCharacterTabN:(int)n;
///**
// * 40.选择/取消倒置打印模式
// * 范围： n  0 - 255
// */
//- (void)MSelectOrCancelInversionPrintModel:(int)n;
///**
// * 41.打印下载到FLASH中的位图
// * 范围：n  1 - 255
// m  0 - 3 , 48 - 51
// */
//- (void)MPrintFlashBitmapWithN:(int)n m:(int)m;
///**
// * 42.定义FLASH位图
// *范围：n  1 - 255
// * points : 位图的横向点数和纵向点数
// */
//- (void)MDefinFlashBitmapWithN:(int)n Points:(NSArray *)points;
///**
// * 43.选择字符大小
// * 范围：n  0 - 255
// */
//- (void)MSelectCharacterSize:(int)n;
///**
// * 44.页模式下设置纵向绝对位置
// * 范围：nL  1 - 255
// nH  0 - 255
// */
//- (void)MSetVertLocationOnPageModelWithnL:(int)nL nH:(int)nH;
///**
// * 45.定义下载位图
// * 范围：x  1 - 255
// y  1 - 48
// x * y <= 912
// d  0 - 255
// */
//- (void)MDefineLoadBitmapWithX:(int)x Y:(int)y Points:(NSArray *)points;
///**
// * 46.执行打印数据十六进制转储
// * 范围：pL = 2
// pH = 0
// n = 0,48
// m = 1,49
// */
//- (void)MPrintDataAndSaveAsHexWithpL:(int)pL pH:(int)pH n:(int)n m:(int)m;
///**
// * 47.打印下载位图
// * 范围：m  0 - 3 或 48 - 51
// */
//- (void)MPrintLoadBitmapM:(int)m;
///**
// * 48.开始/结束宏定义
// */
//- (void)MBeginOrEndDefine;
///**
// * 49.选择/取消黑白反显打印模式
// * 范围：n  0 - 255
// */
//- (void)MSelectORCancelBWPrintModel:(int)n;
///**
// * 50.选择HRI字符的打印位置
// * 范围：n  0 - 3 或 48 - 51
// */
//- (void)MSelectHRIPrintLocation:(int)n;
///**
// * 51.设置左边距
// * 范围：nL  0 - 255
// nH  0 - 255
// */
//- (void)MSetLeftMarginWithnL:(int)nL nH:(int)nH;
///**
// * 52.设置横向和纵向移动单位
// * 范围：x  0 - 255
// y  0 - 255
// */
//- (void)MSetHoriAndVertUnitXWith:(int)x y:(int)y;
///**
// * 53.选择切纸模式并切纸
// * model : 0,1  选择模式1 和 模式2
// * 模式1范围 : m = 0,48,1,49
// * 模式2范围 : m = 66, n = 0-255
// */
//- (void)MSelectCutPaperModelAndCutPaperWith:(int)m n:(int)n selectedModel:(int)model;
///**
// * 54.设置打印区域宽高
// * 范围：nL  0 - 255
// nH  0 - 255
// */
//- (void)MSetPrintLocationWith:(int)nL nH:(int)nH;
///**
// * 55.页模式下设置纵向相对位置
// * 范围：nL  0 - 255
// nH  0 - 255
// */
//- (void)MSetVertRelativeLocationOnPageModelWith:(int)nL nH:(int)nH;
///**
// * 56.执行宏命令
// * 范围：r  0 - 255
// t  0 - 255
// m  0,1
// */
//- (void)MRunMacroMommandWith:(int)r t:(int)t m:(int)m;
///**
// * 57.打开/关闭自动状态反传功能(ASB)
// * 范围：n  0 - 255
// */
//- (void)MOpenOrCloseASB:(int)n;
///**
// * 58.选择HRI使用字体
// * 范围：n  0,1,48,49
// */
//- (void)MSelectHRIFontToUse:(int)n;
///**
// * 59. 选择条码高度
// * 范围：n  1 - 255
// */
//- (void)MSelectBarcodeHeight:(int)n;
///**
// * 60.打印条码
// * model : 0,1 代表两种类型 0：表示类型1  1:表示类型2
// * 类型1: m  0-6
// * 类型2: m  65-73
// */
//- (void)MPrintBarCodeWithPoints:(int)m n:(int)n points:(NSArray *)points selectModel:(int)model;
///**
// * 61.返回状态
// * 范围：n  1,2,49,50
// */
//- (void)MCallBackStatus:(int)n completion:(MWIFICallBackBlock)block;
///**
// * 62.打印光栅位图
// * 范围：m  0 - 3 或 48 - 51
// xL 0 - 255
// xH 0 - 255
// yL 0 - 255
// yH 0 - 255
// points 表示位图数据
// */
//- (void)MPrintRasterBitmapWith:(int)m
//                             xL:(int)xL
//                             xH:(int)xH
//                             yl:(int)yL
//                             yh:(int)yH
//                         points:(NSArray *)points;
///**
// * 63.设置条码宽度
// * 范围：n  2 - 6
// */
//- (void)MSetBarcodeWidth:(int)n;
//#pragma mark - ============汉字字符控制命令============
///**
// * 64.设置汉字字符模式
// * 范围：n  0 - 255
// */
//- (void)MSetChineseCharacterModel:(int)n;
///**
// * 65.选择汉字模式
// */
//- (void)MSelectChineseCharacterModel;
///**
// * 66.选择/取消汉字下划线模式
// * 范围：n  0 - 2 或 48 - 50
// */
//- (void)MSelectOrCancelChineseUderlineModel:(int)n;
///**
// * 67.取消汉字模式
// */
//- (void)MCancelChineseModel;
///**
// * 68.定义用户自定义汉字
// * c1,c2代表字符编码
// * points 表示汉子矩阵
// */
//- (void)MDefineCustomChinesePointsC1:(int)c1 c2:(int)c2 points:(NSArray *)points;
///**
// * 69.设置汉字字符左右间距
// * 范围：n1  0 - 255
// n2  0 - 255
// */
//- (void)MSetChineseMarginWithLeftN1:(int)n1 n2:(int)n2;
///**
// * 70.选择/取消汉字倍高倍宽
// * 范围：n  0 - 255
// */
//- (void)MSelectOrCancelChineseHModelAndWModel:(int)n;
//#pragma mark - ============打印机提示命令============
///**
// * 72.打印机来单打印蜂鸣提示
// * 范围：n  1 - 9
// t  1 - 9
// */
//- (void)MPrinterSound:(int)n t:(int)t;
///**
// * 73.打印机来单打印蜂鸣提示及报警灯闪烁
// * 范围：m  1 - 20
// t  1 - 20
// n  0 - 3
// */
//- (void)MPrinterSoundAndAlarmLight:(int)m t:(int)t n:(int)n;

- (void)MSetCommandMode:(BOOL)Mode;

/*
 * 74.设置打印机发送命令模式
 * 范围：0，1
 ＊ 0:立即发送
 ＊ 1:批量发送
 */

-(NSArray*)MGetBuffer;
/*
 * 75.返回等待发送指令队列
 */

-(void)MClearBuffer;
/*
 * 76.清空等待发送指令队列
 */

-(void)MSendCommandBuffer;
/*
 * 77.发送指令队列
 */


@end
