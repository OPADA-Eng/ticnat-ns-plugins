//
//  MCommand.h
//  Printer
//
//  Created by LeeLee on 16/7/19.
//  Copyright © 2016年 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ImageTranster.h"

/**
 M指令类，调用其类方法可返回Nsdata类型的数据，用于发送，此类只适用于M打印机
 */
@interface MCommand : NSObject

/**
 水平定位<br>
 HT<br>
 09<br>
 */
+(NSData *) horizontalMition;
/**
 打印并换行<br>
 LF<br>
 0A<br>
 */
+(NSData *) printAndFeedLine;
/**
 打印并回到标准模式<br>
 FF<br>
 OC<br>
 */
+(NSData *) printAndBackStandardModel;
/**
 打印并跳格<br>
 CR<br>
 0D<br>
 */
+(NSData *) printAndTabs;
/**
 页模式下取消打印数据<br>
 CAN<br>
 18<br>
 */
+(NSData *) canclePrintDataByPageModel;
/**
 实时状态传送<br>
 DLE EOT n<br>
 10 04 n<br>
 (int) n: 1<=n<=4.<br>
 */
+(NSData *) sendRealTimeStatus:(int) n;
/**
 实时对打印机请求<br>
 DLE ENQ n<br>
 10 05 n<br>
 (int) n: 1<=n<=2.<br>
 */
+(NSData *) requestRealTimeForPrint:(int) n;
/**
 实时产生开钱箱脉冲<br>
 DLE DC4 n m t<br>
 10 14 01 m t<br>
 (int) m: m=0,或1；<br>
 (int) t: 1<=t<=8.<br>
 */
+(NSData *) openCashBoxRealTimeWithM:(int) m andT:(int) t;
/**
 页模式下打印<br>
 ESC FF<br>
 1B 0C<br>
 该命令只在页模式下有效<br>
 */
+(NSData *) printUnderPageModel;
/**
 设置字符右间距<br>
 1B 20 n<br>
 (int) n: 0~255,in dots.<br>
 */
+(NSData *) setCharRightSpace:(int) n;
/**
 选择打印模式<br>
 ESC !n<br>
 1B 21 n<br>
 (int) n: 0~255,只有n的最后一位有效，0代表取消，1代表选择.<br>
 */
+(NSData *) selectPrintModel:(int) n;
/**
 设置绝对打印位置<br>
 ESC $ nL nH<br>
 1B 24 nL nH<br>
 nL+nH*256 代表距离行首位置<br>
 */
+(NSData *) setAbsolutePrintMitionWithNL:(int) nL andNH:(int) nH;
/**
 选择或取消用户自定义字符<br>
 ESC % n<br>
 1B 25 n<br>
 (int) n: 0~255,只有n的最后一位有效，0代表取消，1代表选择.<br>
 */
+(NSData *) selectOrCancleCustomChar:(int) n;
/**
 定义用户自定义字符
 ESC * m nL nH d1 d2 ...dk<br>
 (int) c1: 起始字符代码<br>
 (int) c2: 终止字符代码，32<=c1<=c2<=127<br>
 (Byte*) bytes: 字符下载的字符的二进制数据。<br>
 */
+(NSData *) defineUserDefinedCharactersWithM:(int) m andNL:(int) nL andNH:(int) nH andBytes:(Byte *) bytes;
/**
 选择位图模式<br>
 ESC * m nL nH d1 d2 ...dk<br>
 m 范围：0，1，32，33，代表不同点的密度<br>
 nL范围：0-255<br>
 nH范围：0-3<br>
 b={d1,d2...dk},m=0,1时，k=nL+256*nH;m=32,33时，k=(nL+256*nH)*3;d:0-255;<br>
 */
