//
//  TscCommand.h
//  Printer
//
//  Created by LeeLee on 16/7/19.
//  Copyright © 2016年 Admin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"
#import "ImageTranster.h"
@interface TscCommand : NSObject

/**
 this command defines the label width and lenth<br>
 设定标签纸的宽度及长度<br>
 SIZE m mm,n mm<br>
 单位 mm<br>
（double）m : label width<br>
 (double)n: label length<br>
 */
+(NSData *) sizeBymmWithWidth:(double) m andHeight:(double) n;

/**
 this command defines the label width and lenth<br>
 设定标签纸的宽度及长度<br>
 SIZE m ,n<br>
 单位 inch<br>
 （double）m : label width<br>
 (double)n: label length<br>
 */
+(NSData *) sizeByinchWithWidth:(double) m andHeight:(double) n;

/**
 this command defines the label width and lenth<br>
 设定标签纸的宽度及高度<br>
 SIZE m ,n<br>
 单位 dot<br>
 （int）m : label width<br>
 (int)n: label length<br>
 */
+(NSData *) sizeBydotWithWidth:(int) m andHeight:(int) n;

/**
 this command defines the gap distance between to labels<br>
 设置标签纸的垂直间距<br>
 GAP m mm,n mm<br>
 单位 mm<br>
 (double) m:the gap distance between two labels<br>
 (double) n:the offset distance of the gap<br>
 */
+(NSData *) gapBymmWithWidth:(double) m andHeight:(double) n;

/**
 this command defines the gap distance between to labels<br>
 设置标签纸的间距<br>
 GAP m,n<br>
 单位 inch<br>
 (double) m:the gap distance between two labels<br>
 (double) n:the offset distance of the gap<br>

 */
+(NSData *) gapByinchWithWidth:(double) m andHeight:(double) n;

/**
 this command defines the gap distance between to labels<br>
 设置标签纸的间距<br>
 GAP m,n<br>
 单位 dot<br>
 (int) m:the gap distance between two labels<br>
 (int) n:the offset distance of the gap<br>
 */
+(NSData *) gapBydotWithWidth:(int) m andHeight:(int) n;

/**
 this command feeds the paper throught the gap sensor in an effort to determine the paper and gap sizes,respectively.<br>
 
 GAPDETECT x,y<br>
 单位 （dot）
 (int) x: paper length（in dots）<br>
 (int) y: gap length(in dots)<br>
 */
+(NSData *) gapDetectWithX:(int) x andY:(int) y;
/**
 this command feeds the paper through the gap sensor in an effort to determine the paper and gap sizes,respectively.<br>
 
 GAPDETECT<br>
 
 ( */

+(NSData *) gapDetect;

/**
 this command feeds the paper through the black mark sensor in an effort to the determine the paper and black mark size.<br>
 
 BLINEDDETECT X,Y
 
 (int) x: paper lenght(in dots);<br>
 
 (int) y: gap lenght(in dots);<br>
 
 */
+(NSData *) blinedDetectWithX:(int) x andY:(int) y;

/**
 this command feeds the paper through the gap/black mark sensor in an effort to deternine the paper and gap/black mark size.<br>
 
 AUTODETECT X,Y<br>
 
 (int) x: paper length(in dots);<br>
 
 (int) x: gap length(in dots);<br>
 
 */
+(NSData *) autoDetectWithX:(int) x andY:(int) y;

/**
 this command sets the height of the black line and the user-defined extra label feeding length each from feed takes.<br>
 设定黑标的高度及偏移位置<br>
 BLINE M,N<br>
 单位 inch<br>
 (double) m: the height of black line in  mm;<br>
 (double) n: the extra label feeding length.<br>
 */
+(NSData *) blineByinchWithM:(double) m andN:(double) n;

/**
 this command sets the height of the black line and the user-defined extra label feeding length each from feed takes.<br>
 设定黑标的高度及偏移位置<br>
 BLINE M,N<br>
 单位 inch<br>
 (double) m: the height of black line in inch ;<br>
 (double) n: the extra label feeding length.<br>
 */
+(NSData *) blineBymmWithM:(double) m andN:(double) n;

/**
 this command sets the height of the black line and the user-defined extra label feeding length each from feed takes.<br>
 设定黑标的高度及偏移位置<br>
 BLINE M,N<br>
 
 (double) m: the height of black line either in dot;<br>
 (double) n: the extra label feeding length.<br>
 */
+(NSData *) blineBydotWithM:(int) m andN:(int) n;

