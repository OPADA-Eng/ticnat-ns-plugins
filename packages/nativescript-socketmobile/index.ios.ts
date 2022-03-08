import { Application, Page } from '@nativescript/core';
import { SocketmobileCommon } from './common';
@NativeClass()
export class SocketmobileDelegateImp extends NSObject implements SKTCaptureHelperDelegate {
    static ObjCProtocols = [SKTCaptureHelperDelegate] // define our native protocalls
    public didReceiveDecodedData: (data: string, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) => void;
    public didChangeBatteryLevelForDevice: (batteryPercentage: number, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) => void;
    public didReceiveError: (error: SKTCaptureErrors, message: string) => void;
    public didTerminate: (result: SKTCaptureErrors) => void;
    public listenerStarted: () => void;


    static new(): SocketmobileDelegateImp {
        return <SocketmobileDelegateImp>super.new() // calls new() on the NSObject
    }
    public didReceiveDecodedDataFromDeviceWithResult(data: SKTCaptureDecodedData, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) {
        console.log('--A NATIVE VIEW RECEIVED DECODED DATA FROM DEVICE WITH RESULT--');
        let decodedData = data.stringFromDecodedData();
        console.log("decodedData", decodedData);
        this.didReceiveDecodedData(decodedData, device, result);
    }
    didReceiveErrorWithMessage(error: SKTCaptureErrors, message: string) {
        this.didReceiveError(error, message);
    }
    didTerminateWithResult(result: SKTCaptureErrors) {
        this.didTerminate(result);
    }
    listenerDidStart() {
        this.listenerStarted();
    }



}
// const caputreHelperDeleg = SKTCaptureHelperDelegateImp.alloc().init();
// Application.ios.delegate = caputreHelperDeleg;

export class Socketmobile extends SocketmobileCommon {
    public AppKey: string = 'MC0CFBWIdEO0COEhF4uNNsyun9SpuxybAhUA8b50JaTwLmadjkkmTSNrofKDIZs=';
    public DeveloperID: string = ''
    public AppID: string = ''
    public capture: SKTCaptureHelper;
    public page: Page;
    public appInfo: SKTAppInfo;
    public didReceiveDecodedData: (data: string, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) => void = (data: string, device: SKTCaptureHelperDevice, result: SKTCaptureErrors) => { };
    public didReceiveError: (error: SKTCaptureErrors, message: string) => void = (error: SKTCaptureErrors, message: string) => { };
    public didTerminate: (result: SKTCaptureErrors) => void = (result: SKTCaptureErrors) => { };;
    public listenerStarted: () => void = () => { };
    public delegate: SocketmobileDelegateImp;

    constructor(AppKey: string, DeveloperID: string, AppID: string) {
        super();
        this.AppKey = AppKey;
        this.DeveloperID = DeveloperID;
        this.AppID = AppID;
        this.delegate = SocketmobileDelegateImp.new();
        this.appInfo = SKTAppInfo.new();
        this.appInfo.AppID = this.AppID;
        this.appInfo.DeveloperID = this.DeveloperID
        this.appInfo.AppKey = this.AppKey;
    }


    initScanner() {
        this.delegate.didReceiveDecodedData = this.didReceiveDecodedData;
        this.delegate.didReceiveError = this.didReceiveError;
        this.delegate.didTerminate = this.didTerminate;
        this.delegate.listenerStarted = this.listenerStarted;
        this.capture = SKTCaptureHelper.sharedInstance();
        this.capture.setDispatchQueue(dispatch_get_current_queue());
        this.capture.pushDelegate(this.delegate);
        this.capture.openWithAppInfoCompletionHandler(this.appInfo, (result) => {
            console.log("result", result);
        });

    }

}
