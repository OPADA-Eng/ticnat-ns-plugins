import { NativescriptT3bPrinterCommon } from './common';
export class NativescriptT3bPrinter extends NativescriptT3bPrinterCommon {
    public printer;
    constructor() {
        super();
        try {
            this.printer = MWIFIManager.shareWifiManager();
            console.log(this.printer);
        } catch (error) {
            console.log(error);
        }
    }
    public connectWifi(ip: string) {

        if (this.printer) {
            this.printer.MConnectWithHostPortCompletion(ip, 9100, (result) => {
                console.log(result);
            });
        }
        else {
            console.log("printer is null");
        }
    }
    public printTxt(txt = "asd") {
        this.printer.MSendMSGWith(txt);
    }
    public printImg(img) {
        this.printer.MSendMSGWith(img);
    }
}
