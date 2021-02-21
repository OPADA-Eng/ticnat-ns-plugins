import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptIntermecPrinterComponent } from './nativescript-intermec-printer.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptIntermecPrinterComponent }])],
	declarations: [NativescriptIntermecPrinterComponent],
	schemas: [NO_ERRORS_SCHEMA],
})
export class NativescriptIntermecPrinterModule {}
