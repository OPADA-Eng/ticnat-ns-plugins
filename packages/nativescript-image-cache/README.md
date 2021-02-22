#Nativescript web image cache
A minimalistic NativeScript plugin that wraps just the caching functionality of SDImageCacheCache library for iOS and Facebook Fresco for android.
**Supports local Images.**

## License

Released under the MIT License, anybody can freely include this in any type of program -- However, if in need of support contract, changes, enhancements and/or a commercial license please contact me (m.opada.albosh@gmail.com).

## Installation

    tns plugin add @ticnat/nativescript-image-cache

\*\* Tested on NativeScript 7.+ on VanillaJS, if any problems while running on previous versions, please place an issue.

## Usage in Vue

In `main.js`:

```js
const Vue = require('nativescript-vue'); // you already have something like this
Vue.registerElement('ImageCache', () => require('@ticnat/nativescript-image-cache').ImageCache); // now add this
```

Then in any `.vue` file:

```vue
<OtherMarkup>
  <ImageCache src="https://somedomain.com/images/img-file.png" stretch="aspectFill"></ImageCache>
</OtherMarkup>
```

## Usage in Angular

> ⚠️ This was changed in plugin version 5.0.0!

In `app.module.ts`, or any specific module you want to use this plugin:

```typescript
import { registerElement } from 'nativescript-angular';
registerElement('ImageCache', () => require('@ticnat/nativescript-image-cache').ImageCache);
```

After initialisation, the markup tag `<ImageCache></ImageCache>` can be used in templates of components.

```html
<GridLayout rows="*" columns="*">
	<ImageCache stretch="fill" row="0" col="0" placeholder="localPlaceholderImgorResUrl" src="#your image url here"> </ImageCache>
</GridLayout>
```

### Caching the images

- Add the element `ImageCache` with the `src` attribute set to the url just like normal image tag wherever image caching is required.
- `stretch` attribute can take values specified here -https://docs.nativescript.org/api-reference/modules/\_ui_enums_.stretch.html
- `placeholder` accepts a local image url in file path (~/) or resource (res://) form
- `placeholderStretch` can be set for **only android** to specify the stretch for placeholder image, values same as that of `stretch`. For iOS, no separate stretch property for placeholder (native library does not seem to support).

### Check if image is loading

- Get the reference to the ImageCache view by using angular **template variable references** and **@ViewChild** decorator and check the isLoading property (same as that of NativeScript Image isLoading property).
- Access the reference only after view is initialised, i.e. after **ngAfterViewInit** is called, getting the reference in **ngOnInit** can return undefined ( for detailed info, read about [angular component lifecycle hooks](https://angular.io/docs/ts/latest/guide/lifecycle-hooks.html) ).

**The Markup**

        <ImageCache stretch="fill" row="0"
                     col="0"
                     src="#your image url" #container>
        </ImageCache>

**The Backing Component Class Snippet**

         @ViewChild("container") container : any;
         ngAfterViewInit(){
              isLoading = this.container.nativeElement.isLoading;
         }

### Clearing the cache

Import the module, call the method `clearCache()` , default time is for SDImageCacheCache is 7 days, and for Fresco is 60 days, after which cache is automatically cleared.

     import {clearCache} from "@ticnat/nativescript-image-cache";
     clearCache();

### Setting custom cache purge time

Default cache purge time can be specified in number of days.

    import {setCacheLimit} from "@ticnat/nativescript-image-cache";
    /* Add the code component at a a proper hook */
    var cacheLimitInDays : number = 7;
    setCacheLimit(cacheLimitInDays);

## Usage in VanillaJS/TypeScript apps

**IF on android, need to initialise the plugin before using or clearing the cache, initialisation not required for iOS**

### Initialising on android - in app.js

    var imageCache = require("@ticnat/nativescript-image-cache");
    if (application.android) {
        application.onLaunch = function (intent) {
                imageCache.initialize();
        };
    }

After initialisation, add the namespace attribute `xmlns:IC="@ticnat/nativescript-image-cache"` to the opening page tag of xml. The markup tag `<IC:ImageCache></IC:ImageCache>` should be used to denote images.

```
    <Page xmlns:IC="@ticnat/nativescript-image-cache">
        <GridLayout rows='*' columns='*'>
            <IC:ImageCache stretch="fill" row="0"
             col="0"  id="my-image-1" placeholder="urlToLocalPlaceholderImage"
             src="#image-url">
             </IC:ImageCache>
        </GridLayout>
    </Page>
```

### Caching the images

- To the opening page tag of the xml, add
  `xmlns:IC="@ticnat/nativescript-image-cache"`.
- Add the element `IC:ImageCache` with the `src` attribute set to the url just like normal image tag wherever image caching is required.
- `stretch` attribute can take values specified here -https://docs.nativescript.org/api-reference/modules/\_ui_enums_.stretch.html
- `placeholder` accepts a local image url in file path (~/) or resource (res://) form
- `placeholderStretch` can be set for **only android** to specify the stretch for placeholder image, values same as that of `stretch`. For iOS, no separate stretch property for placeholder (native library does not seem to support).

### Check if image is loading

- To check if an image is loading, get the reference to the ImageCache view by using `page.getViewById("myImageCache")` , and check the isLoading property (same as that of NativeScript Image isLoading property).

```
var imageCacheModule=require("@ticnat/nativescript-image-cache");

var myImage1 = page.getViewById("my-image-1"),
    isLoading = myImage1.isLoading;

```

### Clearing the cache

- Require the module, call the method `clearCache()` , default time for SDImageCacheCache is 7 days, and for Fresco is 60 days, after which cache is automatically cleared.

```
var imageCacheModule=require("@ticnat/nativescript-image-cache");
imageCacheModule.clearCache();
```

### Setting custom cache purge time

Default cache purge time can be specified in number of days.

    var imageCache = require("@ticnat/nativescript-image-cache");

/_ Add the code component at a a proper hook _/
var cacheLimitInDays = 7;
imageCache.setCacheLimit(cacheLimitInDays);

**for android, you need to initialize in the application onlaunch event before clearing the cache**
