import { IntermecPrinterCommon } from './common';

export class IntermecPrinter extends IntermecPrinterCommon {
    constructor(charset = '', paperSize = 0) {
        super();
    }

    public async connect() {
        // var cBCentralManager = CBCentralManager.alloc().init();
        // console.log("cBCentralManager", cBCentralManager);
        // await cBCentralManager.scanForPeripheralsWithServicesOptions(null, null);
        // let devices = <any>cBCentralManager.retrievePeripheralsWithIdentifiers(null);
        // console.log(devices);
        // devices.forEach(device => {
        //     console.dir(device);
        // })
        // cBCentralManager.stopScan();
    }
}
