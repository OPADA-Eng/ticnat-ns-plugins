import { T3bPrinterCommon } from './common';

export declare class T3bPrinter extends T3bPrinterCommon {
    public isConnected: boolean;
    constructor();
    public connectWifi(ip: string): void;
    public disconnect(): void;
    public printTxt(txt: string): void;
    public printImg(img: ImageSource): void;
    public cut(): void;

}
