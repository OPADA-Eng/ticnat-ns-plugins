/// <reference path="android-declarations.d.ts"/>

declare module com {
	export module ticnat {
		export module intermecprinter {
			export class BuildConfig {
				public static class: java.lang.Class<com.ticnat.intermecprinter.BuildConfig>;
				public static DEBUG: boolean;
				public static LIBRARY_PACKAGE_NAME: string;
				public static APPLICATION_ID: string;
				public static BUILD_TYPE: string;
				public static FLAVOR: string;
				public static VERSION_CODE: number;
				public static VERSION_NAME: string;
				public constructor();
			}
		}
	}
}

declare module com {
	export module ticnat {
		export module intermecprinter {
			export class PrinterConnector {
				public static class: java.lang.Class<com.ticnat.intermecprinter.PrinterConnector>;
				public printer: com.honeywell.mobility.print.LinePrinter;
				public address: string;
				public printerID: string;
				public activity: globalAndroid.app.Activity;
				public printBmp(param0: globalAndroid.graphics.Bitmap): void;
				public constructor(param0: globalAndroid.app.Activity, param1: string, param2: string);
				public printView(param0: globalAndroid.view.View, param1: number, param2: number): void;
				public printText(param0: string, param1: boolean, param2: boolean, param3: boolean): void;
			}
			export module PrinterConnector {
				export class BadPrinterStateException {
					public static class: java.lang.Class<com.ticnat.intermecprinter.PrinterConnector.BadPrinterStateException>;
					public constructor(param0: com.ticnat.intermecprinter.PrinterConnector, param1: string);
				}
				export class PrintBMPTask extends globalAndroid.os.AsyncTask<any, java.lang.Integer, com.honeywell.mobility.print.LinePrinter> {
					public static class: java.lang.Class<com.ticnat.intermecprinter.PrinterConnector.PrintBMPTask>;
					public onProgressUpdate(param0: native.Array<java.lang.Integer>): void;
					public onPreExecute(): void;
					public onPostExecute(param0: com.honeywell.mobility.print.LinePrinter): void;
					public constructor(param0: com.ticnat.intermecprinter.PrinterConnector);
					public doInBackground(param0: native.Array<any>): com.honeywell.mobility.print.LinePrinter;
				}
				export class PrintTxtTask extends globalAndroid.os.AsyncTask<any, java.lang.Integer, com.honeywell.mobility.print.LinePrinter> {
					public static class: java.lang.Class<com.ticnat.intermecprinter.PrinterConnector.PrintTxtTask>;
					public onProgressUpdate(param0: native.Array<java.lang.Integer>): void;
					public onPreExecute(): void;
					public onPostExecute(param0: com.honeywell.mobility.print.LinePrinter): void;
					public constructor(param0: com.ticnat.intermecprinter.PrinterConnector);
					public doInBackground(param0: native.Array<any>): com.honeywell.mobility.print.LinePrinter;
				}
			}
		}
	}
}

//Generics information:
