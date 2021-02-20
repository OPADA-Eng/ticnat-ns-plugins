import { EventData, Page } from '@nativescript/core';
import { LabelModel } from './label-view-model';

export function pageLoaded(args: EventData) {
	let page = <Page>args.object;
	page.bindingContext = new LabelModel();
	page.bindingContext.init(page);
}
