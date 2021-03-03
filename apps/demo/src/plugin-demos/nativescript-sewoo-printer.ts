import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedSewooPrinter } from '@demo/shared';
import { SewooPrinter } from '@ticnat/nativescript-sewoo-printer';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel(page);
}

export class DemoModel extends DemoSharedSewooPrinter {
	public printer: SewooPrinter;
	private _printerAddress = '00:13:7B:49:D3:1A';
	public textToPrint = '';
	public connectVisible = true;
	public disconnectVisible = false;
	constructor(public page) {
		super();
		this.printer = new SewooPrinter('windows-1256');
	}
	public get printerAddress() {
		return this._printerAddress;
	}
	public set printerAddress(printerAddress: string) {
		this._printerAddress = printerAddress;
	}
	public screenShot(view) {
		view.android.setDrawingCacheEnabled(true);
		view.android.buildDrawingCache(true);
		var bmp = android.graphics.Bitmap.createBitmap(view.android.getDrawingCache());
		view.android.setDrawingCacheEnabled(false);
		// var source = new imageSrc.ImageSource();
		// source.setNativeSource(bmp);
		// let image = new Image.Image();
		// image.src = source;
		// let sView = this.page.getViewById('screenShots');
		// sView.addChild(image);
		return bmp;
	}
	connect() {
		try {
			this.printer.connect(this.printerAddress);
			this.set('connectVisible', false);
			this.set('disconnectVisible', true);
		} catch (e) {
			console.log(e);
		}
	}
	disconnect() {
		this.printer.disconnect();
		this.set('connectVisible', true);
		this.set('disconnectVisible', false);
	}

	printImg() {
		let view = this.page.getViewById('printArea');
		let imageSource = this.screenShot(view);
		// this.printer.printImg("//sdcard//temp//test//Sewoo_bw_m.jpg");
		// let size:any = view.getActualSize();
		this.printer.printImg(imageSource);
		// this.printer.print("Hello World");
	}

	print() {
		// let imageSource = this.screenShot(this.page.getViewById("printArea"));
		// this.printer.printImg("//sdcard//temp//test//Sewoo_bw_m.jpg");
		if (this.textToPrint != '') {
			this.printer.print(this.textToPrint);
		} else {
			this.printer.print('Hello World');
		}
	}
}
