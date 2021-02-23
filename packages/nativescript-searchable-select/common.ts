import { booleanConverter, Button, Color, FlexboxLayout, Frame, GridLayout, GridUnitType, isAndroid, ItemSpec, Label, ListView, Observable, ObservableArray, Page, Property, SearchBar, StackLayout, Template } from '@nativescript/core';
import { isNullOrUndefined } from '@nativescript/core/utils/types';

export class SearchableSelectCommon extends GridLayout {
	// public isSearchable: boolean = false;
	public hint: string = 'Select some item';
	// public searchHeaderText: string = 'Search for an item';
	// public closeText: string = 'Close';
	// public searchHint: string = 'Search ...';
	// public static itemSelectedEvent = 'itemSelected';
	public items: ObservableArray<any> = null;
	public static changeEvent: string = 'change';
	public static closeEvent: string = 'close';

	// public selectedIndex: string = '0';
	// constructor() {
	// 	super();
	// }
	public itemTemplate: string | Template;
	public searchHint = 'Search for item';
	public searchBar: SearchBar;
	public autofocus: any = false;
	public xbtn: any = 'x';
	public selected: Array<any> = [];
	public disabled: any = false;
	private _selected_items: Array<any> = this.selected;
	private _selected_layout: any = null;
	private _primary_key: string = 'id';
	private _gridBase: any;
	private _search_param: string = 'name';
	private _item_template: any = null;
	private _filterd: ObservableArray<any> = this.items;
	private _term: string = '';
	private _lastTerm: string = null;
	public labelselect: any;
	private currentPage = null;
	public render: string = 'tags';
	private filterselect: any;
	private _modal_title: string = 'Please select items';
	private _hint: string = 'Please select some items';
	private _selected_flag: string;
	private multiple: any = true;
	private allowSearch: any = true;

	public doneText: string = 'Done';
	public clearText: string = 'Clear';
	public selectText: string = 'Select';
	public closeText: string = 'Close';

	public get selected_flag(): string {
		return this._selected_flag;
	}

	public set selected_flag(value: string) {
		this._selected_flag = value;
	}

	public get search_param(): string {
		return this._search_param;
	}

	public set search_param(value: string) {
		this._search_param = value;
	}

	public get filterd(): ObservableArray<any> {
		return this._filterd;
	}

	public set filterd(value: ObservableArray<any>) {
		this._filterd = value;
	}

	public get term(): string {
		return this._term;
	}

	public set term(value: string) {
		this._term = value;
	}

	public get item_template(): any {
		return this._item_template;
	}

	public set item_template(value: any) {
		this._item_template = value;
	}

	public get gridBase(): any {
		return this._gridBase;
	}

	public set gridBase(value: any) {
		this._gridBase = value;
	}

	public get selected_layout(): any {
		return this._selected_layout;
	}

	public set selected_layout(value: any) {
		this._selected_layout = value;
	}

	private modalPage: Page = new Page();

	public get modal_title(): string {
		return this._modal_title;
	}

	public set modal_title(value: string) {
		this._modal_title = value;
	}

	private closeCallback: any;

	public get selected_items(): Array<any> {
		return this._selected_items;
	}

	public set selected_items(value: Array<any>) {
		this._selected_items = value;
	}

	get primary_key(): any {
		return this._primary_key;
	}

	set primary_key(value: any) {
		this._primary_key = value;
	}

