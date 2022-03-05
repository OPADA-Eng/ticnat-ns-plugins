import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptT3bPrinterComponent } from './nativescript-t3b-printer.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptT3bPrinterComponent }])],
  declarations: [NativescriptT3bPrinterComponent],
  schemas: [ NO_ERRORS_SCHEMA]
})
export class NativescriptT3bPrinterModule {}