/**
 this command sets the Mition of label under the pee-off mode.<br>
 OFFSET m<br>
 剥离模式下，控制每张标签停止的位置<br>
 单位 inch<br>
 (double) m: the offset distance(in inch)<br>
 */
+(NSData *) offSetByinchWithM:(double) m;

/**
 this command sets the Mition of label under the pee-off mode.
 OFFSET m mm<br>
 剥离模式下，控制每张标签停止的位置<br>
 单位 mm<br>
 (double) m: the offset distance(in mm);<br>
 */
+(NSData *) offSetBymmWithM:(double) m;

/**
 this command sets the Mition of label under the pee-off mode.
 OFFSET m mm<br>
 剥离模式下，控制每张标签停止的位置<br>
 单位 dot<br>
 (double) m: the offset distance(in dots);<br>
 */
+(NSData *) offSetBydotWithM:(int) m;

/**
 this command defines the print speed<br>
 SPEED N<br>
 设置走纸速度<br>
 (double) n: printing speed in inch per second<br>
 */

+(NSData *) speed:(double) n;

/**
 this command sets the printing daekesss
 DENSITY n
 (int) n: specifiles the lightest/darkest level<br>
 */

+(NSData *) density:(int) n;

/**
 this command defines the printout direction and mirror image.this will be stored in the printermemory.<br>
 定义打印时出纸方向<br>
 DIRECTION n<br>
 (int) n: 0 or 1,please refer to the illustrations below.<br>
 */

+(NSData *) direction:(int) n;

/**
 this command defines the reference point the of the label.the referce (origin) point varies with the print direction,as shown.<br>
 用于定义标签的参考坐标原点<br>
 REFERENCE x,y<br>
 (int) x: Horizontal coordinate(in dots).<br>
 (int) y: Vertical coordinate (in dots).<br>
 */
+(NSData *) referenceWithX:(int) x andY:(int) y;

/**
 this command moves the label's vertical Mition.<br>
 SHIFT n<br>
 (int) n: the maximum calue is 1 inch.for 200 dpi printers,this range is -203 to 203;for 300 dpi printers,the range is -300 to 300.this unit is dot.<br>
 */

+(NSData *) shift:(int) n;

/**
 this command orients the keyboard for use in different countries via defining special characters on the KP-200 series portable LCD keyboard (option).<br>
 用于选择国际字符集<br>
 COUNTRY n<br>
 (NSSting *) countryCoding: the keyboard for use in different countries via defining special characters<br>
  */

+(NSData *) country:(NSString *) countryCoding;

/**
 this command orients the keyboard for use in different countries via defining special characters on the KP-200 series portable LCD keyboard (option).<br>
 指定字符编码<br>
 CODEPAE n<br>
 (NSString *) str: the name of codepage;<br>
 */

+(NSData *) codePage:(NSString *) str;

/**
 this command clears the iamge buffer.<br>
 清除缓存<br>
 CLS<br>
 
 */

+(NSData *) cls;

/**
 this command feeds label with the specified length. the length is specified by dot.<br>
 控制进纸距离，单位dot<br>
 FEED n<br>
 (int) n: the length label feeds.<br>
 */

+(NSData *) feed:(int) n;

/**
 this command feeds the label in reverse.the length is specified by dot.<br>
 BACKFEED n<br>
 n的单位 dot<br>
 (int) n: the length babel feeds in reverse.<br>
 */

+(NSData *) backFeed:(int) n;

/**
 this command feeds label to the beginning of next label.<br>
 FORMFEED<br>
 
 */

+(NSData *) formFeed;

/**
 
 this command will feed label until the sensor has determined origin.<br>
 HOME<br>
 
 */

+(NSData *) home;

/**
 this command prints the label format currently stored in the image buffer.<br>
 PRINT M,N<br>
 (int) m: specifies how many sets of labels will be printed <br>
 (int) n: specifies how many copies should be printed for each particular label set.<br>
 */
+(NSData *) printWithM:(int) m andN:(int) n;

/**
 this command prints the label format currently stored in the image buffer.<br>
 PRINT m<br>
 (int) m: specifies how many sets of labels will be printed <br>
 */

+(NSData *) print:(int) m;

/**
 this command controls the sound frequency of the beeper .there are 10 levels of sounds<br>
 SOUND level,interval<br>
 (int) level: sound level:0-9.<br>
 (int) interval: sound interval:1-4095.<br>
 */
+(NSData *) soundWithLevel:(int) level andInterval:(int) interval;

