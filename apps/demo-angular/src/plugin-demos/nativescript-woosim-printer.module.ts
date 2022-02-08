import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptWoosimPrinterComponent } from './nativescript-woosim-printer.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptWoosimPrinterComponent }])],
  declarations: [NativescriptWoosimPrinterComponent],
  schemas: [ NO_ERRORS_SCHEMA]
})
export class NativescriptWoosimPrinterModule {}
