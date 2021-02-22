/// <reference path="./types.d.ts" />

import { StretchMapping as stretchMap } from './stretch-mapping';
import { ProxyBaseControllerListener } from './proxy-base-controller-listener';
import { isString } from '@nativescript/core/utils/types';
import { knownFolders, path, Utils } from '@nativescript/core';

export class Helpers {
	public static setNativeStretch(draweeHierarchy, stretch) {
		let frescoStretch = stretchMap.get(stretch) || com.facebook.drawee.drawable.ScalingUtils.ScaleType.CENTER;
		draweeHierarchy.setActualImageScaleType(frescoStretch);
	}

	public static setRounded(draweeHierarchy, rounded) {
		let roundingParams = new com.facebook.drawee.generic.RoundingParams.fromCornersRadius(0);
		if (rounded) roundingParams.setRoundAsCircle(true);
		else roundingParams.setRoundAsCircle(false);
		draweeHierarchy.setRoundingParams(roundingParams);
	}

	public static setPlaceholder(draweeHierarchy, src, placeholderStretch) {
		let drawable = this.getPlaceholderImageDrawable(src),
			nativePlaceholderStretch = stretchMap.get(placeholderStretch) || com.facebook.drawee.drawable.ScalingUtils.ScaleType.CENTER;
		if (null == drawable) {
			return;
		}

		draweeHierarchy.setPlaceholderImage(drawable, nativePlaceholderStretch);
	}

	public static getPlaceholderImageDrawable(value) {
		let fileName = '',
			drawable = null;

		if (isString(value)) {
			value = value.trim();

			if (Utils.isFileOrResourcePath(value)) {
				if (0 === value.indexOf('~/')) {
					fileName = path.join(knownFolders.currentApp().path, value.replace('~/', ''));
					drawable = android.graphics.drawable.Drawable.createFromPath(fileName);
				} else if (0 === value.indexOf('res')) {
					fileName = value;
					let res = Utils.ad.getApplicationContext().getResources();
					let resName = fileName.substr(Utils.RESOURCE_PREFIX.length);
					let identifier = res.getIdentifier(resName, 'drawable', Utils.ad.getApplication().getPackageName());
					drawable = res.getDrawable(identifier);
				}
			}
		}

		return drawable;
	}

	static setSource(image, value) {
		image.nativeView.setImageURI(null, null);

		if (isString(value)) {
			value = value.trim();
			if (Utils.isFileOrResourcePath(value) || 0 === value.indexOf('http')) {
				image.isLoading = true;
				let fileName = '';
				if (0 === value.indexOf('~/')) {
					fileName = path.join(knownFolders.currentApp().path, value.replace('~/', ''));
					fileName = 'file:' + fileName;
				} else if (0 === value.indexOf('res')) {
					fileName = value;
					let res = Utils.ad.getApplicationContext().getResources();
					let resName = fileName.substr(Utils.RESOURCE_PREFIX.length);
					let identifier = res.getIdentifier(resName, 'drawable', Utils.ad.getApplication().getPackageName());
					fileName = 'res:/' + identifier;
				} else if (0 === value.indexOf('http')) {
					image.isLoading = true;
					fileName = value;
				}

				image.nativeView.setImageURI(android.net.Uri.parse(fileName), null);

				let controllerListener = new ProxyBaseControllerListener();
				controllerListener.setNSCachedImage(image);

				let controller = com.facebook.drawee.backends.pipeline.Fresco.newDraweeControllerBuilder().setControllerListener(controllerListener).setUri(android.net.Uri.parse(fileName)).build();
				image.nativeView.setController(controller);
				image.requestLayout();
			} else {
				throw new Error('Path "' + '" is not a valid file or resource.');
			}
		}
	}

	public static onRoundedPropertyChanged(nativeObject, value) {
		if (!nativeObject) {
			return;
		}
		let draweeHierarchy = nativeObject.getHierarchy();
		this.setRounded(draweeHierarchy, value);
	}

	public static onPlaceholderPropertyChanged(nativeObject, src, placeholderStretch) {
		if (!nativeObject) {
			return;
		}

		let draweeHierarchy = nativeObject.getHierarchy();

		this.setPlaceholder(draweeHierarchy, src, placeholderStretch);
	}

	public static onSrcPropertySet(viewWrapper, src) {
		let image = viewWrapper,
			value = src;
		if (!image.nativeView) {
			return;
		}

		this.setSource(image, value);
	}

	public static onStretchPropertyChanged(nativeObject, value) {
		if (!nativeObject) {
			return;
		}

		let draweeHierarchy = nativeObject.getHierarchy();

		this.setNativeStretch(draweeHierarchy, value);
	}
}
