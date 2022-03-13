import { Observable } from '@nativescript/core';

export class T3bPrinterCommon extends Observable {
    public isConnected: boolean = false;
    constructor() {
        super();
    }
}
