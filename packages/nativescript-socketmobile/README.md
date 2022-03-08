# @ticnat/nativescript-socketmobile

```javascript
ns plugin add @ticnat/nativescript-socketmobile
```

## Usage

1. create a new instance of the scanner plugin:

```javascript
const socket = new Socketmobile(AppKey,DeveloperID, AppID);
```
and pass you appkey developerId and appId obtained from [Socket Mobile Developer Portal](https://www.socketmobile.com/developers/portal)

2. initialize the scanner with the callbacks:

```javascript
socket.didReceiveDecodedData = (data: string, device, result) => {
    console.log('scannedText', data);
}
socket.initScanner();

```

3. Connect and pair your sockermobile scanner with the iPad through socket mobile companion app

4. add these to info.plist file

```xml
<key>UISupportedExternalAccessoryProtocols</key>
<array>
    <string>com.socketmobile.chs</string>
</array>
<key>NSBluetoothAlwaysUsageDescription</key>
<string>Using bluetooth to connect the app to the barcode scanner</string>
<key>NSBluetoothPeripheralUsageDescription</key>
<string>Using bluetooth to connect the app to the barcode scanner</string>
```

5. All done!


Notice:

1. This plugin tested on Socket mobile S740 model but I think it works with other models.

2. The plugin is under development, if you have any improvements Welcome to PRs!
## License

Apache License Version 2.0
