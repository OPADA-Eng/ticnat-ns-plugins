import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptT3bPrinter } from '@demo/shared';
import { } from '@ticnat/nativescript-t3b-printer';

@Component({
	selector: 'demo-nativescript-t3b-printer',
	templateUrl: 'nativescript-t3b-printer.component.html',
})
export class NativescriptT3bPrinterComponent {
  
  demoShared: DemoSharedNativescriptT3bPrinter;
  
	constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedNativescriptT3bPrinter();
  }

}