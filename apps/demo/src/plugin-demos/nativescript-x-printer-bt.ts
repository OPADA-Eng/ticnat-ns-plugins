import { Observable, EventData, Page, View, ImageSource, Image, knownFolders } from '@nativescript/core';
import { DemoSharedNativescriptXPrinterBt } from '@demo/shared';
import { NativescriptXPrinterBt } from '@ticnat/nativescript-x-printer-bt';

export function navigatingTo(args: EventData) {
  const page = <Page>args.object;
  page.bindingContext = new DemoModel(page);
}

export class DemoModel extends DemoSharedNativescriptXPrinterBt {
  public printer: NativescriptXPrinterBt;
  private _printerAddress = 'DC:0D:30:D7:6C:B3';
  public textToPrint = 'Text to print';
  public printerState = '';
  public connectVisible = true;
  public disconnectVisible = false;

  constructor(public page) {
    super();
    this.printer = new NativescriptXPrinterBt();
  }
  public get printerAddress() {
    return this._printerAddress;
  }
  public set printerAddress(printerAddress: string) {
    this._printerAddress = printerAddress;
  }

  connect() {
    try {
      console.log({ printerAddress2: this.printerAddress });
      this.printer.connect(this.printerAddress);
      this.set('printerState', this.printer.ptrConn.getState());
      this.set('connectVisible', false);
      this.set('disconnectVisible', true);
    } catch (e) {
      console.log(e);
    }
  }

  disconnect() {
    this.printer.disconnect();
    this.set('connectVisible', true);
    this.set('disconnectVisible', false);
  }

  printText() {
    this.printer.printFreeText(this.textToPrint, 100, 100, 0);
  }

  public screenShot(view) {
    return new Promise((resolve, reject) => {
      try {
        view.android.setDrawingCacheEnabled(true);
        view.android.buildDrawingCache(true);
        setTimeout(() => {
          const b = view.android.getDrawingCache();
          let returnedBitmap = null;
          if (b != null) {
            returnedBitmap = android.graphics.Bitmap.createBitmap(b);
            returnedBitmap = this.decreaseBmpSize(returnedBitmap);
          } else {
            const scrollView = this.page.getViewById('printArea');
            const height = scrollView.android.getChildAt(0).getHeight();
            const width = scrollView.android.getChildAt(0).getWidth();
            returnedBitmap = this.getBitmapFromView(view, height, width);
            returnedBitmap = this.decreaseBmpSize(returnedBitmap);
          }
          view.android.setDrawingCacheEnabled(false);
          resolve(returnedBitmap);
        }, 1000);
      } catch (e) {
        console.log(e);
        reject(null);
      }
    });
  }
  public decreaseBmpSize(bmp: android.graphics.Bitmap) {
    console.log('bitmap before resize', bmp.getByteCount() / 1000000, ' MB');
    const options = new android.graphics.BitmapFactory.Options();
    options.inSampleSize = 2;
    options.inJustDecodeBounds = false;
    const stream = new java.io.ByteArrayOutputStream();
    bmp.compress(android.graphics.Bitmap.CompressFormat.PNG, 1, stream);
    let compressedBmp = null;
    const byteArray = stream.toByteArray();
    console.log('byteArray: ', byteArray?.length);
    compressedBmp = android.graphics.BitmapFactory.decodeByteArray(byteArray, 0, byteArray.length, options);
    if (compressedBmp != null) {
      console.log('bitmap after compress size', compressedBmp.getByteCount() / 1000000, ' MB');
      return compressedBmp;
    } else {
      return bmp;
    }
  }

  public getBitmapFromView(view: View, totalHeight, totalWidth) {
    const returnedBitmap = android.graphics.Bitmap.createBitmap(totalWidth, totalHeight, android.graphics.Bitmap.Config.RGB_565);
    view.layout(0, 0, totalWidth, totalHeight);
    const canvas = new android.graphics.Canvas(returnedBitmap);
    const bgDrawable = view.android.getBackground();
    if (bgDrawable != null) bgDrawable.draw(canvas);
    view.android.draw(canvas);
    return returnedBitmap;
  }

  public getResizedBitmap(bm, newWidth, newHeight) {
    const width = bm.getWidth();
    const height = bm.getHeight();
    const scaleWidth = newWidth / width;
    const scaleHeight = newHeight / height;
    // CREATE A MATRIX FOR THE MANIPULATION
    const matrix = new android.graphics.Matrix();
    // RESIZE THE BIT MAP
    matrix.postScale(scaleWidth, scaleHeight);

    // "RECREATE" THE NEW BITMAP
    const resizedBitmap = android.graphics.Bitmap.createBitmap(bm, 0, 0, width, height, matrix, false);
    bm.recycle();
    return resizedBitmap;
  }

  public appendScreenshot(bmp) {
    const source = new ImageSource();
    source.setNativeSource(bmp);
    const image = new Image();
    image.src = source;
    const sView = this.page.getViewById('screenShots');
    if (sView) sView.addChild(image);
  }

  printImg() {
    const view = this.page.getViewById('printArea');

    this.screenShot(view)
      .then((bmp: any) => {
        if (bmp != null) {
          console.log('after scaling down: Width×Height: ', bmp.getWidth(), bmp.getHeight());

          let width = bmp.getWidth();
          const height = bmp.getHeight();
          console.log('Width×Height: ', width, height);

          // resize the image bmp
          if (width < 800 || width >= 1200) {
            width = 576;
          }
          bmp = android.graphics.Bitmap.createScaledBitmap(bmp, width, height, true);
          bmp = this.getResizedBitmap(bmp, width, height);
          // this.appendScreenshot(bmp)
          // this.printer.initXPrinterBt(height).then((res) => {
          // 	res.addSpeed(5);
          // 	res.addCGraphics(0, 0, height, bmp);
          // 	res.addPrint();

          // }).catch((err) => {
          // 	console.log(err);
          // })
          this.printer.printImg(bmp, height + 200, width, true, 0, 0, { qrX: parseInt((width / 2).toFixed(0)), qrY: height, qrData: 'Saleh' });
        }
      })
      .catch((err) => {
        console.log(err);
      });
  }
}
