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

	constructor() {
		super();
		this.printer = new T3bPrinter();
	}

	public connect() {
		this.printer.connectWifi('192.168.1.240');
		this.set('isConnected', this.printer.isConnected);
	}
	public disconnect() {
		this.printer.disconnect();
		this.set('isConnected', this.printer.isConnected);
	}
	public print() {
		this.printer.printTxt('123');
	}
	printImg() {
		// this.createBmp()
		ImageSource.fromFile('~/images/logo-strok.png').then((img) => {
			this.printer.printImg(img);
		});

	}


}
