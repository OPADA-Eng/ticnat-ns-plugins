import { Application, type View } from '@nativescript/core';
import { ensureViewLayout, resolvePdfPath, unwrapScrollableContent, type ExportPdfOptions, type ExportPdfResult } from './common';

function toUIView(nsView: View): UIView {
  const native = nsView.nativeViewProtected as UIView;
  if (!native) throw new Error('View has no nativeView. Ensure it is created and attached.');
  return native;
}

function openFileIOS(filePath: string) {
  const url = NSURL.fileURLWithPath(filePath);
  const root = Application.ios?.rootController;
  if (!root) return;

  const controller = UIDocumentInteractionController.interactionControllerWithURL(url);
  controller.presentOptionsMenuFromRectInViewAnimated(root.view.bounds, root.view, true);
}

export async function exportViewToPdf(view: View, options?: ExportPdfOptions): Promise<ExportPdfResult> {
  if (!view) throw new Error('exportViewToPdf: view is required');

  // ✅ Minor change: if ScrollView, export its content
  view = unwrapScrollableContent(view);

  if (options?.ensureLayout) {
    ensureViewLayout(view);
  }

  const filePath = resolvePdfPath(options);
  const uiView = toUIView(view);

  const size = uiView.bounds.size;
  const width = size.width;
  const height = size.height;

  if (!width || !height) {
    throw new Error(`exportViewToPdf: view has invalid size (w=${width}, h=${height}). Try options.ensureLayout=true.`);
  }

  const url = NSURL.fileURLWithPath(filePath);

  // iOS 10+ preferred API
  if (typeof UIGraphicsPDFRenderer !== 'undefined') {
    const bounds = CGRectMake(0, 0, width, height);
    const format = UIGraphicsPDFRendererFormat.defaultFormat();
    const renderer = UIGraphicsPDFRenderer.alloc().initWithBoundsFormat(bounds, format);

    const data = renderer.PDFDataWithActions((ctx) => {
      ctx.beginPage();
      const cg = ctx.CGContext;

      // Optional background
      if (options?.backgroundColor) {
        (options.backgroundColor as UIColor).setFill();
        UIRectFill(bounds);
      }

      // Render view hierarchy (more accurate for some UI)
      // Fallback to layer render if needed.
      const ok = uiView.drawViewHierarchyInRectAfterScreenUpdates(bounds, true);
      if (!ok) {
        uiView.layer.renderInContext(cg);
      }
    });

    data.writeToURLAtomically(url, true);
  } else {
    // Legacy fallback (older iOS)
    const bounds = CGRectMake(0, 0, width, height);
    const pdfData = NSMutableData.data();
    UIGraphicsBeginPDFContextToData(pdfData, bounds, null);
    UIGraphicsBeginPDFPage();

    if (options?.backgroundColor) {
      (options.backgroundColor as UIColor).setFill();
      UIRectFill(bounds);
    }

    const ctx = UIGraphicsGetCurrentContext();
    if (ctx) {
      const ok = uiView.drawViewHierarchyInRectAfterScreenUpdates(bounds, true);
      if (!ok) {
        uiView.layer.renderInContext(ctx);
      }
    }

    UIGraphicsEndPDFContext();
    pdfData.writeToURLAtomically(url, true);
  }

  // ✅ Mini modification: open after save
  if (options?.openAfterSave) {
    openFileIOS(filePath);
  }

  return { filePath };
}
