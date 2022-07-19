import { Component, NgZone } from '@angular/core';
import { DemoSharedWoosimPrinter } from '@demo/shared';
import { } from '@ticnat/nativescript-woosim-printer';

@Component({
  selector: 'demo-nativescript-woosim-printer',
  templateUrl: 'nativescript-woosim-printer.component.html',
})
export class NativescriptWoosimPrinterComponent {

  demoShared: DemoSharedWoosimPrinter;

  constructor(private _ngZone: NgZone) { }

  ngOnInit() {
    this.demoShared = new DemoSharedWoosimPrinter();
  }

}