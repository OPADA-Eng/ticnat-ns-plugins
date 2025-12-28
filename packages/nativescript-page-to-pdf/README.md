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
      ensureLayout: true
    });

    console.log('PDF saved at:', res.filePath);
  }
}
```

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
