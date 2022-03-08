import { SocketmobileCommon } from './common';

export declare class Socketmobile extends SocketmobileCommon {
    public constructor(AppKey: string, DeveloperID: string, AppID: string);
    public initScanner(): any;
    public didReceiveDecodedData: (data: SKTCaptureDecodedData, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) => void;


}
