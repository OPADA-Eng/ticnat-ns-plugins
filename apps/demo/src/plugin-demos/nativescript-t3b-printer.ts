import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedNativescriptT3bPrinter } from '@demo/shared';
import { T3bPrinter } from '@ticnat/nativescript-t3b-printer';
import { ImageSource } from '@nativescript/core/image-source';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends Observable {
	public printer: T3bPrinter;
	public isConnected: boolean = false;
	public text: string = 'Hello World!';
	public printerIP: string = '192.168.1.240';
	public padding: number = 0;

	constructor() {
		super();
		this.printer = new T3bPrinter();
	}

	public connect() {
		this.printer.connectWifi(this.printerIP);
		this.set('isConnected', this.printer.isConnected);
	}
	public disconnect() {
		this.printer.disconnect();
		this.set('isConnected', this.printer.isConnected);
	}
	public print() {
		this.printer.printTxt(this.text, this.padding);
	}
	public cut() {
		this.printer.cut();
	}
	printImg() {
		// this.createBmp()
		ImageSource.fromFile('~/images/logo-strok.png').then((img) => {
			this.printer.printImg(img);
		});

	}


}
