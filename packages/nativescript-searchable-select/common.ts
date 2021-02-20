import { booleanConverter, ObservableArray, Property, View, GridLayout } from '@nativescript/core';

export class SearchableSelectCommon extends GridLayout {
	public isSearchable: boolean = false;
	public hint: string = 'Select some item';
	public searchHeaderText: string = 'Search for an item';
	public closeText: string = 'Close';
	public searchHint: string = 'Search ...';
	public static itemSelectedEvent = 'itemSelected';
	public items: ObservableArray<any> = null;
	public static changeEvent: string = 'change';
	public static closeEvent: string = 'close';

	public selectedIndex: string = '0';
	constructor() {
		super();
	}
}
export const itemsProperty = new Property<SearchableSelectCommon, ObservableArray<any>>({ name: 'items', affectsLayout: true, valueChanged: onItemsChanged });
itemsProperty.register(SearchableSelectCommon);

export const isSearchableProperty = new Property<SearchableSelectCommon, boolean>({ name: 'isSearchable', affectsLayout: true, valueChanged: onItemsChanged, valueConverter: booleanConverter });
isSearchableProperty.register(SearchableSelectCommon);

export const hintProperty = new Property<SearchableSelectCommon, string>({ name: 'hint', affectsLayout: true, valueChanged: onItemsChanged });
hintProperty.register(SearchableSelectCommon);

export const searchHeaderTextProperty = new Property<SearchableSelectCommon, string>({ name: 'searchHeaderText', affectsLayout: true, valueChanged: onItemsChanged });
searchHeaderTextProperty.register(SearchableSelectCommon);

export const selectedIndexProperty = new Property<SearchableSelectCommon, string>({ name: 'selectedIndex', affectsLayout: true, valueChanged: onItemsChanged });
selectedIndexProperty.register(SearchableSelectCommon);

function onItemsChanged(view: any, oldValue, newValue) {}
