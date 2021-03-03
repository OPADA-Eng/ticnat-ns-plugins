export declare class BluetoothPermissions {
	bluetoothManager: android.bluetooth.BluetoothManager;
	adapter: android.bluetooth.BluetoothAdapter;
	gattServer: android.bluetooth.BluetoothGattServer;
	androidSupport: any;
	constructor();
	private hasAndroidX;
	private hasSupportVersion4;
	setupSupport(): void;
	coarseLocationPermissionGranted(): boolean;
	requestCoarseLocationPermission(callback?: () => void): Promise<boolean>;
	private _getContext;
	private _getActivity;
}
