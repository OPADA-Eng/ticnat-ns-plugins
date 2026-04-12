/**
 * NativescriptXPrinterBt class for connecting to a Bluetooth printer and printing text/images using CPCL commands.
 *
 * @extends NativescriptXPrinterBtCommon
 */
export declare class NativescriptXPrinterBt extends NativescriptXPrinterBtCommon {
  /** BluetoothPrintService instance for Bluetooth printing. */
  ptrConn: com.ticnat.prtsrv.BluetoothPrintService;
  /** Bluetooth device connection instance. */
  ptrConnection: net.posprinter.IDeviceConnection;
  /** Bluetooth adapter for handling Bluetooth connections. */
  bluetoothAdapter: any;
  /** BluetoothPermissions instance for managing Bluetooth-related permissions. */
  bluetoothPermissions: BluetoothPermissions;
  /** Bluetooth device object. */
  bluetoothDevice: any;
  /** Bluetooth device address. */
  address: string;

  /**
   * Constructor for NativescriptXPrinterBt class.
   */
  constructor();

  /**
   * Connects to a Bluetooth printer with the specified address.
   *
   * @param address - Address of the Bluetooth printer.
   * @returns A promise resolving when the connection is successful.
   */
  connect(address: string): Promise<void>;

  /**
   * Initializes the XPrinterBt for Bluetooth printing.
   *
   * @param printHeight - Height for printing.
   * @returns A promise resolving to CPCLPrinter instance for further printing.
   */
  initXPrinterBt(printHeight: number): Promise<net.posprinter.CPCLPrinter>;

  /**
   * Prints free text or an array of text on the connected Bluetooth printer.
   *
   * @param text - Text to be printed.
   * @param printHeight - Height for printing.
   * @param startX - X-coordinate for starting position.
   * @param startY - Y-coordinate for starting position.
   * @param arrText - Array of text objects with x, y, and text properties.
   */
  printFreeText(
    text: string,
    printHeight?: number,
    startX?: number,
    startY?: number,
    arrText?: {
      text: string;
      x: number;
      y: number;
    }[]
  ): void;

  /**
   * Displays a toast message on the Android device.
   *
   * @param text - Text to be displayed in the toast.
   * @param duration - Duration of the toast ('short' or 'long').
   * @returns Toast object.
   */
  Toast(text: any, duration: any): any;

  /**
   * Checks if the printer is connected.
   *
   * @returns True if the printer is connected, false otherwise.
   */
  isConnected: () => boolean;

  /**
   * Disconnects from the connected Bluetooth printer.
   */
  disconnect(): void;

  /**
   * Prints an image on the connected Bluetooth printer.
   *
   * @param bitmap - Bitmap image to be printed.
   * @param printHeight - Height for printing.
   * @param printWidth - Width for printing.
   * @param setExtraPaddingAfterPrint - Whether to add extra padding after printing.
   * @param startX - X-coordinate for starting position.
   * @param startY - Y-coordinate for starting position.
   * @param QRCodeData - Data for QR code (if applicable) {qrX:number,qrY:number,qrData:any}.
   */
  public printImg(bitmap: any, printHeight?: number, printWidth?: number, setExtraPaddingAfterPrint?: boolean, startX?: number, startY?: number, QRCodeData: { qrX: number; qrY: number; qrData: any } = null);
}
