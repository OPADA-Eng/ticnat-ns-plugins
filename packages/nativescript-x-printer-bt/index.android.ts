import { NativescriptXPrinterBtCommon } from './common';
import { BluetoothPermissions } from './android/android_main';
import { Utils } from '@nativescript/core';

declare const android: any;
const Toast = android.widget.Toast;

/**
 * NativescriptXPrinterBt class for connecting to a Bluetooth printer and printing text/images using CPCL commands.
 */
export class NativescriptXPrinterBt extends NativescriptXPrinterBtCommon {
  /** BluetoothPrintService instance for Bluetooth printing. */
  public ptrConn: com.ticnat.prtsrv.BluetoothPrintService;
  /** Bluetooth device connection instance. */
  public ptrConnection: net.posprinter.IDeviceConnection;
  /** Bluetooth adapter for handling Bluetooth connections. */
  public bluetoothAdapter: any;
  /** BluetoothPermissions instance for managing Bluetooth-related permissions. */
  public bluetoothPermissions: BluetoothPermissions;
  /** Bluetooth device object. */
  public bluetoothDevice: any;
  /** Bluetooth device address. */
  public address: string;

  /**
   * Constructor for NativescriptXPrinterBt class.
   */
  constructor() {
    super();
    this.bluetoothPermissions = new BluetoothPermissions();
    if (!this.bluetoothPermissions.coarseLocationPermissionGranted()) {
      this.bluetoothPermissions.requestCoarseLocationPermission();
    }
    const handler = new android.os.Handler();
    this.ptrConn = new com.ticnat.prtsrv.BluetoothPrintService(handler);
    this.bluetoothAdapter = this.ptrConn.mAdapter;
  }

  /**
   * Connects to a Bluetooth printer with the specified address.
   * @param address - Address of the Bluetooth printer.
   */
  public async connect(address: string) {
    if (this.ptrConn && address != '') {
      if (this.bluetoothAdapter.isEnabled()) {
        this.ptrConn.connect(this.bluetoothAdapter.getRemoteDevice(address), true);
        this.address = address;
        this.Toast('Connecting To: ' + address, 'long').show();
        console.log(`this.ptrConn:${this.ptrConn.getState()}`);
        if (this.debug) console.log('Connected To: ' + address);
      } else {
        await this.bluetoothAdapter.enable();
        console.log('Bluetooth enabled press button again to connect ');
        this.connect(address);
      }
    }
  }

