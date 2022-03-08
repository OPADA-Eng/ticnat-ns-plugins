import { NativeScriptConfig } from '@nativescript/core';

export default {
	id: 'com.socketmobile.SingleEntry',
	appResourcesPath: '../../tools/assets/App_Resources',
	android: {
		v8Flags: '--expose_gc',
		markingMode: 'none',
	},
	appPath: 'src',
	cli: {
		packageManager: 'npm'
	}
} as NativeScriptConfig;
