import type { View } from '@nativescript/core';
import type { ExportPdfOptions, ExportPdfResult } from './common';

export { ExportPdfOptions, ExportPdfResult } from './common';

/**
 * Export any NativeScript View (including a Page root view) into a single-page PDF.
 * Returns the file path.
 */
export function exportViewToPdf(view: View, options?: ExportPdfOptions): Promise<ExportPdfResult>;