+(NSData *) selectBmpModelWithM:(int) m andnL:(int) nL andnH:(int) nH andNSData:(NSData *) data;
/**
 选择或取消下划线模式<br>
 ESC-n<br>
 1B 2D n<br>
 (int) n:0 or 48 cancel;1 or 49 select(by 1 dot);2 or 50 select (by 2 dots).<br>
 */
+(NSData *) selectOrCancleUnderLineModel:(int) n;
/**
 设置默认行间距<br>
 ESC 2<br>
 */
+(NSData *) setDefultLineSpace;
/**
 设置行间距<br>
 ESC 3 n<br>
 1B 33 n<br>
 */
+(NSData *) setDefultLineSpace:(int) n;
/**
 选择打印机<br>
 ESC = n<br>
 1B 3D n<br>
 n:0或1<br>
 */
+(NSData *) selectPrinter:(int) n;
/**
 取消用户自定义字符<br>
 ESC ? n<br>
 取消用户自定义字符中代码为n的字符<br>
 n 范围：32-127<br>
 */
+(NSData *) cancleUserDefinedCharacters:(int) n;
/**
 初始化打印机<br>
 ESC @<br>
 1B 40<br>
 */
+(NSData *) initializePrinter;
/**
 设置横向跳格位置<br>
 ESC D n1 ...nk NUL<br>
 data={n1...nk};k<=32;跳格距离=字符宽度*k<br>
 参数data内的n值和k值请参考编程手册<br>
 */
+(NSData *) setHorizontalTabsMition:(NSData *) data;
/**
 选择或取消加粗模式<br>
 ESC E n<br>
 1B 45 n<br>
 (int) n: 0~255,只有n的最后一位有效，0代表取消，1代表选择.<br>
 */
+(NSData *) selectOrCancleBoldModel:(int) n;
/**
 选择或取消双重打印模式<br>
 ESC G n<br>
 1B 47 n<br>
 (int) n: 0~255,只有n的最后一位有效，0代表取消，1代表选择.<br>
 */
+(NSData *) selectOrCancleDoublePrintModel:(int) n;
/**
 打印并走纸<br>
 ESC J n<br>
 1B 4A n<br>
 (int) n: specify the length(in inch) feeds.
 */
+(NSData *) printAdnFeed:(int) n;
/**
 选择页模式<br>
 ESC L<br>
 1B 4C<br>
 
 */
+(NSData *) selectPagemodel;
/**
 选择字体<br>
 ESC M n<br>
 1B 4D n<br>
 n 范围： 0，1，48，49；<br>
 */
+(NSData *) selectFont:(int) n;
/**
 选择国际字符集<br>
 ESC R n<br>
 n:0-15，代表一种国际字符集<br>
 1B 52 n<br>
 */
+(NSData *) selectInternationCharacterSets:(int) n;
/**
 选择标准模式<br>
 ESC S<br>
 1B 53<br>
 */
+(NSData *) selectStabdardModel;
/**
 在页模式下选择打印区域方向<br>
 ESC T n<br>
 1B 54 n<br>
 (int) n: 0<=n<=3 or 48<=n<=51;n指定打印区域的方向和起始位置。<br>
 */
+(NSData *) selectPrintDirectionUnderPageModel:(int) n;
/**
 选择或取消顺时针旋转90度<br>
 此命令只在页模式下有效<br>
 ESC V n<br>
 1B 56 n<br>
 (int) n: n=0 or 48代表取消；n=1 or 49代表选择.<br>
 */
+(NSData *) selectOrCancleCW90:(int) n;
/**
 页模式下设置打印区域<br>
 ESC W xL xH yL yH dxL dxH dyL dyH<br>
 1B 57 xL xH yL yH dxL dxH dyL dyH<br>
 xL+xH*256 代表x方向起始位置<br>
 yL+yH*256 代表y方向起始位置<br>
 dxL+dxH*256 代表x方向的宽度<br>
 dyL+dyH*256 代表y方向的高度<br>
 */
