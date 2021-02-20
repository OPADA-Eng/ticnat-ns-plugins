import { Application, EventData } from '@nativescript/core';
import { SearchableSelectCommon } from './common';
declare var com;
export class SearchableSelect extends SearchableSelectCommon {
	// public createNativeView(): Object {
	//     let spinner = new com.chivorn.smartmaterialspinner.SmartMaterialSpinner(Application.android.foregroundActivity);
	//     return spinner;
	// }
	// /**
	//  * Initializes properties/listeners of the native view.
	//  */
	// initNativeView(): void {
	//     super.initNativeView();
	//     let self = this;
	//     this.nativeView.setSearchable(this.isSearchable);
	//     this.nativeView.setHint(this.hint);
	//     this.nativeView.setSearchHeaderText(this.searchHeaderText);
	//     this.nativeView.setSearchHint(this.searchHint);
	//     let provinceList = new java.util.ArrayList<any>();
	//     this.items.forEach((item) => {
	//         switch (typeof item) {
	//             case 'string':
	//                 provinceList.add(item);
	//                 break;
	//             case 'number':
	//                 provinceList.add(item.toString());
	//                 break;
	//             case 'object':
	//                 provinceList.add(item.name ? item.name : '');
	//                 break;
	//             default:
	//                 console.log("Not supported type: " + typeof item);
	//                 break;
	//         }
	//     });
	//     this.nativeView.setItem(provinceList);
	//     this.nativeView.setSearchDialogGravity(android.view.Gravity.TOP);
	//     this.nativeView.setErrorTextAlignment(com.chivorn.smartmaterialspinner.SmartMaterialSpinner.TextAlignment.ALIGN_LEFT);
	//     this.nativeView.setArrowPaddingRight(19);
	//     let selectedIndex = parseInt(this.selectedIndex);
	//     this.nativeView.setSelection(selectedIndex < this.items.length ? selectedIndex : 0);
	//     this.nativeView.setOnItemSelectedListener(new android.widget.AdapterView.OnItemSelectedListener({
	//         onItemSelected: (adapterView, view, position, id) => {
	//             // Toast.makeText(MainActivity.this, provinceList.get(position), Toast.LENGTH_SHORT).show();
	//             self.selectedIndex = position + "";
	//             let eventData: EventData = {
	//                 eventName: SearchableSelectCommon.itemSelectedEvent,
	//                 object: self.items.getItem(position),
	//             }
	//             self.notify(eventData);
	//         },
	//         onNothingSelected: (adapterView) => {
	//         }
	//     }));
	// }
	// disposeNativeView(): void {
	//     // Remove reference from native view to this instance.
	//     (<any>this.nativeView).owner = null;
	//     // If you want to recycle nativeView and have modified the nativeView
	//     // without using Property or CssProperty (e.g. outside our property system - 'setNative' callbacks)
	//     // you have to reset it to its initial state here.
	//     super.disposeNativeView();
	// }
}
