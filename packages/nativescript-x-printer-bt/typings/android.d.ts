/// <reference path= "android-declarations.d.ts"/>

declare namespace a {
  export class a extends globalAndroid.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Boolean> {
    public static class: java.lang.Class<a.a>;
    public constructor(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.BackgroundInit);
    public a(param0: java.lang.Boolean): void;
    public a(param0: androidNative.Array<java.lang.Void>): java.lang.Boolean;
  }
}

declare namespace b {
  export class a extends b.d {
    public static class: java.lang.Class<b.a>;
    public constructor();
    public constructor(param0: net.posprinter.posprinterface.StatusCallBack);
    public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
    public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
    public close(): void;
    /** @deprecated */
    public isConnect(): boolean;
    public isConnect(): boolean;
    public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
    public connect(param0: string, param1: net.posprinter.IPOSListener): void;
    public readSync(param0: number): androidNative.Array<number>;
    public sendSync(param0: androidNative.Array<number>): number;
    public b(): c.d;
    public a(param0: string): c.d;
    public a(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
    public a(): c.d;
    public a(param0: androidNative.Array<number>): c.d;
    public a(param0: number, param1: string): void;
    public sendData(param0: androidNative.Array<number>): void;
    public sendData(param0: java.util.List<androidNative.Array<number>>): void;
  }
  export namespace a {
    export class a {
      public static class: java.lang.Class<b.a.a>;
      public onReceive(param0: globalAndroid.content.Context, param1: globalAndroid.content.Intent): void;
    }
  }
}

declare namespace b {
  export class b extends b.d {
    public static class: java.lang.Class<b.b>;
    public constructor();
    public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
    public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
    public close(): void;
    /** @deprecated */
    public connect(param0: string, param1: net.posprinter.IPOSListener): void;
    public readSync(param0: number): androidNative.Array<number>;
    public isConnect(): boolean;
    public isConnect(): boolean;
    public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
    public sendSync(param0: androidNative.Array<number>): number;
    public a(param0: string): c.d;
    public a(param0: number, param1: string): void;
    public a(param0: androidNative.Array<number>): c.d;
    public a(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
    public a(): c.d;
    public b(): c.d;
    public sendData(param0: androidNative.Array<number>): void;
    public sendData(param0: java.util.List<androidNative.Array<number>>): void;
  }
  export namespace b {
    export class a {
      public static class: java.lang.Class<b.b.a>;
      public onReceive(param0: globalAndroid.content.Context, param1: globalAndroid.content.Intent): void;
    }
  }
}

declare namespace b {
  export class c {
    public static class: java.lang.Class<b.c>;
    public constructor(param0: net.posprinter.IPOSListener);
    public c(): net.posprinter.IDeviceConnection;
    public c(param0: string): void;
    public b(): void;
    public b(param0: string): void;
    public a(param0: number): net.posprinter.IDeviceConnection;
    public a(param0: string): void;
    public a(): void;
    public a(param0: string, param1: string): void;
  }
}

declare namespace b {
  export abstract class d extends net.posprinter.IDeviceConnection {
    public static class: java.lang.Class<b.d>;
    public d: java.util.concurrent.LinkedBlockingQueue<androidNative.Array<number>>;
    public constructor();
    public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    public close(): void;
    public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
    /** @deprecated */
    public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
    public connect(param0: string, param1: net.posprinter.IPOSListener): void;
    public readSync(param0: number): androidNative.Array<number>;
    public isConnect(): boolean;
    public isConnect(): boolean;
    public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
    public sendSync(param0: androidNative.Array<number>): number;
    public a(param0: string): c.d;
    public a(param0: number, param1: string): void;
    public a(): c.d;
    public a(param0: androidNative.Array<number>): c.d;
    public a(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
    public b(): c.d;
    public sendData(param0: androidNative.Array<number>): void;
    public sendData(param0: java.util.List<androidNative.Array<number>>): void;
  }
  export namespace d {
    export class a {
      public static class: java.lang.Class<b.d.a>;
      public run(): void;
    }
  }
}

declare namespace b {
  export class e extends b.d {
    public static class: java.lang.Class<b.e>;
    public constructor();
    public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    public close(): void;
    public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
    /** @deprecated */
    public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
    public connect(param0: string, param1: net.posprinter.IPOSListener): void;
    public readSync(param0: number): androidNative.Array<number>;
    public isConnect(): boolean;
    public isConnect(): boolean;
    public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
    public sendSync(param0: androidNative.Array<number>): number;
    public a(param0: string): c.d;
    public a(): c.d;
    public a(param0: number, param1: string): void;
    public a(param0: androidNative.Array<number>): c.d;
    public a(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
    public b(): c.d;
    public sendData(param0: androidNative.Array<number>): void;
    public sendData(param0: java.util.List<androidNative.Array<number>>): void;
  }
}

declare namespace b {
  export class f extends b.d {
    public static class: java.lang.Class<b.f>;
    public constructor();
    public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    public close(): void;
    public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
    /** @deprecated */
    public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
    public connect(param0: string, param1: net.posprinter.IPOSListener): void;
    public readSync(param0: number): androidNative.Array<number>;
    public isConnect(): boolean;
    public isConnect(): boolean;
    public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
    public sendSync(param0: androidNative.Array<number>): number;
    public a(param0: string): c.d;
    public a(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
    public a(param0: number, param1: string): void;
    public a(param0: androidNative.Array<number>): c.d;
    public a(): c.d;
    public b(): c.d;
    public sendData(param0: androidNative.Array<number>): void;
    public sendData(param0: java.util.List<androidNative.Array<number>>): void;
  }
  export namespace f {
    export class a {
      public static class: java.lang.Class<b.f.a>;
      public onReceive(param0: globalAndroid.content.Context, param1: globalAndroid.content.Intent): void;
    }
    export class b {
      public static class: java.lang.Class<b.f.b>;
      public onReceive(param0: globalAndroid.content.Context, param1: globalAndroid.content.Intent): void;
    }
  }
}

declare namespace c {
  export class a {
    public static class: java.lang.Class<c.a>;
    public static a: c.a;
    public static b: c.a;
    public static c: c.a;
    public static d: c.a;
    public static e: c.a;
    public static f: c.a;
    public static g: c.a;
    public static h: c.a;
    public static i: c.a;
    public static j: c.a;
    public static values(): androidNative.Array<c.a>;
    public static valueOf(param0: string): c.a;
  }
}

declare namespace c {
  export class b {
    public static class: java.lang.Class<c.b>;
    public constructor();
    public g(): string;
    public f(): c.c;
    public b(param0: string): void;
    public b(): string;
    public d(param0: string): void;
    public d(): string;
    public c(param0: string): void;
    public c(): globalAndroid.content.Context;
    public e(): number;
    public e(param0: string): void;
    public i(): string;
    public a(param0: globalAndroid.content.Context): void;
    public a(): boolean;
    public a(param0: number): void;
    public a(param0: boolean): void;
    public a(param0: string): void;
    public a(param0: c.c): void;
    public h(): string;
  }
}

declare namespace c {
  export class c {
    public static class: java.lang.Class<c.c>;
    public static a: c.c;
    public static b: c.c;
    public static c: c.c;
    public static d: c.c;
    public static e: c.c;
    public static valueOf(param0: string): c.c;
    public static values(): androidNative.Array<c.c>;
  }
}

declare namespace c {
  export class d {
    public static class: java.lang.Class<c.d>;
    public constructor();
    public constructor(param0: c.a, param1: string);
    public constructor(param0: c.a, param1: string, param2: number);
    public b(): string;
    public c(): androidNative.Array<number>;
    public a(): c.a;
    public a(param0: androidNative.Array<number>): void;
  }
  export namespace d {
    export class a {
      public static class: java.lang.Class<c.d.a>;
    }
  }
}

declare namespace d {
  export class a {
    public static class: java.lang.Class<d.a>;
    public constructor();
    public a(): androidNative.Array<string>;
  }
  export namespace a {
    export class a {
      public static class: java.lang.Class<d.a.a>;
      public constructor(param0: d.a, param1: string, param2: string);
      public a(): java.util.Vector<java.io.File>;
    }
  }
}

declare namespace e {
  export class a {
    public static class: java.lang.Class<e.a>;
    public static b(param0: string): void;
    public static a(param0: string): void;
  }
}

declare namespace net {
  export namespace posprinter {
    export class CPCLConst {
      public static class: java.lang.Class<net.posprinter.CPCLConst>;
      public static ROTATION_0: string;
      public static ROTATION_90: string;
      public static ROTATION_180: string;
      public static ROTATION_270: string;
      public static FNT_0: string;
      public static FNT_1: string;
      public static FNT_2: string;
      public static FNT_4: string;
      public static FNT_5: string;
      public static FNT_6: string;
      public static FNT_7: string;
      public static FNT_24: string;
      public static FNT_55: string;
      public static BCS_128: string;
      public static BCS_UPCA: string;
      public static BCS_UPCE: string;
      public static BCS_EAN13: string;
      public static BCS_EAN8: string;
      public static BCS_39: string;
      public static BCS_93: string;
      public static BCS_CODABAR: string;
      public static BCS_RATIO_0: number;
      public static BCS_RATIO_1: number;
      public static BCS_RATIO_2: number;
      public static BCS_RATIO_3: number;
      public static BCS_RATIO_4: number;
      public static BCS_RATIO_20: number;
      public static BCS_RATIO_21: number;
      public static BCS_RATIO_22: number;
      public static BCS_RATIO_23: number;
      public static BCS_RATIO_24: number;
      public static BCS_RATIO_25: number;
      public static BCS_RATIO_26: number;
      public static BCS_RATIO_27: number;
      public static BCS_RATIO_28: number;
      public static BCS_RATIO_29: number;
      public static BCS_RATIO_30: number;
      public static QRCODE_MODE_ORG: number;
      public static QRCODE_MODE_ENHANCE: number;
      public static ALIGNMENT_LEFT: string;
      public static ALIGNMENT_CENTER: string;
      public static ALIGNMENT_RIGHT: string;
      public static STS_CONNECT: number;
      public static STS_DISCONNECT: number;
      public constructor();
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class CPCLPrinter extends net.posprinter.a {
      public static class: java.lang.Class<net.posprinter.CPCLPrinter>;
      public addBarcode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): net.posprinter.CPCLPrinter;
      public addBarcode(param0: number, param1: number, param2: string, param3: number, param4: string): net.posprinter.CPCLPrinter;
      public addInverseLine(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.CPCLPrinter;
      public initializePrinter(param0: number): net.posprinter.CPCLPrinter;
      public initializePrinter(param0: number, param1: number): net.posprinter.CPCLPrinter;
      public initializePrinter(param0: number, param1: number, param2: number): net.posprinter.CPCLPrinter;
      public addText(param0: number, param1: number, param2: string): net.posprinter.CPCLPrinter;
      public addText(param0: number, param1: number, param2: string, param3: string): net.posprinter.CPCLPrinter;
      public addText(param0: number, param1: number, param2: string, param3: string, param4: string): net.posprinter.CPCLPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.a;
      public sendData(param0: androidNative.Array<number>): net.posprinter.CPCLPrinter;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.CPCLPrinter;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.a;
      public addBarcodeTextOff(): net.posprinter.CPCLPrinter;
      public addLine(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.CPCLPrinter;
      public addQRCode(param0: number, param1: number, param2: number, param3: number, param4: string): net.posprinter.CPCLPrinter;
      public addQRCode(param0: number, param1: number, param2: string): net.posprinter.CPCLPrinter;
      public addPageWidth(param0: number): net.posprinter.CPCLPrinter;
      public addBox(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.CPCLPrinter;
      public addSpeed(param0: number): net.posprinter.CPCLPrinter;
      public addForm(): net.posprinter.CPCLPrinter;
      public addPrint(): void;
      public addBarcodeV(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): net.posprinter.CPCLPrinter;
      public addBarcodeV(param0: number, param1: number, param2: string, param3: number, param4: string): net.posprinter.CPCLPrinter;
      public addEGraphics(param0: number, param1: number, param2: number, param3: globalAndroid.graphics.Bitmap): net.posprinter.CPCLPrinter;
      public printerStatus(param0: number, param1: net.posprinter.posprinterface.IStatusCallback): void;
      public printerStatus(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public setMag(param0: number, param1: number): net.posprinter.CPCLPrinter;
      public addAlign(param0: string): net.posprinter.CPCLPrinter;
      public addAlign(param0: string, param1: number): net.posprinter.CPCLPrinter;
      public addBeep(param0: number): net.posprinter.CPCLPrinter;
      public isConnect(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public addBarcodeText(): net.posprinter.CPCLPrinter;
      public addCGraphics(param0: number, param1: number, param2: number, param3: globalAndroid.graphics.Bitmap): net.posprinter.CPCLPrinter;
      public constructor(param0: net.posprinter.IDeviceConnection);
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class IDeviceConnection {
      public static class: java.lang.Class<net.posprinter.IDeviceConnection>;
      /**
       * Constructs a new instance of the net.posprinter.IDeviceConnection interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
       */
      public constructor(implementation: { sendData(param0: androidNative.Array<number>): void; sendData(param0: java.util.List<androidNative.Array<number>>): void; sendSync(param0: androidNative.Array<number>): number; readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void; readData(param0: net.posprinter.posprinterface.IDataCallback): void; readSync(param0: number): androidNative.Array<number>; isConnect(): boolean; isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void; setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void; connect(param0: string, param1: net.posprinter.IPOSListener): void; close(): void });
      public constructor();
      public sendData(param0: androidNative.Array<number>): void;
      public sendData(param0: java.util.List<androidNative.Array<number>>): void;
      public connect(param0: string, param1: net.posprinter.IPOSListener): void;
      public readData(param0: net.posprinter.posprinterface.IDataCallback): void;
      public readData(param0: number, param1: net.posprinter.posprinterface.IDataCallback): void;
      public sendSync(param0: androidNative.Array<number>): number;
      public readSync(param0: number): androidNative.Array<number>;
      public isConnect(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.IStatusCallback): void;
      /** @deprecated */
      public isConnect(): boolean;
      public close(): void;
      public setSendCallback(param0: net.posprinter.posprinterface.IStatusCallback): void;
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class IPOSListener {
      public static class: java.lang.Class<net.posprinter.IPOSListener>;
      /**
       * Constructs a new instance of the net.posprinter.IPOSListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
       */
      public constructor(implementation: { onStatus(param0: number, param1: string): void });
      public constructor();
      public onStatus(param0: number, param1: string): void;
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class POSConnect {
      public static class: java.lang.Class<net.posprinter.POSConnect>;
      public static appCtx: globalAndroid.content.Context;
      public static mainThreadExecutor: java.util.concurrent.Executor;
      public static backgroundThreadExecutor: java.util.concurrent.ExecutorService;
      public static CONNECT_SUCCESS: number;
      public static CONNECT_FAIL: number;
      public static SEND_FAIL: number;
      public static CONNECT_INTERRUPT: number;
      public static USB_ATTACHED: number;
      public static USB_DETACHED: number;
      public static BLUETOOTH_INTERRUPT: number;
      public static DEVICE_TYPE_USB: number;
      public static DEVICE_TYPE_BLUETOOTH: number;
      public static DEVICE_TYPE_ETHERNET: number;
      public static DEVICE_TYPE_SERIAL: number;
      /** @deprecated */
      public static init(param0: globalAndroid.content.Context, param1: net.posprinter.IPOSListener): void;
      public static init(param0: globalAndroid.content.Context): void;
      public static connectNet(param0: string): void;
      public static createDevice(param0: number): net.posprinter.IDeviceConnection;
      public static connectMac(param0: string, param1: net.posprinter.IPOSListener): net.posprinter.IDeviceConnection;
      /** @deprecated */
      public static connectUSB(param0: string): void;
      public static connectUSB(): void;
      /** @deprecated */
      public static connectBT(param0: string): void;
      /** @deprecated */
      public static getConnect(): net.posprinter.IDeviceConnection;
      /** @deprecated */
      public static disconnect(): void;
      public static getSerialPort(): java.util.List<string>;
      /** @deprecated */
      public constructor();
      public static exit(): void;
      /** @deprecated */
      public static connectSerial(param0: string, param1: string): void;
      public static GetCopyRight(): string;
      public static getUsbDevice(param0: globalAndroid.content.Context): java.util.List<globalAndroid.hardware.usb.UsbDevice>;
      public static getAppCtx(): globalAndroid.content.Context;
      public static getUsbDevices(param0: globalAndroid.content.Context): java.util.List<string>;
    }
    export namespace POSConnect {
      export class a {
        public static class: java.lang.Class<net.posprinter.POSConnect.a>;
        public handleMessage(param0: globalAndroid.os.Message): void;
      }
      export class b {
        public static class: java.lang.Class<net.posprinter.POSConnect.b>;
        public execute(param0: java.lang.Runnable): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class POSConst {
      public static class: java.lang.Class<net.posprinter.POSConst>;
      public static ALIGNMENT_LEFT: number;
      public static ALIGNMENT_CENTER: number;
      public static ALIGNMENT_RIGHT: number;
      public static FNT_DEFAULT: number;
      public static FNT_FONTB: number;
      public static FNT_BOLD: number;
      public static FNT_REVERSE: number;
      public static FNT_UNDERLINE: number;
      public static FNT_UNDERLINE2: number;
      public static TXT_1WIDTH: number;
      public static TXT_2WIDTH: number;
      public static TXT_3WIDTH: number;
      public static TXT_4WIDTH: number;
      public static TXT_5WIDTH: number;
      public static TXT_6WIDTH: number;
      public static TXT_7WIDTH: number;
      public static TXT_8WIDTH: number;
      public static TXT_1HEIGHT: number;
      public static TXT_2HEIGHT: number;
      public static TXT_3HEIGHT: number;
      public static TXT_4HEIGHT: number;
      public static TXT_5HEIGHT: number;
      public static TXT_6HEIGHT: number;
      public static TXT_7HEIGHT: number;
      public static TXT_8HEIGHT: number;
      public static BMP_NORMAL: number;
      public static BMP_WIDTH_DOUBLE: number;
      public static BMP_HEIGHT_DOUBLE: number;
      public static BMP_WIDTH_HEIGHT_DOUBLE: number;
      public static BCS_UPCA: number;
      public static BCS_UPCE: number;
      public static BCS_EAN8: number;
      public static BCS_EAN13: number;
      public static BCS_JAN8: number;
      public static BCS_JAN13: number;
      public static BCS_ITF: number;
      public static BCS_Codabar: number;
      public static BCS_Code39: number;
      public static BCS_Code93: number;
      public static BCS_Code128: number;
      public static HRI_TEXT_NONE: number;
      public static HRI_TEXT_ABOVE: number;
      public static HRI_TEXT_BELOW: number;
      public static HRI_TEXT_BOTH: number;
      public static QRCODE_EC_LEVEL_L: number;
      public static QRCODE_EC_LEVEL_M: number;
      public static QRCODE_EC_LEVEL_Q: number;
      public static QRCODE_EC_LEVEL_H: number;
      public static CUT_ALL: number;
      public static CUT_HALF: number;
      public static DEVICE_58: number;
      public static DEVICE_80: number;
      public static DEVICE_76: number;
      public static PIN_TWO: number;
      public static PIN_FIVE: number;
      public static STS_UNKNOWN: number;
      public static STS_NORMAL: number;
      public static STS_COVEROPEN: number;
      public static STS_PAPEREMPTY: number;
      public static STS_CASH_OPEN: number;
      public static STS_CASH_CLOSE: number;
      public static STS_TYPE_PRINT: number;
      public static STS_TYPE_OFFLINE: number;
      public static STS_TYPE_ERR: number;
      public static STS_TYPE_PAPER: number;
      public static CONNECT_SUCCESS: number;
      public static CONNECT_FAIL: number;
      public static SEND_FAIL: number;
      public static CONNECT_INTERRUPT: number;
      public static USB_ATTACHED: number;
      public static USB_DETACHED: number;
      public static BLUETOOTH_INTERRUPT: number;
      public static DIRECTION_LEFT_TOP: number;
      public static DIRECTION_LEFT_BOTTOM: number;
      public static DIRECTION_RIGHT_BOTTOM: number;
      public static DIRECTION_RIGHT_TOP: number;
      public static SINGLE_DENSITY_8: number;
      public static DOUBLE_DENSITY_8: number;
      public static SINGLE_DENSITY_24: number;
      public static DOUBLE_DENSITY_24: number;
      public static SPACE_DEFAULT: number;
      public static CODE_PAGE_PC437: number;
      public static CODE_PAGE_KATAKANA: number;
      public static CODE_PAGE_PC850: number;
      public static CODE_PAGE_PC860: number;
      public static CODE_PAGE_PC863: number;
      public static CODE_PAGE_PC865: number;
      public static CODE_PAGE_WEST_EUROPE: number;
      public static CODE_PAGE_GREEK: number;
      public static CODE_PAGE_HEBREW: number;
      public static CODE_PAGE_EAST_EUROPE: number;
      public static CODE_PAGE_IRAN: number;
      public static CODE_PAGE_WPC1252: number;
      public static CODE_PAGE_PC866: number;
      public static CODE_PAGE_PC852: number;
      public static CODE_PAGE_PC858: number;
      public static FONT_STANDARD: number;
      public static FONT_COMPRESS: number;
      public static STS_CONNECT: number;
      public static STS_DISCONNECT: number;
      public static ENCRYPT_NULL: number;
      public static ENCRYPT_WEP64: number;
      public static ENCRYPT_WEP128: number;
      public static ENCRYPT_WPA_AES_PSK: number;
      public static ENCRYPT_WPA_TKIP_PSK: number;
      public static ENCRYPT_WPA_TKIP_AES_PSK: number;
      public static ENCRYPT_WPA2_AES_PSK: number;
      public static ENCRYPT_WPA2_TKIP: number;
      public static ENCRYPT_WPA2_TKIP_AES_PSK: number;
      public static ENCRYPT_WPA_WPA2_MixedMode: number;
      public constructor();
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class POSPrinter extends net.posprinter.a {
      public static class: java.lang.Class<net.posprinter.POSPrinter>;
      public sendData(param0: androidNative.Array<number>): net.posprinter.a;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.POSPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.POSPrinter;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.a;
      public cutPaper(): net.posprinter.POSPrinter;
      public cutPaper(param0: number): net.posprinter.POSPrinter;
      public clearNVImage(): net.posprinter.POSPrinter;
      public setPrintArea(param0: number, param1: number): net.posprinter.POSPrinter;
      public setPrintArea(param0: number, param1: number, param2: number, param3: number): net.posprinter.POSPrinter;
      public setRelativeVertical(param0: number): net.posprinter.POSPrinter;
      public static closeNetSocket(): void;
      public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): net.posprinter.POSPrinter;
      public printBitmap(param0: string, param1: number, param2: number): net.posprinter.POSPrinter;
      public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number, param3: number): net.posprinter.POSPrinter;
      public printBitmap(param0: string, param1: number, param2: number, param3: number): net.posprinter.POSPrinter;
      public printBarCode(param0: string, param1: number, param2: number): net.posprinter.POSPrinter;
      public printBarCode(param0: string, param1: number, param2: number, param3: number, param4: number): net.posprinter.POSPrinter;
      public printBarCode(param0: string, param1: number): net.posprinter.POSPrinter;
      public printBarCode(param0: string, param1: number, param2: number, param3: number, param4: number, param5: number): net.posprinter.POSPrinter;
      public printString(param0: string): net.posprinter.POSPrinter;
      public static searchNetDevice(param0: net.posprinter.posprinterface.UdpCallback): void;
      public printerStatus(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public setPageModel(param0: boolean): net.posprinter.POSPrinter;
      public setCharRightSpace(param0: number): net.posprinter.POSPrinter;
      public printTable(param0: net.posprinter.model.PTable): net.posprinter.POSPrinter;
      public openCashBox(param0: number): net.posprinter.POSPrinter;
      public openCashBox(param0: number, param1: number, param2: number): net.posprinter.POSPrinter;
      public feedLine(param0: number): net.posprinter.POSPrinter;
      public feedLine(): net.posprinter.POSPrinter;
      public isConnect(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public setAbsoluteHorizontal(param0: number): net.posprinter.POSPrinter;
      public setLineSpacing(param0: number): net.posprinter.POSPrinter;
      public printNVImage(param0: number, param1: number): net.posprinter.POSPrinter;
      public static udpNetConfig(param0: androidNative.Array<number>, param1: androidNative.Array<number>, param2: androidNative.Array<number>, param3: androidNative.Array<number>, param4: boolean): void;
      public setMask(param0: androidNative.Array<number>): void;
      public openOrCloseAutoReturnPrintState(param0: number): net.posprinter.POSPrinter;
      public printQRCode(param0: string, param1: number): net.posprinter.POSPrinter;
      public printQRCode(param0: string, param1: number, param2: number, param3: number): net.posprinter.POSPrinter;
      public printQRCode(param0: string, param1: number, param2: number): net.posprinter.POSPrinter;
      public constructor(param0: net.posprinter.IDeviceConnection);
      public printerCheck(param0: number, param1: number, param2: net.posprinter.posprinterface.IDataCallback): void;
      public getSerialNumber(param0: net.posprinter.posprinterface.IDataCallback): void;
      public setRelativeHorizontal(param0: number): net.posprinter.POSPrinter;
      public wifiConfig(param0: androidNative.Array<number>, param1: androidNative.Array<number>, param2: androidNative.Array<number>, param3: string, param4: string, param5: number): void;
      public selectCharacterFont(param0: number): net.posprinter.POSPrinter;
      public cutHalfAndFeed(param0: number): net.posprinter.POSPrinter;
      public printTextAttribute(param0: string, param1: number): net.posprinter.POSPrinter;
      public setPrintDirection(param0: number): net.posprinter.POSPrinter;
      public cashBoxCheck(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public selectCodePage(param0: number): net.posprinter.POSPrinter;
      public printText(param0: string, param1: number, param2: number, param3: number): net.posprinter.POSPrinter;
      public setAlignment(param0: number): net.posprinter.POSPrinter;
      public printPageModelData(): net.posprinter.POSPrinter;
      public downloadNVImage(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number): net.posprinter.POSPrinter;
      public downloadNVImage(param0: string, param1: number): net.posprinter.POSPrinter;
      public setGateway(param0: androidNative.Array<number>): void;
      public feedDot(param0: number): net.posprinter.POSPrinter;
      public printTextSize(param0: string, param1: number): net.posprinter.POSPrinter;
      public selectBitmapModel(param0: number, param1: androidNative.Array<number>): net.posprinter.POSPrinter;
      public setAbsoluteVertical(param0: number): net.posprinter.POSPrinter;
      public initializePrinter(): net.posprinter.POSPrinter;
      public setTurnUpsideDownMode(param0: boolean): net.posprinter.POSPrinter;
      public setTextStyle(param0: number, param1: number): net.posprinter.POSPrinter;
      public printTextAlignment(param0: string, param1: number): net.posprinter.POSPrinter;
      public setBluetooth(param0: string, param1: string): void;
      public setNetAll(param0: androidNative.Array<number>, param1: androidNative.Array<number>, param2: androidNative.Array<number>, param3: boolean): void;
      public setIp(param0: androidNative.Array<number>): void;
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class TSCConst {
      public static class: java.lang.Class<net.posprinter.TSCConst>;
      public static CODE_TYPE_128: string;
      public static CODE_TYPE_128M: string;
      public static CODE_TYPE_EAN128: string;
      public static CODE_TYPE_25: string;
      public static CODE_TYPE_25C: string;
      public static CODE_TYPE_39: string;
      public static CODE_TYPE_39C: string;
      public static CODE_TYPE_93: string;
      public static CODE_TYPE_EAN13: string;
      public static CODE_TYPE_EAN13_2: string;
      public static CODE_TYPE_EAN13_5: string;
      public static CODE_TYPE_EAN8: string;
      public static CODE_TYPE_EAN8_2: string;
      public static CODE_TYPE_EAN8_5: string;
      public static CODE_TYPE_CODA: string;
      public static CODE_TYPE_POST: string;
      public static CODE_TYPE_UPCA: string;
      public static CODE_TYPE_UPCA_2: string;
      public static CODE_TYPE_UPCA_5: string;
      public static CODE_TYPE_UPCE: string;
      public static CODE_TYPE_UPCE_2: string;
      public static CODE_TYPE_UPCE_5: string;
      public static CODE_TYPE_CPOST: string;
      public static CODE_TYPE_MSI: string;
      public static CODE_TYPE_MSIC: string;
      public static CODE_TYPE_PLESSEY: string;
      public static CODE_TYPE_ITF14: string;
      public static CODE_TYPE_EAN14: string;
      public static CODE_TYPE_11: string;
      public static CODE_TYPE_TELEPEN: string;
      public static CODE_TYPE_TELEPENN: string;
      public static CODE_TYPE_PLANET: string;
      public static CODE_TYPE_CODE49: string;
      public static CODE_TYPE_DPI: string;
      public static CODE_TYPE_DPL: string;
      public static READABLE_NONE: number;
      public static READABLE_LEFT: number;
      public static ROTATION_0: number;
      public static ROTATION_90: number;
      public static ROTATION_180: number;
      public static ROTATION_270: number;
      public static ALIGNMENT_LEFT: number;
      public static ALIGNMENT_CENTER: number;
      public static ALIGNMENT_RIGHT: number;
      public static DIRECTION_FORWARD: number;
      public static DIRECTION_REVERSE: number;
      public static FNT_8_12: string;
      public static FNT_12_20: string;
      public static FNT_16_24: string;
      public static FNT_24_32: string;
      public static FNT_32_48: string;
      public static FNT_14_19: string;
      public static FNT_14_25: string;
      public static FNT_21_27: string;
      public static FNT_SIMPLIFIED_CHINESE: string;
      public static FNT_TRADITIONAL_CHINESE: string;
      public static FNT_KOREAN: string;
      public static EC_LEVEL_L: string;
      public static EC_LEVEL_M: string;
      public static EC_LEVEL_Q: string;
      public static EC_LEVEL_H: string;
      public static QRCODE_MODE_AUTO: string;
      public static QRCODE_MODE_MANUAL: string;
      public static PAGE_437: number;
      public static PAGE_850: number;
      public static PAGE_852: number;
      public static PAGE_860: number;
      public static PAGE_863: number;
      public static PAGE_865: number;
      public static PAGE_1250: number;
      public static PAGE_1252: number;
      public static PAGE_1253: number;
      public static PAGE_1254: number;
      public static BMP_MODE_OVERWRITE: number;
      public static BMP_MODE_OR: number;
      public static BMP_MODE_XOR: number;
      public static STS_CONNECT: number;
      public static STS_DISCONNECT: number;
      public constructor();
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class TSCPrinter extends net.posprinter.a {
      public static class: java.lang.Class<net.posprinter.TSCPrinter>;
      public print(param0: number): void;
      public print(): void;
      public blineInch(param0: number, param1: number): net.posprinter.TSCPrinter;
      public setTear(param0: boolean): net.posprinter.TSCPrinter;
      public text(param0: number, param1: number, param2: string, param3: number, param4: number, param5: string): net.posprinter.TSCPrinter;
      public text(param0: number, param1: number, param2: string, param3: string): net.posprinter.TSCPrinter;
      public text(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): net.posprinter.TSCPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.a;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.TSCPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.TSCPrinter;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.a;
      public c(param0: string): void;
      public sound(param0: number, param1: number): net.posprinter.TSCPrinter;
      public a(param0: androidNative.Array<number>): void;
      public a(param0: string): androidNative.Array<number>;
      public a(): void;
      public a(param0: number): void;
      public direction(param0: number): net.posprinter.TSCPrinter;
      public direction(param0: number, param1: boolean): net.posprinter.TSCPrinter;
      public barcode(param0: number, param1: number, param2: string, param3: number, param4: string): net.posprinter.TSCPrinter;
      public barcode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): net.posprinter.TSCPrinter;
      public barcode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): net.posprinter.TSCPrinter;
      public box(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.TSCPrinter;
      public qrcode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: string): net.posprinter.TSCPrinter;
      public qrcode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: number, param7: number, param8: string): net.posprinter.TSCPrinter;
      public qrcode(param0: number, param1: number, param2: number, param3: number, param4: string): net.posprinter.TSCPrinter;
      public qrcode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: string): net.posprinter.TSCPrinter;
      public offsetMm(param0: number): net.posprinter.TSCPrinter;
      public printerStatus(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public printerStatus(param0: number, param1: net.posprinter.posprinterface.IStatusCallback): void;
      public bitmap(param0: number, param1: number, param2: number, param3: number, param4: globalAndroid.graphics.Bitmap): net.posprinter.TSCPrinter;
      public b(param0: string): void;
      public b(param0: number): void;
      public d(param0: string): void;
      public feed(param0: number): net.posprinter.TSCPrinter;
      public gapMm(param0: number, param1: number): net.posprinter.TSCPrinter;
      public sizeInch(param0: number, param1: number): net.posprinter.TSCPrinter;
      public isConnect(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public reference(param0: number, param1: number): net.posprinter.TSCPrinter;
      public erase(param0: number, param1: number, param2: number, param3: number): net.posprinter.TSCPrinter;
      public density(param0: number): net.posprinter.TSCPrinter;
      public cls(): net.posprinter.TSCPrinter;
      public reverse(param0: number, param1: number, param2: number, param3: number): net.posprinter.TSCPrinter;
      public constructor(param0: net.posprinter.IDeviceConnection);
      public limitFeedMm(param0: number): net.posprinter.TSCPrinter;
      public bar(param0: number, param1: number, param2: number, param3: number): net.posprinter.TSCPrinter;
      public sizeMm(param0: number, param1: number): net.posprinter.TSCPrinter;
      public home(): net.posprinter.TSCPrinter;
      public blineMm(param0: number, param1: number): net.posprinter.TSCPrinter;
      public gapInch(param0: number, param1: number): net.posprinter.TSCPrinter;
      public setPeel(param0: boolean): net.posprinter.TSCPrinter;
      public backFeed(param0: number): net.posprinter.TSCPrinter;
      public formFeed(): net.posprinter.TSCPrinter;
      public codePage(param0: number): net.posprinter.TSCPrinter;
      public cut(): net.posprinter.TSCPrinter;
      public speed(param0: number): net.posprinter.TSCPrinter;
      public limitFeedInch(param0: number): net.posprinter.TSCPrinter;
      public offsetInch(param0: number): net.posprinter.TSCPrinter;
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class ZPLConst {
      public static class: java.lang.Class<net.posprinter.ZPLConst>;
      public static ROTATION_0: string;
      public static ROTATION_90: string;
      public static ROTATION_180: string;
      public static ROTATION_270: string;
      public static FNT_A: string;
      public static FNT_B: string;
      public static FNT_C: string;
      public static FNT_D: string;
      public static FNT_E: string;
      public static FNT_F: string;
      public static FNT_G: string;
      public static FNT_0: string;
      public static CODE_PAGE_UTF8: number;
      public static CODE_PAGE_UTF16: number;
      public static CODE_PAGE_UTF16_2: number;
      public static CODE_PAGE_USA1: number;
      public static CODE_PAGE_USA2: number;
      public static CODE_PAGE_UK: number;
      public static CODE_PAGE_NL: number;
      public static CODE_PAGE_DK: number;
      public static CODE_PAGE_SWEDE: number;
      public static CODE_PAGE_GER: number;
      public static CODE_PAGE_FR1: number;
      public static CODE_PAGE_FR2: number;
      public static CODE_PAGE_ITA: number;
      public static CODE_PAGE_ES: number;
      public static CODE_PAGE_JA: number;
      public static BCS_CODE11: string;
      public static BCS_INTERLEAVED2OF5: string;
      public static BCS_CODE39: string;
      public static BCS_EAN8: string;
      public static BCS_UPCE: string;
      public static BCS_CODE93: string;
      public static BCS_CODE128: string;
      public static BCS_EAN13: string;
      public static BCS_CODABAR: string;
      public static BCS_MSI: string;
      public static BCS_PLESSEY: string;
      public static BCS_UPC_EAN: string;
      public static BCS_UPCA: string;
      public static HRI_TEXT_NONE: number;
      public static HRI_TEXT_ABOVE: number;
      public static HRI_TEXT_BELOW: number;
      public static STS_CONNECT: number;
      public static STS_DISCONNECT: number;
      public constructor();
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class ZPLPrinter extends net.posprinter.a {
      public static class: java.lang.Class<net.posprinter.ZPLPrinter>;
      public addEnd(): net.posprinter.ZPLPrinter;
      public addBarcode(param0: number, param1: number, param2: string, param3: string, param4: number, param5: string, param6: number, param7: number): net.posprinter.ZPLPrinter;
      public addBarcode(param0: number, param1: number, param2: string, param3: string, param4: number): net.posprinter.ZPLPrinter;
      public addBarcode(param0: number, param1: number, param2: string, param3: string): net.posprinter.ZPLPrinter;
      public addQRCode(param0: number, param1: number, param2: string): net.posprinter.ZPLPrinter;
      public addQRCode(param0: number, param1: number, param2: number, param3: string): net.posprinter.ZPLPrinter;
      public addBox(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.ZPLPrinter;
      public addBox(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number): net.posprinter.ZPLPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.a;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.ZPLPrinter;
      public sendData(param0: androidNative.Array<number>): net.posprinter.ZPLPrinter;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.a;
      public addBitmap(param0: number, param1: number, param2: string, param3: number, param4: number): net.posprinter.ZPLPrinter;
      public addBitmap(param0: number, param1: number, param2: string): net.posprinter.ZPLPrinter;
      public downloadBitmap(param0: number, param1: string, param2: globalAndroid.graphics.Bitmap): net.posprinter.ZPLPrinter;
      public addReverse(param0: number, param1: number, param2: number, param3: number): net.posprinter.ZPLPrinter;
      public addReverse(param0: number, param1: number, param2: number, param3: number, param4: number): net.posprinter.ZPLPrinter;
      public setPrinterWidth(param0: number): net.posprinter.ZPLPrinter;
      public addPrintCount(param0: number): net.posprinter.ZPLPrinter;
      public addText(param0: number, param1: number, param2: string, param3: string): net.posprinter.ZPLPrinter;
      public addText(param0: number, param1: number, param2: string, param3: string, param4: number, param5: number, param6: string): net.posprinter.ZPLPrinter;
      public addText(param0: number, param1: number, param2: string): net.posprinter.ZPLPrinter;
      public addText(param0: number, param1: number, param2: string, param3: number, param4: number, param5: string): net.posprinter.ZPLPrinter;
      public addStart(): net.posprinter.ZPLPrinter;
      public isConnect(param0: net.posprinter.posprinterface.IStatusCallback): void;
      public setCustomFont(param0: string, param1: string, param2: number): net.posprinter.ZPLPrinter;
      public constructor(param0: net.posprinter.IDeviceConnection);
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export class a {
      public static class: java.lang.Class<net.posprinter.a>;
      public b: string;
      public c: net.posprinter.utils.BitmapToByteData.BmpType;
      public sendData(param0: androidNative.Array<number>): net.posprinter.a;
      public sendData(param0: java.util.List<androidNative.Array<number>>): net.posprinter.a;
      public a(param0: string): androidNative.Array<number>;
      public setCharSet(param0: string): void;
      public constructor(param0: net.posprinter.IDeviceConnection);
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace model {
      export class PTable {
        public static class: java.lang.Class<net.posprinter.model.PTable>;
        public constructor(param0: androidNative.Array<string>, param1: androidNative.Array<java.lang.Integer>);
        public getTableText(): string;
        public addRow(param0: androidNative.Array<string>): net.posprinter.model.PTable;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace model {
      export class UdpDevice {
        public static class: java.lang.Class<net.posprinter.model.UdpDevice>;
        public getMacAddress(): androidNative.Array<number>;
        public setIpAddress(param0: androidNative.Array<number>): void;
        public getMask(): androidNative.Array<number>;
        public isDhcp(): boolean;
        public getGateway(): androidNative.Array<number>;
        public constructor(param0: androidNative.Array<number>);
        public setGateway(param0: androidNative.Array<number>): void;
        public setMacAddress(param0: androidNative.Array<number>): void;
        public getIpAddress(): androidNative.Array<number>;
        public getGatewayStr(): string;
        public getMacStr(): string;
        public setDhcp(param0: boolean): void;
        public getMaskStr(): string;
        public setMask(param0: androidNative.Array<number>): void;
        public getIpStr(): string;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class BackgroundInit {
        public static class: java.lang.Class<net.posprinter.posprinterface.BackgroundInit>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.BackgroundInit interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { doinbackground(): boolean });
        public constructor();
        public doinbackground(): boolean;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class IDataCallback {
        public static class: java.lang.Class<net.posprinter.posprinterface.IDataCallback>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.IDataCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { receive(param0: androidNative.Array<number>): void });
        public constructor();
        public receive(param0: androidNative.Array<number>): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class IMyBinder {
        public static class: java.lang.Class<net.posprinter.posprinterface.IMyBinder>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.IMyBinder interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: {
          ConnectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.TaskCallback): void;
          ConnectBtPort(param0: string, param1: globalAndroid.content.Context, param2: net.posprinter.posprinterface.TaskCallback, param3: net.posprinter.posprinterface.StatusCallBack): void;
          ConnectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
          ConnectSerial(param0: string, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
          DisconnectCurrentPort(param0: net.posprinter.posprinterface.TaskCallback): void;
          Acceptdatafromprinter(param0: net.posprinter.posprinterface.TaskCallback, param1: number): void;
          ReadBuffer(): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
          readData(param0: number): androidNative.Array<number>;
          ClearBuffer(): void;
          CheckLinkedState(param0: net.posprinter.posprinterface.TaskCallback): void;
          Write(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.TaskCallback): void;
          WriteSendData(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
          writeDataByUSB(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
          DisconnetNetPort(param0: net.posprinter.posprinterface.TaskCallback): void;
          OnDiscovery(param0: c.c, param1: globalAndroid.content.Context): java.util.List<string>;
          getBtAvailableDevice(): java.util.List<string>;
        });
        public constructor();
        public ConnectSerial(param0: string, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
        public readData(param0: number): androidNative.Array<number>;
        public Acceptdatafromprinter(param0: net.posprinter.posprinterface.TaskCallback, param1: number): void;
        public writeDataByUSB(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
        public ConnectBtPort(param0: string, param1: globalAndroid.content.Context, param2: net.posprinter.posprinterface.TaskCallback, param3: net.posprinter.posprinterface.StatusCallBack): void;
        public Write(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.TaskCallback): void;
        public ReadBuffer(): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
        public WriteSendData(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
        public CheckLinkedState(param0: net.posprinter.posprinterface.TaskCallback): void;
        public DisconnetNetPort(param0: net.posprinter.posprinterface.TaskCallback): void;
        public DisconnectCurrentPort(param0: net.posprinter.posprinterface.TaskCallback): void;
        public ConnectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.TaskCallback): void;
        public ConnectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
        public OnDiscovery(param0: c.c, param1: globalAndroid.content.Context): java.util.List<string>;
        public ClearBuffer(): void;
        public getBtAvailableDevice(): java.util.List<string>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class IStatusCallback {
        public static class: java.lang.Class<net.posprinter.posprinterface.IStatusCallback>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.IStatusCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { receive(param0: number): void });
        public constructor();
        public receive(param0: number): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class PrinterBinder {
        public static class: java.lang.Class<net.posprinter.posprinterface.PrinterBinder>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.PrinterBinder interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: {
          connectBtPort(param0: string, param1: globalAndroid.content.Context, param2: net.posprinter.posprinterface.TaskCallback, param3: net.posprinter.posprinterface.StatusCallBack): void;
          connectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
          connectNetPort(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
          disconnectCurrentPort(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
          disconnectAll(param0: net.posprinter.posprinterface.TaskCallback): void;
          acceptdatafromprinter(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
          readBuffer(param0: string): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
          clearBuffer(param0: string): void;
          checkLinkedState(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
          write(param0: string, param1: androidNative.Array<number>, param2: net.posprinter.posprinterface.TaskCallback): void;
          writeDataByYouself(param0: string, param1: net.posprinter.posprinterface.TaskCallback, param2: net.posprinter.posprinterface.ProcessData): void;
          isConnect(param0: string): boolean;
        });
        public constructor();
        public connectBtPort(param0: string, param1: globalAndroid.content.Context, param2: net.posprinter.posprinterface.TaskCallback, param3: net.posprinter.posprinterface.StatusCallBack): void;
        public disconnectCurrentPort(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
        public acceptdatafromprinter(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
        public connectNetPort(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
        public isConnect(param0: string): boolean;
        public readBuffer(param0: string): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
        public clearBuffer(param0: string): void;
        public checkLinkedState(param0: string, param1: net.posprinter.posprinterface.TaskCallback): void;
        public write(param0: string, param1: androidNative.Array<number>, param2: net.posprinter.posprinterface.TaskCallback): void;
        public writeDataByYouself(param0: string, param1: net.posprinter.posprinterface.TaskCallback, param2: net.posprinter.posprinterface.ProcessData): void;
        public disconnectAll(param0: net.posprinter.posprinterface.TaskCallback): void;
        public connectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class ProcessData {
        public static class: java.lang.Class<net.posprinter.posprinterface.ProcessData>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.ProcessData interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { processDataBeforeSend(): java.util.List<androidNative.Array<number>> });
        public constructor();
        public processDataBeforeSend(): java.util.List<androidNative.Array<number>>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class StatusCallBack {
        public static class: java.lang.Class<net.posprinter.posprinterface.StatusCallBack>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.StatusCallBack interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { onDsiconnect(): void });
        public constructor();
        public onDsiconnect(): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class TaskCallback {
        public static class: java.lang.Class<net.posprinter.posprinterface.TaskCallback>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.TaskCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { OnSucceed(): void; OnFailed(): void });
        public constructor();
        public OnSucceed(): void;
        public OnFailed(): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class UdpCallback {
        public static class: java.lang.Class<net.posprinter.posprinterface.UdpCallback>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.UdpCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { receive(param0: net.posprinter.model.UdpDevice): void });
        public constructor();
        public receive(param0: net.posprinter.model.UdpDevice): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace posprinterface {
      export class UiExecute {
        public static class: java.lang.Class<net.posprinter.posprinterface.UiExecute>;
        /**
         * Constructs a new instance of the net.posprinter.posprinterface.UiExecute interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
         */
        public constructor(implementation: { onsucess(): void; onfailed(): void });
        public constructor();
        public onsucess(): void;
        public onfailed(): void;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace serial {
      export class SerialControl {
        public static class: java.lang.Class<net.posprinter.serial.SerialControl>;
        public close(): void;
        public getInputStream(): java.io.InputStream;
        public constructor(param0: java.io.File, param1: number, param2: number);
        public getOutputStream(): java.io.OutputStream;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace service {
      export class PosprinterService {
        public static class: java.lang.Class<net.posprinter.service.PosprinterService>;
        public onUnbind(param0: globalAndroid.content.Intent): boolean;
        public onBind(param0: globalAndroid.content.Intent): globalAndroid.os.IBinder;
        public onCreate(): void;
        public onDestroy(): void;
        public constructor();
      }
      export namespace PosprinterService {
        export class a implements net.posprinter.posprinterface.IMyBinder {
          public static class: java.lang.Class<net.posprinter.service.PosprinterService.a>;
          public ConnectNetPort(param0: string, param1: number, param2: net.posprinter.posprinterface.TaskCallback): void;
          public CheckLinkedState(param0: net.posprinter.posprinterface.TaskCallback): void;
          public writeDataByUSB(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
          public ConnectUsbPort(param0: globalAndroid.content.Context, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
          public ClearBuffer(): void;
          public Write(param0: androidNative.Array<number>, param1: net.posprinter.posprinterface.TaskCallback): void;
          public ConnectBtPort(param0: string, param1: globalAndroid.content.Context, param2: net.posprinter.posprinterface.TaskCallback, param3: net.posprinter.posprinterface.StatusCallBack): void;
          public WriteSendData(param0: net.posprinter.posprinterface.TaskCallback, param1: net.posprinter.posprinterface.ProcessData): void;
          public getBtAvailableDevice(): java.util.List<string>;
          public ReadBuffer(): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
          public ConnectSerial(param0: string, param1: string, param2: net.posprinter.posprinterface.TaskCallback): void;
          public DisconnetNetPort(param0: net.posprinter.posprinterface.TaskCallback): void;
          public constructor(param0: net.posprinter.service.PosprinterService);
          public OnDiscovery(param0: c.c, param1: globalAndroid.content.Context): java.util.List<string>;
          public Acceptdatafromprinter(param0: net.posprinter.posprinterface.TaskCallback, param1: number): void;
          public DisconnectCurrentPort(param0: net.posprinter.posprinterface.TaskCallback): void;
          public readData(param0: number): androidNative.Array<number>;
        }
        export namespace a {
          export class a extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.a>;
            public doinbackground(): boolean;
          }
          export class b extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.b>;
            public doinbackground(): boolean;
          }
          export class c extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.c>;
            public doinbackground(): boolean;
          }
          export class d extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.d>;
            public doinbackground(): boolean;
          }
          export class e extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.e>;
            public doinbackground(): boolean;
          }
          export class f extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.f>;
            public doinbackground(): boolean;
          }
          export class g extends net.posprinter.posprinterface.BackgroundInit {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.g>;
            public doinbackground(): boolean;
          }
          export class h {
            public static class: java.lang.Class<net.posprinter.service.PosprinterService.a.h>;
            public onReceive(param0: globalAndroid.content.Context, param1: globalAndroid.content.Intent): void;
          }
        }
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class BitmapProcess {
        public static class: java.lang.Class<net.posprinter.utils.BitmapProcess>;
        public static compressBmpByYourWidth(param0: globalAndroid.graphics.Bitmap, param1: number): globalAndroid.graphics.Bitmap;
        public static rotateBmp(param0: globalAndroid.graphics.Bitmap, param1: number): globalAndroid.graphics.Bitmap;
        public constructor();
        public static cutBitmap(param0: number, param1: globalAndroid.graphics.Bitmap): java.util.List<globalAndroid.graphics.Bitmap>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class BitmapToByteData {
        public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData>;
        public static definedNvBmp(param0: globalAndroid.graphics.Bitmap): androidNative.Array<number>;
        public static baBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static flashBmpToSendData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static downLoadBmpToSendData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        /** @deprecated */
        public static rasterBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): androidNative.Array<number>;
        public static rasterBmpToSendData(param0: number, param1: globalAndroid.graphics.Bitmap): androidNative.Array<number>;
        public static convertToBMW(param0: globalAndroid.graphics.Bitmap): androidNative.Array<number>;
        public static downLoadBmpToSendTSCdownloadcommand(param0: globalAndroid.graphics.Bitmap): androidNative.Array<number>;
        public static downLoadBmpToSendLabelData(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType, param2: boolean): androidNative.Array<number>;
        public static getGreyBitmap(param0: globalAndroid.graphics.Bitmap): globalAndroid.graphics.Bitmap;
        public constructor();
      }
      export namespace BitmapToByteData {
        export class AlignType {
          public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData.AlignType>;
          public static Left: net.posprinter.utils.BitmapToByteData.AlignType;
          public static Center: net.posprinter.utils.BitmapToByteData.AlignType;
          public static Right: net.posprinter.utils.BitmapToByteData.AlignType;
          public static values(): androidNative.Array<net.posprinter.utils.BitmapToByteData.AlignType>;
          public static valueOf(param0: string): net.posprinter.utils.BitmapToByteData.AlignType;
        }
        export class BmpType {
          public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData.BmpType>;
          public static Dithering: net.posprinter.utils.BitmapToByteData.BmpType;
          public static Threshold: net.posprinter.utils.BitmapToByteData.BmpType;
          public static Grey: net.posprinter.utils.BitmapToByteData.BmpType;
          public static values(): androidNative.Array<net.posprinter.utils.BitmapToByteData.BmpType>;
          public static valueOf(param0: string): net.posprinter.utils.BitmapToByteData.BmpType;
        }
        export class a {
          public static class: java.lang.Class<net.posprinter.utils.BitmapToByteData.a>;
        }
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class DataForSendToPrinterPos58 {
        public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos58>;
        public static selectChineseCharModel(): androidNative.Array<number>;
        public static printAndFeedForward(param0: number): androidNative.Array<number>;
        public static printDownLoadBmp(param0: number): androidNative.Array<number>;
        public static selectFontB(): androidNative.Array<number>;
        public static setCharsetName(param0: string): void;
        public static openOrCloseLableModelInReceip(param0: java.lang.Boolean): androidNative.Array<number>;
        public static horizontalPositioning(): androidNative.Array<number>;
        public static checkLableAndGap(): androidNative.Array<number>;
        public static cancelUserDefinedCharacters(param0: number): androidNative.Array<number>;
        public static selectOrCancelChineseCharUnderLineModel(param0: number): androidNative.Array<number>;
        public constructor();
        public static selectOrCancelUnderlineModel(param0: number): androidNative.Array<number>;
        public static CancelChineseCharModel(): androidNative.Array<number>;
        public static allowOrForbidPressButton(param0: number): androidNative.Array<number>;
        public static setBarcodeHeight(param0: number): androidNative.Array<number>;
        public static printBarcode(param0: number, param1: number, param2: string): androidNative.Array<number>;
        public static printBarcode(param0: number, param1: string): androidNative.Array<number>;
        public static setBarcodeWidth(param0: number): androidNative.Array<number>;
        public static selectOrCancelDoubelPrintModel(param0: number): androidNative.Array<number>;
        public static setChineseCharacterModel(param0: number): androidNative.Array<number>;
        public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): androidNative.Array<number>;
        public static setAbsolutePrintPosition(param0: number, param1: number): androidNative.Array<number>;
        public static selectOrCancleCustomChar(param0: number): androidNative.Array<number>;
        public static selectPrintModel(param0: number): androidNative.Array<number>;
        public static setDefultLineSpacing(): androidNative.Array<number>;
        public static printAndFeedLine(): androidNative.Array<number>;
        public static setDormancyTime(param0: number): androidNative.Array<number>;
        public static setChineseCharLeftAndRightSpace(param0: number, param1: number): androidNative.Array<number>;
        public static setLineSpaceing(param0: number): androidNative.Array<number>;
        public static selectOrCancelInvertPrintModel(param0: number): androidNative.Array<number>;
        public static setOffTime(param0: number): androidNative.Array<number>;
        public static seletFontA(): androidNative.Array<number>;
        public static selectHRIFont(param0: number): androidNative.Array<number>;
        public static selectInternationalCharacterSets(param0: number): androidNative.Array<number>;
        public static selectOrCancelBoldModel(param0: number): androidNative.Array<number>;
        public static selectHRICharacterPrintPosition(param0: number): androidNative.Array<number>;
        public static setTheLableWidth(param0: number): androidNative.Array<number>;
        public static setHorizontalmovementPosition(param0: androidNative.Array<number>): androidNative.Array<number>;
        public static setSpeed(param0: number): androidNative.Array<number>;
        public static selectCharacterSize(param0: number): androidNative.Array<number>;
        public static selectCharacterCodePage(param0: number): androidNative.Array<number>;
        public static setPrintAreaWidth(param0: number, param1: number): androidNative.Array<number>;
        public static queryPrinterState(): androidNative.Array<number>;
        public static endOfLable(): androidNative.Array<number>;
        public static printRasterBmp(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): androidNative.Array<number>;
        public static selectOrCancelConvertPrintModel(param0: number): androidNative.Array<number>;
        public static printAndFeed(param0: number): androidNative.Array<number>;
        public static defineuserDefinedCharacters(param0: number, param1: number, param2: androidNative.Array<number>): androidNative.Array<number>;
        public static definedFlashBmp(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number, param2: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static setCharRightSpace(param0: number): androidNative.Array<number>;
        public static printcode128(param0: string): androidNative.Array<number>;
        public static definedDownLoadBmp(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static sendRealtimestatus(param0: number): androidNative.Array<number>;
        public static definedUserDefinedChineseChar(param0: number, param1: androidNative.Array<number>): androidNative.Array<number>;
        public static selectAlignment(param0: number): androidNative.Array<number>;
        public static setRelativeHorizontalPrintPosition(param0: number, param1: number): androidNative.Array<number>;
        public static selectBmpModel(param0: number, param1: number, param2: number, param3: androidNative.Array<number>): androidNative.Array<number>;
        public static selectOrCancelChineseCharDoubleWH(param0: number): androidNative.Array<number>;
        public static printBmpInFLASH(param0: number, param1: number): androidNative.Array<number>;
        public static initializePrinter(): androidNative.Array<number>;
        public static selectFont(param0: number): androidNative.Array<number>;
        public static selectOrCancelCW90(param0: number): androidNative.Array<number>;
        public static setLeftSpace(param0: number, param1: number): androidNative.Array<number>;
        public static setHorizontalAndVerticalMoveUnit(param0: number, param1: number): androidNative.Array<number>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class DataForSendToPrinterPos76 {
        public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos76>;
        public static selectChineseCharModel(): androidNative.Array<number>;
        public static cancelChineseCharModel(): androidNative.Array<number>;
        public static printAndFeedForward(param0: number): androidNative.Array<number>;
        public static setConnectWaitTime(param0: number, param1: number): androidNative.Array<number>;
        public static printHeadReplaceEnter(): androidNative.Array<number>;
        public static horizontalPositioning(): androidNative.Array<number>;
        public static cancelUserDefinedCharacters(param0: number): androidNative.Array<number>;
        public static selectOrCancelChineseCharUnderLineModel(param0: number): androidNative.Array<number>;
        public constructor();
        public static PrintAndCarriageReturn(): androidNative.Array<number>;
        public static setBlackPositionRecord(param0: number, param1: number, param2: number, param3: number): androidNative.Array<number>;
        public static selectOrCancelUnderlineModel(param0: number): androidNative.Array<number>;
        public static printAndBackFeed(param0: number): androidNative.Array<number>;
        public static allowOrForbidPressButton(param0: number): androidNative.Array<number>;
        public static setRollBackLength(param0: number): androidNative.Array<number>;
        public static selectOrCancelDoubelPrintModel(param0: number): androidNative.Array<number>;
        public static setChineseCharacterModel(param0: number): androidNative.Array<number>;
        public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): androidNative.Array<number>;
        public static selectOrCancleCustomChar(param0: number): androidNative.Array<number>;
        public static selectPrintModel(param0: number): androidNative.Array<number>;
        public static setDefultLineSpacing(): androidNative.Array<number>;
        public static selectPrintTransducerOutPutPageOutSignal(param0: number): androidNative.Array<number>;
        public static printAndFeedLine(): androidNative.Array<number>;
        public static cancelUserDefinedChineseChar(param0: number): androidNative.Array<number>;
        public static setChineseCharLeftAndRightSpace(param0: number, param1: number): androidNative.Array<number>;
        public static setLineSpaceing(param0: number): androidNative.Array<number>;
        public static selectPrintColor(param0: number): androidNative.Array<number>;
        public static selectInternationalCharacterSets(param0: number): androidNative.Array<number>;
        public static feedpaperToOrderEnd(): androidNative.Array<number>;
        public static selectOrCancelBoldModel(param0: number): androidNative.Array<number>;
        public static setHorizontalmovementPosition(param0: androidNative.Array<number>): androidNative.Array<number>;
        public static selectCharacterCodePage(param0: number): androidNative.Array<number>;
        public static selectOrCancelUnidirectionPrint(param0: number): androidNative.Array<number>;
        public static selectOrCancelConvertPrintModel(param0: number): androidNative.Array<number>;
        public static requestRealtimeForPrint(param0: number): androidNative.Array<number>;
        public static printAndFeed(param0: number): androidNative.Array<number>;
        public static setOrderLength(param0: number, param1: number): androidNative.Array<number>;
        public static defineuserDefinedCharacters(param0: number, param1: number, param2: androidNative.Array<number>): androidNative.Array<number>;
        public static printAndFeedUnidirection(param0: number): androidNative.Array<number>;
        public static returnState(param0: number): androidNative.Array<number>;
        public static setCharRightSpace(param0: number): androidNative.Array<number>;
        public static openOrCloseAutoReturnPrintState(param0: number): androidNative.Array<number>;
        public static printHeaderRecordAndFeedToPrintStartPosition(): androidNative.Array<number>;
        public static sendRealtimestatus(param0: number): androidNative.Array<number>;
        public static selectCutPagerModerAndCutPager(param0: number): androidNative.Array<number>;
        public static selectCutPagerModerAndCutPager(param0: number, param1: number): androidNative.Array<number>;
        public static definedUserDefinedChineseChar(param0: number, param1: androidNative.Array<number>): androidNative.Array<number>;
        public static selectAlignment(param0: number): androidNative.Array<number>;
        public static executePrintDataSaveByTransformToHex(): androidNative.Array<number>;
        public static selectBmpModel(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static feedBlackPaperToPrintPosition(): androidNative.Array<number>;
        public static selectPrintTransducerStopPrint(param0: number): androidNative.Array<number>;
        public static selectOrCancelChineseCharDoubleWH(param0: number): androidNative.Array<number>;
        public static initializePrinter(): androidNative.Array<number>;
        public static selectFont(param0: number): androidNative.Array<number>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class DataForSendToPrinterPos80 {
        public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterPos80>;
        public static selectChineseCharModel(): androidNative.Array<number>;
        public static printDownLoadBmp(param0: number): androidNative.Array<number>;
        public static setCharsetName(param0: string): void;
        public static SpecifiesTheModeForMaxiCodeSymbol(param0: number): androidNative.Array<number>;
        public static cancelUserDefinedCharacters(param0: number): androidNative.Array<number>;
        public static selectOrCancelChineseCharUnderLineModel(param0: number): androidNative.Array<number>;
        public static PrintAndCarriageReturn(): androidNative.Array<number>;
        public static selectOrCancelUnderlineModel(param0: number): androidNative.Array<number>;
        public static CancelChineseCharModel(): androidNative.Array<number>;
        public static setBarcodeWidth(param0: number): androidNative.Array<number>;
        public static creatCashboxContorlPulse(param0: number, param1: number, param2: number): androidNative.Array<number>;
        public static setAbsolutePrintPosition(param0: number, param1: number): androidNative.Array<number>;
        public static selectOrCancleCustomChar(param0: number): androidNative.Array<number>;
        public static setDefultLineSpacing(): androidNative.Array<number>;
        public static StoresSymbolDataInThePDF417SymbolStorageArea(param0: number, param1: number, param2: androidNative.Array<number>): androidNative.Array<number>;
        public static printAndFeedLine(): androidNative.Array<number>;
        public static printAndBackStandardmodel(): androidNative.Array<number>;
        public static printBarcode(param0: number, param1: number, param2: string): androidNative.Array<number>;
        public static printBarcode(param0: number, param1: string): androidNative.Array<number>;
        public static printBarcode(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: string): androidNative.Array<number>;
        public static setLineSpaceing(param0: number): androidNative.Array<number>;
        public static selectOrCancelInvertPrintModel(param0: number): androidNative.Array<number>;
        public static setVerticalRelativePositionUnderPageModel(param0: number, param1: number): androidNative.Array<number>;
        public static selectInternationalCharacterSets(param0: number): androidNative.Array<number>;
        public static selectOrCancelBoldModel(param0: number): androidNative.Array<number>;
        public static selectHRICharacterPrintPosition(param0: number): androidNative.Array<number>;
        public static selectPrinter(param0: number): androidNative.Array<number>;
        public static TransmitsTheSizeOfTheSymbolDataInTheSymbolStorageAreaPDF417(): androidNative.Array<number>;
        public static setHorizontalmovementPosition(param0: androidNative.Array<number>): androidNative.Array<number>;
        public static printByPagemodel(): androidNative.Array<number>;
        public static selectCharacterCodePage(param0: number): androidNative.Array<number>;
        public static setPrintAreaWidth(param0: number, param1: number): androidNative.Array<number>;
        public static StoresSymbolDataInItheMaxiCodeSymbolStorageArea(param0: number, param1: number, param2: androidNative.Array<number>): androidNative.Array<number>;
        public static executeMacrodeCommand(param0: number, param1: number, param2: number): androidNative.Array<number>;
        public static printRasterBmp(param0: number, param1: globalAndroid.graphics.Bitmap, param2: net.posprinter.utils.BitmapToByteData.BmpType, param3: net.posprinter.utils.BitmapToByteData.AlignType, param4: number): androidNative.Array<number>;
        public static SetsThenamespaceHeightForPDF417(param0: number): androidNative.Array<number>;
        public static SpecifiesOrCancelsVariousPDF417SymbolOptions(param0: number): androidNative.Array<number>;
        public static selectOrCancelConvertPrintModel(param0: number): androidNative.Array<number>;
        public static printerOrderBuzzingHint(param0: number, param1: number): androidNative.Array<number>;
        public static requestRealtimeForPrint(param0: number): androidNative.Array<number>;
        public static printAndFeed(param0: number): androidNative.Array<number>;
        public static definedFlashBmp(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number, param2: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static returnState(param0: number): androidNative.Array<number>;
        public static openOrCloseAutoReturnPrintState(param0: number): androidNative.Array<number>;
        public static sendRealtimestatus(param0: number): androidNative.Array<number>;
        public static selectCutPagerModerAndCutPager(param0: number, param1: number): androidNative.Array<number>;
        public static selectCutPagerModerAndCutPager(param0: number): androidNative.Array<number>;
        public static selectAlignment(param0: number): androidNative.Array<number>;
        public static setAbsolutePositionUnderPageModel(param0: number, param1: number): androidNative.Array<number>;
        public static TransmitsTheSizeOfTheEncodedSymbolDataInTheSymbolStorageAreaMaxiCode(): androidNative.Array<number>;
        public static printBmpInFLASH(param0: number, param1: number): androidNative.Array<number>;
        public static initializePrinter(): androidNative.Array<number>;
        public static setLeftSpace(param0: number, param1: number): androidNative.Array<number>;
        public static setHorizontalAndVerticalMoveUnit(param0: number, param1: number): androidNative.Array<number>;
        public static SetsTheNumberOfColumnsOfTheDataAreaForPDF417(param0: number): androidNative.Array<number>;
        public static SetsThenamespaceWidthOfPDF417(param0: number): androidNative.Array<number>;
        public static printAndFeedForward(param0: number): androidNative.Array<number>;
        public static SetsTheSizeOfTheQRCodeSymbolnamespace(param0: number): androidNative.Array<number>;
        public static PrintsTheQRCodeSymbolDataInTheSymbolStorageArea(): androidNative.Array<number>;
        public static horizontalPositioning(): androidNative.Array<number>;
        public static TransmitsTheSizeOfTheSymbolDataInTheSymbolStorageAreaQRCode(): androidNative.Array<number>;
        public constructor();
        public static allowOrForbidPressButton(param0: number): androidNative.Array<number>;
        public static setBarcodeHeight(param0: number): androidNative.Array<number>;
        public static printerOrderBuzzingAndWarningLight(param0: number, param1: number, param2: number): androidNative.Array<number>;
        public static printQRcode(param0: number, param1: number, param2: string): androidNative.Array<number>;
        public static selectOrCancelDoubelPrintModel(param0: number): androidNative.Array<number>;
        public static setChineseCharacterModel(param0: number): androidNative.Array<number>;
        public static PrintsThePDF417SymbolDataInTheSymbolStorageArea(): androidNative.Array<number>;
        public static selectPrintModel(param0: number): androidNative.Array<number>;
        public static selectPrintTransducerOutPutPageOutSignal(param0: number): androidNative.Array<number>;
        public static setChineseCharLeftAndRightSpace(param0: number, param1: number): androidNative.Array<number>;
        public static startOrStopMacrodeFinition(): androidNative.Array<number>;
        public static setPrintAreaUnderPageModel(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number): androidNative.Array<number>;
        public static selectPrintDirectionUnderPageModel(param0: number): androidNative.Array<number>;
        public static selectHRIFont(param0: number): androidNative.Array<number>;
        public static canclePrintDataByPagemodel(): androidNative.Array<number>;
        public static SetsTheErrorCorrectionLevelForQRCodeSymbol(param0: number): androidNative.Array<number>;
        public static selectPageModel(): androidNative.Array<number>;
        public static PrintsTheMaxiCodeSymbolDataInTheSymbolStorageArea(): androidNative.Array<number>;
        public static SetsTheNumberOfRowsOfTheDataAreaForPDF417(param0: number): androidNative.Array<number>;
        public static selectCharacterSize(param0: number): androidNative.Array<number>;
        public static defineuserDefinedCharacters(param0: number, param1: number, param2: androidNative.Array<number>): androidNative.Array<number>;
        public static setCharRightSpace(param0: number): androidNative.Array<number>;
        public static definedDownLoadBmp(param0: globalAndroid.graphics.Bitmap, param1: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static openCashboxRealtime(param0: number, param1: number): androidNative.Array<number>;
        public static definedUserDefinedChineseChar(param0: number, param1: androidNative.Array<number>): androidNative.Array<number>;
        public static executePrintDataSaveByTransformToHex(): androidNative.Array<number>;
        public static selectStandardModel(): androidNative.Array<number>;
        public static setRelativeHorizontalPrintPosition(param0: number, param1: number): androidNative.Array<number>;
        public static selectPrintTransducerStopPrint(param0: number): androidNative.Array<number>;
        public static definedNvBmp(param0: java.util.List<globalAndroid.graphics.Bitmap>, param1: number): androidNative.Array<number>;
        public static selectBmpModel(param0: number, param1: number, param2: number, param3: androidNative.Array<number>): androidNative.Array<number>;
        public static selectOrCancelChineseCharDoubleWH(param0: number): androidNative.Array<number>;
        public static SetsTheErrorCorrectionLevelForPDF417(param0: number, param1: number): androidNative.Array<number>;
        public static selectFont(param0: number): androidNative.Array<number>;
        public static selectOrCancelCW90(param0: number): androidNative.Array<number>;
        public static StoresSymbolDataInTheQRCodeSymbolStorageArea(param0: string): androidNative.Array<number>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class DataForSendToPrinterTSC {
        public static class: java.lang.Class<net.posprinter.utils.DataForSendToPrinterTSC>;
        public static density(param0: number): androidNative.Array<number>;
        public static erase(param0: number, param1: number, param2: number, param3: number): androidNative.Array<number>;
        public static checkPrinterStateByPort9100(): androidNative.Array<number>;
        public static direction(param0: number): androidNative.Array<number>;
        public static initialPrinter(): androidNative.Array<number>;
        public static checkPrinterStateByPort4000(): androidNative.Array<number>;
        public static setCharsetName(param0: string): void;
        public static home(): androidNative.Array<number>;
        public static formFeed(): androidNative.Array<number>;
        public constructor();
        public static run(param0: string): androidNative.Array<number>;
        public static files(): androidNative.Array<number>;
        public static sizeByinch(param0: number, param1: number): androidNative.Array<number>;
        public static gapBymm(param0: number, param1: number): androidNative.Array<number>;
        public static delay(param0: number): androidNative.Array<number>;
        public static gapBydot(param0: number, param1: number): androidNative.Array<number>;
        public static bitmap(param0: number, param1: number, param2: number, param3: globalAndroid.graphics.Bitmap, param4: net.posprinter.utils.BitmapToByteData.BmpType): androidNative.Array<number>;
        public static dmatrix(param0: number, param1: number, param2: number, param3: number, param4: string, param5: string): androidNative.Array<number>;
        public static dmatrix(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string, param8: string): androidNative.Array<number>;
        public static reference(param0: number, param1: number): androidNative.Array<number>;
        public static codePage(param0: string): androidNative.Array<number>;
        public static box(param0: number, param1: number, param2: number, param3: number, param4: number): androidNative.Array<number>;
        public static pdf417(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: string): androidNative.Array<number>;
        public static block(param0: number, param1: number, param2: number, param3: number, param4: string, param5: number, param6: number, param7: number, param8: number, param9: number, param10: string): androidNative.Array<number>;
        public static block(param0: number, param1: number, param2: number, param3: number, param4: string, param5: number, param6: number, param7: number, param8: string): androidNative.Array<number>;
        public static gapDetect(): androidNative.Array<number>;
        public static gapDetect(param0: number, param1: number): androidNative.Array<number>;
        public static eoj(): androidNative.Array<number>;
        public static putpcx(param0: number, param1: number, param2: string): androidNative.Array<number>;
        public static move(): androidNative.Array<number>;
        public static blineBydot(param0: number, param1: number): androidNative.Array<number>;
        public static offSetBydot(param0: number): androidNative.Array<number>;
        public static limitFeedByinch(param0: number): androidNative.Array<number>;
        public static text(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): androidNative.Array<number>;
        public static disPlay(param0: string): androidNative.Array<number>;
        public static barCode(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): androidNative.Array<number>;
        public static downLoad(param0: string, param1: number, param2: string): androidNative.Array<number>;
        public static downLoad(param0: string): androidNative.Array<number>;
        public static downLoad(param0: string, param1: string): androidNative.Array<number>;
        public static downLoad(param0: string, param1: globalAndroid.graphics.Bitmap): androidNative.Array<number>;
        public static speed(param0: number): androidNative.Array<number>;
        public static backFeed(param0: number): androidNative.Array<number>;
        public static print(param0: number, param1: number): androidNative.Array<number>;
        public static print(param0: number): androidNative.Array<number>;
        public static bar(param0: number, param1: number, param2: number, param3: number): androidNative.Array<number>;
        public static limitFeedBymm(param0: number): androidNative.Array<number>;
        public static reverse(param0: number, param1: number, param2: number, param3: number): androidNative.Array<number>;
        public static offSetBymm(param0: number): androidNative.Array<number>;
        public static qrCode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: string, param7: string, param8: string): androidNative.Array<number>;
        public static qrCode(param0: number, param1: number, param2: string, param3: number, param4: string, param5: number, param6: string): androidNative.Array<number>;
        public static ellipse(param0: number, param1: number, param2: number, param3: number, param4: number): androidNative.Array<number>;
        public static feed(param0: number): androidNative.Array<number>;
        public static autoDetect(param0: number, param1: number): androidNative.Array<number>;
        public static selfTest(): androidNative.Array<number>;
        public static selfTest(param0: string): androidNative.Array<number>;
        public static eop(): androidNative.Array<number>;
        public static kill(param0: string): androidNative.Array<number>;
        public static putBmp(param0: number, param1: number, param2: string): androidNative.Array<number>;
        public static putBmp(param0: number, param1: number, param2: string, param3: number, param4: number): androidNative.Array<number>;
        public static blineDetect(param0: number, param1: number): androidNative.Array<number>;
        public static offSetByinch(param0: number): androidNative.Array<number>;
        public static blineByinch(param0: number, param1: number): androidNative.Array<number>;
        public static blineBymm(param0: number, param1: number): androidNative.Array<number>;
        public static sound(param0: number, param1: number): androidNative.Array<number>;
        public static limitFeedBydot(param0: number): androidNative.Array<number>;
        public static sizeBydot(param0: number, param1: number): androidNative.Array<number>;
        public static gapByinch(param0: number, param1: number): androidNative.Array<number>;
        public static codeBlockFMode(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string): androidNative.Array<number>;
        public static cls(): androidNative.Array<number>;
        public static cut(): androidNative.Array<number>;
        public static sizeBymm(param0: number, param1: number): androidNative.Array<number>;
        public static shift(param0: number): androidNative.Array<number>;
        public static country(param0: string): androidNative.Array<number>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class PosPrinterDev {
        public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev>;
        public constructor(param0: c.c, param1: globalAndroid.content.Context, param2: string);
        public constructor(param0: c.c, param1: string, param2: string);
        public constructor(param0: c.c, param1: string, param2: number);
        public constructor(param0: c.c, param1: globalAndroid.content.Context);
        public constructor(param0: c.c, param1: string, param2: globalAndroid.content.Context, param3: net.posprinter.posprinterface.StatusCallBack);
        public getUsbRcData(): net.posprinter.utils.RoundQueue<androidNative.Array<number>>;
        public Open(): c.d;
        public Close(): c.d;
        public GetPortInfo(): c.b;
        public Write(param0: androidNative.Array<number>): c.d;
        public Write(param0: androidNative.Array<number>, param1: number, param2: number): c.d;
        public Read(): c.d;
      }
      export namespace PosPrinterDev {
        export class a {
          public static class: java.lang.Class<net.posprinter.utils.PosPrinterDev.a>;
        }
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class PosSetting {
        public static class: java.lang.Class<net.posprinter.utils.PosSetting>;
        public static sendSetWifi(param0: number, param1: string, param2: string): androidNative.Array<number>;
        public static sendUSBset(param0: number): androidNative.Array<number>;
        public static sendSetip(param0: string): androidNative.Array<number>;
        public constructor();
        public static sendSetNet(param0: string, param1: string, param2: string): androidNative.Array<number>;
        public static printDensity(param0: number): androidNative.Array<number>;
        public static sendSetym(param0: string): androidNative.Array<number>;
        public static sendHex(param0: string): androidNative.Array<number>;
        public static strTobytesUTF(param0: string): androidNative.Array<number>;
        public static byteMerger(param0: androidNative.Array<number>, param1: androidNative.Array<number>): androidNative.Array<number>;
        public static sendSetBt(param0: string, param1: string): androidNative.Array<number>;
        public static sendSetwg(param0: string): androidNative.Array<number>;
        public static sendSetNetall(param0: number, param1: string, param2: string, param3: string, param4: string, param5: string): androidNative.Array<number>;
        public static strTobytes(param0: string): androidNative.Array<number>;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class RoundQueue<T> extends java.io.Serializable {
        public static class: java.lang.Class<net.posprinter.utils.RoundQueue<any>>;
        public indexOf(param0: any): number;
        public getLast(): any;
        public gethead(): number;
        public getFirst(): any;
        public removeFirst(): any;
        public realSize(): number;
        public get(param0: number): any;
        public clear(): void;
        public constructor(param0: number);
        public isFull(): boolean;
        public addLast(param0: any): void;
        public isEmpty(): boolean;
        public gettail(): number;
      }
    }
  }
}

declare namespace net {
  export namespace posprinter {
    export namespace utils {
      export class StringUtils {
        public static class: java.lang.Class<net.posprinter.utils.StringUtils>;
        public constructor();
        public static bytesToHexString(param0: androidNative.Array<number>, param1: number): string;
        public static bytesToHexString(param0: androidNative.Array<number>): string;
        public static bytes2String(param0: androidNative.Array<number>, param1: string): string;
        public static bytes2String(param0: androidNative.Array<number>): string;
        public static strTobytes(param0: string, param1: string): androidNative.Array<number>;
        public static strTobytes(param0: string): androidNative.Array<number>;
        public static byteMerger(param0: androidNative.Array<number>, param1: androidNative.Array<number>): androidNative.Array<number>;
        public static addHexSpace(param0: string): string;
      }
    }
  }
}

//Generics information:
//net.posprinter.utils.RoundQueue:1