+(NSData *) setPrintAreaUnderPageModelWithxL:(int) xL
                                       andxH:(int) xH
                                       andyL:(int) yL
                                       andyH:(int) yH
                                      anddxL:(int) dxL
                                      anddxH:(int) dxH
                                      anddyL:(int) dyL
                                      anddyK:(int) dyH;
/**
 设置相对横向打印位置<br>
 ESC \ nL nH<br>
 1B 5C nL nH<br>
 nL+nH*256 代表设置的大小<br>
 */
+(NSData *) setRelativeHorizontalPrintMitionWithnL:(int) nL andnH:(int) nH;
/**
 选择对齐方式<br>
 ESC a n<br>
 1B 61 n<br>
 */
+(NSData *) selectAlignment:(int) n;
/**
 选择打印机传感器以输出却纸信号<br>
 ESC c 3 n<br>
 1B 63 33 n<br>
 (int) n:0~255.<br>
 */
+(NSData *) selectPrintTransducerOutPutPageOutSignal:(int) n;
/**
 选择打印机传感器-停止打印<br>
 ESC c 4 n<br>
 1B 63 34 n<br>
 (int) n:0~255.<br>
 */
+(NSData *) selectPrintTransducerStopPrint:(int) n;
/**
 允许或禁止按键<br>
 ESC c 5 n<br>
 1B 63 35 n<br>
 (int) n: n的最后一位决定，1则允许，0则禁止。<br>
 */
+(NSData *) allowOrForbidPressButton:(int) n;
/**
 打印并向前走纸n行<br>
 ESC d n<br>
 1B 64 n<br>
 (int) n:0~255.<br>
 */
+(NSData *) printAndFeedForwardWhitN:(int) n;
/**
 产生钱箱控制脉冲<br>
 ESC p m t1 t2<br>
 1B 70 m t1 t2<br>
 (int) m:连接引脚,0 or 1 or 48 or 49.<br>
 t1 ,t2 :0~255.<br>
 */
+(NSData *) creatCashBoxContorPulseWithM:(int) m andT1:(int) t1 andT2:(int) t2;
/**
 选择字符代码表<br>
 ESC t n<br>
 1B 74 n<br>
 (int) n: 0~10 or 16~19<br>
 */
+(NSData *) selectCharacterCodePage:(int) n;
/**
 选择或取消倒置打印<br>
 ESC { n<br>
 1B 7B n<br>
 (int) n: n的最后一位决定，1则选择，0则取消。<br>
 */
+(NSData *) selectOrCancleConvertPrintModel:(int) n;
/**
 打印下载到FLASH中的位图<br>
 FS p n m<br>
 (int) n: 代表FLASH缓存中的第n个位置的图像<br>
 (int) m: 打印FLASH位图的方式，0~3 or 48~51，分别代表正常，倍宽，倍高，倍宽高。<br>
 */
+(NSData *) printBmpInFLASHWithN:(int) n andM:(int) m;
/**
 定义FLASH位图<br>
 FS q n [xL xH yL yH d1...dk]...[xL xH yL yH d1...dk]<br>
 1C 71 n data<br>
 n:定义的位图数量<br>
 data=[xL xH yL yH d1...dk]...[xL xH yL yH d1...dk]，代表多个位图的数据，每个位图前都包含了xL xH yL yH代表图像数据宽和高<br>
 */
+(NSData *)definedFlashBmpWithN:(int)n andBmp:(UIImage *)image andBmpType:(BmpType) bmptype andPrintType:(PrintRasterType) type andPaperHeight:(int) paperheight;
/**
 选择字符大小<br>
 GS ! n<br>
 (int) n:0~255,n的0-3位设定字符高度，4-7为来设定字符宽度。<br>
 */
+(NSData *) selectCharacterSize:(int) n;
/**
 页模式下设置绝对位置<br>
 GS $ nL nH<br>
 1D 24 nL nH<br>
 nL ,nH 范围：0~255，nL+nH*256代表位置，单位inch<br>
 */
