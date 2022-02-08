import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptSearchableSelect } from '@demo/shared';
import { } from '@ticnat/nativescript-searchable-select';

@Component({
	selector: 'demo-nativescript-searchable-select',
	templateUrl: 'nativescript-searchable-select.component.html',
})
export class NativescriptSearchableSelectComponent {
  
  demoShared: DemoSharedNativescriptSearchableSelect;
  
	constructor(private _ngZone: NgZone) {}

  ngOnInit() {
    this.demoShared = new DemoSharedNativescriptSearchableSelect();
  }

}