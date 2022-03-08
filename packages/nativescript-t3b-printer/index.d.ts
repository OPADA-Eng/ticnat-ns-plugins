import { NativescriptT3bPrinterCommon } from './common';

export declare class NativescriptT3bPrinter extends NativescriptT3bPrinterCommon {

    constructor();
    public connectWifi(ip: string): void;
    public printTxt(txt: string): void;
    public printImg(img: string): void;

}
