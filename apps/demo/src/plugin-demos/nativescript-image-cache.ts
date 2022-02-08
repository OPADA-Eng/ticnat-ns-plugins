import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedImageCache } from '@demo/shared';
import { } from '@ticnat/nativescript-image-cache';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedImageCache { }
