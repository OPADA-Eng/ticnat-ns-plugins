import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptSocketmobile } from '@demo/shared';
import { } from '@ticnat/nativescript-socketmobile';

@Component({
	selector: 'demo-nativescript-socketmobile',
	templateUrl: 'nativescript-socketmobile.component.html',
})
export class NativescriptSocketmobileComponent {
  
  demoShared: DemoSharedNativescriptSocketmobile;
  
	constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedNativescriptSocketmobile();
  }

}