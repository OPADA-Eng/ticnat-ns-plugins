import { Component, NgZone } from '@angular/core';
import { DemoSharedSewooPrinter } from '@demo/shared';
import { } from '@ticnat/nativescript-sewoo-printer';

@Component({
  selector: 'demo-nativescript-sewoo-printer',
  templateUrl: 'nativescript-sewoo-printer.component.html',
})
export class NativescriptSewooPrinterComponent {

  demoShared: DemoSharedSewooPrinter;

  constructor(private _ngZone: NgZone) { }

  ngOnInit() {
    this.demoShared = new DemoSharedSewooPrinter();
  }


}