	constructor() {
		super();

		setTimeout(() => {
			this.init();
		}, 100);
	}
	private isFunction(functionToCheck) {
		return functionToCheck && {}.toString.call(functionToCheck) === '[object Function]';
	}
	public renderTags() {
		var self = this;
		let flexboxLayout = new FlexboxLayout();
		flexboxLayout.flexWrap = 'wrap';
		flexboxLayout.alignContent = 'flex-start';
		flexboxLayout.flexGrow = 1;
		if (this.selected.length)
			this.selected.forEach((item) => {
				var grid = new StackLayout();
				let btn = new Button();
				var textFieldBindingOptions = {
					sourceProperty: 'xbtn',
					targetProperty: 'text',
					twoWay: true,
				};
				btn.bind(textFieldBindingOptions, this);
				btn.text = self.xbtn;
				btn.set('toDelete', item[self.primary_key]);
				let label = new Label();
				label.text = item[self.search_param];
				label.textWrap = true;
				label.className = 'filter-select-tag-label';
				grid.orientation = 'horizontal';
				grid.addChild(btn);
				grid.addChild(label);

				flexboxLayout.addChild(grid);
				grid.className = 'filter-select-tag';
				btn.className = 'fa filter-select-tag-delete';
				btn.on(
					Button.tapEvent,
					function (args) {
						if (self.disabled == false) {
							self.selected.forEach((item, index) => {
								if (item[self.primary_key] == args.object.get('toDelete')) self.selected.splice(index, 1);
							});
							self.clearSelect();
						}
					},
					self
				);
			});
		else {
			let label = new Label();
			label.text = self.hint;
			flexboxLayout.addChild(label);
			label.className = 'filter-select-hint';
		}

		this.selected_layout = flexboxLayout;
		return flexboxLayout;
	}

	public init() {
		var self = this;

		if (this.multiple == 'false') this.multiple = false;
		if (this.multiple == 'true') this.multiple = true;
		if (this.autofocus == 'false') this.autofocus = false;
		if (this.autofocus == 'true') this.autofocus = true;

		if (this.allowSearch == 'false') this.allowSearch = false;
		if (this.allowSearch == 'true') this.allowSearch = true;

		if (this.disabled == 'true') this.disabled = true;

		if (this.disabled == 'false') this.disabled = false;

		if (this.item_template == null) this.item_template = `<StackLayout><Label text="{{ ${this._search_param} }}" textWrap="true" /></StackLayout>`;

		if (self.selected_flag)
			this.selected = this.items.filter((item) => {
				return item[self.selected_flag];
			});

		if (this.render == 'tags') {
			this.filterselect = this.renderTagsHolder();
			this.addRow(new ItemSpec(1, 'auto'));
			this.addChild(this.filterselect);
			GridLayout.setRow(this.filterselect, 0);
			this.verticalAlignment = 'top';
		} else if (this.render == 'label') {
			this.multiple = false;
			this.labelselect = this.parseOptions(new Label(), {
				className: 'filter-select-label fa hint',
				text: this.hint,
			});
			var textFieldBindingOptions = {
				sourceProperty: 'hint',
				targetProperty: 'text',
				twoWay: false,
			};
			this.labelselect.bind(textFieldBindingOptions, this);

			if (this.selected.length) this.labelDone();
			this.on(Button.tapEvent, (arg) => {
				if (self.disabled == false) {
					this.open();
				}
			});
			this.addChild(this.labelselect);
		} else if (this.render == 'drop') {
			this.multiple = false;
			this.labelselect = this.parseOptions(new Label(), {
				col: '0',
				className: 'filter-select-label fa hint',
				text: this.hint,
				textWrap: 'true',
			});

			var textFieldBindingOptions = {
				sourceProperty: 'hint',
				targetProperty: 'text',
				twoWay: false,
			};
			this.labelselect.bind(textFieldBindingOptions, this);
			if (this.selected.length) this.labelDone();
			this.on(Button.tapEvent, (arg) => {
				if (self.disabled == false) {
					self.open();
				}
			});

			let dropholder = <GridLayout>this.parseOptions(new GridLayout(), {
				rows: ['auto'],
				columns: ['star', 'auto'],
				className: 'filter-select-drop-holder',
			});

			dropholder.addChild(this.labelselect);
			let nsicon = this.parseOptions(new Label(), {
				col: '1',
				className: 'fa filter-select-icon',
				text: '\uf0d7',
			});
			dropholder.addChild(nsicon);
			this.addChild(dropholder);
			dropholder.horizontalAlignment = 'center';
		}
	}
	public open() {
		this.currentPage = Frame.topmost().currentPage;
		let options = {
			fullscreen: true,
		};
		this.currentPage.showModal(this.Modal(), options);
	}

