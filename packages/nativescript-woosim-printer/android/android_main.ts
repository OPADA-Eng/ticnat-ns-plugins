import { AndroidActivityRequestPermissionsEventData, AndroidApplication, Application, Utils } from '@nativescript/core';

const ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE = 222;
declare var androidx, global, android: any;
export class BluetoothPermissions {
	// @link - https://developer.android.com/reference/android/content/Context.html#BLUETOOTH_SERVICE
	public bluetoothManager: android.bluetooth.BluetoothManager = Utils.ad.getApplicationContext().getSystemService(android.content.Context.BLUETOOTH_SERVICE);
	public adapter: android.bluetooth.BluetoothAdapter = this.bluetoothManager.getAdapter();
	public gattServer: android.bluetooth.BluetoothGattServer;
	// not initializing here, if the Android API is < 21  use LeScanCallback
	public androidSupport;

	constructor() {
		this.setupSupport();
	}
	private hasAndroidX() {
		//noinspection JSUnresolvedVariable
		if (!global.androidx || !global.androidx.core || !global.androidx.core.content || !global.androidx.core.content.ContextCompat || !global.androidx.core.content.ContextCompat.checkSelfPermission) {
			return false;
		}
		return true;
	}
	private hasSupportVersion4() {
		//noinspection JSUnresolvedVariable
		if (!android.support || !android.support.v4 || !android.support.v4.content || !android.support.v4.content.ContextCompat || !android.support.v4.content.ContextCompat.checkSelfPermission) {
			return false;
		}
		return true;
	}
	public setupSupport() {
		if (this.hasAndroidX()) {
			this.androidSupport = global.androidx.core;
		} else if (this.hasSupportVersion4()) {
			this.androidSupport = android.support.v4;
		}
	}

	public coarseLocationPermissionGranted() {
		let hasPermission = android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.JELLY_BEAN_MR2;
		if (!hasPermission) {
			const ctx = this._getContext();
			if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.S) {
				hasPermission = android.content.pm.PackageManager.PERMISSION_GRANTED === this.androidSupport.content.ContextCompat.checkSelfPermission(ctx, android.Manifest.permission.BLUETOOTH_SCAN);
			}
			else {
				hasPermission = android.content.pm.PackageManager.PERMISSION_GRANTED === (this.androidSupport.content.ContextCompat as any).checkSelfPermission(ctx, android.Manifest.permission.ACCESS_COARSE_LOCATION);
			}
		}
		return hasPermission;
	}

	public requestCoarseLocationPermission(callback?: () => void): Promise<boolean> {
		return new Promise((resolve, reject) => {
			const permissionCb = (args: AndroidActivityRequestPermissionsEventData) => {
				if (args.requestCode === ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE) {
					Application.android.off(AndroidApplication.activityRequestPermissionsEvent, permissionCb);

					for (let i = 0; i < args.permissions.length; i++) {
						if (args.grantResults[i] === android.content.pm.PackageManager.PERMISSION_DENIED) {
							reject('Permission denied');
							return;
						}
					}

					if (callback) {
						callback();
					}
					resolve(true);
				}
			};

			// grab the permission dialog result
			Application.android.on(AndroidApplication.activityRequestPermissionsEvent, permissionCb);
			if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.S) {
				// invoke the permission dialog
				(this.androidSupport.app.ActivityCompat as any).requestPermissions(this._getActivity(), [android.Manifest.permission.BLUETOOTH_SCAN], 2);
			}
			else {
				(this.androidSupport.app.ActivityCompat as any).requestPermissions(this._getActivity(), [android.Manifest.permission.ACCESS_COARSE_LOCATION], ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE);
			}
		});
	}

	private _getContext() {
		//noinspection JSUnresolvedVariable,JSUnresolvedFunction
		const ctx = java.lang.Class.forName('android.app.AppGlobals').getMethod('getInitialApplication', null).invoke(null, null);
		if (ctx) {
			return ctx;
		}

		//noinspection JSUnresolvedVariable,JSUnresolvedFunction
		return java.lang.Class.forName('android.app.ActivityThread').getMethod('currentApplication', null).invoke(null, null);
	}

	private _getActivity() {
		const activity = Application.android.foregroundActivity || Application.android.startActivity;
		if (activity === null) {
			// Throw this off into the future since an activity is not available....
			setTimeout(() => {
				this._getActivity();
			}, 250);
			return;
		} else {
			return activity;
		}
	}
}
