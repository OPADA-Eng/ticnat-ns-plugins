import { Observable, EventData, Page } from '@nativescript/core';
import { BmpType, T3bPrinter } from '@ticnat/nativescript-t3b-printer';
import { ImageSource } from '@nativescript/core/image-source';

declare var kCGImageAlphaPremultipliedLast;
export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends Observable {
	public printer: T3bPrinter;
	public isConnected: boolean = false;
	public text: string = 'Print this text';
	public printerIP: string = '192.168.1.72';
	public padding: number = 0;
	public encoding: number = 2;

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
		ImageSource.fromFile('~/images/logo-ma.png').then((img) => {
			if (img.width > 1200)
				img = img.resize(1200);
			// let bmp = this.convertImgToBmp(img);
			console.log(img.ios);
			this.printer.printImg(img, 1);
		});

	}


	private convertImgToBmp(img: ImageSource) {
		let image = img.ios as UIImage;
		let imageRef = image.CGImage;

		// Create a bitmap context to draw the uiimage into
		let context = this.newBitmapRGBA8ContextFromImage(imageRef);

		if (!context) {
			return null;
		}

		let width = CGImageGetWidth(imageRef);
		let height = CGImageGetHeight(imageRef);
		console.log("width: " + width + " height: " + height);
		let rect = CGRectMake(0, 0, width, height);

		// Draw image into the context to get the raw image data
		CGContextDrawImage(context, rect, imageRef);

		// Get a pointer to the data	
		let bitmapData = CGBitmapContextGetData(context);

		// Copy the data and release the memory (return memory allocated with new)
		let bytesPerRow = CGBitmapContextGetBytesPerRow(context);
		let bufferLength = bytesPerRow * height;
		console.log("bufferLength: " + bufferLength);
		let newBitmap = null;

		if (bitmapData) {
			newBitmap = malloc(128 * bytesPerRow * height);
			console.log("newBitmap: " + newBitmap);
			if (newBitmap) {	// Copy the data
				for (var i = 0; i < bufferLength; ++i) {
					console.log(i + ":" + bitmapData[i]);
					newBitmap[i] = bitmapData[i];
				}
			}

			free(bitmapData);

		} else {
			console.log("Error getting bitmap pixel data\n");
		}

		CGContextRelease(context);

		return newBitmap;
	}

	private newBitmapRGBA8ContextFromImage(image) {
		let context = null;
		let colorSpace;
		let bitmapData;

		let bitsPerPixel = 32;
		let bitsPerComponent = 8;
		let bytesPerPixel = bitsPerPixel / bitsPerComponent;

		let width = CGImageGetWidth(image);
		let height = CGImageGetHeight(image);

		let bytesPerRow = width * bytesPerPixel;
		let bufferLength = bytesPerRow * height;

		colorSpace = CGColorSpaceCreateDeviceRGB();

		if (!colorSpace) {
			console.log("Error allocating color space RGB\n");
			return null;
		}

		// Allocate memory for image data
		bitmapData = malloc(bufferLength);

		if (!bitmapData) {
			console.log("Error allocating memory for bitmap\n");
			CGColorSpaceRelease(colorSpace);
			return null;
		}

		//Create bitmap context

		context = CGBitmapContextCreate(bitmapData,
			width,
			height,
			bitsPerComponent,
			bytesPerRow,
			colorSpace,
			kCGImageAlphaPremultipliedLast);	// RGBA
		if (!context) {
			free(bitmapData);
			console.log("Bitmap context not created");
		}

		CGColorSpaceRelease(colorSpace);

		return context;
	}
}
