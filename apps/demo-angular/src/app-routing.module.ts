import { NgModule } from '@angular/core';
import { Routes } from '@angular/router';
import { NativeScriptRouterModule } from '@nativescript/angular';

import { HomeComponent } from './home.component';

const routes: Routes = [
	{ path: '', redirectTo: '/home', pathMatch: 'full' },
	{ path: 'home', component: HomeComponent },
	{ path: 'nativescript-image-cache', loadChildren: () => import('./plugin-demos/nativescript-image-cache.module').then((m) => m.NativescriptImageCacheModule) },
	{ path: 'nativescript-intermec-printer', loadChildren: () => import('./plugin-demos/nativescript-intermec-printer.module').then((m) => m.NativescriptIntermecPrinterModule) },
	{ path: 'nativescript-searchable-select', loadChildren: () => import('./plugin-demos/nativescript-searchable-select.module').then((m) => m.NativescriptSearchableSelectModule) },
	{ path: 'nativescript-sewoo-printer', loadChildren: () => import('./plugin-demos/nativescript-sewoo-printer.module').then((m) => m.NativescriptSewooPrinterModule) },
	{ path: 'nativescript-woosim-printer', loadChildren: () => import('./plugin-demos/nativescript-woosim-printer.module').then((m) => m.NativescriptWoosimPrinterModule) },
];

@NgModule({
	imports: [NativeScriptRouterModule.forRoot(routes)],
	exports: [NativeScriptRouterModule],
})
export class AppRoutingModule {}
