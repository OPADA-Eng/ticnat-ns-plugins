import { Component, NgZone } from '@angular/core';
import { DemoSharedNativescriptImageCache } from '@demo/shared';
import {} from '@ticnat/nativescript-image-cache';

@Component({
	selector: 'demo-nativescript-image-cache',
	templateUrl: 'nativescript-image-cache.component.html',
})
export class NativescriptImageCacheComponent {
	demoShared: DemoSharedNativescriptImageCache;

	constructor(private _ngZone: NgZone) {}

	ngOnInit() {
		this.demoShared = new DemoSharedNativescriptImageCache();
	}
}
