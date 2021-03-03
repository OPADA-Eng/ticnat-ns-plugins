import { NativescriptSewooPrinterCommon } from './common';

export declare class SewooPrinter extends SewooPrinterCommon {
	cPCLPrinter;
	ptrConn;
	bluetoothAdapter;
	bluetoothPermissions: BluetoothPermissions;
	hThread;
	address: string;
	debug: boolean;
	constructor(charset?: string, paperSize?: number);
	Toast(text: any, duration: any);
	connect(address: string): void;
	disconnect(): void;
	isConnected(): boolean;
	printImg(bitmap: any, setExtraPaddingAfterPrint?: boolean, XResol?: number, YResol?: number, startX?: number, startY?: number): void;
	print(text: string): void;
}
