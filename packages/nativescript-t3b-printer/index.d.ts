import { T3bPrinterCommon } from './common';

export declare class T3bPrinter extends T3bPrinterCommon {
    public isConnected: boolean;
    constructor();
    public connectWifi(ip: string): Promise;
    public disconnect(): void;
    public printTxt(txt: string, paddingLeft: number = 0, codePage: number = null, font: number = 0, bold: boolean = false): void;
    public printImg(img: any, bmpType: BmpType = BmpType.Threshold, height: number = 0): void;
    public cut(): void;
    // public convertImgToBmp(img: UIImage): NSData;
    public setFont(font: number): void;
    public openCashDrawer(): void;
    // public setLeftPadding(padding: number): void;

}
export declare const enum BmpType {

    Dithering = 0,

    Threshold = 1
}