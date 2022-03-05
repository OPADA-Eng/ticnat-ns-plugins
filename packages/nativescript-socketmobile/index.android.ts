import { Application } from '@nativescript/core';
import { SocketmobileCommon } from './common';
declare var com: any, java: any;
export class Socketmobile extends SocketmobileCommon {
    public capture;
    public listener;
    constructor() {
        super();

        const WorkerScript = require("nativescript-worker-loader!./socketworker.js");
        const worker = new WorkerScript();
        worker.postMessage({});

        worker.onmessage = function (msg) {
            if (msg.data.success) {
                // Stop idle animation
                // Update Image View
                // Terminate worker or send another message
                console.log(msg);
                // worker.terminate();
            } else {
                // Stop idle animation
                // Display meaningful message
                // Terminate worker or send message with different parameters
            }
        }

        worker.onerror = function (err) {
            console.log(`An unhandled error occurred in worker: ${err.filename}, line: ${err.lineno} :`);
            console.log(err.message);
        }

        // let config = new com.socketmobile.capture.client.Configuration();
        // config.setContext(Application.android.context);
        // config.enableLogging(java.util.logging.Level.ALL);
        // setTimeout(() => {
        // this.createAndroidLib()
        // console.log(this.capture);
        // this.listener = new com.socketmobile.capture.client.CaptureClient.Listener({
        //     // this.listener = new com.socketmobile.capture.client.CaptureClient.Listener({
        //     onData: (event) => {
        //         console.log(event);

        //     },
        //     onError: (event) => {
        //         console.log(event);

        //     },
        //     onDeviceStateEvent: (event) => {
        //         console.log(event);

        //     }
        // });
        // console.log(this.listener);
        // this.capture.setListener(this.listener);
        // console.log("isConnected", this.capture.isConnected());

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
    public createAndroidLib() {
        this.capture = new com.socketmobile.capture.android.Capture.Builder(Application.android.context.getApplicationContext()).appKey('MCwCFE70f7V1gMevM75w+dzXZD0nGVS4AhRY0GZLO9m799BkAMnfN5eCzTwxyg==').enableLogging(true).build();
    }


}
