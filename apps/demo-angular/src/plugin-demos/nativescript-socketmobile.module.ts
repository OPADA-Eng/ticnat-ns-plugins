import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptSocketmobileComponent } from './nativescript-socketmobile.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptSocketmobileComponent }])],
  declarations: [NativescriptSocketmobileComponent],
  schemas: [ NO_ERRORS_SCHEMA]
})
export class NativescriptSocketmobileModule {}
