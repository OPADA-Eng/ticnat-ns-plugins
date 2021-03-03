import { SewooPrinterCommon } from './common';

export class SewooPrinter extends SewooPrinterCommon {
	constructor() {
		super();
	}
	public print() {
		console.log('This functionality is not available right now ...');
	}
	public printImg() {
		console.log('This functionality is not available right now ...');
	}
	public connect(address: string) {}
	public disconnect() {}
	public isConnected() {
		return false;
	}
}
