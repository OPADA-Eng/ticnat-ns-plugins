import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptIntermecPrinter } from '@demo/shared';
import { } from '@ticnat/nativescript-intermec-printer';

@Component({
	selector: 'demo-nativescript-intermec-printer',
	templateUrl: 'nativescript-intermec-printer.component.html',
})
export class NativescriptIntermecPrinterComponent {
  
  demoShared: DemoSharedNativescriptIntermecPrinter;
  
	constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedNativescriptIntermecPrinter();
  }

}