# @ticnat/nativescript-page-to-pdf

Export any NativeScript **Page** or **View** (including complex layouts with charts)
to a **single-page PDF** on **Android** and **iOS**.

- ✅ Android: `PdfDocument` + `Canvas.draw`
- ✅ iOS: `UIGraphicsPDFRenderer`
- ✅ Works with on-screen views (recommended)
- ✅ No native configuration required

---

## Installation

```bash
npm install @ticnat/nativescript-page-to-pdf
```

---

## API

```ts
export function exportViewToPdf(
  view: View,
  options?: ExportPdfOptions
): Promise<{ filePath: string }>;
```

### ExportPdfOptions

| Option | Type | Description |
|------|------|-------------|
| `fileName` | `string` | Output file name (e.g. `report.pdf`) |
| `outputFolder` | `string` | Folder path (defaults to app Documents folder) |
| `ensureLayout` | `boolean` | Forces layout before export (useful if view size is 0) |
| `backgroundColor` | `number \| UIColor` | Optional background fill |
| `openAfterSave` | `boolean` | Open the generated PDF right after saving |
| `mimeType` | `string` | Android only: MIME type when opening (default `application/pdf`) |

---

## Usage — NativeScript Core

### Export the current page

```ts
import { Frame } from '@nativescript/core';
import { exportViewToPdf } from '@ticnat/nativescript-page-to-pdf';

const page = Frame.topmost().currentPage;

const result = await exportViewToPdf(page.content, {
  fileName: 'page-export.pdf',
  ensureLayout: true
});

console.log('PDF saved at:', result.filePath);
```

---

### Export a specific view (e.g. chart container)

```ts
import { exportViewToPdf } from '@ticnat/nativescript-page-to-pdf';

const view = page.getViewById('chartContainer');

await exportViewToPdf(view, {
  fileName: 'chart.pdf'
});
```

---

### Export + open the PDF right after saving

```ts
import { exportViewToPdf } from '@ticnat/nativescript-page-to-pdf';

await exportViewToPdf(view, {
  fileName: 'demo.pdf',
  ensureLayout: true,
  openAfterSave: true
});
```

---

## Usage — NativeScript Angular

### Component example

```ts
import { Component } from '@angular/core';
import { Frame } from '@nativescript/core';
import { exportViewToPdf } from '@ticnat/nativescript-page-to-pdf';

@Component({
  selector: 'demo',
  template: `
    <StackLayout>
      <GridLayout id="pdfContent">
        <!-- charts / content -->
      </GridLayout>

      <Button text="Export to PDF" (tap)="export()" />
    </StackLayout>
  `
})
export class DemoComponent {
  async export() {
    const page = Frame.topmost().currentPage;
    const view = page.getViewById('pdfContent');

    const res = await exportViewToPdf(view, {
      fileName: 'angular-view.pdf',
      ensureLayout: true,
      openAfterSave: true
    });

    console.log('PDF saved at:', res.filePath);
  }
}
```

---

## Android: required FileProvider setup (for openAfterSave)

When `openAfterSave: true`, Android must open the PDF using a **content://** URI.
If your app does not already include a FileProvider, you’ll get `FileUriExposedException`.

### Where to add it (your plugin seed structure)

In your NativeScript app add these changes in your App_Resources folder under:

- `App_Resources/Android/src/main/AndroidManifest.xml`
- `App_Resources/Android/src/main/res/xml/file_paths.xml` // create one if not exist

(If your app uses `App_Resources` directly under the app, use that path instead.)

### 1) Create `file_paths.xml`

Create this file:

`App_Resources/Android/src/main/res/xml/file_paths.xml`

```xml
<?xml version="1.0" encoding="utf-8"?>
<paths xmlns:android="http://schemas.android.com/apk/res/android">
  <!-- /data/user/0/<package>/files/... -->
  <files-path name="files" path="." />
  <!-- optional -->
  <cache-path name="cache" path="." />
  <external-files-path name="external_files" path="." />
</paths>
```

### 2) Add the provider inside `<application>` (before `<activity>`)

Edit:

`tools/assets/App_Resources/Android/src/main/AndroidManifest.xml`

Inside the `<application ...>` tag, add:

```xml
<provider
  android:name="androidx.core.content.FileProvider"
  android:authorities="${applicationId}.provider"
  android:exported="false"
  android:grantUriPermissions="true">
  <meta-data
    android:name="android.support.FILE_PROVIDER_PATHS"
    android:resource="@xml/file_paths" />
</provider>
```

### 3) Rebuild clean (platform folder is generated)

> If you still see “No app found to open PDF”, install a PDF viewer on the device/emulator.

---

## Notes & Best Practices

- ✅ Best results when exporting a view that is already **visible on screen**
- 📊 Chart libraries usually render correctly via `drawViewHierarchyInRect`
- 📄 This plugin currently exports **one PDF page**
- 🧩 Long scroll views / multi-page PDFs can be added later

---

## Platform Details

### Android
- Uses `android.graphics.pdf.PdfDocument`
- Output location: app Documents folder
- Resolution equals the view’s pixel size

### iOS
- Uses `UIGraphicsPDFRenderer`
- Automatically handles Retina scaling

---

## License

MIT