+(NSData *) setAbsoluteMitionUnderPageModelWithnL:(int) nL andnH:(int) nH;
/**
 定义下载位图<br>
 GS x y[d1...d(8*M)]<br>
 1D 2A data<br>
 (UIImage*) image :image对象<br>
 */
+(NSData *)definedDownLoadBmp:(UIImage *)image byType:(BmpType) bmptype andPaperHeight:(int) paperheight;
/**
 执行打印机数据十六进制转储<br>
 GS ( A pL pH n m<br>
 1D 28 41 02 00 00 01<br>
 */
+(NSData *) executePrintDataSavaByTeansformToHex;
/**
 打印下载位图<br>
 GS / m<br>
 1D 2F m<br>
 (int) m:打印模式，范围：0~3 or 48~51.<br>
 */
+(NSData *) printDownLoadBmp:(int) m;
/**
 开始或结束宏定义<br>
 GS :<br>
 1D 3A<br>
 */
+(NSData *) startOrStopMacrodeFinition;
/**
 选择或取消黑白反显打印模式<br>
 GS B n<br>
 1D 42 n<br>
 (int) n: n的最后一位为1，选择，为0，取消.<br>
 */
+(NSData *) selectOrCancleInvertPrintModel:(int) n;
/**
 选择HRI字符打印位置<br>
 GS H n<br>
 1D 48 n<br>
 (int) n:0~3 or 48~51,代表字符相对条码的打印位置。<br>
 */
+(NSData *) selectHRICharactersPrintMition:(int) n;

/**
 设置左边距<br>
 GS L nL nH<br>
 1D 4C nL nH<br>
 (nL+nH*256)*横向移动单位，代表设置的左边距，单位：inch.<br>
 */

+(NSData *) setLeftSpaceWithnL:(int) nL andnH:(int) nH;
/**
 设置横向和纵向移动单位<br>
 GS P x y<br>
 1D 50 x y<br>
 (int) x: 横向移动单位，0~255.<br>
 (int) y: 纵向移动单位，0~255.<br>
 */

+(NSData *) setHorizontalAndVerticalMoveUnitWithX:(int) x andY:(int) y;
/**
 选择切纸模式并切纸<br>
 GS V m<br>
 1D 56 m<br>
 (int) m:0 or 48,全切;1 or 49，半切.<br>
 */

+(NSData *) selectCutPageModelAndCutpage:(int) m;

/**
 选择切纸模式并切纸<br>
 GS V m n<br>
 1D 56 m n<br>
 (int) m: m=66.<br>
 (int) n: 进纸n，然后半切纸。<br>
  */

+(NSData *) selectCutPageModelAndCutpageWithM:(int) m andN:(int) n;
/**
 设置打印区域宽度<br>
 GS W nL nH<br>
 1D 57 nL nH<br>
 (nL+nH*256)*横向移动单位，代表打印区域宽度.<br>
 */
+(NSData *) setPrintAreaWidthWithnL:(int) nL andnH:(int) nH;
/**
 页模式下设置绝对打印位置<br>
 GS \ nL nH<br>
 1D 5C nL nH<br>
 (nL+nH*256)*纵向移动单位，代表相对于当前打印位置纵向移动距离.<br>
 */
+(NSData *) setVertivalRelativeMitionUnderPageModelWithNL:(int) nL andNH:(int) nH;
/**
 执行宏命令<br>
 GS ^ r t m<br>
 1D 5E r t m<br>
 (int) r:0~255,执行次数.<br>
 (int) t:0~255,执行等待时间。<br>
 (int) m:0 or 1,执行模式。<br>
 */
+(NSData *) executeMacrodeCommandWithR:(int) r andT:(int) t andM:(int) m;
/**
 打开或关闭自动状态返回功能<br>
 GS a n<br>
 1D 61 n<br>
 (int) n: 0~255,n的每一位代表不同类型的状态返回.<br>
 */
