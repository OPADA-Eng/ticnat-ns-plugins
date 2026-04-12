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
   * Useful when exporting a view that is not yet measured.
   */
  ensureLayout?: boolean;

  /**
   * Optional background color for the PDF page.
   * Android: ARGB int, iOS: UIColor. If omitted, the view draws as-is.
   */
  backgroundColor?: any;

  /**
   * If true, open the generated PDF right after saving.
   */
  openAfterSave?: boolean;

  /**
   * MIME type used when opening the file (Android).
   * Default: "application/pdf"
   */
  mimeType?: string;
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
 * Minor change: if a ScrollView is passed, export its `content` instead,
 * so we can capture beyond the visible viewport.
 *
 * Note: this fixes the common case where the caller passes the ScrollView itself.
 * For full "entire scroll content" export you may still need ensureLayout and/or
 * a dedicated multi-page export if content is extremely tall.
 */
export function unwrapScrollableContent(view: View): View {
  const anyView: any = view as any;

  // NativeScript ScrollView exposes `content` (single child)
  if (anyView && anyView.content) {
    return anyView.content as View;
  }

  return view;
}

/**
 * Make sure view has valid measured/layout size.
 */
export function ensureViewLayout(view: View) {
  // If view already has size, keep it.
  const w = view.getMeasuredWidth?.() ?? 0;
  const h = view.getMeasuredHeight?.() ?? 0;

  if (w > 0 && h > 0) return;

  const width = (view as any).getActualSize?.()?.width ?? view.getMeasuredWidth?.() ?? 0;
  const height = (view as any).getActualSize?.()?.height ?? view.getMeasuredHeight?.() ?? 0;

  // If still unknown, do a minimal measure/layout; for on-screen Page this should not happen.
  const mw = width > 0 ? width : 1080;
  const mh = height > 0 ? height : 1920;

  view.measure(mw, mh);
  view.layout(0, 0, mw, mh);
}
