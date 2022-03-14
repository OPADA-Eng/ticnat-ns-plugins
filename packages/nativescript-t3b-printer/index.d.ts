import { T3bPrinterCommon } from './common';

export declare class T3bPrinter extends T3bPrinterCommon {
    public isConnected: boolean;
    constructor();
    public connectWifi(ip: string): Promise;
    public disconnect(): void;
    public printTxt(txt: string, paddingLeft: number): void;
    public printImg(img: ImageSource): void;
    public cut(): void;
    public setLeftPadding(padding: number): void;

}
