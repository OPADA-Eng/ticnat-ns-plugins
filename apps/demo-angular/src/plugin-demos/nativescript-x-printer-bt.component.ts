import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptXPrinterBt } from '@demo/shared';
import {} from '@ticnat/nativescript-x-printer-bt';

@Component({
  selector: 'demo-nativescript-x-printer-bt',
  templateUrl: 'nativescript-x-printer-bt.component.html',
})
export class NativescriptXPrinterBtComponent {
  demoShared: DemoSharedNativescriptXPrinterBt;

  constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedNativescriptXPrinterBt();
  }
}