/**
 this command activates the cutter to immediately cut the labels without back feeding the label.<br>
 切纸<br>
 CUT<br>
 
 */

+(NSData *) cut;

/**
 this command use to stop feeding paper while feed paper wrong.<br>
 用于设定打印机进纸时，无法检测到垂直间距，发送错误，停止进纸<br>
 LIMITFEED n<br>
 单位 inch<br>
 (double) n:the limit length of wrong(in inch).<br>
 */

+(NSData *) limitFeedByinch:(double) n;

/**
 this command use to stop feeding paper while feed paper wrong.<br>
 用于设定打印机进纸时，无法检测到垂直间距，发送错误，停止进纸<br>
 LIMITFEED n<br>
 单位 mm<br>
 (double) n:the limit length of wrong(in mm).<br>
 */

+(NSData *) limitFeedBymm:(double) n;


/**
 this command use to stop feeding paper while feed paper wrong.<br>
 用于设定打印机进纸时，无法检测到垂直间距，发送错误，停止进纸<br>
 LIMITFEED n<br>
 单位 dot<br>
 (int) n:the limit length of wrong(in dots).<br>
 */

+(NSData *) limitFeedBydot:(int) n;

/**
 At this command ,the printer will print out the printer information<br>
 SELFTEST<br>
 
 */

+(NSData *) selfTest;

/**
 At this command,the printer will print out the printer information<br>
 SELFTEST page<br>
 (NSString *) page:the one kind of the printer informations.<br>
 */

+(NSData *) selfTest:(NSString *) page;

/**
 let the printer wait until process of commands (before EOJ) be then go on the next command<br>
 EOJ<br>
 
 */

+(NSData *) eoj;

/**
 let the printer wait specific period of time then go on next command<br>
 DELAY ms<br>
 (int) ms:  print delay how many seconds.<br>
 */

+(NSData *) delay:(int) ms;

/**
 this command can show the image ,which is in printer's image buffer,on LCD panel<br>
 DISPLAY IMAGE/OFF<br>
 (NSString*) str: IMAGE showthe image in printer's image buffer,on LCD panel<br>
                  OFF   disable this finction.<br>
 */

+(NSData *) display:(NSString*) str;

/**
 this command can restore printer settings to defaults<br>
 INITIALPRINTER<br>
 
 */

+(NSData *) initialPrinter;

/**
 this command draws a bar on the label format.<br>
 BAR x,y,width,heigt<br>
 
 (int) x: the upper left corner x-coordinate (in dots).<br>
 (int) y: the upper left corner y-coordinate (in dots).<br>
 (int) w: bar width(in dots).
 (int) h: bar height(in dots).<br>
 
 */
+(NSData *) barWithX:(int) x andY:(int) y andWidth:(int) w andHeigt:(int) h;

/**
 this command prints 1D barcodes<br>
 BARCODE X,Y,"codetype",height,humanreadable,rotation,narrow,wide,"content"
 (int) x: specify the x-coordinate.<br>
 (int) y: specify the y-coordinate.<br>
 (int) readable: HRI readable,0-3;<br>
 (int) rotation: graphic rotation,0-90-180-270;<br>
 (int) narrow: space in uint.<br>
 (int) wide: width of uint.<br>
 (NSString*) content: barcode's content.<br>
 (NSStringEncoding) strEnCoding: barcode's content's encoding.<br>
 */
+(NSData *) barcodeWithX:(int) x
                    andY:(int) y
             andCodeType:(NSString*) codetype
               andHeight:(int) height
        andHunabReadable:(int) readable
             andRotation:(int) rotation
               andNarrow:(int) narrow
                 andWide:(int) wide
              andContent:(NSString*) content
           usStrEnCoding:(NSStringEncoding) strEnCoding;
/**
 this command draws bitmap images.<br>
 BITMAP X,Y,width,height,mode,bitmap data<br>
 (int) x: specify the x-coordinate<br>
 (int) y: specify the y-coordinate<br>
 (int) mode: graphic modes listed below:<br>
                0:OVERWRINTE<br>
                1:OR<br>
                2:XOR<br>
 (UIImage*) image: the graphic you want to print.<br>
 (BmpType) bmptype: the type you want to print the image.<br>
 */
