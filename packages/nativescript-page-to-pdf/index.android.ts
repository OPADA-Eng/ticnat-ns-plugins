import { Utils, type View } from '@nativescript/core';
import { ensureViewLayout, resolvePdfPath, type ExportPdfOptions, type ExportPdfResult } from './common';

function toAndroidView(nsView: View): android.view.View {
  const native = nsView.nativeViewProtected;
  if (!native) throw new Error('View has no nativeView. Ensure it is created and attached.');
  return native as android.view.View;
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

    return { filePath };
  } finally {
    pdfDoc.close();
  }
}
