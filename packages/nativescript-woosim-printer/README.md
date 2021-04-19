# NativeScript Woosim Printer

[![npm version](https://badge.fury.io/js/nativescript-sewoo-printer.svg)](https://badge.fury.io/js/nativescript-sewoo-printer)

This plugin integrate your nativescript app with `Woosim Intermec Pr3` printer to print a normal text or a bmp.

## Prerequisites / Requirements

You have to pair your device via bluetooth with the printer before you test the plugin.
This plugin is now working on `android only`

## Installation NS7 Only

```
tns plugin add @ticnat/nativescript-woosim-printer
```

## Usage

Create Plugin instance

```
let printer = new WoosimPrinter();
```

Connect to the printer through:

```
this.printer.connect(printerAddress); // example: "00:07:80:3D:BC:D5"
```

To Print Normal Text use:

```
printer.print("Hello World");
```

To Print a BMP image:

```
printer.printImg(bmp);
```

To Print Txt File:

```
let documents = fs.knownFolders.currentApp();
var myFile = documents.getFile("mytextfile.txt");
this.printer.printTextFile(myFile);

```

for more information see [the demo](https://github.com/OPADA-Eng/ticnat-ns-plugins/tree/master/apps/demo)

## API Property

| Property  | type    | Default             | Description                                |
| --------- | ------- | ------------------- | ------------------------------------------ |
| paperSize | enum    | PaperSizes.FourInch | set the default paper size for the printer |
| debug     | boolean | false               | set the plugin in debug mode               |

## API Functions

| Function                                                                                                                                                        | Description                            | Params                                                                                                                                                                                                                                                                                  |
| --------------------------------------------------------------------------------------------------------------------------------------------------------------- | -------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| connect(address:string):void                                                                                                                                    | connect to a printer using its address | address:string ex: "00:13:7B:49:D3:1A"                                                                                                                                                                                                                                                  |
| disconnect():void                                                                                                                                               | disconnect from a printer              |
| print(text: string): void                                                                                                                                       | print normal text                      | text : the text you want to print                                                                                                                                                                                                                                                       |
| printImg(bitmap: globalAndroid.graphics.Bitmap, setExtraPaddingAfterPrint?: boolean, XResol?: number, YResol?: number, startX?: number, startY?: number): void; | print normal bitmap                    | bitmap: the image to print, setExtraPaddingAfterPrint: set extra padding after print default true, startX:number specify the position on the paper to start print from on X axis default "0", startY:number specify the position on the paper to start print from on Y axis default "0" |
| printTextFile(file: any): void;                                                                                                                                 | Print Txt file                         | File: NS File                                                                                                                                                                                                                                                                           |

Need velocity on your NativeScript projects? I'm available to build beautiful and performant NativeScript applications for your business requirements. Email me direct: m.opada.albosh@gmail.com to discuss project details.

## License

Apache License Version 2.0, January 2004
