import { NativescriptT3bPrinterCommon } from './common';
export class NativescriptT3bPrinter extends NativescriptT3bPrinterCommon {
    public printer: PrinterManager;
    constructor() {
        super();
        this.printer = PrinterManager.alloc().init();
        console.log(this.printer.getName());

    }
}
