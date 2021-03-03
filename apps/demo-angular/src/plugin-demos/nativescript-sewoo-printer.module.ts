import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptSewooPrinterComponent } from './nativescript-sewoo-printer.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptSewooPrinterComponent }])],
	declarations: [NativescriptSewooPrinterComponent],
	schemas: [NO_ERRORS_SCHEMA],
})
export class NativescriptSewooPrinterModule {}
