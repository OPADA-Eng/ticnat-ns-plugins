'use strict';
Object.defineProperty(exports, '__esModule', { value: true });
var ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE = 222;
var BluetoothPermissions = (function () {
	function BluetoothPermissions() {
		this.bluetoothManager = Utils.ad.getApplicationContext().getSystemService(android.content.Context.BLUETOOTH_SERVICE);
		this.adapter = this.bluetoothManager.getAdapter();
		this.setupSupport();
	}
	BluetoothPermissions.prototype.hasAndroidX = function () {
		if (!global.androidx || !global.androidx.core || !global.androidx.core.content || !global.androidx.core.content.ContextCompat || !global.androidx.core.content.ContextCompat.checkSelfPermission) {
			return false;
		}
		return true;
	};
	BluetoothPermissions.prototype.hasSupportVersion4 = function () {
		if (!android.support || !android.support.v4 || !android.support.v4.content || !android.support.v4.content.ContextCompat || !android.support.v4.content.ContextCompat.checkSelfPermission) {
			return false;
		}
		return true;
	};
	BluetoothPermissions.prototype.setupSupport = function () {
		if (this.hasAndroidX()) {
			this.androidSupport = global.androidx.core;
		} else if (this.hasSupportVersion4()) {
			this.androidSupport = android.support.v4;
		}
	};
	BluetoothPermissions.prototype.coarseLocationPermissionGranted = function () {
		var hasPermission = android.os.Build.VERSION.SDK_INT < android.os.Build.VERSION_CODES.JELLY_BEAN_MR2;
		if (!hasPermission) {
			var ctx = this._getContext();
			if (android.os.Build.VERSION.SDK_INT == android.os.Build.VERSION_CODES.S) {
				hasPermission = android.content.pm.PackageManager.PERMISSION_GRANTED === this.androidSupport.content.ContextCompat.checkSelfPermission(ctx, android.Manifest.permission.BLUETOOTH_SCAN);
			}
			else {
				hasPermission = android.content.pm.PackageManager.PERMISSION_GRANTED === this.androidSupport.content.ContextCompat.checkSelfPermission(ctx, android.Manifest.permission.ACCESS_COARSE_LOCATION);
			}
		}
		return hasPermission;
	};
	BluetoothPermissions.prototype.requestCoarseLocationPermission = function (callback) {
		var _this = this;
		return new Promise(function (resolve, reject) {
			var permissionCb = function (args) {
				if (args.requestCode === ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE) {
					application.android.off(application.AndroidApplication.activityRequestPermissionsEvent, permissionCb);
					for (var i = 0; i < args.permissions.length; i++) {
						if (args.grantResults[i] === android.content.pm.PackageManager.PERMISSION_DENIED) {
							reject('Permission denied');
							return;
						}
					}
					if (callback) {
						callback();
					}
					resolve();
				}
			};
			application.android.on(application.AndroidApplication.activityRequestPermissionsEvent, permissionCb);
			_this.androidSupport.app.ActivityCompat.requestPermissions(_this._getActivity(), [android.Manifest.permission.ACCESS_COARSE_LOCATION], ACCESS_COARSE_LOCATION_PERMISSION_REQUEST_CODE);
		});
	};
	BluetoothPermissions.prototype._getContext = function () {
		var ctx = java.lang.Class.forName('android.app.AppGlobals').getMethod('getInitialApplication', null).invoke(null, null);
		if (ctx) {
			return ctx;
		}
		return java.lang.Class.forName('android.app.ActivityThread').getMethod('currentApplication', null).invoke(null, null);
	};
	BluetoothPermissions.prototype._getActivity = function () {
		var _this = this;
		var activity = application.android.foregroundActivity || application.android.startActivity;
		if (activity === null) {
			setTimeout(function () {
				_this._getActivity();
			}, 250);
			return;
		} else {
			return activity;
		}
	};
	return BluetoothPermissions;
})();
exports.BluetoothPermissions = BluetoothPermissions;
//# sourceMappingURL=android_main.js.map
