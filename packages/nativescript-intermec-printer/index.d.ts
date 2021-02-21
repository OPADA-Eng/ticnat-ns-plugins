import { IntermecPrinterCommon } from './common';
import { BluetoothPermissions } from './android/android_main';

export declare class IntermecPrinter extends IntermecPrinterCommon {
	bluetoothAdapter: any;
	bluetoothPermissions: BluetoothPermissions;
	bluetoothDevice: any;
	printer: com.ticnat.intermecprinter.PrinterConnector;
	address: string;
	constructor(charset?: string, paperSize?: number);
	Toast(text: any, duration: any): any;
	connect(address: string): Promise<void>;
	disconnect(): void;
	private not_english_words_in_text;
	printTextFile(file: any): void;
	printImg(bitmap: any): void;
	print(string: string): void;
}
