import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptSewooPrinter } from '@demo/shared';
import {} from '@ticnat/nativescript-sewoo-printer';

@Component({
	selector: 'demo-nativescript-sewoo-printer',
	templateUrl: 'nativescript-sewoo-printer.component.html',
})
export class NativescriptSewooPrinterComponent {
	demoShared: DemoSharedNativescriptSewooPrinter;

	constructor(private _ngZone: NgZone) {}

	ngOnInit() {
		this.demoShared = new DemoSharedNativescriptSewooPrinter();
	}
}
