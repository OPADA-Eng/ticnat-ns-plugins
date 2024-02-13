import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptXPrinterBtComponent } from './nativescript-x-printer-bt.component';

@NgModule({
  imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptXPrinterBtComponent }])],
  declarations: [NativescriptXPrinterBtComponent],
  schemas: [NO_ERRORS_SCHEMA],
})
export class NativescriptXPrinterBtModule {}
