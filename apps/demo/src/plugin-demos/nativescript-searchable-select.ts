import { DemoSharedNativescriptSearchableSelect } from '@demo/shared';
import { EventData, ObservableArray, Page } from '@nativescript/core';
import { } from '@ticnat/nativescript-searchable-select';

export function navigatingTo(args: EventData) {
	const page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedNativescriptSearchableSelect {
	public items: ObservableArray<any> = new ObservableArray<any>([]);
	constructor() {
		super();
		for (let index = 0; index < 100; index++) {
			this.items.push({ id: index, name: "Index of: " + index });
		}

	}
}
