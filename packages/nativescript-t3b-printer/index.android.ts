import { Utils } from '@nativescript/core';
import { T3bPrinterCommon } from './common';
declare var com: any;
export class T3bPrinter extends T3bPrinterCommon {
    public printer: net.posprinter.posprinterface.IMyBinder;
    constructor() {
        super();
        try {
            // let srv = new net.posprinter.service.PosprinterService();
            let conn = new android.content.ServiceConnection({
                onServiceConnected: (componentName, iBinder) => {
                    //Bind successfully
                    this.printer = <any>iBinder;
                    console.log("binder", "connected");
                },

                onServiceDisconnected: (componentName) => {
                    console.log("disbinder", "disconnected");
                },
                onBindingDied: (componentName) => {
                    console.log("binder", "died");
                },
                onNullBinding: () => {
                    console.log("binder", "null");
                }
            });
            let context = Utils.android.getApplicationContext();
            let intent = new android.content.Intent(context, net.posprinter.service.PosprinterService.class);
            context.bindService(intent, conn, android.content.Context.BIND_AUTO_CREATE);
            // bindService(intent, conn, BIND_AUTO_CREATE);

        } catch (error) {
            console.log(error);
        }
    }
    public connectWifi(ip: string) {
        if (this.printer) {
            this.printer.connectNetPort(ip, 9100, new net.posprinter.posprinterface.UiExecute({
                onsucess: () => {
                    console.log("connected to: " + ip);
                }, onfailed: () => {
                    console.log("failed to connect to ", ip);
                }
            }));
        }
    }

    public disconnect() {
        this.printer.disconnectCurrentPort(new net.posprinter.posprinterface.UiExecute({
            onsucess: () => {
                console.log("disconnected ");
            }, onfailed: () => {
                console.log("failed to disconnect ");
            }
        }))
    }

    public printTxt(txt = " ", padding = 0) {
        this.printer.writeDataByYouself(new net.posprinter.posprinterface.UiExecute({
            onsucess: () => {
                console.log("printed: " + txt);
            }, onfailed: () => {
                console.log("failed to print: " + txt);
            }
        }), new net.posprinter.posprinterface.ProcessData({
            processDataBeforeSend: () => {
                let list = new java.util.ArrayList();
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.initializePrinter());
                list.add(com.ticnat.t3b.utils.StringUtils.strTobytes(txt));
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.printAndFeedLine());
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.selectCutPagerModerAndCutPager(66, 1));
                return list;
            }
        }))
    }

    public printImg(img, padding = 0) {
        this.printer.writeDataByYouself(new net.posprinter.posprinterface.UiExecute({
            onsucess: () => {
                console.log("image printed ");
            }, onfailed: () => {
                console.log("failed to print image ");
            }
        }), new net.posprinter.posprinterface.ProcessData({
            processDataBeforeSend: () => {
                let list = new java.util.ArrayList();
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.initializePrinter());
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.printRasterBmp(
                    0, img, net.posprinter.utils.BitmapToByteData.BmpType.Threshold, net.posprinter.utils.BitmapToByteData.AlignType.Left, 576)); list.add(net.posprinter.utils.DataForSendToPrinterPos80.printAndFeedLine());
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.selectCutPagerModerAndCutPager(66, 1));
                return list;
            }
        }))
    }
    public cut() {
        this.printer.writeDataByYouself(new net.posprinter.posprinterface.UiExecute({
            onsucess: () => {
                console.log("cut done ");
            }, onfailed: () => {
                console.log("failed to cut ");
            }
        }), new net.posprinter.posprinterface.ProcessData({
            processDataBeforeSend: () => {
                let list = new java.util.ArrayList();
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.initializePrinter());
                list.add(net.posprinter.utils.DataForSendToPrinterPos80.selectCutPagerModerAndCutPager(66, 1));
                return list;
            }
        }))
    }
}
