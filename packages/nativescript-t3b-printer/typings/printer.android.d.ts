/// <reference path="android-declarations.d.ts"/>

declare module net {
    export module posprinter {
        export module asynncTask {
            export class PosAsynncTask extends globalAndroid.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Boolean> {
                public static class: java.lang.Class<net.posprinter.asynncTask.PosAsynncTask>;
                public onPostExecute(param0: java.lang.Boolean): void;
                public doInBackground(param0: native.Array<java.lang.Void>): java.lang.Boolean;
                public constructor(param0: net.posprinter.posprinterface.UiExecute, param1: net.posprinter.posprinterface.BackgroundInit);
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module posprinterface {
            export class BackgroundInit {
                public static class: java.lang.Class<net.posprinter.posprinterface.BackgroundInit>;
                /**
                 * Constructs a new instance of the net.posprinter.posprinterface.BackgroundInit interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
                 */
                public constructor(implementation: {
                    doinbackground(): boolean;
                });
                public constructor();
                public doinbackground(): boolean;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module posprinterface {
            export class IMyBinder {
                public static class: java.lang.Class<net.posprinter.posprinterface.IMyBinder>;
                /**
                 * Constructs a new instance of the net.posprinter.posprinterface.IMyBinder interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
                 */
                public constructor(implementation: {
                    connectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.UiExecute): void;
                    connectBtPort(param0: string, param1: net.posprinter.posprinterface.UiExecute): void;
                    connectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.UiExecute): void;
                    disconnectCurrentPort(param0: net.posprinter.posprinterface.UiExecute): void;
                    acceptdatafromprinter(param0: net.posprinter.posprinterface.UiExecute): void;
                    readBuffer(): net.posprinter.utils.RoundQueue<native.Array<number>>;
                    clearBuffer(): void;
                    checkLinkedState(param0: net.posprinter.posprinterface.UiExecute): void;
                    write(param0: native.Array<number>, param1: net.posprinter.posprinterface.UiExecute): void;
                    writeDataByYouself(param0: net.posprinter.posprinterface.UiExecute, param1: net.posprinter.posprinterface.ProcessData): void;
                });
                public constructor();
                public disconnectCurrentPort(param0: net.posprinter.posprinterface.UiExecute): void;
                public connectBtPort(param0: string, param1: net.posprinter.posprinterface.UiExecute): void;
                public write(param0: native.Array<number>, param1: net.posprinter.posprinterface.UiExecute): void;
                public acceptdatafromprinter(param0: net.posprinter.posprinterface.UiExecute): void;
                public readBuffer(): net.posprinter.utils.RoundQueue<native.Array<number>>;
                public checkLinkedState(param0: net.posprinter.posprinterface.UiExecute): void;
                public clearBuffer(): void;
                public writeDataByYouself(param0: net.posprinter.posprinterface.UiExecute, param1: net.posprinter.posprinterface.ProcessData): void;
                public connectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.UiExecute): void;
                public connectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.UiExecute): void;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module posprinterface {
            export class ProcessData {
                public static class: java.lang.Class<net.posprinter.posprinterface.ProcessData>;
                /**
                 * Constructs a new instance of the net.posprinter.posprinterface.ProcessData interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
                 */
                public constructor(implementation: {
                    processDataBeforeSend(): java.util.List<native.Array<number>>;
                });
                public constructor();
                public processDataBeforeSend(): java.util.List<native.Array<number>>;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module posprinterface {
            export class UiExecute {
                public static class: java.lang.Class<net.posprinter.posprinterface.UiExecute>;
                /**
                 * Constructs a new instance of the net.posprinter.posprinterface.UiExecute interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
                 */
                public constructor(implementation: {
                    onsucess(): void;
                    onfailed(): void;
                });
                public constructor();
                public onsucess(): void;
                public onfailed(): void;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module service {
            export class PosprinterService {
                public static class: java.lang.Class<net.posprinter.service.PosprinterService>;
                public onUnbind(param0: globalAndroid.content.Intent): boolean;
                public onBind(param0: globalAndroid.content.Intent): globalAndroid.os.IBinder;
                public onCreate(): void;
                public onDestroy(): void;
                public constructor();
            }
            export module PosprinterService {
                export class MyBinder implements net.posprinter.posprinterface.IMyBinder {
                    public static class: java.lang.Class<net.posprinter.service.PosprinterService.MyBinder>;
                    public clearBuffer(): void;
                    public write(param0: native.Array<number>, param1: net.posprinter.posprinterface.UiExecute): void;
                    public writeDataByYouself(param0: net.posprinter.posprinterface.UiExecute, param1: net.posprinter.posprinterface.ProcessData): void;
                    public connectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.UiExecute): void;
                    public acceptdatafromprinter(param0: net.posprinter.posprinterface.UiExecute): void;
                    public connectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.UiExecute): void;
                    public constructor(param0: net.posprinter.service.PosprinterService);
                    public disconnectCurrentPort(param0: net.posprinter.posprinterface.UiExecute): void;
                    public connectBtPort(param0: string, param1: net.posprinter.posprinterface.UiExecute): void;
                    public readBuffer(): net.posprinter.utils.RoundQueue<native.Array<number>>;
                    public checkLinkedState(param0: net.posprinter.posprinterface.UiExecute): void;
                }
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class BitmapProcess {
                public static class: java.lang.Class<net.posprinter.utils.BitmapProcess>;
                public static compressBmpByYourWidth(param0: globalAndroid.graphics.Bitmap, param1: number): globalAndroid.graphics.Bitmap;
                public static rotateBmp(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapProcess.RotateType): globalAndroid.graphics.Bitmap;
                public static compressBmpByPrinterWidth(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapProcess.PrinterWidth): globalAndroid.graphics.Bitmap;
                public constructor();
            }
            export module BitmapProcess {
                export class PrinterWidth {
                    public static class: java.lang.Class<net.posprinter.utils.BitmapProcess.PrinterWidth>;
                    public static Pos80: net.posprinter.utils.BitmapProcess.PrinterWidth;
                    public static Pos76: net.posprinter.utils.BitmapProcess.PrinterWidth;
                    public static Pos58: net.posprinter.utils.BitmapProcess.PrinterWidth;
                    public static valueOf(param0: string): net.posprinter.utils.BitmapProcess.PrinterWidth;
                    public static values(): native.Array<net.posprinter.utils.BitmapProcess.PrinterWidth>;
                }
                export class RotateType {
                    public static class: java.lang.Class<net.posprinter.utils.BitmapProcess.RotateType>;
                    public static Rotate90: net.posprinter.utils.BitmapProcess.RotateType;
                    public static Rotate180: net.posprinter.utils.BitmapProcess.RotateType;
                    public static Rotate270: net.posprinter.utils.BitmapProcess.RotateType;
                    public static values(): native.Array<net.posprinter.utils.BitmapProcess.RotateType>;
                    public static valueOf(param0: string): net.posprinter.utils.BitmapProcess.RotateType;
                }
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class BitmapToByteData {
                public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData>;
                public static downLoadBmpToSendData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static flashBmpToSendData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static rasterBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): native.Array<number>;
                public static rasterBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static baBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static downLoadBmpToSendTSCdownloadcommand(param0: globalAndroid.graphics.Bitmap): native.Array<number>;
                public static downLoadBmpToSendTSCData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public constructor();
            }
            export module BitmapToByteData {
                export class AlignType {
                    public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData.AlignType>;
                    public static Left: net.posprinter.utils.BitmapToByteData.AlignType;
                    public static Center: net.posprinter.utils.BitmapToByteData.AlignType;
                    public static Right: net.posprinter.utils.BitmapToByteData.AlignType;
                    public static values(): native.Array<net.posprinter.utils.BitmapToByteData.AlignType>;
                    public static valueOf(param0: string): net.posprinter.utils.BitmapToByteData.AlignType;
                }
                export class BmpType {
                    public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData.BmpType>;
                    public static Dithering: net.posprinter.utils.BitmapToByteData.BmpType;
                    public static Threshold: net.posprinter.utils.BitmapToByteData.BmpType;
                    public static values(): native.Array<net.posprinter.utils.BitmapToByteData.BmpType>;
                    public static valueOf(param0: string): net.posprinter.utils.BitmapToByteData.BmpType;
                }
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class DataForSendToPrinterPos58 {
                public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos58>;
                public static selectOrCancelChineseCharDoubleWH(param0: number): native.Array<number>;
                public static printRasterBmp(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): native.Array<number>;
                public static horizontalPositioning(): native.Array<number>;
                public static printAndFeedForward(param0: number): native.Array<number>;
                public static setCharsetName(param0: string): void;
                public static selectOrCancelCW90(param0: number): native.Array<number>;
                public static setDefultLineSpacing(): native.Array<number>;
                public static selectAlignment(param0: number): native.Array<number>;
                public constructor();
                public static selectCharacterSize(param0: number): native.Array<number>;
                public static setRelativeHorizontalPrintPosition(param0: number, param1: number): native.Array<number>;
                public static initializePrinter(): native.Array<number>;
                public static selectOrCancelChineseCharUnderLineModel(param0: number): native.Array<number>;
                public static selectOrCancelUnderlineModel(param0: number): native.Array<number>;
                public static defineuserDefinedCharacters(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
                public static selectPrintModel(param0: number): native.Array<number>;
                public static selectInternationalCharacterSets(param0: number): native.Array<number>;
                public static queryPrinterState(): native.Array<number>;
                public static cancelUserDefinedCharacters(param0: number): native.Array<number>;
                public static setBarcodeHeight(param0: number): native.Array<number>;
                public static selectOrCancelConvertPrintModel(param0: number): native.Array<number>;
                public static setLineSpaceing(param0: number): native.Array<number>;
                public static selectBmpModel(param0: number, param1: number, param2: number, param3: native.Array<number>): native.Array<number>;
                public static setHorizontalmovementPosition(param0: native.Array<number>): native.Array<number>;
                public static setLeftSpace(param0: number, param1: number): native.Array<number>;
                public static setPrintAreaWidth(param0: number, param1: number): native.Array<number>;
                public static printDownLoadBmp(param0: number): native.Array<number>;
                public static setCharRightSpace(param0: number): native.Array<number>;
                public static selectOrCancelBoldModel(param0: number): native.Array<number>;
                public static setBarcodeWidth(param0: number): native.Array<number>;
                public static printBarcode(param0: number, param1: string): native.Array<number>;
                public static selectFont(param0: number): native.Array<number>;
                public static definedUserDefinedChineseChar(param0: number, param1: native.Array<number>): native.Array<number>;
                public static printBmpInFLASH(param0: number, param1: number): native.Array<number>;
                public static printcode128(param0: string): native.Array<number>;
                public static selectOrCancelInvertPrintModel(param0: number): native.Array<number>;
                public static allowOrForbidPressButton(param0: number): native.Array<number>;
                public static CancelChineseCharModel(): native.Array<number>;
                public static selectOrCancelDoubelPrintModel(param0: number): native.Array<number>;
                public static printAndFeedLine(): native.Array<number>;
                public static selectHRIFont(param0: number): native.Array<number>;
                public static setChineseCharacterModel(param0: number): native.Array<number>;
                public static definedFlashBmp(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number, param2: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static printAndFeed(param0: number): native.Array<number>;
                public static setAbsolutePrintPosition(param0: number, param1: number): native.Array<number>;
                public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): native.Array<number>;
                public static selectCharacterCodePage(param0: number): native.Array<number>;
                public static setHorizontalAndVerticalMoveUnit(param0: number, param1: number): native.Array<number>;
                public static setChineseCharLeftAndRightSpace(param0: number, param1: number): native.Array<number>;
                public static selectChineseCharModel(): native.Array<number>;
                public static selectHRICharacterPrintPosition(param0: number): native.Array<number>;
                public static definedDownLoadBmp(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static printBarcode(param0: number, param1: number, param2: string): native.Array<number>;
                public static selectOrCancleCustomChar(param0: number): native.Array<number>;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class DataForSendToPrinterPos76 {
                public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos76>;
                public static selectOrCancelChineseCharDoubleWH(param0: number): native.Array<number>;
                public static requestRealtimeForPrint(param0: number): native.Array<number>;
                public static horizontalPositioning(): native.Array<number>;
                public static selectPrintTransducerStopPrint(param0: number): native.Array<number>;
                public static printAndFeedForward(param0: number): native.Array<number>;
                public static setDefultLineSpacing(): native.Array<number>;
                public static selectPrintColor(param0: number): native.Array<number>;
                public static selectAlignment(param0: number): native.Array<number>;
                public static returnState(param0: number): native.Array<number>;
                public constructor();
                public static sendRealtimestatus(param0: number): native.Array<number>;
                public static PrintAndCarriageReturn(): native.Array<number>;
                public static executePrintDataSaveByTransformToHex(): native.Array<number>;
                public static initializePrinter(): native.Array<number>;
                public static selectPrintTransducerOutPutPageOutSignal(param0: number): native.Array<number>;
                public static selectOrCancelChineseCharUnderLineModel(param0: number): native.Array<number>;
                public static selectCutPagerModerAndCutPager(param0: number, param1: number): native.Array<number>;
                public static selectOrCancelUnderlineModel(param0: number): native.Array<number>;
                public static defineuserDefinedCharacters(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
                public static selectPrintModel(param0: number): native.Array<number>;
                public static selectInternationalCharacterSets(param0: number): native.Array<number>;
                public static cancelUserDefinedCharacters(param0: number): native.Array<number>;
                public static selectOrCancelConvertPrintModel(param0: number): native.Array<number>;
                public static setLineSpaceing(param0: number): native.Array<number>;
                public static setHorizontalmovementPosition(param0: native.Array<number>): native.Array<number>;
                public static setCharRightSpace(param0: number): native.Array<number>;
                public static selectOrCancelBoldModel(param0: number): native.Array<number>;
                public static printHeaderRecordAndFeedToPrintStartPosition(): native.Array<number>;
                public static selectFont(param0: number): native.Array<number>;
                public static printHeadReplaceEnter(): native.Array<number>;
                public static setConnectWaitTime(param0: number, param1: number): native.Array<number>;
                public static cancelUserDefinedChineseChar(param0: number): native.Array<number>;
                public static definedUserDefinedChineseChar(param0: number, param1: native.Array<number>): native.Array<number>;
                public static printAndFeedUnidirection(param0: number): native.Array<number>;
                public static allowOrForbidPressButton(param0: number): native.Array<number>;
                public static selectBmpModel(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static selectOrCancelDoubelPrintModel(param0: number): native.Array<number>;
                public static printAndFeedLine(): native.Array<number>;
                public static selectCutPagerModerAndCutPager(param0: number): native.Array<number>;
                public static feedpaperToOrderEnd(): native.Array<number>;
                public static setChineseCharacterModel(param0: number): native.Array<number>;
                public static selectOrCancelUnidirectionPrint(param0: number): native.Array<number>;
                public static setOrderLength(param0: number, param1: number): native.Array<number>;
                public static printAndFeed(param0: number): native.Array<number>;
                public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): native.Array<number>;
                public static openOrCloseAutoReturnPrintState(param0: number): native.Array<number>;
                public static setBlackPositionRecord(param0: number, param1: number, param2: number, param3: number): native.Array<number>;
                public static selectCharacterCodePage(param0: number): native.Array<number>;
                public static setChineseCharLeftAndRightSpace(param0: number, param1: number): native.Array<number>;
                public static selectChineseCharModel(): native.Array<number>;
                public static cancelChineseCharModel(): native.Array<number>;
                public static printAndBackFeed(param0: number): native.Array<number>;
                public static setRollBackLength(param0: number): native.Array<number>;
                public static feedBlackPaperToPrintPosition(): native.Array<number>;
                public static selectOrCancleCustomChar(param0: number): native.Array<number>;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class DataForSendToPrinterPos80 {
                public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos80>;
                public static selectOrCancelChineseCharDoubleWH(param0: number): native.Array<number>;
                public static printByPagemodel(): native.Array<number>;
                public static printerOrderBuzzingAndWarningLight(param0: number, param1: number, param2: number): native.Array<number>;
                public static requestRealtimeForPrint(param0: number): native.Array<number>;
                public static printRasterBmp(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): native.Array<number>;
                public static horizontalPositioning(): native.Array<number>;
                public static selectPrintTransducerStopPrint(param0: number): native.Array<number>;
                public static printAndFeedForward(param0: number): native.Array<number>;
                public static openCashboxRealtime(param0: number, param1: number): native.Array<number>;
                public static setVerticalRelativePositionUnderPageModel(param0: number, param1: number): native.Array<number>;
                public static setCharsetName(param0: string): void;
                public static selectOrCancelCW90(param0: number): native.Array<number>;
                public static setDefultLineSpacing(): native.Array<number>;
                public static selectAlignment(param0: number): native.Array<number>;
                public static returnState(param0: number): native.Array<number>;
                public constructor();
                public static sendRealtimestatus(param0: number): native.Array<number>;
                public static PrintsThePDF417SymbolDataInTheSymbolStorageArea(): native.Array<number>;
                public static selectCharacterSize(param0: number): native.Array<number>;
                public static PrintAndCarriageReturn(): native.Array<number>;
                public static SetsTheModuleHeightForPDF417(param0: number): native.Array<number>;
                public static setRelativeHorizontalPrintPosition(param0: number, param1: number): native.Array<number>;
                public static executePrintDataSaveByTransformToHex(): native.Array<number>;
                public static executeMacrodeCommand(param0: number, param1: number, param2: number): native.Array<number>;
                public static SetsTheErrorCorrectionLevelForPDF417(param0: number, param1: number): native.Array<number>;
                public static initializePrinter(): native.Array<number>;
                public static canclePrintDataByPagemodel(): native.Array<number>;
                public static selectPrintTransducerOutPutPageOutSignal(param0: number): native.Array<number>;
                public static printQRcode(param0: number, param1: number, param2: string): native.Array<number>;
                public static selectOrCancelChineseCharUnderLineModel(param0: number): native.Array<number>;
                public static SetsTheErrorCorrectionLevelForQRCodeSymbol(param0: number): native.Array<number>;
                public static selectCutPagerModerAndCutPager(param0: number, param1: number): native.Array<number>;
                public static selectOrCancelUnderlineModel(param0: number): native.Array<number>;
                public static printerOrderBuzzingHint(param0: number, param1: number): native.Array<number>;
                public static SetsTheNumberOfRowsOfTheDataAreaForPDF417(param0: number): native.Array<number>;
                public static defineuserDefinedCharacters(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
                public static selectPrintModel(param0: number): native.Array<number>;
                public static selectInternationalCharacterSets(param0: number): native.Array<number>;
                public static SpecifiesOrCancelsVariousPDF417SymbolOptions(param0: number): native.Array<number>;
                public static cancelUserDefinedCharacters(param0: number): native.Array<number>;
                public static setBarcodeHeight(param0: number): native.Array<number>;
                public static printAndBackStandardmodel(): native.Array<number>;
                public static selectOrCancelConvertPrintModel(param0: number): native.Array<number>;
                public static setLineSpaceing(param0: number): native.Array<number>;
                public static selectBmpModel(param0: number, param1: number, param2: number, param3: native.Array<number>): native.Array<number>;
                public static setHorizontalmovementPosition(param0: native.Array<number>): native.Array<number>;
                public static setLeftSpace(param0: number, param1: number): native.Array<number>;
                public static setPrintAreaWidth(param0: number, param1: number): native.Array<number>;
                public static printDownLoadBmp(param0: number): native.Array<number>;
                public static setCharRightSpace(param0: number): native.Array<number>;
                public static selectOrCancelBoldModel(param0: number): native.Array<number>;
                public static setBarcodeWidth(param0: number): native.Array<number>;
                public static TransmitsTheSizeOfTheSymbolDataInTheSymbolStorageAreaPDF417(): native.Array<number>;
                public static printBarcode(param0: number, param1: string): native.Array<number>;
                public static StoresSymbolDataInThePDF417SymbolStorageArea(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
                public static selectFont(param0: number): native.Array<number>;
                public static selectStandardModel(): native.Array<number>;
                public static StoresSymbolDataInTheQRCodeSymbolStorageArea(param0: string): native.Array<number>;
                public static definedUserDefinedChineseChar(param0: number, param1: native.Array<number>): native.Array<number>;
                public static printBmpInFLASH(param0: number, param1: number): native.Array<number>;
                public static SetsTheNumberOfColumnsOfTheDataAreaForPDF417(param0: number): native.Array<number>;
                public static selectOrCancelInvertPrintModel(param0: number): native.Array<number>;
                public static StoresSymbolDataInItheMaxiCodeSymbolStorageArea(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
                public static allowOrForbidPressButton(param0: number): native.Array<number>;
                public static CancelChineseCharModel(): native.Array<number>;
                public static TransmitsTheSizeOfTheEncodedSymbolDataInTheSymbolStorageAreaMaxiCode(): native.Array<number>;
                public static selectOrCancelDoubelPrintModel(param0: number): native.Array<number>;
                public static printAndFeedLine(): native.Array<number>;
                public static selectCutPagerModerAndCutPager(param0: number): native.Array<number>;
                public static selectHRIFont(param0: number): native.Array<number>;
                public static selectPageModel(): native.Array<number>;
                public static PrintsTheMaxiCodeSymbolDataInTheSymbolStorageArea(): native.Array<number>;
                public static TransmitsTheSizeOfTheSymbolDataInTheSymbolStorageAreaQRCode(): native.Array<number>;
                public static SetsTheSizeOfTheQRCodeSymbolModule(param0: number): native.Array<number>;
                public static setAbsolutePositionUnderPageModel(param0: number, param1: number): native.Array<number>;
                public static setChineseCharacterModel(param0: number): native.Array<number>;
                public static SetsTheModuleWidthOfPDF417(param0: number): native.Array<number>;
                public static definedFlashBmp(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number, param2: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static printAndFeed(param0: number): native.Array<number>;
                public static startOrStopMacrodeFinition(): native.Array<number>;
                public static setAbsolutePrintPosition(param0: number, param1: number): native.Array<number>;
                public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): native.Array<number>;
                public static openOrCloseAutoReturnPrintState(param0: number): native.Array<number>;
                public static PrintsTheQRCodeSymbolDataInTheSymbolStorageArea(): native.Array<number>;
                public static SpecifiesTheModeForMaxiCodeSymbol(param0: number): native.Array<number>;
                public static selectCharacterCodePage(param0: number): native.Array<number>;
                public static setPrintAreaUnderPageModel(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number): native.Array<number>;
                public static setHorizontalAndVerticalMoveUnit(param0: number, param1: number): native.Array<number>;
                public static setChineseCharLeftAndRightSpace(param0: number, param1: number): native.Array<number>;
                public static selectPrinter(param0: number): native.Array<number>;
                public static selectChineseCharModel(): native.Array<number>;
                public static selectPrintDirectionUnderPageModel(param0: number): native.Array<number>;
                public static selectHRICharacterPrintPosition(param0: number): native.Array<number>;
                public static definedDownLoadBmp(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static printBarcode(param0: number, param1: number, param2: string): native.Array<number>;
                public static selectOrCancleCustomChar(param0: number): native.Array<number>;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class DataForSendToPrinterTSC {
                public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterTSC>;
                public static reverse(param0: number, param1: number, param2: number, param3: number): native.Array<number>;
                public static formFeed(): native.Array<number>;
                public static downLoad(param0: string): native.Array<number>;
                public static selfTest(param0: string): native.Array<number>;
                public static gapByinch(param0: number, param1: number): native.Array<number>;
                public static blineByinch(param0: number, param1: number): native.Array<number>;
                public static shift(param0: number): native.Array<number>;
                public static qrCode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: string): native.Array<number>;
                public static setCharsetName(param0: string): void;
                public constructor();
                public static kill(param0: string): native.Array<number>;
                public static block(param0: number, param1: number, param2: number, param3: number, param4: string, param5: number, param6: number, param7: number, param8: number, param9: number, param10: string): native.Array<number>;
                public static density(param0: number): native.Array<number>;
                public static sound(param0: number, param1: number): native.Array<number>;
                public static eoj(): native.Array<number>;
                public static speed(param0: number): native.Array<number>;
                public static dmatrix(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string, param8: string): native.Array<number>;
                public static gapDetect(param0: number, param1: number): native.Array<number>;
                public static blineDetect(param0: number, param1: number): native.Array<number>;
                public static codePage(param0: string): native.Array<number>;
                public static downLoad(param0: string, param1: string): native.Array<number>;
                public static reference(param0: number, param1: number): native.Array<number>;
                public static offSetByinch(param0: number): native.Array<number>;
                public static print(param0: number): native.Array<number>;
                public static checkPrinterStateByPort9100(): native.Array<number>;
                public static gapDetect(): native.Array<number>;
                public static putBmp(param0: number, param1: number, param2: string): native.Array<number>;
                public static cls(): native.Array<number>;
                public static block(param0: number, param1: number, param2: number, param3: number, param4: string, param5: number, param6: number, param7: number, param8: string): native.Array<number>;
                public static barCode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): native.Array<number>;
                public static selfTest(): native.Array<number>;
                public static putpcx(param0: number, param1: number, param2: string): native.Array<number>;
                public static cut(): native.Array<number>;
                public static qrCode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: string, param7: string, param8: string): native.Array<number>;
                public static blineBydot(param0: number, param1: number): native.Array<number>;
                public static run(param0: string): native.Array<number>;
                public static offSetBydot(param0: number): native.Array<number>;
                public static limitFeedByinch(param0: number): native.Array<number>;
                public static limitFeedBymm(param0: number): native.Array<number>;
                public static downLoad(param0: string, param1: globalAndroid.graphics.Bitmap): native.Array<number>;
                public static move(): native.Array<number>;
                public static text(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): native.Array<number>;
                public static gapBymm(param0: number, param1: number): native.Array<number>;
                public static pdf417(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: string): native.Array<number>;
                public static putBmp(param0: number, param1: number, param2: string, param3: number, param4: number): native.Array<number>;
                public static initialPrinter(): native.Array<number>;
                public static dmatrix(param0: number, param1: number, param2: number, param3: number, param4: string, param5: string): native.Array<number>;
                public static files(): native.Array<number>;
                public static sizeByinch(param0: number, param1: number): native.Array<number>;
                public static direction(param0: number): native.Array<number>;
                public static disPlay(param0: string): native.Array<number>;
                public static erase(param0: number, param1: number, param2: number, param3: number): native.Array<number>;
                public static blineBymm(param0: number, param1: number): native.Array<number>;
                public static bitmap(param0: number, param1: number, param2: number, param3: globalAndroid.graphics.Bitmap, param4: net.posprinter.utils.BitmapToByteData.BmpType): native.Array<number>;
                public static print(param0: number, param1: number): native.Array<number>;
                public static home(): native.Array<number>;
                public static sizeBymm(param0: number, param1: number): native.Array<number>;
                public static country(param0: string): native.Array<number>;
                public static ellipse(param0: number, param1: number, param2: number, param3: number, param4: number): native.Array<number>;
                public static eop(): native.Array<number>;
                public static feed(param0: number): native.Array<number>;
                public static box(param0: number, param1: number, param2: number, param3: number, param4: number): native.Array<number>;
                public static downLoad(param0: string, param1: number, param2: string): native.Array<number>;
                public static offSetBymm(param0: number): native.Array<number>;
                public static delay(param0: number): native.Array<number>;
                public static backFeed(param0: number): native.Array<number>;
                public static checkPrinterStateByPort4000(): native.Array<number>;
                public static limitFeedBydot(param0: number): native.Array<number>;
                public static gapBydot(param0: number, param1: number): native.Array<number>;
                public static sizeBydot(param0: number, param1: number): native.Array<number>;
                public static autoDetect(param0: number, param1: number): native.Array<number>;
                public static codeBlockFMode(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string): native.Array<number>;
                public static bar(param0: number, param1: number, param2: number, param3: number): native.Array<number>;
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class PosPrinterDev {
                public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev>;
                public Read(): number;
                public Write(param0: number): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public Read(param0: native.Array<number>, param1: number, param2: number): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public Read(param0: native.Array<number>): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public constructor(param0: net.posprinter.utils.PosPrinterDev.PortType, param1: string);
                public GetPortInfo(): net.posprinter.utils.PosPrinterDev.PortInfo;
                public constructor(param0: net.posprinter.utils.PosPrinterDev.PortType, param1: string, param2: number);
                public Close(): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public Write(param0: native.Array<number>, param1: number, param2: number): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public constructor(param0: net.posprinter.utils.PosPrinterDev.PortType, param1: globalAndroid.content.Context);
                public Open(): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public Write(param0: native.Array<number>): net.posprinter.utils.PosPrinterDev.ReturnMessage;
                public static GetUsbPathNames(param0: globalAndroid.content.Context): java.util.List<string>;
                public constructor(param0: net.posprinter.utils.PosPrinterDev.PortType, param1: globalAndroid.content.Context, param2: string);
            }
            export module PosPrinterDev {
                export class BluetoothPort extends net.posprinter.utils.PosPrinterDev.PrinterPort {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.BluetoothPort>;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PortInfo);
                }
                export class ErrorCode {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.ErrorCode>;
                    public static OpenPortFailed: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static OpenPortSuccess: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static ClosePortFailed: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static ClosePortSuccess: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static WriteDataFailed: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static WriteDataSuccess: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static ReadDataSuccess: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static ReadDataFailed: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static UnknownError: net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static valueOf(param0: string): net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public static values(): native.Array<net.posprinter.utils.PosPrinterDev.ErrorCode>;
                }
                export class EthernetPort extends net.posprinter.utils.PosPrinterDev.PrinterPort {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.EthernetPort>;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PortInfo);
                }
                export class NetConnectThread {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.NetConnectThread>;
                    public returnMessage: net.posprinter.utils.PosPrinterDev.ReturnMessage;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PrinterPort);
                    public run(): void;
                }
                export class NetReadThread {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.NetReadThread>;
                    public returnMessage: net.posprinter.utils.PosPrinterDev.ReturnMessage;
                    public reBuffer: native.Array<number>;
                    public reOffset: number;
                    public reCount: number;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PrinterPort, param2: native.Array<number>, param3: number, param4: number);
                    public run(): void;
                }
                export class PortInfo {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.PortInfo>;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev);
                    public GetUsbVid(): number;
                    public GetEthernetPort(): number;
                    public GetPortType(): net.posprinter.utils.PosPrinterDev.PortType;
                    public GetPortName(): string;
                    public GetUsbPid(): number;
                    public PortIsOpen(): boolean;
                    public GetUsbPathName(): string;
                    public GetEthernetIP(): string;
                    public GetBluetoothID(): string;
                }
                export class PortType {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.PortType>;
                    public static Unknown: net.posprinter.utils.PosPrinterDev.PortType;
                    public static USB: net.posprinter.utils.PosPrinterDev.PortType;
                    public static Bluetooth: net.posprinter.utils.PosPrinterDev.PortType;
                    public static Ethernet: net.posprinter.utils.PosPrinterDev.PortType;
                    public static values(): native.Array<net.posprinter.utils.PosPrinterDev.PortType>;
                    public static valueOf(param0: string): net.posprinter.utils.PosPrinterDev.PortType;
                }
                export abstract class PrinterPort {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.PrinterPort>;
                    public mPortInfo: net.posprinter.utils.PosPrinterDev.PortInfo;
                    public mRxdQueue: java.util.Queue<java.lang.Byte>;
                    public mTxdQueue: java.util.Queue<java.lang.Byte>;
                    public mIsOpen: boolean;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PortInfo);
                    public GetTxdCount(): number;
                    public GetRxdCount(): number;
                }
                export class ReturnMessage {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.ReturnMessage>;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev);
                    public GetWriteByteCount(): number;
                    public GetErrorCode(): net.posprinter.utils.PosPrinterDev.ErrorCode;
                    public GetErrorStrings(): string;
                    public GetReadByteCount(): number;
                }
                export class UsbPort extends net.posprinter.utils.PosPrinterDev.PrinterPort {
                    public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.UsbPort>;
                    public constructor(param0: net.posprinter.utils.PosPrinterDev, param1: net.posprinter.utils.PosPrinterDev.PortInfo);
                }
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class QueueElementFullException {
                public static class: java.lang.Class<net.posprinter.utils.QueueElementFullException>;
                public constructor(param0: string, param1: java.lang.Throwable);
                public constructor(param0: java.lang.Throwable);
                public constructor(param0: string);
                public constructor();
            }
        }
    }
}

declare module net {
    export module posprinter {
        export module utils {
            export class RoundQueue<T> extends java.io.Serializable {
                public static class: java.lang.Class<net.posprinter.utils.RoundQueue<any>>;
                public indexOf(param0: any): number;
                public getLast(): any;
                public gethead(): number;
                public getFirst(): any;
                public removeFirst(): any;
                public realSize(): number;
                public get(param0: number): any;
                public clear(): void;
                public constructor(param0: number);
                public isFull(): boolean;
                public addLast(param0: any): void;
                public isEmpty(): boolean;
                public gettail(): number;
            }
        }
    }
}

//Generics information:
//net.posprinter.utils.RoundQueue:1

