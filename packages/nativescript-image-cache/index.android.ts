import { isLoadingProperty, srcProperty, ImageCacheCommon } from './common';
import { StretchMapping as stretchMap } from './and-ts-lib/stretch-mapping';
import { Helpers as helpers } from './and-ts-lib/helpers';
import { Application, booleanConverter, Property } from '@nativescript/core';
import { getBoolean, getNumber, setBoolean, setNumber } from '@nativescript/core/application-settings';
let roundedProperty = new Property<ImageCacheCommon, boolean>({
		name: 'rounded',
		defaultValue: false,
		valueConverter: booleanConverter,
		affectsLayout: true,
	}),
	placeholderProperty = new Property<ImageCacheCommon, string>({
		name: 'placeholder',
		defaultValue: undefined,
		valueConverter: function (v) {
			return v;
		},
		affectsLayout: true,
	}),
	placeholderStretchProperty = new Property<ImageCacheCommon, string>({
		name: 'placeholderStretch',
		defaultValue: stretchMap.get('none'),
		valueConverter: function (v) {
			return v;
		},
		affectsLayout: true,
	}),
	stretchProperty = new Property<ImageCacheCommon, string>({
		name: 'stretch',
		defaultValue: stretchMap.get('none'),
		valueConverter: function (v) {
			return v;
		},
		affectsLayout: true,
	});

srcProperty.register(ImageCacheCommon);
isLoadingProperty.register(ImageCacheCommon);
roundedProperty.register(ImageCacheCommon);
placeholderStretchProperty.register(ImageCacheCommon);
stretchProperty.register(ImageCacheCommon);
placeholderProperty.register(ImageCacheCommon);

export class ImageCache extends ImageCacheCommon {
	public rounded: boolean;
	public placeholder: string;
	public placeholderStretch: string;

	constructor() {
		super();
	}

	// public get android(): any {
	//     return this.nativeView;
	// }

	// public set android(view) {
	//     this.nativeView = view;
	// }
	createNativeView(): any {
		com.facebook.drawee.backends.pipeline.Fresco.initialize(this._context);
		let simpleDraweeView = new com.facebook.drawee.view.SimpleDraweeView(this._context);
		simpleDraweeView.getHierarchy().setActualImageScaleType(com.facebook.drawee.drawable.ScalingUtils.ScaleType.CENTER);
		if (undefined !== this.stretch) {
			helpers.setNativeStretch(simpleDraweeView.getHierarchy(), this.stretch);
		}
		if (undefined !== this.rounded) {
			helpers.setRounded(simpleDraweeView.getHierarchy(), this.rounded);
		}
		if (undefined !== this.placeholder) {
			helpers.setPlaceholder(simpleDraweeView.getHierarchy(), this.placeholder, this.placeholderStretch);
		}
		return simpleDraweeView;
	}

	initNativeView() {
		if (undefined !== this.src) {
			helpers.setSource(this, this.src);
		}
	}

	[roundedProperty.getDefault]() {
		return false;
	}

	[roundedProperty.setNative](value) {
		let simpleDraweeView = this.nativeView;
		helpers.onRoundedPropertyChanged(simpleDraweeView, value);
	}

	[placeholderProperty.getDefault]() {
		return undefined;
	}
	[placeholderProperty.setNative](value) {
		let simpleDraweeView = this.nativeView;

		helpers.onPlaceholderPropertyChanged(simpleDraweeView, value, this.placeholderStretch);
	}

	[placeholderStretchProperty.getDefault]() {
		return 'none';
	}

	[placeholderStretchProperty.setNative](value) {
		let simpleDraweeView = this.nativeView;
		helpers.setPlaceholder(simpleDraweeView.getHierarchy(), this.src, value);
	}

	[stretchProperty.getDefault]() {
		return stretchMap.get('none');
	}

	[stretchProperty.setNative](value) {
		let simpleDraweeView = this.nativeView;
		helpers.onStretchPropertyChanged(simpleDraweeView, value);
	}

	[srcProperty.getDefault]() {
		return undefined;
	}

	[srcProperty.setNative](value) {
		helpers.onSrcPropertySet(this, value);
	}

	[isLoadingProperty.getDefault]() {
		return '';
	}

	[isLoadingProperty.setNative](value) {
		// do nothing
	}
}

export function setCacheLimit(numberOfDays) {
	let noOfSecondsInAMinute = 60,
		noOfMinutesInAHour = 60,
		noOfHoursInADay = 24,
		noOfSecondsADay = noOfSecondsInAMinute * noOfMinutesInAHour * noOfHoursInADay,
		noOfSecondsInDays = noOfSecondsADay * numberOfDays,
		currentSeconds = Math.round(new Date().getTime() / 1000),
		referenceTime = 0;

	if (true === getBoolean('isAppOpenedFirstTime') || undefined === getBoolean('isAppOpenedFirstTime') || null === getBoolean('isAppOpenedFirstTime')) {
		setBoolean('isAppOpenedFirstTime', false);
		com.facebook.drawee.backends.pipeline.Fresco.getImagePipeline().clearCaches();
		setNumber('cacheTimeReference', currentSeconds);
	} else {
		referenceTime = getNumber('cacheTimeReference');
		if (null === referenceTime || undefined === referenceTime) {
			setNumber('cacheTimeReference', currentSeconds);
		} else if (currentSeconds - referenceTime > noOfSecondsInDays) {
			com.facebook.drawee.backends.pipeline.Fresco.getImagePipeline().clearCaches();
			setNumber('cacheTimeReference', currentSeconds);
		}
	}
}
export function initialize() {
	com.facebook.drawee.backends.pipeline.Fresco.initialize(Application.android.context);
}

export function clearCache() {
	com.facebook.drawee.backends.pipeline.Fresco.getImagePipeline().clearCaches();
}

export function initializeOnAngular() {
	throw new Error("'initializeOnAngular' has been removed from 'nativescript-web-image-cache', see its readme for details!");
}