+(NSData *) openOrCloseAutoReturnPrintState:(int) n;
/**
 选择HRI使用字体<br>
 GS f n<br>
 1D 66 n<br>
 (int) n: 0 or 48 代表标准；1 or 49 代表压缩字体。<br>
 
 */
+(NSData *) selectHRIFont:(int) n;
/**
 选择条码高度<br>
 GS h n<br>
 1D 68 n<br>
 (int) n: 1~255,defualt:162.<br>
 */
+(NSData *) setBarcodeHeight:(int) n;
/**
 打印条码<br>
 GS k m d1...dk NUL<br>
 1D 6B m d1...dk 00<br>
 (int) m:条码类型，0~6.<br>
 (NSString*) content: 条码内容。<br>
 
 */
+(NSData *) printBarcodeWithM:(int) m andContent:(NSString *) content useEnCodeing:(NSStringEncoding) strEncoding;

/**
 打印条码<br>
 GS k m n d1...dk<br>
 1D 6B m n d1...dk<br>
 (int) m: 条码类型,66~73.<br>
 (int) n: 条码内容content的长度。<br>
 */
+(NSData *) printBarcodeWithM:(int)m andN:(int) n andContent:(NSString *)content useEnCodeing:(NSStringEncoding) strEncoding;
/**
 返回状态<br>
 GS r n<br>
 1D 72 n<br>
 (int) n: 1,2,49,50;1 or 49返回传感器状态，2 or 50返回钱箱状态。<br>
 */
+(NSData *) returnState:(int) n;
/**
 打印光栅位图<br>
 GS V 0 m<br>
 (PrintRasterType) m:打印模式。<br>
 (UIImage *) image:图片对象。<br>
 (BmpType) type:图片处理采用的方式，二值法或者抖动算法处理。<br>
 
 */
+(NSData *) printRasteBmpWithM:(PrintRasterType) m andImage:(UIImage *) image andType:(BmpType) type andPaperHeight:(int) paperheight;
/**
 设置条码宽度<br>
 GS w n<br>
 1D 77 n<br>
 (int) n:2~6,defualt 3.<br>
 */
+(NSData *) setBarcoeWidth:(int) n;
/**
 设置汉字字符模式<br>
 FA ! n<br>
 1C 21 n<br>
 (int) n: 0~255,n的不同位定义字符模式。
 */
+(NSData *) setChineseCharacterModel:(int) n;
/**
 选择汉字模式<br>
 FS &<br>
 1C 26<br>
 */

+(NSData *) selectChineseCharacterModel;
/**
 选择或取消汉字下划线模式<br>
 FS - n<br>
 1C 2D n<br>
 (int) n:0~2 or 48~50.<br>
 */

+(NSData *) selectOrCancelChineseCharUnderLineModel:(int) n;
/**
 取消汉字模式<br>
 FS .<br>
 1C 2E<br>
 */

+(NSData *) CancelChineseCharModel;
/**
 定义用户自定义汉字<br>
 FS 2 c1 c2 d1...dk<br>
 1C 32 FE c2 d1...dk<br>
 (int) c2: A1H<=c2<=FEH.<br>
 (Byte*) bytes:代表汉字数据的字节数组。<br>
 */
+(NSData *) definedUserDefinedChineseCharWithCMition:(int) c2 andNsdata:(Byte *) bytes;
/**
 设置汉字字符左右间距<br>
 FS S n1 n2<br>
 1C 53 n1 n2<br>
 (int) n1:左间距，0~255.<br>
 (int) n2:右间距，0~255.<br>
 */
+(NSData *) setChineseCharLeftAndRightSpaceWithN1:(int) n1 andN2:(int) n2;
/**
 选择或取消汉字倍宽倍宽<br>
 FS W n<br>
 1C 57 n<br>
 (int) n:0~255,n的最低位为1，代表选择，为0，代表取消。<br>
 */

