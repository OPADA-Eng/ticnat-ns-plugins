import { knownFolders, path, type View } from '@nativescript/core';

export interface ExportPdfOptions {
  /**
   * File name, e.g. "report.pdf" (".pdf" will be appended if missing)
   */
  fileName?: string;

  /**
   * Output folder. Defaults to Documents folder.
   */
  outputFolder?: string;

  /**
   * If true, will try to layout the view before rendering.
   * Useful when exporting a view that is already on screen it’s usually not needed.
   */
  ensureLayout?: boolean;

  /**
   * Optional background color for the PDF page.
   * Android: ARGB int, iOS: UIColor. If omitted, the view draws as-is.
   */
  backgroundColor?: any;
}

export interface ExportPdfResult {
  filePath: string;
}

export function resolvePdfPath(options?: ExportPdfOptions): string {
  const folder = options?.outputFolder || knownFolders.documents().path;
  let name = (options?.fileName || `export-${Date.now()}.pdf`).trim();
  if (!name.toLowerCase().endsWith('.pdf')) name += '.pdf';
  return path.join(folder, name);
}

/**
 * Make sure view has valid measured/layout size.
 */
export function ensureViewLayout(view: View) {
  // If view already has size, keep it.
  const w = view.getMeasuredWidth?.() ?? 0;
  const h = view.getMeasuredHeight?.() ?? 0;

  if (w > 0 && h > 0) return;

  // Fallback layout pass: measure & layout using current screen constraints.
  const width = view.getActualSize?.()?.width ?? view.getMeasuredWidth?.() ?? 0;
  const height = view.getActualSize?.()?.height ?? view.getMeasuredHeight?.() ?? 0;

  // If still unknown, do a minimal measure/layout; for on-screen Page this should not happen.
  const mw = width > 0 ? width : 1080;
  const mh = height > 0 ? height : 1920;

  view.measure(mw, mh);
  view.layout(0, 0, mw, mh);
}
