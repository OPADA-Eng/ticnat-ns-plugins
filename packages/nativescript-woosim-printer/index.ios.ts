import { WoosimPrinterCommon } from './common';

export class WoosimPrinter extends WoosimPrinterCommon {


    public address: string = '';
    constructor() {
        super();

    }
    public async connect(address: string) {
        const sharedAccessoryManager: EAAccessoryManager = EAAccessoryManager.alloc().init();
        console.log(sharedAccessoryManager);
        // const accessories = await sharedAccessoryManager.connectedAccessories();
        // Initialize a private variable with the heart rate service UUID    




    }
}
