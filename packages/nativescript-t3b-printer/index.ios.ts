import { ImageSource } from '@nativescript/core';
import { T3bPrinterCommon } from './common';
export class T3bPrinter extends T3bPrinterCommon {
    public printer: MWIFIManager;
    constructor() {
        super();
        try {
            this.printer = MWIFIManager.shareWifiManager();
        } catch (error) {
            console.log(error);
        }
    }
    public connectWifi(ip: string) {
        return new Promise((resolve, reject) => {
            if (this.printer) {
                if (!this.printer.connectOK) {
                    this.printer.MConnectWithHostPortCompletion(ip, 9100, (result) => {
                        console.log(result);
                        if (result) {
                            this.set('isConnected', true);
                            resolve(true);
                        }
                        else {
                            reject(false);
                        }
                    });
                }
                else {
                    console.log("Printer is alread connected");
                    this.set('isConnected', true);
                    resolve(true);
                }
            }
            else {
                this.printer = MWIFIManager.shareWifiManager();
                return this.connectWifi(ip);
            }
        });
    }
    public disconnect() {
        if (this.printer && this.printer.connectOK) {
            this.printer.MDisConnect();
            this.set('isConnected', false);

        }
    }
    public getUniCode(aString: NSString) {
        let theStringToReturn = null;


        let theEncodedString = NSMutableString.alloc().initWithString("");

        for (var theCharIndex = 0; theCharIndex < aString.length; theCharIndex++) {
            theEncodedString.appendString("%04x" + aString[theCharIndex]);
        }

        theStringToReturn = NSString.stringWithString(theEncodedString.UTF8String);

        return theStringToReturn;
    }
    public printTxt(txt = "asd", padding = 0, codePage = null, font = 0, bold = false) {
        try {
            if (this.printer && this.printer.connectOK) {
                let data = MCommand.initializePrinter();
                let buffer = NSMutableData.alloc().initWithData(data);
                if (bold) {
                    data = MCommand.selectOrCancleBoldModel(1);
                    buffer.appendData(data);
                    // this.printer.commandBuffer.addObject(data);
                }
                data = MCommand.setLeftSpaceWithnLAndnH(padding, 0);
                buffer.appendData(data);
                // data = MCommand.selectCharacterSize(12);
                // buffer.appendData(data);

                data = MCommand.selectFont(font);
                buffer.appendData(data);
                if (codePage) {
                    data = MCommand.selectCharacterCodePage(codePage);
                    buffer.appendData(data);
                }
                let nsTxt = NSString.stringWithUTF8String(txt);
                // console.log("nsTxt", nsTxt)
                data = nsTxt.dataUsingEncoding(NSUTF8StringEncoding);
                buffer.appendData(data);
                this.printer.MWriteCommandWithData(buffer);
            }
        } catch (error) {
            console.log(error);
        }

    }

    public printImg(img: UIImage, bmpType: BmpType = BmpType.Threshold, height = 0) {
        try {
            img = this.convertImageToGrayScale(img);
            // console.log("img", img);
            let data = MCommand.initializePrinter();
            let buffer = NSMutableData.alloc().initWithData(data);
            data = MCommand.setPrintAreaWidthWithnLAndnH(img.size.width, img.size.height);
            buffer.appendData(data);
            data = MCommand.printRasteBmpWithMAndImageAndTypeAndPaperHeight(PrintRasterType.RasterNolmorWH, img, bmpType, height || img.size.height);
            buffer.appendData(data);
            // buffer.appendData(image);
            this.printer.MWriteCommandWithData(buffer);
            this.printer.MSendMSGWith("\n");
        } catch (error) {
            console.log(error);
        }
    }
    // public convertImgToBmp(img: UIImage) {
    //     return PrinterManager.new().convertImageToBmp(img);
    // }

    public convertImageToGrayScale(image: UIImage) {


        // Create image rectangle with current image width/height
        let imageRect = CGRectMake(0, 0, image.size.width, image.size.height);

        // Grayscale color space
        let colorSpace = CGColorSpaceCreateDeviceGray();

        // Create bitmap content with current image size and grayscale colorspace
        let context = CGBitmapContextCreate(null, image.size.width, image.size.height, 8, 0, colorSpace, CGImageAlphaInfo.kCGImageAlphaNone);

        // Draw image into current context, with specified rectangle
        // using previously defined context (with grayscale colorspace)
        CGContextDrawImage(context, imageRect, image.CGImage);

        // Create bitmap image info from pixel data in current context
        let imageRef = CGBitmapContextCreateImage(context);

        // Create a new UIImage object
        let newImage = UIImage.imageWithCGImage(imageRef);

        // Release colorspace, context and bitmap information
        CGColorSpaceRelease(colorSpace);
        CGContextRelease(context);
        CFRelease(imageRef);

        // Return the new grayscale image
        return newImage;
    }

    public cut() {
        try {
            let data = MCommand.selectCutPageModelAndCutpage(49);
            this.printer.MWriteCommandWithData(data);
        } catch (error) {
            console.log(error);
        }
    }
    public setFont(font = 0) {
        let data = MCommand.selectFont(font);
        this.printer.MWriteCommandWithData(data);
    }

    public openCashDrawer() {
        try {
            let data = MCommand.openCashBoxRealTimeWithMAndT(1, 1);
            this.printer.MWriteCommandWithData(data);
        } catch (error) {
            console.log(error);
        }
    }
}
