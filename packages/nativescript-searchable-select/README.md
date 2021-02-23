# @ticnat/nativescript-searchable-select

```javascript
ns plugin add @ticnat/nativescript-searchable-select
```

# FilterSelect

[![npm](https://img.shields.io/npm/v/@ticnat/nativescript-searchable-select.svg?maxAge=2592000?style=plastic)](https://www.npmjs.com/package/@ticnat/nativescript-searchable-select)
[![npm](https://img.shields.io/npm/dt/@ticnat/nativescript-searchable-select.svg?maxAge=2592000?style=plastic)](https://www.npmjs.com/package/@ticnat/nativescript-searchable-select)

A NativeScript plugin to provide an listview widget to select AND filter items.

## Sample Screenshots

#### Android and ios

| Sample 1                                                     | Sample 2                                                          |
| ------------------------------------------------------------ | ----------------------------------------------------------------- |
| ![Sample1](http://codeobia.com/screenshots/filter-label.gif) | ![Sample2](http://codeobia.com/screenshots/ios-filter-select.gif) |

## Installation

##### NativeScript 7.x

- `tns plugin add @ticnat/nativescript-searchable-select`

## import css

`@import '@ticnat/nativescript-searchable-select/styles.css';`

\*Be sure to run a new build after adding plugins to avoid any issues

## Vanilla NativeScript

<span style="color:red">IMPORTANT: </span>_Make sure you include `xmlns:SS="@ticnat/nativescript-searchable-select"` on the Page element_

### XML

```XML
<Page xmlns:SS="@ticnat/nativescript-searchable-select">
   <StackLayout>
     <SS:SearchableSelect
     items="{{ countries }}"
     hint="Please select some countries"
     modal_title="Countries" search_param="name"
     primary_key="code"
     change="{{ onSelect }}"
     />
   </StackLayout>
</Page>
```

## Angular NativeScript

### Regiter plugin in Component class

```JAVASCRIPT

import { registerElement } from 'nativescript-angular/element-registry';
import { FilterSelect } from '@ticnat/nativescript-searchable-select';
registerElement('FilterSelect', () => FilterSelect);

```

### HTML

```HTML
    <FilterSelect
        height="100%"
        [items]="items"
        (change)="onitemselected($event)"
        hint="Please select some items"
        modal_title="item" search_param="name"
        primary_key="id">

    </FilterSelect>
```

## Attributes

### see [demo](https://github.com/OPADA-Eng/ticnat-ns-plugins/tree/master/apps/demo) examples for more information

| Attribute     | Description                                                                                     | Default                                                                                                             |
| ------------- | ----------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------- |
| render        | to render "tags" or "label" or "drop"                                                           | string : tags                                                                                                       |
| multiple      | to limit the options selected to one if set to false                                            | boolean : true                                                                                                      |
| search_param  | index of the string value in the items object to search on it                                   | string : name                                                                                                       |
| item_template | xml template for the listview items                                                             | string : `<Label col="0" text="{{ ${this._search_param} }}" textWrap="true" />`                                     |
| change        | change event treger when select is done                                                         | function : optional `change(args)` and selected item can be accessed as `args.selected`                             |
| modal_title   | title of the filter modal                                                                       | String : `Please select items`                                                                                      |
| hint          | string to show when no items selected                                                           | `Please select some items`                                                                                          |
| items         | array of objects to populate the list of options                                                | ObservableArray :[]                                                                                                 |
| primary_key   | unique index of the items object                                                                | string : `id`                                                                                                       |
| selected      | array of objects to mark some options as selected and it will be the result when select is done | Array: []                                                                                                           |
| disabled      | to disable select botton                                                                        | boolean : false                                                                                                     |
| allowSearch   | to enable/disable search bar in the modal                                                       | boolean : true                                                                                                      |
| refresh       | to refresh the filter select with new values good with remote data                              | function                                                                                                            |
| searchHint    | search placeholder or hint in the items modal                                                   | "Search for item"                                                                                                   |
| xbtn          | remove tag text you can use tag icon here                                                       | "x"                                                                                                                 |
| closeText     | close button text                                                                               | "Close"                                                                                                             |
| doneText      | done button text                                                                                | "Done"                                                                                                              |
| clearText     | clear button text                                                                               | "Clear"                                                                                                             |
| selectText    | select button text                                                                              | "Select"                                                                                                            |
| autofocus     | keyboard up when you open modal so you can start search                                         | false                                                                                                               |
| open()        | open modal programmatically                                                                     | function                                                                                                            |
| close         | close event treger when modal is closed                                                         | you can get the selected array by `args.selected` if the modal closed without any selection the array will be empty |

### CSS core-theme styles is required for modal page if you dont have them just make your own

see [styles.css](https://github.com/OPADA-Eng/ticnat-ns-plugins/blob/master/apps/demo/src/plugin-demos/nativescript-searchable-select.scss) so you can override or make your own

- and don't forget to share with us your nice styles :D

### font icons

- font icons are required if you are using dropdown render

  and you can add fontawsome icon as a select triger ( hint="{{'fa-list-ul' | fonticon}}" )

  see [demo](https://github.com/OPADA-Eng/ticnat-ns-plugins/tree/master/apps/demo)

### License

This plugin is build and maintained on this [plugin](https://github.com/moayadnajd/nativescript-filter-select) and many thank for @moayadnajd

### For contributing

just do a pull request with description of your changes or open issue with your ideas
