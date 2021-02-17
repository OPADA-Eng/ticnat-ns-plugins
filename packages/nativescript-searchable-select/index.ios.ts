import { Button, GridLayout, GridUnitType, ItemSpec, TextField } from '@nativescript/core';
import { SearchableSelectCommon } from './common';
declare var RSSelectionMenuSearchDelegate;
export class TPSDropDownItem extends NSObject {
    public id: number = 0;
    public title: string = "";
    constructor(id: number, title: string) {
        super();
        this.id = id;
        this.title = title;
    }
}
export class SearchableSelect extends SearchableSelectCommon {
    public createNativeView(): Object {
        // const firstTextField = UIButton.buttonWithType(UIButtonType.System);
        let grid = new GridLayout();
        var button1 = new Button();
        button1.text = '^';
        let textField = new TextField();
        textField.text = 'ttt';

        GridLayout.setColumn(textField, 0);
        GridLayout.setColumn(button1, 1);
        grid.addChild(button1);
        grid.addChild(textField);
        var firstColumn = new ItemSpec(1, GridUnitType.STAR);
        var secondColumn = new ItemSpec(1, GridUnitType.AUTO);
        var firstRow = new ItemSpec(1, GridUnitType.AUTO);
        grid.addColumn(firstColumn);
        grid.addColumn(secondColumn);
        grid.addRow(firstRow);

        // let items = [];
        // this.items.forEach((item) => {
        //     items.push(item.name);
        // });
        // dropDown.items = items;
        // dropDown.selectedItemIndex = 0;

        // dropDown.delegate = (<any>this.nativeView);
        // dropDown.didSelect = ((selectedText, index, id) => {
        //     console.log(index);
        // });
        // let grid = UITextField.new();
        // grid.text = 'search ...';
        return grid;
    }
    /**
     * Initializes properties/listeners of the native view.
     */
    initNativeView(): void {
        super.initNativeView();
    }
    disposeNativeView(): void {
        // Remove reference from native view to this instance.
        // (<any>this.nativeView).owner = null;

        // If you want to recycle nativeView and have modified the nativeView 
        // without using Property or CssProperty (e.g. outside our property system - 'setNative' callbacks)
        // you have to reset it to its initial state here.
        super.disposeNativeView();
    }
}
