import { Observable, EventData, Page, ObservableArray } from '@nativescript/core';
import { DemoSharedNativescriptIntermecPrinter } from '@demo/shared';
import { } from '@ticnat/nativescript-intermec-printer';
import { Bluetooth } from '@nativescript-community/ble';
var bluetooth = new Bluetooth();
export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedNativescriptIntermecPrinter {
	public printers: ObservableArray<any> = new ObservableArray<any>([]);
	public loading: boolean = false;
	constructor() {
		super();
	}
	public search(args) {
		this.printers.splice(0, this.printers.length);
		this.set('loading', true);
		bluetooth.startScanning({
			filters: [],
			// filters: [{ serviceUUID: 'FE79' }],
			seconds: 4,
			onDiscovered: (peripheral) => {
				console.log("Periperhal found with UUID: " + peripheral.UUID, ": ", peripheral.name);
				this.printers.push(peripheral);
			}
		}).then(function () {
			console.log("scanning complete");
			this.set('loading', false);

		}, function (err) {
			console.log("error while scanning: " + err);
		});
	}

}
