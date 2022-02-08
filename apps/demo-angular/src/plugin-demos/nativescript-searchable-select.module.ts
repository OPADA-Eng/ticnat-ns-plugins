import { NgModule, NO_ERRORS_SCHEMA } from '@angular/core';
import { NativeScriptCommonModule, NativeScriptRouterModule } from '@nativescript/angular';
import { NativescriptSearchableSelectComponent } from './nativescript-searchable-select.component';

@NgModule({
	imports: [NativeScriptCommonModule, NativeScriptRouterModule.forChild([{ path: '', component: NativescriptSearchableSelectComponent }])],
  declarations: [NativescriptSearchableSelectComponent],
  schemas: [ NO_ERRORS_SCHEMA]
})
export class NativescriptSearchableSelectModule {}
