import { Application } from '@nativescript/core';
import { TNSFontIcon, fonticon } from 'nativescript-fonticon';
let resources = Application.getResources();
TNSFontIcon.debug = false;
TNSFontIcon.paths = {
	fa: 'font-awesome.css',
	ion: 'ionicons.css',
};
TNSFontIcon.loadCss();
resources['fonticon'] = fonticon;
Application.setResources(resources);

Application.run({ moduleName: 'app-root' });
