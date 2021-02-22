import { Property, View, booleanConverter } from '@nativescript/core';

export class ImageCacheCommon extends View {
	public src: string;
	public stretch: string;
	public isLoading: boolean;
	// public rounded: boolean;
	// public placeholder: string;
	// public placeholderStretch: string;

	constructor() {
		super();
	}
}
export const srcProperty = new Property<ImageCacheCommon, string>({
	name: 'src',
	defaultValue: undefined,
});

export const isLoadingProperty = new Property<ImageCacheCommon, boolean>({
	name: 'isLoading',
	defaultValue: true,
	valueConverter: booleanConverter,
});
