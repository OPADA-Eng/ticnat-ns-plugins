import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedNativescriptSocketmobile } from '@demo/shared';
import { Socketmobile } from '@ticnat/nativescript-socketmobile';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedNativescriptSocketmobile {
	public socket;
	constructor() {
		super();
		this.socket = new Socketmobile();
	}

}
