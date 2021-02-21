import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedWoosimPrinter } from '@demo/shared';
import { WoosimPrinter } from '@ticnat/nativescript-woosim-printer';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedWoosimPrinter {}
