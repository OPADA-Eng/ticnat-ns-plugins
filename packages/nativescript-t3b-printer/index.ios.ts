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
    public printTxt(txt = "asd", padding = 0) {
        try {
            if (this.printer && this.printer.connectOK) {
                this.setLeftPadding(padding);
                this.printer.MSendMSGWith(txt);
                // this.setLeftPadding(0);

            }
        } catch (error) {
            console.log(error);
        }

    }
    public printImg(img: ImageSource) {
        try {
            let data = MCommand.printRasteBmpWithMAndImageAndTypeAndPaperHeight(PrintRasterType.RasterNolmorWH, img.ios, BmpType.Threshold, img.height);
            this.printer.MWriteCommandWithData(data);
            this.printer.MSendMSGWith("\n");
            this.printer.MSendMSGWith("\n");
            this.printer.MSendMSGWith("\n");
        } catch (error) {
            console.log(error);
        }
    }
    public cut() {
        try {
            let data = MCommand.selectCutPageModelAndCutpage(49);
            this.printer.MWriteCommandWithData(data);
        } catch (error) {
            console.log(error);
        }
    }
    public setLeftPadding(x = 0) {
        let data = MCommand.setLeftSpaceWithnLAndnH(x, 0);
        // console.log(data);
        this.printer.MWriteCommandWithData(data);
    }

}
