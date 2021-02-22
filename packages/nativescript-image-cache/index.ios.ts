/// <reference path='./ios-ts-lib/types.d.ts'/>

import { ImageCacheCommon, srcProperty, isLoadingProperty } from './common';
import { Application, booleanConverter, Property, Utils, View } from '@nativescript/core';
import { getBoolean, getNumber, setBoolean, setNumber } from '@nativescript/core/application-settings';
import { Helpers as helpers } from './ios-ts-lib/helpers';
import { Stretch } from '@nativescript/core/ui/enums';

declare class UIImageView {
	public contentMode: any;
	public clipsToBounds: any;
	public userInteractionEnabled: any;
}

declare class UIViewContentMode {
	static UIViewContentModeScaleToFill: any;
	static UIViewContentModeTopLeft: any;
	static UIViewContentModeScaleAspectFit: any;
	static UIViewContentModeScaleAspectFill: any;
}

let placeholderProperty = new Property<ImageCacheCommon, string>({
		name: 'placeholder',
		defaultValue: undefined,
		affectsLayout: true,
	}),
	stretchProperty = new Property<ImageCacheCommon, string>({
		name: 'stretch',
		defaultValue: 'none',
		affectsLayout: true,
	});

srcProperty.register(ImageCacheCommon);
isLoadingProperty.register(ImageCacheCommon);
placeholderProperty.register(ImageCacheCommon);
stretchProperty.register(ImageCacheCommon);

export class ImageCache extends ImageCacheCommon {
	constructor() {
		super();
	}

	createNativeView(): any {
		let imageView = new UIImageView();
		imageView.contentMode = UIViewContentMode.UIViewContentModeScaleAspectFit;
		imageView.clipsToBounds = true;
		imageView.userInteractionEnabled = true;
		return imageView;
	}

	// public get ios(): any {
	//     return this.nativeView;
	// }

	// public set ios(view) {
	//     this.nativeView = view;
	// }

	onMeasure(widthMeasureSpec, heightMeasureSpec) {
		let width = Utils.layout.getMeasureSpecSize(widthMeasureSpec),
			widthMode = Utils.layout.getMeasureSpecMode(widthMeasureSpec),
			height = Utils.layout.getMeasureSpecSize(heightMeasureSpec),
			heightMode = Utils.layout.getMeasureSpecMode(heightMeasureSpec),
			nativeWidth = this.nativeView ? (this.nativeView.image ? this.nativeView.image.size.width : 0) : 0,
			nativeHeight = this.nativeView ? (this.nativeView.image ? this.nativeView.image.size.height : 0) : 0,
			measureWidth = Math.max(nativeWidth, this.minWidth as number),
			measureHeight = Math.max(nativeHeight, this.minHeight as number),
			finiteWidth = widthMode !== Utils.layout.UNSPECIFIED,
			finiteHeight = heightMode !== Utils.layout.UNSPECIFIED;
		if (nativeWidth !== 0 && nativeHeight !== 0 && (finiteWidth || finiteHeight)) {
			let scale = this.computeScaleFactor(width, height, finiteWidth, finiteHeight, nativeWidth, nativeHeight, this.stretch),
				resultW = Math.floor(nativeWidth * scale.width),
				resultH = Math.floor(nativeHeight * scale.height);
			measureWidth = finiteWidth ? Math.min(resultW, width) : resultW;
			measureHeight = finiteHeight ? Math.min(resultH, height) : resultH;
			// let trace = require("trace");

			// trace.write("Image stretch: " + this.stretch +
			//     ", nativeWidth: " + nativeWidth +
			//     ", nativeHeight: " + nativeHeight, trace.categories.Layout);
		}
		let widthAndState = View.resolveSizeAndState(measureWidth, width, widthMode, 0);
		let heightAndState = View.resolveSizeAndState(measureHeight, height, heightMode, 0);
		this.setMeasuredDimension(widthAndState, heightAndState);
	}

	computeScaleFactor(measureWidth, measureHeight, widthIsFinite, heightIsFinite, nativeWidth, nativeHeight, imageStretch) {
		let scaleW = 1,
			scaleH = 1;
		if ((imageStretch === Stretch.aspectFill || imageStretch === Stretch.aspectFit || imageStretch === Stretch.fill) && (widthIsFinite || heightIsFinite)) {
			scaleW = nativeWidth > 0 ? measureWidth / nativeWidth : 0;
			scaleH = nativeHeight > 0 ? measureHeight / nativeHeight : 0;
			if (!widthIsFinite) {
				scaleW = scaleH;
			} else if (!heightIsFinite) {
				scaleH = scaleW;
			} else {
				switch (imageStretch) {
					case Stretch.aspectFit:
						scaleH = scaleW < scaleH ? scaleW : scaleH;
						scaleW = scaleH;
						break;
					case Stretch.aspectFill:
						scaleH = scaleW > scaleH ? scaleW : scaleH;
						scaleW = scaleH;
						break;
				}
			}
		}
		return {
			width: scaleW,
			height: scaleH,
		};
	}

	[placeholderProperty.getDefault]() {
		return undefined;
	}

	[placeholderProperty.setNative](value) {
		// do nothing
	}

	[stretchProperty.getDefault]() {
		return 'none';
	}

	[stretchProperty.setNative](value) {
		helpers.onStretchPropertyChanged(this.nativeView, value);
	}

	[isLoadingProperty.getDefault]() {
		return false;
	}

	[isLoadingProperty.setNative](value) {
		// do nothing
	}

	[srcProperty.getDefault]() {}

	[srcProperty.setNative](value) {
		helpers.onSrcPropertySet(this, value);
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

	if (true === getBoolean('isAppOpenedFirstTime') || undefined === getBoolean('isAppOpenedFirstTime') || null == getBoolean('isAppOpenedFirstTime')) {
		setBoolean('isAppOpenedFirstTime', false);
		this.clearCache();
		setNumber('cacheTimeReference', currentSeconds);
	} else {
		referenceTime = getNumber('cacheTimeReference');
		if (null == referenceTime || undefined === referenceTime) {
			setNumber('cacheTimeReference', currentSeconds);
		} else if (currentSeconds - referenceTime > noOfSecondsInDays) {
			this.clearCache();
			setNumber('cacheTimeReference', currentSeconds);
		}
	}
}

export function clearCache() {
	let imageCache = SDImageCache.sharedImageCache();
	imageCache.clearMemory();
	imageCache.clearDiskOnCompletion(() => {});
}

export function initializeOnAngular() {
	throw new Error("'initializeOnAngular' has been removed from 'nativescript-web-image-cache', see its readme for details!");
}
