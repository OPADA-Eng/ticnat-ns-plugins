import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedNativescriptT3bPrinter } from '@demo/shared';
import { NativescriptT3bPrinter } from '@ticnat/nativescript-t3b-printer';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedNativescriptT3bPrinter {
	constructor() {
		super();
		let printer = new NativescriptT3bPrinter();
	}

}