+(NSData *)bitmapWithX:(int)x andY:(int)y andMode:(int)mode andImage:(UIImage *)image andBmpType:(BmpType)bmptype andPaperHeight:(int)paperheight;
/**
 this command draws rectangles on the label<br>
 BOX X,Y,X_END,Y_END,LINE_THICNESS<br>
 (int) x: specify x-coordinate of upper left corner(in dots).<br>
 (int) y: specify y-coordinate of upper left corner(in dots).<br>
 (int) x_end: specify x-coordinate of lower right corner(in dots).<br>
 (int) y_end: specify y-coordinate of lower right corner(in dots).<br>
 (int) thickness sepcify the round corner.default is 0.<br>
 */
+(NSData *) boxWithX:(int) x
                andY:(int) y
             andEndX:(int) x_end
             andEndY:(int) y_end
        andThickness:(int) thickness;

/**
 this command draws an ellipse on the label.<br>
 ELLIPSE X,Y,width,height,thickness.<br>
 (int) x: specify x-coordinate of upper left corner(in dots).<br>
 (int) y: specify y-coordinate of upper left corner(in dots).<br>
 (int) width: specify the width of the ellipse(in dots).<br>
 (int) height: specify the height of the ellipse(in dots).<br>
 
 */
+(NSData *) ellipseWithX:(int) x
                    andY:(int) y
                andWidth:(int) width
               andHeight:(int) height
            andThickness:(int) thickness;

/**
 this command draws CODEBLOCK F mode barcode.<br>
 CODABLOCK x,y,rotation,x,"content"<br>
 (int) x: specify the x-coordinate<br>
 (int) y: specify the y-coordinate<br>
 (int) rotation: Rotate rotation degrees clockwise<br>
 (NSString *) content: content of codablock bar code.
 */
+(NSData *) codaBlockFModeWithX:(int) x
                           andY:(int) y
                    andRotation:(int) rotation
                     andContent:(NSString*) content;

/**
 this command draws an DataMatrix 2d barcode .<br>
 绘制二维条码DataMatrix<br>
 DMATRIX x,y,width,height,content<br>
 (int) x: specify x-coordinate of upper left corner(in dots).<br>
 (int) y: specify y-coordinate of upper left corner(in dots).<br>
 (int) width: specify the width of DataMatrix.<br>
 (int) height: specify the height of DataMatrix.<br>
 (NSString*) content: the content of DataMatrix.<br>
 */
+(NSData *) dmateixWithX:(int) x
                    andY:(int) y
                andWidth:(int) width
               andHeight:(int) height
              andContent:(NSString*) content
           usStrEnCoding:(NSStringEncoding) strEnCoding;

/**
 this command clears a specified region in the image buffer<br>
 ERASE x,y,width,height<br>
 (int) x: the x-coordinate of d=the starting point(in dots).<br>
 (int) y: the y-coordinate of d=the starting point(in dots).<br>
 (int) width: the region width in x-axis direction(in dots).<br>
 (int) height: the region height in y-axis direction(in dots).<br>
 */
+(NSData *) eraseWithX:(int) x
                  andY:(int) y
              andWidth:(int) width
             andHeight:(int) height;

/**
 this command defines a PDF417 2d bar code
 PDF417 x,y,width,height,rotatte,"content"
 
 */
+(NSData *) pdf417WithX:(int) x
                   andY:(int) y
               andWidth:(int) width
              andHeight:(int) height
              andRotate:(int) rotate
             andContent:(NSString*) content
          usStrEnCoding:(NSStringEncoding) strEnCoding;
/**
 this command prints BMP format images
 PUTBMP x,y,"filename",bpp,contrast
 
 */
+(NSData *) pubBmpWithX:(int) x
                   andY:(int) y
            andFileName:(NSString*) filename
            andContrast:(int) contrast;

/**
 this comand prints BMP format images<br>
 PUTBMP x,y,"filename"
 (int) x: the x-coordinate of the BMP format image<br>
 (int) y: the y-coordinate of the BMP format image<br>
 (NSString*) filename: the download BMP filename.<br>
 */
+(NSData *) putBmpWithX:(int) x
                   andY:(int) y
            andFileName:(NSString*) filename;

/**
 this command prints PCX format images.
 PUTPCX x,y,"filename"
 (int) x: the x-coordinate of the BMP format image<br>
 (int) y: the y-coordinate of the BMP format image<br>
 (NSString*) filename: the download pcx filename.<br>

 */
+(NSData *) putPcxWithX:(int) x
                   andY:(int) y
            andFileName:(NSString*) filename;