	public closeModal() {
		if (this.isFunction(this.closeCallback)) {
			this.closeCallback();
			this.notify({
				eventName: SearchableSelectCommon.closeEvent,
				object: this,
				selected: this.selected_items,
			});
			this.modalPage = new Page();
		}
	}
	renderTagsHolder() {
		let self = this;
		var button = new Button();
		button.text = self.selectText;
		button.className = 'btn btn-primary btn-filter-select';
		button.on(
			Button.tapEvent,
			(eventData) => {
				if (this.disabled == false) {
					this.open();
				}
			},
			this
		);
		let tags = this.renderTags();
		let filterselect = new GridLayout();
		filterselect.addRow(new ItemSpec(1, 'star'));
		filterselect.addColumn(new ItemSpec(1, 'star'));
		filterselect.addColumn(new ItemSpec(1, 'auto'));
		filterselect.addChild(button);
		filterselect.addChild(tags);
		GridLayout.setRow(tags, 0);
		GridLayout.setRow(button, 0);
		GridLayout.setColumn(tags, 0);
		GridLayout.setColumnSpan(tags, 1);
		GridLayout.setColumn(button, 1);
		tags.className = 'filter-select-tags-holder';

		return filterselect;
	}

	public tagsDone() {
		if (!this.filterselect) {
			return;
		}

		let self = this;
		self.filterselect.removeChild(self.selected_layout);
		var tags = self.renderTags();
		self.filterselect.addChild(tags);
		self.filterselect.className = 'filter-select-tags-base';
		GridLayout.setColumn(tags, 0);
		tags.className = 'filter-select-tags-holder';
		this.notify({
			object: self,
			eventName: Observable.propertyChangeEvent,
			propertyName: 'hint',
			value: self.hint,
		});
	}
	public labelDone() {
		if (!this.labelselect) {
			return;
		}

		let self = this;
		if (self.selected.length > 0) {
			this.labelselect.text = self.selected[0][this.search_param];
			this.labelselect.className = 'filter-select-label fa selected';
		} else {
			this.labelselect.text = self.hint;
			this.notify({
				object: self,
				eventName: Observable.propertyChangeEvent,
				propertyName: 'hint',
				value: self.hint,
			});
		}
	}

