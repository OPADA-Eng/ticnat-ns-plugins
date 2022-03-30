import { SocketmobileCommon } from './common';

export declare class Socketmobile extends SocketmobileCommon {
    public constructor(AppKey: string, DeveloperID: string, AppID: string);
    public initScanner(): any;
    public didReceiveDecodedData: (data: string, device: any, result: any) => void;


}
