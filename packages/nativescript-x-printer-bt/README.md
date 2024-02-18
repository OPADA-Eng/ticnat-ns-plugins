# NativeScript X-Printer Bluetooth

[![npm version](https://badge.fury.io/js/nativescript-x-printer-bt.svg)](https://badge.fury.io/js/nativescript-x-printer-bt)

This plugin integrate your nativescript app with `X-Printer P323B ` printer to print a normal text or a bmp.

## Prerequisites / Requirements

You have to pair your device via bluetooth with the printer before you test the plugin.
This plugin is now working on `android only`

## Installation NS7 Only

```
tns plugin add @ticnat/nativescript-x-printer-bt
```

## Usage

Create Plugin instance

```
let = new NativescriptXPrinterBt();
```

Connect to the printer through:

```
this.printer.connect(printerAddress); // example: "00:07:80:3D:BC:D5"
```

To Print Normal Text use:

```
printer.printFreeText("Hello World", 100, 100, 0);
```

To Print a BMP image:

```
printer.printImg(bmp, height, width, true, 0, 0, { qrX: width , qrY: height, qrData: 'Saleh' });
```

for more information see [the demo](https://github.com/OPADA-Eng/ticnat-ns-plugins/tree/master/apps/demo)

## API Property

| Property  | type    | Default             | Description                                |
| --------- | ------- | ------------------- | ------------------------------------------ |
| paperSize | enum    | PaperSizes.FourInch | set the default paper size for the printer |
| debug     | boolean | false               | set the plugin in debug mode               |

## License

Apache License Version 2.0, January 2004
