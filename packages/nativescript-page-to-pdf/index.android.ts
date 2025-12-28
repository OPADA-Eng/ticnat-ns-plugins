import { Application, type View } from '@nativescript/core';
import { ensureViewLayout, resolvePdfPath, type ExportPdfOptions, type ExportPdfResult } from './common';

function toAndroidView(nsView: View): android.view.View {
  const native = nsView.nativeViewProtected;
  if (!native) throw new Error('View has no nativeView. Ensure it is created and attached.');
  return native as android.view.View;
}

function openFileAndroid(filePath: string, mimeType: string) {
  const ctx = Application.android.context;
  const file = new java.io.File(filePath);
  if (!file.exists()) throw new Error(`PDF file does not exist: ${filePath}`);

  const intent = new android.content.Intent(android.content.Intent.ACTION_VIEW);
  intent.addFlags(android.content.Intent.FLAG_ACTIVITY_NEW_TASK);
  intent.addFlags(android.content.Intent.FLAG_GRANT_READ_URI_PERMISSION);

  // Try FileProvider first (required on modern Android)
  let uri: android.net.Uri | null = null;
  try {
    const authority = ctx.getPackageName() + '.provider';
    uri = androidx.core.content.FileProvider.getUriForFile(ctx, authority, file);
  } catch (e) {
    // Fallback to file:// (may fail on newer Android if StrictMode blocks it)
    uri = android.net.Uri.fromFile(file);
  }

  intent.setDataAndType(uri, mimeType);

  // If no app can open it, this throws.
  try {
    ctx.startActivity(intent);
  } catch (e) {
    throw new Error(`No app found to open PDF or FileProvider misconfigured. filePath=${filePath}. ` + `On Android 7+ you may need a FileProvider with authority "${ctx.getPackageName()}.provider". Original: ${e}`);
  }
}

export async function exportViewToPdf(view: View, options?: ExportPdfOptions): Promise<ExportPdfResult> {
  if (!view) throw new Error('exportViewToPdf: view is required');

  if (options?.ensureLayout) {
    ensureViewLayout(view);
  }

  const filePath = resolvePdfPath(options);

  const aView = toAndroidView(view);

  // Ensure width/height
  const width = aView.getWidth() || aView.getMeasuredWidth();
  const height = aView.getHeight() || aView.getMeasuredHeight();
  if (!width || !height) {
    throw new Error(`exportViewToPdf: view has invalid size (w=${width}, h=${height}). Try options.ensureLayout=true.`);
  }

  // Create PDF document
  const pdfDoc = new android.graphics.pdf.PdfDocument();
  try {
    const pageInfo = new android.graphics.pdf.PdfDocument.PageInfo.Builder(width, height, 1).create();
    const page = pdfDoc.startPage(pageInfo);

    const canvas = page.getCanvas();

    // Optional background
    if (options?.backgroundColor != null) {
      const paint = new android.graphics.Paint();
      paint.setStyle(android.graphics.Paint.Style.FILL);
      paint.setColor(options.backgroundColor as number);
      canvas.drawRect(new android.graphics.Rect(0, 0, width, height), paint);
    }

    // Draw the view to PDF canvas
    aView.draw(canvas);

    pdfDoc.finishPage(page);

    // Write file
    const outFile = new java.io.File(filePath);
    outFile.getParentFile()?.mkdirs();

    const fos = new java.io.FileOutputStream(outFile);
    try {
      pdfDoc.writeTo(fos);
      fos.flush();
    } finally {
      fos.close();
    }

    // ✅ Mini modification: open after save
    if (options?.openAfterSave) {
      openFileAndroid(filePath, options?.mimeType || 'application/pdf');
    }

    return { filePath };
  } finally {
    pdfDoc.close();
  }
}