	public tagsClear() {
		this.currentPage = Frame.topmost().currentPage;
		this.filterselect.removeChild(this.selected_layout);
		var tags = this.renderTags();
		this.filterselect.addChild(tags);
		this.filterselect.className = 'filter-select-tags-base';
		GridLayout.setColumn(tags, 0);
		tags.className = 'filter-select-tags-holder';
	}
	public refresh() {
		if (this.render == 'tags') this.tagsDone();
		else if (this.render == 'label' || this.render == 'drop') this.labelDone();
	}
	private doneSelect() {
		this.selected = this.selected_items;
		if (this.render == 'tags') this.tagsDone();
		else if (this.render == 'label' || this.render == 'drop') this.labelDone();

		if (this.multiple == true)
			this.notify({
				eventName: SearchableSelectCommon.changeEvent,
				object: this,
				selected: this.selected,
			});
		else
			this.notify({
				eventName: SearchableSelectCommon.changeEvent,
				object: this,
				selected: this.selected[0],
			});

		this.closeModal();
		setTimeout(() => {
			if (this.searchBar) this.searchBar.text = '';
		}, 500);
	}
	public Clear(clear = true) {
		let self = this;
		if (clear) self.selected_items = [];
		if (this.multiple == false)
			if (self.render == 'tags') {
				self.selected_items.splice(0, self.selected_items.length);
				self.doneSelect();
			} else {
				self.selected.splice(0, self.selected.length);
				self.labelselect.text = self.hint;
				self.labelselect.className = 'filter-select-label fa hint';
				self.closeModal();
				self.notify({
					eventName: SearchableSelectCommon.changeEvent,
					object: self,
					selected: self.selected,
				});
			}
		else if (self.selected.length) self.doneSelect();
	}
	private clearSelect() {
		//after remove tag
		var self = this;
		this.tagsClear();

		if (self.multiple == true)
			self.notify({
				eventName: SearchableSelectCommon.changeEvent,
				object: self,
				selected: self.selected,
			});
		else
			self.notify({
				eventName: SearchableSelectCommon.changeEvent,
				object: self,
				selected: self.selected[0],
			});
	}
	private Modal() {
		var stackLayout = new StackLayout();
		var gridLayout = new GridLayout();
		var listView = new ListView();
		// if (Object.prototype.toString.call(this.items) == '[object Array]') this.filterd = this.items;
		// else this.filterd = <any>this.items;
		this.filterd = this.items;
		var listViewBindingOptions = {
			sourceProperty: 'filterd',
			targetProperty: 'items',
			twoWay: false,
		};
		listView.bind(listViewBindingOptions, this);

		this.selected_items = this.selected;
		// set the template

		// listView.itemTemplate = this.item_template;
		listView.itemTemplate = isNullOrUndefined(this.itemTemplate) ? this.item_template : this.itemTemplate;
		console.log(listView.itemTemplate);
		listView.on(ListView.itemLoadingEvent, (args: any) => {
			var selected = this.selected_items.filter((item) => {
				return item[this.primary_key] == this.filterd.getItem(args.index)[this.primary_key];
			});
			if (selected.length) args.view.className = 'item filter-select-selected';
			else args.view.className = 'item';
		});
		listView.on('itemTap', (args) => {
			if (this.multiple == false && args.view.className == 'item filter-select-selected') return 0;
			if (this.multiple == false) this.selected_items.splice(0, this.selected_items.length);
			if (args.view.className != 'item filter-select-selected') {
				args.view.className = 'item filter-select-selected';
				if (this.selected_flag) args.view.bindingContext[this.selected_flag] = true;
			} else {
				args.view.className = 'item';
				if (this.selected_flag) args.view.bindingContext[this.selected_flag] = false;
			}

			var selected = this.selected_items.filter((item, index) => {
				return args.view.bindingContext[this.primary_key] == item[this.primary_key];
			});
			if (!selected.length) this.selected_items.push(args.view.bindingContext);
			else
				this.selected_items = this.selected_items.filter((item, index) => {
					return args.view.bindingContext[this.primary_key] != item[this.primary_key];
				});

			if (this.multiple == false) this.doneSelect();

			listView.refresh();
			return true;
		});

		var label = new Label();
		var donebtn = new Button();
		var closebtn = new Button();
		label.text = this.modal_title;
		label.className = 'action-bar-title filter-select-modal-title text-center';
		closebtn.text = this.closeText;
		closebtn.className = 'action-item filter-select-modal-left text-left';
		closebtn.on('tap', (args) => {
			this.selected_items.splice(0, this.selected_items.length);
			this.closeModal();
		});
		if (this.multiple == false) donebtn.text = this.clearText;
		else donebtn.text = this.doneText;

		donebtn.className = 'action-item text-right filter-select-modal-right';
		gridLayout.addRow(new ItemSpec(1, 'auto'));
		gridLayout.addColumn(new ItemSpec(1, 'auto'));
		gridLayout.addColumn(new ItemSpec(1, 'star'));
		gridLayout.addColumn(new ItemSpec(1, 'auto'));
		gridLayout.addChild(label);
		gridLayout.addChild(closebtn);

		gridLayout.addChild(donebtn);
		GridLayout.setColumn(closebtn, 0);
		GridLayout.setColumn(label, 1);
		GridLayout.setColumn(donebtn, 2);
		gridLayout.className = 'action-bar p-10';
		donebtn.on('tap', (args) => {
			this.Clear(false);
		});
		stackLayout.addChild(gridLayout);
		this.searchBar = new SearchBar();
		this.searchBar.id = 'filter-select-search-bar';
		this.searchBar.hint = this.searchHint;
		var searchBindingOptions = {
			sourceProperty: 'onSubmit',
			targetProperty: 'submit',
			twoWay: true,
		};
		this.searchBar.bind(searchBindingOptions, this);
		var searchBindingOptions2 = {
			sourceProperty: 'term',
			targetProperty: 'text',
			twoWay: true,
		};
		this.searchBar.bind(searchBindingOptions2, this);
		if (this.allowSearch) stackLayout.addChild(this.searchBar);
		this.searchBar.className = 'filter-select-search-bar';

		let containerStack = new StackLayout();
		containerStack.className = 'modal-dialog-container';
		var hr = new StackLayout();
		hr.className = 'hr-light';
		stackLayout.addChild(hr);
		(<any>listView).height = '100%';
		stackLayout.addChild(listView);
		stackLayout.className = 'modal-dialog-box';
		listView.className = 'filter-select-list';
		containerStack.addChild(stackLayout);
		this.modalPage.content = containerStack;
		// this.modalPage.backgroundColor = new Color(0.5, 0, 0, 0);
		this.modalPage.on('loaded', (args) => {
			let page = <StackLayout>args.object;
			let myFilterSelectSearchbar = <SearchBar>page.getViewById('filter-select-search-bar');
			if (isAndroid && this.autofocus == false && this.allowSearch) {
				myFilterSelectSearchbar.android.clearFocus();
			}

			if (!isAndroid && this.autofocus == true && this.allowSearch) {
				myFilterSelectSearchbar.focus();
			}
		});
		this.modalPage.on('showingModally', (args: any) => {
			this.selected_items = this.selected;
			this.closeCallback = args.closeCallback;
		});
		this.listnToSearch();
		return this.modalPage;
	}

