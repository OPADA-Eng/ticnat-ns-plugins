import { Observable, EventData, Page, isIOS, Image } from '@nativescript/core';
import { BmpType, T3bPrinter } from '@ticnat/nativescript-t3b-printer';
import { ImageSource } from '@nativescript/core/image-source';

declare var kCGImageAlphaPremultipliedLast;
export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel(page);
}

export class DemoModel extends Observable {
	public page: Page;
	public printer: T3bPrinter;
	public isConnected: boolean = false;
	public text: string = 'Print this text';
	public printerIP: string = '192.168.1.72';
	public padding: number = 0;
	public encoding: number = 2;

	constructor(page) {
		super();
		this.page = page;
		this.printer = new T3bPrinter();
	}
	public screenshoot(view) {
		if (isIOS) {
			UIGraphicsBeginImageContextWithOptions(view.ios.frame.size, true, 0.8);
			console.log("width", view.ios.frame.size.width, "height", view.ios.frame.size.height);
			view.ios.drawViewHierarchyInRectAfterScreenUpdates(CGRectMake(0, 0, view.ios.frame.size.width, view.ios.frame.size.height), true);
			let image = UIGraphicsGetImageFromCurrentImageContext();
			UIGraphicsEndImageContext();
			// return UIImageJPEGRepresentation(image, 1);
			return image;
		}
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
		let encodeings = [2, 10, 20, 30, 31, 22, 63, 82, 254, 255];
		// let fonts = [0, 1, 48, 49]
		// for (let i = 0; i < encodeings.length; i++) {
		// for (let j = 0; j < 16; j++) {
		this.printer.printTxt(this.text, 15, this.encoding, 0);
		// }
		// }


		this.printer.printTxt('\n');
		this.printer.cut();

	}
	public cut() {
		this.printer.cut();
	}
	printImg() {
		// this.createBmp()
		let img = this.screenshoot(this.page.getViewById('printArea'));
		this.printer.printImg(img, 1);
		this.printer.printTxt('\n');
		this.printer.cut();

	}
	public printLogo() {
		let img = ImageSource.fromFileSync('~/images/logo-ma.png');
		this.printer.printImg(img);
	}




}
