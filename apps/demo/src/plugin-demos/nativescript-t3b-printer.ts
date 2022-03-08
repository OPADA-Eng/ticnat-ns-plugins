import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedNativescriptT3bPrinter } from '@demo/shared';
import { NativescriptT3bPrinter } from '@ticnat/nativescript-t3b-printer';
import { ImageSource } from '@nativescript/core/image-source';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedNativescriptT3bPrinter {
	public printer: NativescriptT3bPrinter;
	constructor() {
		super();
		this.printer = new NativescriptT3bPrinter();
	}

	public connect() {
		this.printer.connectWifi('192.168.1.240');
	}
	public print() {
		this.printer.printTxt('123');
	}
	printImg() {
		// this.createBmp()
		const image = ImageSource.fromFile('~/images/logo-strok.png').then((img) => {
			console.log(img);
			let base64Img = img.toBase64String('jpg', 100);
			this.printer.printImg(base64Img);
		});

	}


}