	public onSubmit() {
		new Promise((resolve, reject) => {
			var result = this.items.filter((item) => {
				return item[this.search_param].toLowerCase().indexOf(this.term.toLowerCase()) > -1;
			});
			resolve(new ObservableArray(result));
		})
			.then((result) => {
				this.filterd = <any>result;
				this.notify({
					object: this,
					eventName: Observable.propertyChangeEvent,
					propertyName: 'filterd',
					value: this.filterd,
				});
				this.listnToSearch();
			})
			.catch(() => {
				this.listnToSearch();
			});
	}
	private listnToSearch() {
		setTimeout(() => {
			if (this._lastTerm != this.term) {
				this.onSubmit();
				this._lastTerm = this.term;
			} else {
				this.listnToSearch();
			}
		}, 500);
	}

	private parseOptions(view, options) {
		Object.keys(options).forEach(function (key, index) {
			if (key === 'rows')
				options[key].forEach(function (value, index) {
					view.addRow(new ItemSpec(1, <GridUnitType>value));
				});
			else if (key === 'columns')
				options[key].forEach(function (value, index) {
					view.addColumn(new ItemSpec(1, <GridUnitType>value));
				});
			else {
				view[key] = options[key];
			}
		});

		return view;
	}
}
export const itemsProperty = new Property<SearchableSelectCommon, ObservableArray<any>>({ name: 'items', affectsLayout: true, valueChanged: onItemsChanged });
itemsProperty.register(SearchableSelectCommon);

// export const isSearchableProperty = new Property<SearchableSelectCommon, boolean>({ name: 'isSearchable', affectsLayout: true, valueChanged: onItemsChanged, valueConverter: booleanConverter });
// isSearchableProperty.register(SearchableSelectCommon);

export const hintProperty = new Property<SearchableSelectCommon, string>({ name: 'hint', affectsLayout: true, valueChanged: onItemsChanged });
hintProperty.register(SearchableSelectCommon);

// export const searchHeaderTextProperty = new Property<SearchableSelectCommon, string>({ name: 'searchHeaderText', affectsLayout: true, valueChanged: onItemsChanged });
// searchHeaderTextProperty.register(SearchableSelectCommon);

// export const selectedIndexProperty = new Property<SearchableSelectCommon, string>({ name: 'selectedIndex', affectsLayout: true, valueChanged: onItemsChanged });
// selectedIndexProperty.register(SearchableSelectCommon);

function onItemsChanged(view: any, oldValue, newValue) {}

export const itemTemplateProperty = new Property<SearchableSelectCommon, any>({
	name: 'itemTemplate',
	affectsLayout: true,
	valueChanged: (view: any, oldValue, newValue) => {
		view.refresh(true);
	},
});
itemTemplateProperty.register(SearchableSelectCommon);
