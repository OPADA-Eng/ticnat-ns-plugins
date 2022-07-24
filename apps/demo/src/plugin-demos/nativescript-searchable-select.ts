import { DemoSharedSearchableSelect } from '@demo/shared';
import { EventData, Observable, ObservableArray, Page } from '@nativescript/core';
import { getFile } from '@nativescript/core/http';
import {} from '@ticnat/nativescript-searchable-select';
import { countries } from '~/countries';
export function navigatingTo(args: EventData) {
  const page = <Page>args.object;
  page.bindingContext = new DemoModel();
}

export class DemoModel extends DemoSharedSearchableSelect {
  public count = 0;
  private countries: ObservableArray<any> = new ObservableArray<any>([]);
  public hint = 'please select ';

  public selected = [{ name: 'Jordan', code: 'JO' }];

  public item_template = `
  <GridLayout class="item" columns="100,*,100">
  <Image  width="90" height="60" stretch="fill" row="0"
             col="0"  id="my-image-1"
             src="{{ flags(code) }}">
             </Image>
  <Label col="1" class="text-center" text="{{ name }}" textWrap="true" />
  <Label col="2" class="text-center" text="{{ code }}" textWrap="true" />
  </GridLayout>
  `;

  public onSelect(args) {
    console.log('selected array is => ' + JSON.stringify(args.selected));
  }

  constructor() {
    super();
    this.countries = new ObservableArray<any>(countries);
    this.Refresh('countries');
  }
  public init(page: Page) {
    const refreshLabel = page.getViewById('refreshLabel');
    this.changeText(refreshLabel);
  }
  public changeText(refreshLabel) {
    console.log('please select => ' + this.count);
    setInterval(() => {
      this.hint = 'please select => ' + this.count;
      this.count = this.count + 1;
      this.Refresh('hint');
      console.log(this.hint);
      refreshLabel.refresh();
    }, 1000);
  }

  public Refresh(key = null) {
    this.notify({
      object: this,
      eventName: Observable.propertyChangeEvent,
      propertyName: key,
      value: this[key],
    });
  }
}