/**
 this command prints qr code<br>
 QRCODE x,y,ecclevel,cell_width,mode,rotation,"content"<br>
 (int) x: the upper left corner x-coordinate of the QRcode.<br>
 (int) y: the upper left corner y-coordinate of the QRcode.<br>
 (int) ecclevel: error correction revovery level.<br>
 (int) cellwidth: 1~10.<br>
 (NSString*) mode: A or M.<br>
 (int) rotation: 0 or 90 or 180 or 270.<br>
 (NSString*) content: the content of QRcode.<br>
 (NSStringEncoding) strEnCoding: the encoding of content.<br>
 */
+(NSData *) qrCodeWithX:(int) x
                   andY:(int) y
            andEccLevel:(NSString*) ecclevel
           andCellWidth:(int) cellwidth
                andMode:(NSString*) mode
            andRotation:(int) rotation
             andContent:(NSString*) content
          usStrEnCoding:(NSStringEncoding) strEnCoding;

/**
 this command reverses a region in image buffer.<br>
 REVERSE x_start,y_start,x_width,y_height
 (int) x: the x-coordinate of the starting point(in dots).<br>
 (int) y: the y-coordinate of the starting point(in dots).<br>
 (int) width: x-axis region width(in dots).<br>
 (int) height: y-axis region height(in dots).<br>
 */
+(NSData *) reverseWithX:(int) x
                    andY:(int) y
                andWidth:(int) width
               andHeight:(int) height;

/**
 this command prints text on label<br>
 TEXT x,y,"font",rotation,x_multiplication,y_multiplication,"content"
 (int) x: the x-coordinate of text.<br>
 (int) y: the y-coordinate of text.<br>
 (NSString*) font: font name.<br>
 (int) rotation: the rotation angle of text.<br>
 (int) x_mul: horizontal multiplication,up to 10x.<br>
 (int) y_mul: vertical multiplication,up to 10x.<br>
 (NSString*) content: the content of text string.<br>
 (NSStringEncoding) strEnCoding: the encoding of the content string.<br>
 */
+(NSData *) textWithX:(int) x
                 andY:(int) y
              andFont:(NSString*) font
          andRotation:(int) rotation
             andX_mul:(int) x_mul
             andY_mul:(int) y_mul
           andContent:(NSString*) content
        usStrEnCoding:(NSStringEncoding) strEnCoding;

/**
 this command prints paragraph on label
 BLOCK x,y,width,"font",rotation,x_mul,y_mul,"content"
 
 */
+(NSData *) blockWithX:(int) x
                  andY:(int) y
              andWidth:(int) width
             andHeight:(int) height
               andFont:(NSString*) font
           andRotation:(int) rotaion
              andX_mul:(int) x_mul
              andY_mul:(int) y_mul

             andConten:(NSString*) content
         usStrEnCoding:(NSStringEncoding) strEnCoding;

/**
 this command obiains the printer status at any time.<br>
 <ESC> !?<br>
 1D 61 1F<br>
 */

+(NSData *) checkPrinterStatusByPort9100;

/**
 this command obiains the printer status at any time.<br>
 
 1B 76 00<br>
 */

+(NSData *) checkPrinterStatusByPort4000;


/**
 Download 程序档<br>
 DOWNLOAD "EXAMPLE.BAS"<br>
 
 */

+(NSData *) download:(NSString*) filename;


/**
 
 Download 文本档<br>
 DOWNLOAD "FILENAME",DATASIZE,CONTENT<br>
 
 */

+(NSData *) download:(NSString*) filename
             andSize:(int) size
           andConten:(NSString*) content;


/**
 Download 文本文件档<br>
 DOWNLOAD "FILENAME",FILE SIZE,DATA CONTENT<br>
 
 */

+(NSData *) download:(NSString*) filename
             andPath:(NSURL*) url;


/**
 Download 图档<br>
 DOWNLOAD "EXAMPLE.BAS"<br>
 
 */

//+(NSData *) download:(NSString*) filename
//          andImage:(UIImage*) image;

/**
 End of program,to declare the start and the end of BASIC language used in progra.<br>
 EOP<br>
 
 */

+(NSData *) eop;

/**
 this command prints out the total memory size,available memory size and files lists in the printer memory.<br>
 FILES<br>
 
 */

+(NSData *) files;

/**
 this command delects a file in the printer memory<br>
 KILL "FILENAME"<br>
 
 */

+(NSData *) kill:(NSString*) filename;

/**
 this command moves download files from DRAM to FLASH memory.<br>
 MOVE<br>
 
 */

+(NSData *) move;

/**
 this command executes a program resdent in the printer memory.it is available for TSPL2 printers only.<br>
 RUN "FILENAME.BAS"<br>
 
 */

+(NSData *) run:(NSString*) filename;
@end
