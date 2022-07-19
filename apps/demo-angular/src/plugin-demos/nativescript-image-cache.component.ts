import { Component, NgZone } from '@angular/core';
import { DemoSharedImageCache } from '@demo/shared';
import { } from '@ticnat/nativescript-image-cache';

@Component({
  selector: 'demo-nativescript-image-cache',
  templateUrl: 'nativescript-image-cache.component.html',
})
export class NativescriptImageCacheComponent {

  demoShared: DemoSharedImageCache;

  constructor(private _ngZone: NgZone) { }

  ngOnInit() {
    this.demoShared = new DemoSharedImageCache();
  }

}