+(NSData *) selectOrCancelChineseCharDoubleWH:(int) n;
/**
 打印机来单打印蜂鸣提示<br>
 ESC B n t<br>
 1B 42 n t<br>
 (int) n: 蜂鸣次数，1~9.<br>
 (int) t: t*50ms代表每次蜂鸣时间，1~9.<br>
 */
+(NSData *) printerOrderBuzzingHintWithRes:(int) n andTime:(int) t;
/**
 打印机来单蜂鸣提示及报警灯闪烁<br>
 ESC C m t n<br>
 1B 43 m t n<br>
 (int) m: 蜂鸣次数，报警灯闪烁次数，1~20.<br>
 (int) t: (t*50ms)代表间隔时间，1~20.<br>
 (int) n: 0~3,分别代表是否鸣叫，闪烁.<br>
 */
+(NSData *) printerOrderBuzzingAndWaringLightWithM:(int) m andT:(int) t andN:(int) n;
/**
 QRCODE:设置单元大小<br>
 GS ( 0 g n<br>
 1D 28 6B 30 67 n<br>
 (int) n:0~255.<br>
 */

+(NSData *) setQRcodeUnitsize:(int) n;
/**
 设置错误纠正等级<br>
 GS ( 0 i n<br>
 1D 28 6B 30 69 n<br>
 */

+(NSData *) setErrorCorrectionLevelForQrcode:(int) n;
/**
 传输数据到编码缓存<br>
 GS ( 0 & nL nH d1...dk<br>
 1D 28 6B 30 80 nL nH d1...dk<br>
 (NSString *) str: 二维码的内容。<br>
 */

+(NSData *) sendDataToStoreAreaWitQrcodeConent:(NSString *) str usEnCoding:(NSStringEncoding) strEnCoding;
/**
 打印编码缓存的二维码
 GS ( 0 ?<br>
 1D 28 6B 30 81<br>
 */

+(NSData *) printTheQRcodeInStore;

/**
 Set the number of columns in the data region<br>
 1D 28 6B 03 00 30 41 n<br>
 
 */

+(NSData *) setPdf417Columns:(int) n;

/**
 set the width of the moudule<br>
 1D 28 6B 03 00 30 43 n<br>
 
 */

+(NSData *) setpdf417WidthOfModule:(int) n;

/**
 set the row height<br>
 1D 28 6B 03 00 30 44 n<br>
 
 */

+(NSData *) setpdf417RowHeight:(int) n;

/**
 store the data in the symbol storage area<br>
 1D 28 68 F9 00 30 50 30 d1...dk<br>
 
 */
+(NSData *) storethepdf417WithpL:(int) pL andpH:(int) pH andContent:(NSString*) content usEnCoding:(NSStringEncoding) strEnCoding;

/**
 print the pdf417 symbol data in the symbol storage area<br>
 1D 28 6B 03 00 30 51 n<br>
  */
+(NSData *)printPdf417InStore;

//新添加命令
+(NSData *)openOrCloseLableModelInRecep:(BOOL) model;

+(NSData *)endOfLabel;

+(NSData *)checkLableAndGap;

+(NSData *)setLableWidth:(int) width;

+(NSData *)printQRCode:(int )n level:(int)errLevel code:(NSString *)code useEnCodeing:(NSStringEncoding)strEncoding;

+(NSData *)setTempData;
+(NSData *)setTempData2;

+(NSData *) printcodaBarcodeWithM:(int) m andContent:(NSString *) content useEnCodeing:(NSStringEncoding) strEncoding;

+(NSData *) printcodaUPCEWithM:(int) m andContent:(NSString *) content useEnCodeing:(NSStringEncoding) strEncoding;

+(NSData *)print93BarcodeWithM:(int)m andN:(int)n andContent:(NSString *)content useEnCodeing:(NSStringEncoding) strEnCoding;

@end
