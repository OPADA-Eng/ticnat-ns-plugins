require('globals'); // necessary to bootstrap tns modules on the new thread
var capture;
global.onmessage = function (msg) {
    var request = msg.data;


    startListening();

    global.postMessage({ success: true });
}

function startListening() {
    capture = new com.socketmobile.capture.android.Capture.Builder(Application.android.context.getApplicationContext()).appKey('MCwCFE70f7V1gMevM75w+dzXZD0nGVS4AhRY0GZLO9m799BkAMnfN5eCzTwxyg==').enableLogging(true).build();
    console.log(capture);
    var listener = new com.socketmobile.capture.client.CaptureClient.Listener({
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
    console.log(listener);
    capture.setListener(listener);
    console.log("isConnected", capture.isConnected());
}

    // does not handle errors with an `onerror` handler
    // errors will propagate directly to the main thread Worker instance

    // to handle errors implement the global.onerror handler:
    // global.onerror = function(err) {}