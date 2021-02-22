/// <reference path="./types.d.ts" />

import { Utils } from '@nativescript/core';
import { ImageSource } from '@nativescript/core/image-source';
import { isString } from '@nativescript/core/utils/types';

// import * as imageSource from 'tns-core-modules/image-source';

declare class UIViewContentMode {
	static UIViewContentModeScaleToFill: any;
	static UIViewContentModeTopLeft: any;
	static UIViewContentModeScaleAspectFit: any;
	static UIViewContentModeScaleAspectFill: any;
}

export class Helpers {
	public static onStretchPropertyChanged(nativeView, value) {
		switch (value) {
			case 'aspectFit':
				nativeView.contentMode = UIViewContentMode.UIViewContentModeScaleAspectFit;
				break;
			case 'aspectFill':
				nativeView.contentMode = UIViewContentMode.UIViewContentModeScaleAspectFill;
				break;
			case 'fill':
				nativeView.contentMode = UIViewContentMode.UIViewContentModeScaleToFill;
				break;
			case 'none':
			default:
				nativeView.contentMode = UIViewContentMode.UIViewContentModeTopLeft;
				break;
		}
	}

	public static onSrcPropertySet(nativeWrapper, value) {
		let image = nativeWrapper,
			placeholder = nativeWrapper.placeholder,
			placeholderImage = this.getPlaceholderUIImage(placeholder);
		if (isString(value)) {
			value = value.trim();
			if (0 === value.indexOf('http')) {
				image.isLoading = true;
				image.nativeView.sd_setImageWithURLPlaceholderImageCompleted(value, placeholderImage, function () {
					image.isLoading = false;
				});
			} else if (Utils.isFileOrResourcePath(value)) {
				image.isLoading = true;
				let source: any = new ImageSource();

				if (0 === value.indexOf(Utils.RESOURCE_PREFIX)) {
					let path = value.substr(Utils.RESOURCE_PREFIX.length);
					ImageSource.fromResource(path).then(function () {
						image.isLoading = false;
						image.nativeView.image = source.ios || source.nativeView;
					});
				} else {
					ImageSource.fromFile(value).then(function () {
						image.isLoading = false;
						image.nativeView.image = source.ios || source.nativeView;
					});
				}
			}
			image.requestLayout();
		}
	}

	public static getPlaceholderUIImage(value) {
		if (isString(value)) {
			if (Utils.isFileOrResourcePath(value)) {
				return ImageSource.fromFileOrResourceSync(value).ios;
			}
		}

		return undefined;
	}

	// public static clearCache() {
	//   let imageCache = SDImageCache.sharedImageCache();
	//   imageCache.clearMemory();
	//   imageCache.clearDisk();
	// }

	// public static setCacheLimit(numberOfDays) {
	//
	//   let noOfSecondsInAMinute = 60,
	//     noOfMinutesInAHour = 60,
	//     noOfHoursInADay = 24,
	//     noOfSecondsADay = noOfSecondsInAMinute * noOfMinutesInAHour * noOfHoursInADay,
	//     noOfSecondsInDays = noOfSecondsADay * numberOfDays,
	//     currentSeconds = Math.round(new Date().getTime() / 1000),
	//     referenceTime = 0;
	//
	//
	//   if (true === appSettings.getBoolean("isAppOpenedFirstTime") || undefined === appSettings.getBoolean("isAppOpenedFirstTime") || null == appSettings.getBoolean("isAppOpenedFirstTime")) {
	//     appSettings.setBoolean("isAppOpenedFirstTime", false);
	//     this.clearCache();
	//     appSettings.setNumber("cacheTimeReference", currentSeconds);
	//   } else {
	//     referenceTime = appSettings.getNumber("cacheTimeReference");
	//     if (null == referenceTime || undefined === referenceTime) {
	//       appSettings.setNumber("cacheTimeReference", currentSeconds);
	//     } else if ((currentSeconds - referenceTime) > noOfSecondsInDays) {
	//       this.clearCache();
	//       appSettings.setNumber("cacheTimeReference", currentSeconds);
	//     }
	//   }
	// }
}
