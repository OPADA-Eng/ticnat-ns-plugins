import { EventData, Page } from '@nativescript/core';
import { exportViewToPdf } from '@ticnat/nativescript-page-to-pdf';

let page: Page;

export function navigatingTo(args: EventData) {
  page = args.object as Page;
}

export async function exportToPdf() {
  try {
    const content = page.getViewById('pdfContent');
    const res = await exportViewToPdf(content as any, {
      fileName: `demo-${Date.now()}.pdf`,
      ensureLayout: true,
      openAfterSave: true,
    });

    const label = page.getViewById('resultLabel') as any;
    label.text = `Saved PDF:\n${res.filePath}`;

    console.log('PDF saved:', res.filePath);
  } catch (e) {
    console.error('Export failed:', e);
  }
}
