import { SewooPrinterCommon } from './common';
import { BluetoothPermissions } from './android/android_main';
import { Application } from '@nativescript/core';

export class SewooPrinter extends SewooPrinterCommon {
	public cPCLPrinter;
	public ptrConn;
	public bluetoothAdapter;
	public bluetoothPermissions: BluetoothPermissions;
	public hThread;
	public address: string = '';
	constructor(charset = '', paperSize = 0) {
		super();
		if (charset != '') {
			this.charset = charset;
		}
		if (paperSize > 0) {
			this.paperSize = paperSize;
		}
		this.bluetoothPermissions = new BluetoothPermissions();
		if (!this.bluetoothPermissions.coarseLocationPermissionGranted()) {
			this.bluetoothPermissions.requestCoarseLocationPermission();
		}
		this.bluetoothAdapter = android.bluetooth.BluetoothAdapter.getDefaultAdapter();
		this.ptrConn = new com.sewoo.port.android.BluetoothPort();
		// console.log("constructing SewooPrinter", this.charset);
		if (this.charset != '') this.cPCLPrinter = new com.sewoo.jpos.printer.CPCLPrinter(this.charset);
		else this.cPCLPrinter = new com.sewoo.jpos.printer.CPCLPrinter();
	}

	public Toast(text, duration) {
		var Toast = android.widget.Toast;
		if (typeof text !== 'string') {
			throw new Error('The `text` parameter is missing.');
		}
		var d = typeof duration === 'string' && duration[0] === 'l' ? Toast.LENGTH_LONG : Toast.LENGTH_SHORT;

		// var centeredText = new android.text.SpannableString(text);
		// centeredText.setSpan(
		//     new android.text.style.AlignmentSpan.Standard(android.text.Layout.Alignment.ALIGN_CENTER),
		//     0,
		//     text.length - 1,
		//     android.text.Spannable.SPAN_INCLUSIVE_INCLUSIVE);

		return Toast.makeText(Application.android.context, text, d);
	}
	public isConnected() {
		return this.ptrConn.isConnected();
	}

	public connect(address: string) {
		if (this.ptrConn != null && address != '') {
			if (this.bluetoothAdapter.isEnabled()) {
				this.ptrConn.connect(address);
				let rh = <java.lang.Runnable>new com.sewoo.request.android.RequestHandler();
				this.hThread = new java.lang.Thread(rh);
				this.hThread.start();
				this.address = address;
				this.Toast('Connected To: ' + address, 'long').show();
				if (this.debug) console.log('Connected To: ' + address);
			} else {
				this.bluetoothAdapter.enable();
				this.Toast('Bluetooth enabled press button again to connect ', 'long').show();
				if (this.debug) console.log('Bluetooth enabled press button again to connect ');
				// this.ptrConn.connect(address);
			}
		}
	}

	public disconnect() {
		if (this.ptrConn != null) {
			this.ptrConn.disconnect();
			this.Toast('Disconnected From: ' + this.address, 'long').show();
			if (this.debug) console.log('Disconnected From: ' + this.address);
			if (this.hThread != null && this.hThread.isAlive()) this.hThread.interrupt();
		}
	}

	public printImg(bitmap, setExtraPaddingAfterPrint = true, XResol = 200, YResol = 200, startX = 0, startY = 0) {
		if (this.ptrConn.isConnected()) {
			let lableHieght = bitmap.getHeight();
			if (setExtraPaddingAfterPrint) {
				lableHieght += 100;
			}
			this.cPCLPrinter.setForm(0, XResol, YResol, lableHieght, 1);
			this.cPCLPrinter.setMedia(com.sewoo.jpos.command.CPCLConst.LK_CPCL_CONTINUOUS);
			// console.dir(self.cPCLPrinter);
			// console.log("Width×Height: ", bitmap.getWidth(), bitmap.getHeight());
			try {
				// let ScaledBMP = android.graphics.Bitmap.createBitmap(bitmap, 0, 0, bitmap.getWidth(), bitmap.getHeight());
				this.Toast('Printing Image ...', 'long').show();
				if (this.debug) console.log('Printing Image ...');
				this.cPCLPrinter.printBitmap(bitmap, startX, startY);
			} catch (e) {
				console.log(e);
			}
			this.cPCLPrinter.printForm();
		} else {
			console.log('printer is not connected');
			this.Toast('Printer is not connected', 'long').show();
		}
	}

	public print(text: string) {
		if (this.ptrConn.isConnected()) {
			// console.log("printing: " + text);
			this.cPCLPrinter.setForm(0, 200, 200, 100, 1);
			this.cPCLPrinter.setMedia(com.sewoo.jpos.command.CPCLConst.LK_CPCL_CONTINUOUS);
			this.cPCLPrinter.printAndroidFont(text, this.paperSize, 26, 0, com.sewoo.jpos.command.ESCPOSConst.LK_ALIGNMENT_CENTER);
			// this.cPCLPrinter.printCPCL2DBarCode(0, com.sewoo.jpos.command.CPCLConst.LK_CPCL_BCS_QRCODE, 150, 400, 5, 0, 1, 0, "http://www.miniprinter.com");
			this.Toast('Printing Text ...', 'long').show();
			if (this.debug) console.log('Printing Text ...');
			this.cPCLPrinter.printForm();
		} else {
			console.log('printer is not connected');
			this.Toast('Printer is not connected', 'long').show();
		}
	}
}
