# NativeScript Sewoo Printer

[![npm version](https://badge.fury.io/js/nativescript-sewoo-printer.svg)](https://badge.fury.io/js/nativescript-sewoo-printer)

This plugin integrate your nativescript app with `Sewoo LK-P43Ⅱ` printer to print a normal text or a bmp.

## Prerequisites / Requirements

You have to pair your device via bluetooth with the printer before you test the plugin.
This plugin is now working on `android only`

## Installation

```
tns plugin add @ticnat/nativescript-sewoo-printer
```

## Usage

First of all put these permissions in you AndroidManifest.xml file:

```
<uses-permission android:name="android.permission.BLUETOOTH" />
<uses-permission android:name="android.permission.BLUETOOTH_ADMIN" />
```

To Print Normal Text use:

```
let printer = new SewooPrinter("windows-1256");
printer.print("Hello World");
```

To Print a BMP image:

```
let printer = new SewooPrinter("windows-1256");
printer.printImg(bmp);
```

for more information see [the demo](https://github.com/OPADA-Eng/nativescript-sewoo-printer/tree/master/demo)

## API Property

| Property  | type    | Default             | Description                                |
| --------- | ------- | ------------------- | ------------------------------------------ |
| paperSize | enum    | PaperSizes.FourInch | set the default paper size for the printer |
| debug     | boolean | false               | set the plugin in debug mode               |
| charset   | string  | ''                  | set the plugin encoding charset            |

## API Functions

| Function                                                                                                                                                        | Description                            | Params                                                                                                                                                                                                                                                                                                                            |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| connect(address:string):void                                                                                                                                    | connect to a printer using its address | address:string ex: "00:13:7B:49:D3:1A"                                                                                                                                                                                                                                                                                            |
| disconnect():void                                                                                                                                               | disconnect from a printer              |
| print(text: string): void                                                                                                                                       | print normal text                      | text : the text you want to print                                                                                                                                                                                                                                                                                                 |
| printImg(bitmap: globalAndroid.graphics.Bitmap, setExtraPaddingAfterPrint?: boolean, XResol?: number, YResol?: number, startX?: number, startY?: number): void; | print normal bitmap                    | bitmap: the image to print, setExtraPaddingAfterPrint: set extra padding after print default true, XResol: x resolution,YResol: y resolution startX:number specify the position on the paper to start print from on X axis default "0", startY:number specify the position on the paper to start print from on Y axis default "0" |

## License

Apache License Version 2.0, January 2004
