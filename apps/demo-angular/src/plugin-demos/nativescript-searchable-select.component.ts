import { Component, NgZone } from '@angular/core';
import { DemoSharedSearchableSelect } from '@demo/shared';
import { } from '@ticnat/nativescript-searchable-select';

@Component({
  selector: 'demo-nativescript-searchable-select',
  templateUrl: 'nativescript-searchable-select.component.html',
})
export class NativescriptSearchableSelectComponent {

  demoShared: DemoSharedSearchableSelect;

  constructor(private _ngZone: NgZone) { }

  ngOnInit() {
    this.demoShared = new DemoSharedSearchableSelect();
  }

}