  /**
   * Initializes the XPrinterBt for Bluetooth printing.
   * @param printHeight - Height for printing.
   * @returns A promise resolving to CPCLPrinter instance for further printing.
   */
  public initXPrinterBt(printHeight: number): Promise<net.posprinter.CPCLPrinter> {
    return new Promise((resolve, reject) => {
      let CPCLPrinterInstance: net.posprinter.CPCLPrinter = null;
      net.posprinter.POSConnect.init(Utils.android.getApplicationContext());
      const ptrConnection = net.posprinter.POSConnect.createDevice(net.posprinter.POSConnect.DEVICE_TYPE_BLUETOOTH);
      ptrConnection.connect(
        this.address,
        new net.posprinter.IPOSListener({
          onStatus: function (code, msg) {
            if (code == net.posprinter.POSConnect.CONNECT_SUCCESS) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: Connection successful');
              const XPrinterBt = new net.posprinter.CPCLPrinter(ptrConnection);
              CPCLPrinterInstance = XPrinterBt.initializePrinter(printHeight);
              CPCLPrinterInstance.addAlign(net.posprinter.CPCLConst.ALIGNMENT_CENTER);
              resolve(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.CONNECT_FAIL) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: Connection failed');
              reject(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.CONNECT_INTERRUPT) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: Disconnected');
              reject(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.SEND_FAIL) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: fail in send');
              reject(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.USB_ATTACHED) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: USB Attached');
              reject(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.USB_DETACHED) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: USB Detached');
              reject(CPCLPrinterInstance);
            } else if (code == net.posprinter.POSConnect.BLUETOOTH_INTERRUPT) {
              console.log('code: ', code, 'onStatus: ', msg, 'description: Bluetooth Interrupt');
              reject(CPCLPrinterInstance);
            }
          },
        })
      );
    });
  }

  /**
   * Prints free text or an array of text on the connected Bluetooth printer.
   * @param text - Text to be printed.
   * @param printHeight - Height for printing.
   * @param startX - X-coordinate for starting position.
   * @param startY - Y-coordinate for starting position.
   * @param arrText - Array of text objects with x, y, and text properties.
   */
  public printFreeText(text: string, printHeight = 300, startX = 0, startY = 0, arrText: { text: string; x: number; y: number }[] = []) {
    this.initXPrinterBt(printHeight)
      .then((CPCLPrinterInstance: net.posprinter.CPCLPrinter) => {
        if (CPCLPrinterInstance) {
          CPCLPrinterInstance.setCharSet('UTF-8');
          if (arrText.length > 0) {
            arrText.forEach((element) => {
              CPCLPrinterInstance.addText(element.x, element.y, element.text);
            });
          } else {
            CPCLPrinterInstance.addText(startX, startY, text);
          }

          CPCLPrinterInstance.addPrint();
        } else console.log({ CPCLPrinterInstance });
      })
      .catch((e) => console.log(e));
  }

  /**
   * Displays a toast message on the Android device.
   * @param text - Text to be displayed in the toast.
   * @param duration - Duration of the toast ('short' or 'long').
   * @returns Toast object.
   */
  public Toast(text, duration) {
    if (typeof text !== 'string') {
      throw new Error('The `text` parameter is missing.');
    }
    const d = typeof duration === 'string' && duration[0] === 'l' ? Toast.LENGTH_LONG : Toast.LENGTH_SHORT;
    return Toast.makeText(Utils.android.getApplicationContext(), text, d);
  }

  /**
   * Checks if the printer is connected.
   * @returns True if the printer is connected, false otherwise.
   */
  public isConnected = () => this.ptrConn.getState() == 3;

  /**
   * Disconnects from the connected Bluetooth printer.
   */
  public disconnect() {
    if (this.ptrConn != null) {
      this.ptrConn.stop();
      this.Toast('Disconnected From: ' + this.address, 'long').show();
      if (this.debug) console.log('Disconnected From: ' + this.address);
    }
  }

  /**
   * Prints an image on the connected Bluetooth printer.
   * @param bitmap - Bitmap image to be printed.
   * @param printHeight - Height for printing.
   * @param setExtraPaddingAfterPrint - Whether to add extra padding after printing.
   * @param startX - X-coordinate for starting position.
   * @param startY - Y-coordinate for starting position.
   * @param QRCodeData - Data for QR code (if applicable) {qrX:number,qrY:number,qrData:any}.
   */
  public printImg(bitmap, printHeight = 300, printWidth = 570, setExtraPaddingAfterPrint = true, startX = 0, startY = 0, QRCodeData: { qrX: number; qrY: number; qrData: any } = null) {
    this.initXPrinterBt(printHeight)
      .then((CPCLPrinterInstance: net.posprinter.CPCLPrinter) => {
        CPCLPrinterInstance.addCGraphics(startX, startY, printWidth, bitmap);
        CPCLPrinterInstance.addSpeed(5);
        // CPCLPrinterInstance.addEGraphics(startX, startY, printWidth, bitmap);
        //* CPCLPrinter addEGraphics(int x, int y, int width, Bitmap bmp) Use hexadecimal character type to transmit image data

        if (QRCodeData != null) {
          console.log({ QRCodeData });
          CPCLPrinterInstance.addQRCode(QRCodeData.qrX, QRCodeData.qrY, QRCodeData.qrData);
        }
        if (setExtraPaddingAfterPrint) {
          //addLine(int x, int y, int xend, int yend, int thickness)
          CPCLPrinterInstance.addLine(startX, printHeight - 1, printWidth, printHeight, 1);
          // CPCLPrinterInstance.addText(startX, startY + printHeight, '\n\n');
        }
        CPCLPrinterInstance.addPrint();
      })
      .catch((e) => console.log(e));
  }
}
