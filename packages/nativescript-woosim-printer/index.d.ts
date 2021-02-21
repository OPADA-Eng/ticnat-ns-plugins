import { WoosimPrinterCommon } from './common';

export declare class WoosimPrinter extends WoosimPrinterCommon {
	cPCLPrinter: any;
	ptrConn: com.ticnat.prtsrv.BluetoothPrintService;
	bluetoothAdapter: any;
	bluetoothPermissions: BluetoothPermissions;
	bluetoothDevice: any;
	address: string;
	constructor(charset?: string, paperSize?: number);
	Toast(text: any, duration: any): any;
	isConnected(): boolean;
	connect(address: string): Promise<void>;
	disconnect(): void;
	private sendData;
	private not_english_words_in_text;
	printTextFile(file: any): void;
	printImg(bitmap: any, setExtraPaddingAfterPrint?: boolean, startX?: number, startY?: number): void;
	print(string: string): void;
}
