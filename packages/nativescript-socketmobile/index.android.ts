import { Application, Page } from '@nativescript/core';
import { SocketmobileCommon } from './common';
declare var com: any, java: any;
export class Socketmobile extends SocketmobileCommon {
    public capture;
    public listener;
    public context: android.content.Context;
    constructor() {
        super();
        this.context = Application.android.context.getApplicationContext();
        // let config = new com.socketmobile.capture.client.Configuration();
        // config.setContext(Application.android.context);
        // config.enableLogging(java.util.logging.Level.ALL);
        // setTimeout(() => {
        // this.createAndroidLib()
        // console.log(this.capture);


        // }, 1000);
        // this.capture.connect(10, new com.socketmobile.capture.client.ConnectionCallback({
        //     onConnectionStateChanged: (connectionState) => {
        //         console.log("connected");
        //     }
        // }));
        // com.socketmobile.capture.android.Capture.register(this.listener);
        //     console.log('onData');
        //     let data = event.getData().getString();
        //     // Do something
        //     console.log(data);
        // });


    }
    // @org.greenrobot.eventbus.Subscribe(org.greenrobot.eventbus.ThreadMode.MAIN)
    public initScanner() {
        this.capture = new com.socketmobile.capture.android.Capture.Builder(Application.android.context.getApplicationContext()).enableLogging(true).build();
        console.dir(this.capture);
        this.listener = new com.socketmobile.capture.client.CaptureClient.Listener({
            // this.listener = new com.socketmobile.capture.client.CaptureClient.Listener({
            onData: (event) => {
                console.log(event);

            },
            onError: (event) => {
                console.log(event);

            },
            onDeviceStateEvent: (event) => {
                console.log(event);

            }
        });
        console.log(this.listener);
        this.capture.setListener(this.listener);
        // this.listener.onData = (event) => {
        //     console.log('onData');
        // };
        // console.log("isConnected", this.capture.isConnected());
    }


}
