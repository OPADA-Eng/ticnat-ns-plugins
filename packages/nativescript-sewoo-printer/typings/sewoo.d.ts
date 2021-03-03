//// <reference path="android-declarations.d.ts"/>

declare module com {
	export module sewoo {
		export module image {
			export module android {
				export class AndroidImageLoader extends com.sewoo.image.android.ImageLoaderIF {
					public static class: java.lang.Class<com.sewoo.image.android.AndroidImageLoader>;
					public getThresHoldValue(): number;
					public getThresHoldValue(param0: native.Array<native.Array<number>>): number;
					public getImage(param0: string): globalAndroid.graphics.Bitmap;
					public getByteArray(param0: globalAndroid.graphics.Bitmap): native.Array<native.Array<number>>;
					public getByteArrayGrayscale(param0: globalAndroid.graphics.Bitmap): native.Array<native.Array<number>>;
					public constructor();
					public getByteArrayGrayscale(param0: globalAndroid.graphics.Bitmap, param1: number): native.Array<native.Array<number>>;
					public getImage(): globalAndroid.graphics.Bitmap;
					public imageLoad(param0: string): native.Array<native.Array<number>>;
					public imageLoadGrayscale(param0: string, param1: number): native.Array<native.Array<number>>;
					public imageLoad(param0: native.Array<number>): native.Array<native.Array<number>>;
					public imageLoadGrayscale(param0: string): native.Array<native.Array<number>>;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module image {
			export module android {
				export class ImageLoaderIF {
					public static class: java.lang.Class<com.sewoo.image.android.ImageLoaderIF>;
					/**
					 * Constructs a new instance of the com.sewoo.image.android.ImageLoaderIF interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: { getThresHoldValue(): number; getThresHoldValue(param0: native.Array<native.Array<number>>): number; imageLoad(param0: string): native.Array<native.Array<number>> });
					public constructor();
					public getThresHoldValue(): number;
					public getThresHoldValue(param0: native.Array<native.Array<number>>): number;
					public imageLoad(param0: string): native.Array<native.Array<number>>;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export class POSPrinterService {
				public static class: java.lang.Class<com.sewoo.jpos.POSPrinterService>;
				public toPrinterTempBuffer: native.Array<number>;
				public destPos: number;
				public fontTypefaceList: string;
				public printBarCode(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: number): void;
				public sendMSRtoNormalMode(): void;
				public sendMSRStatusCheck(): void;
				public getCapRecBarCode(): boolean;
				public setBarCodeHeight(param0: number): number;
				public sendMSRInit(): void;
				public alignment(param0: number): number;
				public setBarCodeDataPosition(param0: number): number;
				public setBitmap(param0: number, param1: number, param2: string, param3: number, param4: number): number;
				public constructor();
				public printBitmap(param0: number, param1: native.Array<native.Array<number>>, param2: number, param3: number): number;
				public getRecLineWidth(): number;
				public selectPrinterModel(param0: number): void;
				public getRecLineChars(): number;
				public getMapMode(): number;
				public getBarCodeSymbol(param0: number): number;
				public printBitmap(param0: number, param1: string, param2: number, param3: number): number;
				public setBarCodeWidth(param0: number, param1: number): number;
				public printNormal(param0: number, param1: string): void;
				public sendMSRMode(param0: number): void;
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class CPCL {
					public static class: java.lang.Class<com.sewoo.jpos.command.CPCL>;
					public charSet: string;
					public requestQueue: com.sewoo.jpos.request.RequestQueue;
					public userString(param0: string): void;
					public printLine(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public inverseLine(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printCPCLImage(param0: string, param1: number, param2: number): void;
					public setDataCharSet(param0: string): void;
					public printEllipse(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public setMagnify(param0: number, param1: number): void;
					public userString(param0: string, param1: boolean): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: string, param5: number, param6: number): number;
					public resetMagnify(): void;
					public setJournalMode(): void;
					public constructor();
					public multiLineData(param0: string): void;
					public printCPCLBarcode(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string, param8: number): void;
					public resetCPCLBarcode(): void;
					public printGraphic(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): void;
					public getBuffer(): java.lang.StringBuffer;
					public concatText(param0: number, param1: number, param2: number, param3: string): void;
					public setFormMode(): void;
					public resetMultiLine(): void;
					public resetCountry(): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: string, param2: number, param3: number, param4: number, param5: number): void;
					public printGraphicC(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): void;
					public printCPCLText(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: number): void;
					public setMeasure(param0: number): void;
					public setPageWidth(param0: number): void;
					public resetConcat(): void;
					public printForm(): void;
					public setJustification(param0: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: string, param6: number, param7: number): number;
					public setSpeed(param0: number): void;
					public printAndroidFont(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public setContrast(param0: number): void;
					public setCPCLBarcode(param0: number, param1: number, param2: number): void;
					public printGraphicC(param0: number, param1: number, param2: number, param3: number): void;
					public printCPCL2DBarCode(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: string, param3: number, param4: number, param5: number, param6: number): void;
					public setCharSet(param0: string): void;
					public multiLineText(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: string, param4: number, param5: number): number;
					public setCountry(param0: string): void;
					public printGraphicZ(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printBox(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: string, param4: number, param5: number, param6: number, param7: number): void;
					public setPattern(param0: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: boolean, param4: string, param5: number, param6: number, param7: number, param8: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: boolean, param6: string, param7: number, param8: number): number;
					public clearBuffer(): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public setMultiLine(param0: number): void;
					public printBitmap(param0: string, param1: number, param2: number): number;
					public setTone(param0: number): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number): void;
					public setMedia(param0: number): void;
					public printAndroidFont(param0: number, param1: number, param2: string, param3: number, param4: number): number;
					public setConcat(param0: number, param1: number, param2: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class CPCLConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.CPCLConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.CPCLConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_CPCL_FONT_7: number;
					public static LK_CPCL_BCS_29RATIO: number;
					public static LK_CPCL_BCS_I2OF5: string;
					public static LK_CPCL_BCS_24RATIO: number;
					public static LK_CPCL_RSS_EXP_STACK: string;
					public static LK_CPCL_TXT_7HEIGHT: number;
					public static LK_CPCL_CONT_MEDIUM: number;
					public static LK_STS_CPCL_PAPER_EMPTY: number;
					public static LK_CPCL_BCS_QRCODE: string;
					public static LK_CPCL_BLACKMARK: number;
					public static LK_CPCL_TXT_12WIDTH: number;
					public static LK_CPCL_BCS_0RATIO: number;
					public static LK_STS_CPCL_NORMAL: number;
					public static LK_CPCL_BCS_CODABAR: string;
					public static LK_CPCL_TXT_15HEIGHT: number;
					public static LK_CPCL_FONT_0: number;
					public static LK_CPCL_BCS_23RATIO: number;
					public static LK_CPCL_FONT_2: number;
					public static LK_CPCL_TXT_6WIDTH: number;
					public static LK_CPCL_FONT_1: number;
					public static LK_CPCL_FONT_4: number;
					public static LK_CPCL_FONT_6: number;
					public static LK_CPCL_BCS_MSI1C: string;
					public static LK_CPCL_BCS_MSI11C: string;
					public static LK_CPCL_FONT_5: number;
					public static LK_CPCL_TXT_8HEIGHT: number;
					public static LK_CPCL_BCS_39F: string;
					public static LK_CPCL_COUNTRY_ITALY: string;
					public static LK_FAIL: number;
					public static LK_CPCL_BCS_DATAMATRIX: string;
					public static LK_CPCL_COUNTRY_NORWAY: string;
					public static LK_CPCL_TXT_1HEIGHT: number;
					public static LK_CPCL_BCS_39C: string;
					public static LK_CPCL_CONT_VERY_DARK: number;
					public static LK_STS_CPCL_PRINTEROFF: number;
					public static LK_CPCL_BCS_39: string;
					public static LK_CPCL_BCS_POSTNET: string;
					public static LK_CPCL_RSS14_STACK_OMNI: string;
					public static LK_CPCL_90_ROTATION: number;
					public static LK_CPCL_TXT_14HEIGHT: number;
					public static LK_CPCL_VERTICAL_PATTERN: number;
					public static LK_CPCL_RDIAGON_PATTERN: number;
					public static LK_CPCL_BCS_MSI2C: string;
					public static LK_CPCL_BCS_30RATIO: number;
					public static LK_CPCL_0_ROTATION: number;
					public static LK_CPCL_TXT_2WIDTH: number;
					public static LK_CPCL_BCS_27RATIO: number;
					public static LK_CREATE_ERROR: number;
					public static LK_CPCL_DEFAULT_PATTERN: number;
					public static BOTTON_UP: number;
					public static LK_CPCL_DOTS: number;
					public static LK_CPCL_CONT_DEFAULT: number;
					public static LK_CPCL_RSS_INVALID: number;
					public static LK_CPCL_INCH: number;
					public static LK_CPCL_TXT_16HEIGHT: number;
					public static LK_CPCL_BCS_3RATIO: number;
					public static LK_CPCL_TXT_9HEIGHT: number;
					public static LK_CPCL_TXT_15WIDTH: number;
					public static LK_CPCL_TXT_13HEIGHT: number;
					public static LK_CPCL_TXT_3WIDTH: number;
					public static LK_CPCL_BCS_4RATIO: number;
					public static LK_CPCL_BCS_EAN128: string;
					public static LK_CPCL_BCS_26RATIO: number;
					public static LK_CPCL_RSS_EXP: string;
					public static LK_CPCL_TXT_3HEIGHT: number;
					public static LK_CPCL_BCS_CODABARC: string;
					public static LK_CPCL_TXT_16WIDTH: number;
					public static LK_BXX_MODEL: number;
					public static LK_CPCL_TXT_10HEIGHT: number;
					public static LK_CPCL_BCS_39FC: string;
					public static LK_CPCL_180_ROTATION: number;
					public static LK_CPCL_TXT_6HEIGHT: number;
					public static LK_CPCL_HORIZON_PATTERN: number;
					public static LK_CPCL_NO_ROTATION: number;
					public static LK_CPCL_TXT_13WIDTH: number;
					public static LK_CPCL_BCS_UPCA2: string;
					public static LK_CPCL_BCS_2RATIO: number;
					public static LK_CPCL_TXT_4WIDTH: number;
					public static LK_CPCL_TXT_1WIDTH: number;
					public static LK_CPCL_BCS_UPCA5: string;
					public static LK_CPCL_CENTER: number;
					public static LK_CPCL_COUNTRY_GERMANY: string;
					public static LK_SUCCESS: number;
					public static LK_CPCL_TXT_5WIDTH: number;
					public static LK_CPCL_CONT_DARK: number;
					public static LK_CPCL_CROSS_PATTERN: number;
					public static LK_CPCL_TXT_11WIDTH: number;
					public static LK_CPCL_CONTINUOUS: number;
					public static LK_CPCL_COUNTRY_SPAIN: string;
					public static LK_NOT_OPENED: number;
					public static LK_CPCL_LEFT: number;
					public static LK_CPCL_CENTI: number;
					public static LK_CPCL_BCS_EAN13: string;
					public static LK_CPCL_SQUARE_PATTERN: number;
					public static LK_STS_CPCL_TIMEOUT: number;
					public static LK_CPCL_RSS_LTD: string;
					public static LK_CPCL_TXT_4HEIGHT: number;
					public static LK_CPCL_COUNTRY_UK: string;
					public static LK_CPCL_BCS_28RATIO: number;
					public static LK_CPCL_BCS_25RATIO: number;
					public static LK_TXX_MODEL: number;
					public static LK_CPCL_CONCAT: number;
					public static LK_CPCL_BCS_22RATIO: number;
					public static LK_CPCL_BCS_EAN135: string;
					public static LK_CPCL_COUNTRY_SWEDEN: string;
					public static LK_STS_CPCL_BATTERY_LOW: number;
					public static LK_CPCL_TXT_11HEIGHT: number;
					public static LK_CPCL_BCS_EAN132: string;
					public static LK_CPCL_TXT_5HEIGHT: number;
					public static LK_PXX_MODEL: number;
					public static LK_CPCL_BCS_1RATIO: number;
					public static LK_CPCL_TXT_14WIDTH: number;
					public static LK_CPCL_VCONCAT: number;
					public static LK_STS_CPCL_BUSY: number;
					public static LK_CPCL_TXT_2HEIGHT: number;
					public static LK_CPCL_BCS_EAN8: string;
					public static LK_CPCL_BCS_21RATIO: number;
					public static LK_CPCL_BCS_128: string;
					public static LK_CPCL_COUNTRY_CP850: string;
					public static LK_CPCL_TXT_8WIDTH: number;
					public static LK_CPCL_COUNTRY_LATIN9: string;
					public static LK_CPCL_BCS_UPCA: string;
					public static LK_CPCL_BCS_PDF417: string;
					public static LK_CPCL_BCS_UPCE2: string;
					public static LK_CPCL_RSS14_STACK: string;
					public static LK_CPCL_BCS_UPCE: string;
					public static LK_CPCL_TXT_9WIDTH: number;
					public static LK_CPCL_BCS_20RATIO: number;
					public static LK_CPCL_COUNTRY_FRANCE: string;
					public static LK_STS_CPCL_COVER_OPEN: number;
					public static LK_CPCL_COUNTRY_USA: string;
					public static LK_CPCL_TXT_7WIDTH: number;
					public static LK_CPCL_MILLI: number;
					public static LK_CPCL_TXT_12HEIGHT: number;
					public static LK_CPCL_BCS_MSI: string;
					public static LK_CPCL_RSS14: string;
					public static TOP_DOWN: number;
					public static LK_CPCL_TXT_10WIDTH: number;
					public static LK_CPCL_RIGHT: number;
					public static LK_CPCL_BCS_EAN85: string;
					public static LK_CPCL_BCS_UPCE5: string;
					public static LK_CPCL_270_ROTATION: number;
					public static LK_CPCL_BCS_MAXICODE: string;
					public static LK_CPCL_LDIAGON_PATTERN: number;
					public static LK_CPCL_LABEL: number;
					public static LK_CPCL_BCS_93: string;
					public static LK_CPCL_BCS_EAN82: string;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class EPLConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.EPLConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.EPLConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_SUCCESS: number;
					public static LK_EPL_BCS_POSTNET: string;
					public static LK_EPL_STS_NORMAL: number;
					public static LK_EPL_NO_ROTATION: number;
					public static LK_EPL_RSS14_STACKED: number;
					public static LK_EPL_STS_PRINTING: number;
					public static LK_INVALID_GAPHEIGHT: number;
					public static LK_INVALID_DENSITY: number;
					public static LK_EPL_BCS_93: string;
					public static LK_EPL_RSS14_TRUNCATED: number;
					public static LK_NOT_OPENED: number;
					public static LK_EPL_LEFT: number;
					public static LK_EPL_BLACKMARK: number;
					public static LK_EPL_LABEL: number;
					public static LK_EPL_FONT_1: number;
					public static LK_EPL_FONT_0: number;
					public static SPACE: number;
					public static LK_EPL_RSS_EXP_STACK: number;
					public static LK_EPL_BCS_128AUTO: string;
					public static LK_INVALID_MEDIA_TYPE: number;
					public static LK_INVALID_WIDTH: number;
					public static LK_EPL_BCS_EAN13: string;
					public static LK_FAIL: number;
					public static LK_EPL_BCS_GER_POST: string;
					public static LK_EPL_BCS_39F: string;
					public static LK_EPL_BCS_128A: string;
					public static LK_INVALID_OFFSET: number;
					public static LK_EPL_BCS_128C: string;
					public static LK_TXX_MODEL: number;
					public static LK_EPL_BCS_128B: string;
					public static LK_EPL_BCS_MSI1C: string;
					public static CR: number;
					public static LK_EPL_BCS_39C: string;
					public static LK_EPL_90_ROTATION: number;
					public static LK_EPL_RSS_LIMITED: number;
					public static QUAT: number;
					public static LK_INVALID_ROTATE: number;
					public static LK_EPL_BCS_I2OF5: string;
					public static LF: number;
					public static LK_PXX_MODEL: number;
					public static LK_EPL_BCS_CODABAR: string;
					public static LK_EPL_180_ROTATION: number;
					public static LK_CREATE_ERROR: number;
					public static LK_EPL_BCS_UPCE: string;
					public static LK_EPL_BCS_UPC_I2OF5: string;
					public static LK_EPL_BCS_JPN_POST: string;
					public static LK_EPL_RSS14_STACKED_OMNI: number;
					public static LK_EPL_BCS_UPCA: string;
					public static LK_EPL_270_ROTATION: number;
					public static LK_EPL_BCS_EAN85: string;
					public static LK_EPL_BCS_EAN82: string;
					public static LK_EPL_BCS_EAN132: string;
					public static LK_EPL_STS_PAPER_EMPTY: number;
					public static LK_EPL_BCS_EAN8: string;
					public static LK_EPL_BCS_UCC: string;
					public static LK_EPL_BCS_EAN135: string;
					public static LK_EPL_CENTER: number;
					public static LK_EPL_STS_COVER_OPEN: number;
					public static LK_INVALID_HEIGHT: number;
					public static LK_EPL_RIGHT: number;
					public static LK_EPL_RSS_INVALID: number;
					public static LK_EPL_BCS_I2OF5_C: string;
					public static LK_EPL_BCS_UPCA5: string;
					public static LK_BXX_MODEL: number;
					public static LK_EPL_CONTINUOUS: number;
					public static LK_INVALID_SPEED: number;
					public static LK_EPL_BCS_MSI3C: string;
					public static LK_EPL_RSS14: number;
					public static LK_EPL_FONT_2: number;
					public static LK_EPL_FONT_5: number;
					public static LK_EPL_FONT_4: number;
					public static LK_EPL_0_ROTATION: number;
					public static LK_EPL_BCS_I2OF5_H: string;
					public static LK_EPL_BCS_UCCEAN_128: string;
					public static LK_EPL_BCS_UPCA2: string;
					public static LK_EPL_BCS_UPCE5: string;
					public static LK_EPL_BCS_UPCE2: string;
					public static LK_EPL_STS_UNKNOWN: number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class EPOST {
					public static class: java.lang.Class<com.sewoo.jpos.command.EPOST>;
					public charSet: string;
					public requestQueue: com.sewoo.jpos.request.RequestQueue;
					public userString(param0: string): void;
					public printLine(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public inverseLine(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printCPCLImage(param0: string, param1: number, param2: number): void;
					public setDataCharSet(param0: string): void;
					public printEllipse(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public setMagnify(param0: number, param1: number): void;
					public userString(param0: string, param1: boolean): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: string, param5: number, param6: number): number;
					public resetMagnify(): void;
					public setJournalMode(): void;
					public constructor();
					public multiLineData(param0: string): void;
					public printCPCLBarcode(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string, param8: number): void;
					public resetCPCLBarcode(): void;
					public printGraphic(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): void;
					public getBuffer(): java.lang.StringBuffer;
					public concatText(param0: number, param1: number, param2: number, param3: string): void;
					public setFormMode(): void;
					public resetMultiLine(): void;
					public resetCountry(): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: string, param2: number, param3: number, param4: number, param5: number): void;
					public printGraphicC(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): void;
					public printCPCLText(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: number): void;
					public setMeasure(param0: number): void;
					public setPageWidth(param0: number): void;
					public resetConcat(): void;
					public printForm(): void;
					public setJustification(param0: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: string, param6: number, param7: number): number;
					public setSpeed(param0: number): void;
					public printAndroidFont(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public setContrast(param0: number): void;
					public setCPCLBarcode(param0: number, param1: number, param2: number): void;
					public printGraphicC(param0: number, param1: number, param2: number, param3: number): void;
					public printCPCL2DBarCode(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: string, param3: number, param4: number, param5: number, param6: number): void;
					public setCharSet(param0: string): void;
					public multiLineText(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: string, param4: number, param5: number): number;
					public setCountry(param0: string): void;
					public printGraphicZ(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printBox(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: string, param4: number, param5: number, param6: number, param7: number): void;
					public setPattern(param0: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: boolean, param4: string, param5: number, param6: number, param7: number, param8: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: boolean, param6: string, param7: number, param8: number): number;
					public clearBuffer(): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number): void;
					public setMultiLine(param0: number): void;
					public printBitmap(param0: string, param1: number, param2: number): number;
					public setTone(param0: number): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number): void;
					public setForm(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number): void;
					public printAndroidFont(param0: number, param1: number, param2: string, param3: number, param4: number): number;
					public setConcat(param0: number, param1: number, param2: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class EPOSTConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.EPOSTConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.EPOSTConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_CPCL_FONT_7: number;
					public static LK_CPCL_BCS_29RATIO: number;
					public static LK_CPCL_BCS_I2OF5: string;
					public static LK_CPCL_BCS_24RATIO: number;
					public static LK_CPCL_RSS_EXP_STACK: string;
					public static LK_TXT_2WIDTH: number;
					public static LK_CPCL_CONT_MEDIUM: number;
					public static LK_STS_CPCL_PAPER_EMPTY: number;
					public static OEM_E_WRITEERROR: number;
					public static LK_CPCL_BCS_QRCODE: string;
					public static LK_CPCL_BLACKMARK: number;
					public static LK_CPCL_BCS_0RATIO: number;
					public static LK_FNT_DEFAULT: number;
					public static LK_STS_CPCL_NORMAL: number;
					public static LK_CPCL_BCS_CODABAR: string;
					public static LK_CPCL_FONT_0: number;
					public static PRINT_CHARACTERSET_KR: number;
					public static LK_CPCL_BCS_23RATIO: number;
					public static LK_CPCL_FONT_2: number;
					public static LK_CPCL_FONT_1: number;
					public static LK_CPCL_FONT_4: number;
					public static LK_FNT_FONTB: number;
					public static LK_TXT_3WIDTH: number;
					public static LK_CPCL_FONT_6: number;
					public static LK_CPCL_BCS_MSI1C: string;
					public static LK_CPCL_BCS_MSI11C: string;
					public static LK_CPCL_FONT_5: number;
					public static LK_CPCL_BCS_39F: string;
					public static LK_CPCL_COUNTRY_ITALY: string;
					public static LK_TXT_6WIDTH: number;
					public static LK_FAIL: number;
					public static LK_CPCL_BCS_DATAMATRIX: string;
					public static LK_CPCL_COUNTRY_NORWAY: string;
					public static LK_CPCL_BCS_39C: string;
					public static LK_CPCL_CONT_VERY_DARK: number;
					public static PRINT_TEXT_BOLD: number;
					public static LK_CPCL_BCS_39: string;
					public static LK_CPCL_BCS_POSTNET: string;
					public static LK_CPCL_RSS14_STACK_OMNI: string;
					public static PRINT_TEXT_BOTH: number;
					public static LK_CPCL_90_ROTATION: number;
					public static LK_TXT_3HEIGHT: number;
					public static LK_CPCL_VERTICAL_PATTERN: number;
					public static LK_CPCL_RDIAGON_PATTERN: number;
					public static LK_CPCL_BCS_MSI2C: string;
					public static LK_CPCL_BCS_30RATIO: number;
					public static LK_CPCL_0_ROTATION: number;
					public static LK_CPCL_BCS_27RATIO: number;
					public static LK_CREATE_ERROR: number;
					public static LK_CPCL_DEFAULT_PATTERN: number;
					public static BOTTON_UP: number;
					public static OEM_S_OK: number;
					public static LK_CPCL_DOTS: number;
					public static LK_CPCL_CONT_DEFAULT: number;
					public static OEM_E_COVEROPEN: number;
					public static LK_CPCL_RSS_INVALID: number;
					public static LK_CPCL_INCH: number;
					public static LK_TXT_5HEIGHT: number;
					public static LK_CPCL_BCS_3RATIO: number;
					public static PRINT_CHARACTERSET_US: number;
					public static LK_TXT_2HEIGHT: number;
					public static PRINT_TEXT_UNDERLINE: number;
					public static LK_CPCL_BCS_4RATIO: number;
					public static LK_CPCL_BCS_EAN128: string;
					public static LK_CPCL_BCS_26RATIO: number;
					public static LK_CPCL_RSS_EXP: string;
					public static LK_TXT_8HEIGHT: number;
					public static LK_CPCL_BCS_CODABARC: string;
					public static LK_FNT_BOLD: number;
					public static LK_FNT_REVERSE: number;
					public static LK_BXX_MODEL: number;
					public static LK_CPCL_BCS_39FC: string;
					public static LK_CPCL_180_ROTATION: number;
					public static PRINT_TEXT_ALIGN_RIGHT: number;
					public static LK_CPCL_HORIZON_PATTERN: number;
					public static LK_CPCL_NO_ROTATION: number;
					public static LK_CPCL_BCS_UPCA2: string;
					public static LK_CPCL_BCS_2RATIO: number;
					public static LK_TXT_5WIDTH: number;
					public static LK_CPCL_BCS_UPCA5: string;
					public static LK_CPCL_CENTER: number;
					public static LK_CPCL_COUNTRY_GERMANY: string;
					public static LK_SUCCESS: number;
					public static LK_CPCL_CONT_DARK: number;
					public static LK_CPCL_CROSS_PATTERN: number;
					public static LK_CPCL_CONTINUOUS: number;
					public static LK_CPCL_COUNTRY_SPAIN: string;
					public static OEM_E_LOWBATTERY: number;
					public static LK_TXT_8WIDTH: number;
					public static PRINT_TEXT_ALIGN_LEFT: number;
					public static LK_NOT_OPENED: number;
					public static LK_CPCL_LEFT: number;
					public static LK_TXT_7HEIGHT: number;
					public static LK_CPCL_CENTI: number;
					public static LK_CPCL_BCS_EAN13: string;
					public static LK_CPCL_SQUARE_PATTERN: number;
					public static LK_STS_CPCL_TIMEOUT: number;
					public static LK_CPCL_RSS_LTD: string;
					public static LK_TXT_7WIDTH: number;
					public static OEM_E_TIMEOUT: number;
					public static LK_TXT_4WIDTH: number;
					public static LK_CPCL_COUNTRY_UK: string;
					public static LK_TXT_1WIDTH: number;
					public static LK_CPCL_BCS_28RATIO: number;
					public static LK_CPCL_BCS_25RATIO: number;
					public static LK_TXX_MODEL: number;
					public static PRINT_TEXT_ALIGN_CENTER: number;
					public static LK_CPCL_CONCAT: number;
					public static LK_CPCL_BCS_22RATIO: number;
					public static LK_CPCL_BCS_EAN135: string;
					public static LK_CPCL_COUNTRY_SWEDEN: string;
					public static LK_STS_CPCL_BATTERY_LOW: number;
					public static LK_CPCL_BCS_EAN132: string;
					public static LK_FNT_UNDERLINE: number;
					public static LK_TXT_6HEIGHT: number;
					public static LK_PXX_MODEL: number;
					public static LK_FNT_UNDERLINE2: number;
					public static LK_CPCL_BCS_1RATIO: number;
					public static LK_CPCL_VCONCAT: number;
					public static LK_STS_CPCL_BUSY: number;
					public static LK_CPCL_BCS_EAN8: string;
					public static LK_CPCL_BCS_21RATIO: number;
					public static LK_CPCL_BCS_128: string;
					public static LK_CPCL_COUNTRY_CP850: string;
					public static LK_CPCL_COUNTRY_LATIN9: string;
					public static LK_CPCL_BCS_UPCA: string;
					public static LK_CPCL_BCS_PDF417: string;
					public static LK_CPCL_BCS_UPCE2: string;
					public static LK_CPCL_RSS14_STACK: string;
					public static LK_CPCL_BCS_UPCE: string;
					public static LK_CPCL_BCS_20RATIO: number;
					public static OEM_E_NOPAPER: number;
					public static LK_CPCL_COUNTRY_FRANCE: string;
					public static LK_STS_CPCL_COVER_OPEN: number;
					public static LK_CPCL_COUNTRY_USA: string;
					public static LK_TXT_4HEIGHT: number;
					public static LK_CPCL_MILLI: number;
					public static LK_CPCL_BCS_MSI: string;
					public static LK_CPCL_RSS14: string;
					public static PRINT_TEXT_NORMAL: number;
					public static TOP_DOWN: number;
					public static LK_CPCL_RIGHT: number;
					public static LK_CPCL_BCS_EAN85: string;
					public static LK_TXT_1HEIGHT: number;
					public static LK_CPCL_BCS_UPCE5: string;
					public static LK_CPCL_270_ROTATION: number;
					public static LK_CPCL_BCS_MAXICODE: string;
					public static LK_CPCL_LDIAGON_PATTERN: number;
					public static LK_CPCL_LABEL: number;
					public static LK_CPCL_BCS_93: string;
					public static LK_CPCL_BCS_EAN82: string;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class ESCPOS {
					public static class: java.lang.Class<com.sewoo.jpos.command.ESCPOS>;
					public static ESC: number;
					public static FS: number;
					public static GS: number;
					public static DLE: number;
					public static EOT: number;
					public static ENQ: number;
					public static SP: number;
					public static HT: number;
					public static LF: number;
					public static CR: number;
					public static FF: number;
					public static CAN: number;
					public static LK_STS_PRINTEROFF: number;
					public static LK_STS_MSR_READ: number;
					public static LK_STS_PAPER_EMPTY: number;
					public static LK_STS_COVER_OPEN: number;
					public static LK_STS_BATTERY_LOW: number;
					public static LK_STS_NORMAL: number;
					public static TRACK_1: number;
					public static TRACK_2: number;
					public static TRACK_1_2: number;
					public static TRACK_3: number;
					public static TRACK_2_3: number;
					public GS_L(param0: number, param1: number): native.Array<number>;
					public GS_v(param0: number, param1: number, param2: number, param3: number, param4: number, param5: native.Array<number>, param6: number): native.Array<number>;
					public NVLogoDown(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): native.Array<number>;
					public GS_B(param0: number): native.Array<number>;
					public GS_w(param0: number): native.Array<number>;
					public ESC_W(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number): native.Array<number>;
					public ESC_t(param0: number): native.Array<number>;
					public ESC_LEFTBRACE(param0: number): native.Array<number>;
					public ESC_D(param0: native.Array<number>): native.Array<number>;
					public ESC_SP(param0: number): native.Array<number>;
					public ESC_HYPHEN(param0: number): native.Array<number>;
					public GS_ASTERISK(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
					public twoDToOneD(param0: native.Array<native.Array<number>>): native.Array<number>;
					public constructor();
					public ESC_ASTERISK(param0: number, param1: number, param2: number, param3: native.Array<number>): native.Array<number>;
					public ESC_S(): native.Array<number>;
					public ESC_3(param0: number): native.Array<number>;
					public ESC_E(param0: number): native.Array<number>;
					public ESC_DOLLAR(param0: number, param1: number): native.Array<number>;
					public ESC_G(param0: number): native.Array<number>;
					public ESC_2(): native.Array<number>;
					public ESC_QUESTION(param0: number): native.Array<number>;
					public ESC_M(param0: number): native.Array<number>;
					public ESC_J(param0: number): native.Array<number>;
					public GS_P(param0: number, param1: number): native.Array<number>;
					public GS_a(param0: number): native.Array<number>;
					public GS_k(param0: number, param1: number, param2: string): native.Array<number>;
					public ESC_p(param0: number, param1: number, param2: number): native.Array<number>;
					public FS_q(param0: number, param1: native.Array<native.Array<number>>): native.Array<number>;
					public ESC_T(param0: number): native.Array<number>;
					public GS_f(param0: number): native.Array<number>;
					public ESC_V(param0: number): native.Array<number>;
					public msrdataRequest(): native.Array<number>;
					public ESC_BACKSLASH(param0: number, param1: number): native.Array<number>;
					public GS_EXCLAMATION(param0: number): native.Array<number>;
					public DLE_EOT(param0: number): native.Array<number>;
					public ESC_R(param0: number): native.Array<number>;
					public ESC_EXCLAMATION(param0: number): native.Array<number>;
					public GS_W(param0: number, param1: number): native.Array<number>;
					public GS_v(param0: number, param1: number, param2: number, param3: number, param4: number, param5: native.Array<number>): native.Array<number>;
					public DLE_ENQ(param0: number): native.Array<number>;
					public ESC_m(param0: number): native.Array<number>;
					public GS_DOLLAR(param0: number, param1: number): native.Array<number>;
					public ESC_a(param0: number): native.Array<number>;
					public ESC_L(): native.Array<number>;
					public ESC_AT(): native.Array<number>;
					public GS_h(param0: number): native.Array<number>;
					public GS_S_C(param0: number): native.Array<number>;
					public ESC_AMPERSAND(param0: number, param1: number, param2: number, param3: native.Array<native.Array<number>>): native.Array<number>;
					public GS_SLASH(param0: number): native.Array<number>;
					public FS_p(param0: number, param1: number): native.Array<number>;
					public GS_BACKSLASH(param0: number, param1: number): native.Array<number>;
					public ESC_PERCENT(param0: number): native.Array<number>;
					public GS_k(param0: number, param1: number, param2: native.Array<number>): native.Array<number>;
					public FS_M(param0: number): native.Array<number>;
					public ESC_FF(): native.Array<number>;
					public GS_H(param0: number): native.Array<number>;
					public FS_EXCLAMATION(param0: number): native.Array<number>;
					public GS_r(param0: number): native.Array<number>;
					public ESC_d(param0: number): native.Array<number>;
					public GS_I(param0: number): native.Array<number>;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class ESCPOSConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.ESCPOSConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.ESCPOSConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_BCS_Code128: number;
					public static LK_TXT_2WIDTH: number;
					public static LK_CODEPAGE_TIS11: number;
					public static LK_ALIGNMENT_RIGHT: number;
					public static LK_CODEPAGE_TIS14: number;
					public static NO_ERR: number;
					public static LK_CODEPAGE_INVALID: number;
					public static LK_CHECKSUM_ERROR: number;
					public static LK_QRCODE_VERSION_9: number;
					public static LK_ALIGNMENT_CENTER: number;
					public static LK_QRCODE_VERSION_8: number;
					public static LK_FNT_FONTB: number;
					public static LK_STS_NORMAL: number;
					public static LK_VISCII_SUCCESS: number;
					public static LK_TXT_6WIDTH: number;
					public static LK_FAIL: number;
					public static LK_CODEPAGE_CP437: number;
					public static CD_PIN_FIVE: number;
					public static LK_CODEPAGE_TIS17: number;
					public static LK_TXT_3HEIGHT: number;
					public static LK_MSR_TRACK_12: number;
					public static CD_PIN_TWO: number;
					public static STS_PAPEREMPTY: number;
					public static LK_BITMAP_NORMAL: number;
					public static ERR_SEQUENCE_NUMBER: number;
					public static LK_CREATE_ERROR: number;
					public static LK_VISCII_NOT_SETUP: number;
					public static STS_PAPERNEAREMPTY: number;
					public static LK_TXT_2HEIGHT: number;
					public static STX: number;
					public static ERR_RESYNCH: number;
					public static LK_QRCODE_VERSION_5: number;
					public static LK_QRCODE_VERSION_4: number;
					public static NOT_FOUND: number;
					public static LK_QRCODE_VERSION_7: number;
					public static LK_QRCODE_VERSION_6: number;
					public static LK_TXT_8HEIGHT: number;
					public static LK_HRI_TEXT_BELOW: number;
					public static LK_QRCODE_VERSION_1: number;
					public static LK_FNT_BOLD: number;
					public static LK_QRCODE_VERSION_3: number;
					public static LK_QRCODE_VERSION_2: number;
					public static LK_FNT_REVERSE: number;
					public static STS_COVEROPEN: number;
					public static LK_QRCODE_VERSION_AUTO: number;
					public static LK_IC_INSERTED: number;
					public static LK_SUCCESS: number;
					public static LK_BCS_UPCE: number;
					public static LK_BCS_JAN13: number;
					public static LK_CODEPAGE_FINAL: number;
					public static LK_NOT_OPENED: number;
					public static LK_BCS_UPCA: number;
					public static LK_TXT_7HEIGHT: number;
					public static ERR_READPORT: number;
					public static LK_BITMAP_HEIGHT_DOUBLE: number;
					public static LK_TXT_4WIDTH: number;
					public static EOT: number;
					public static LK_BCS_Code93: number;
					public static LK_VISCII_NOT_SUPPORTED: number;
					public static LK_BITMAP_WIDTH_DOUBLE: number;
					public static LK_MSR_TRACK_2: number;
					public static LK_TXX_MODEL: number;
					public static LK_MSR_TRACK_1: number;
					public static LK_MSR_TRACK_3: number;
					public static LK_BCS_EAN13: number;
					public static LK_BCS_ITF: number;
					public static STS_NORMAL: number;
					public static LK_FONT_DRAW_ERROR: number;
					public static LK_FNT_UNDERLINE: number;
					public static LK_TXT_6HEIGHT: number;
					public static LK_FNT_UNDERLINE2: number;
					public static LK_BCS_Codabar: number;
					public static MAXTRY: number;
					public static DUMMY_TIMEOUT: number;
					public static LK_CODEPAGE_CP860: number;
					public static ERR_INITPORT: number;
					public static LK_CODEPAGE_CP864: number;
					public static LK_CODEPAGE_CP865: number;
					public static LK_CODEPAGE_CP863: number;
					public static LK_CODEPAGE_CP866: number;
					public static RESYNCH: number;
					public static ERR_COMNUM: number;
					public static FOUND: number;
					public static STS_CD_OPEN: number;
					public static LK_HRI_TEXT_NONE: number;
					public static ERR_NACK: number;
					public static DIRECTION_LEFT_RIGHT: number;
					public static LK_TXT_4HEIGHT: number;
					public static LK_HRI_TEXT_ABOVE: number;
					public static LK_CODEPAGE_KATAKANA: number;
					public static LK_CODEPAGE_CP850: number;
					public static DIRECTION_RIGHT_LEFT: number;
					public static LK_STS_PAPER_EMPTY: number;
					public static LK_CODEPAGE_CP852: number;
					public static LK_CODEPAGE_CP857: number;
					public static LK_CODEPAGE_CP858: number;
					public static LK_CODEPAGE_CP737: number;
					public static DIRECTION_BOTTOM_TOP: number;
					public static LK_ALIGNMENT_LEFT: number;
					public static LK_UNIT_DOT: number;
					public static LK_QRCODE_VERSION_23: number;
					public static LK_QRCODE_VERSION_22: number;
					public static LK_QRCODE_VERSION_25: number;
					public static LK_QRCODE_VERSION_24: number;
					public static LK_QRCODE_VERSION_27: number;
					public static ERR_WRITEPORT: number;
					public static LK_QRCODE_VERSION_26: number;
					public static LK_QRCODE_VERSION_29: number;
					public static LK_QRCODE_VERSION_28: number;
					public static DIRECTION_TOP_BOTTOM: number;
					public static LK_QRCODE_VERSION_21: number;
					public static LK_QRCODE_VERSION_20: number;
					public static LK_STS_PRINTEROFF: number;
					public static LK_UNIT_MM: number;
					public static LK_FNT_DEFAULT: number;
					public static LK_UNKNOWN: number;
					public static LK_QRCODE_VERSION_19: number;
					public static LK_TXT_3WIDTH: number;
					public static LK_QRCODE_VERSION_12: number;
					public static LK_QRCODE_VERSION_11: number;
					public static LK_QRCODE_VERSION_14: number;
					public static LK_QRCODE_VERSION_13: number;
					public static LK_QRCODE_VERSION_16: number;
					public static LK_QRCODE_VERSION_15: number;
					public static LK_QRCODE_VERSION_18: number;
					public static LK_QRCODE_VERSION_17: number;
					public static LK_BITMAP_ORDERED_DITHER: number;
					public static LK_QRCODE_VERSION_10: number;
					public static LK_VISCII_INVALID: number;
					public static LK_QRCODE_VERSION_40: number;
					public static LK_TXT_5HEIGHT: number;
					public static LK_BCS_Code39: number;
					public static DEFAULT_TIMEOUT: number;
					public static LK_QRCODE_EC_LEVEL_Q: number;
					public static LK_QRCODE_EC_LEVEL_L: number;
					public static LK_QRCODE_EC_LEVEL_M: number;
					public static LK_QRCODE_VERSION_34: number;
					public static LK_QRCODE_EC_LEVEL_H: number;
					public static LK_QRCODE_VERSION_33: number;
					public static ERR_LRC: number;
					public static LK_QRCODE_VERSION_36: number;
					public static LK_QRCODE_VERSION_35: number;
					public static LK_QRCODE_VERSION_38: number;
					public static LK_QRCODE_VERSION_37: number;
					public static LK_QRCODE_VERSION_39: number;
					public static LK_CODEPAGE_MOZOVIA: number;
					public static LK_BXX_MODEL: number;
					public static ERR_PARITY: number;
					public static LK_QRCODE_VERSION_30: number;
					public static LK_QRCODE_VERSION_32: number;
					public static LK_QRCODE_VERSION_31: number;
					public static ERR_BASE: number;
					public static LK_TXT_5WIDTH: number;
					public static LK_TIMEOUT_ERROR: number;
					public static LK_UNIT_INCH: number;
					public static DEFAULT_PCB_VALUE: number;
					public static ERR_SERIOUS_ERROR: number;
					public static LK_TXT_8WIDTH: number;
					public static LK_BITMAP_WIDTH_HEIGHT_DOUBLE: number;
					public static STS_CD_CLOSE: number;
					public static LK_CODEPAGE_CP862MD: number;
					public static LK_FONT_OUT_OF_LENGTH: number;
					public static LK_BCS_JAN8: number;
					public static LK_TXT_7WIDTH: number;
					public static LK_BCS_EAN8: number;
					public static LK_TXT_1WIDTH: number;
					public static EMV_SIZE: number;
					public static LK_IC_UNINSERTED: number;
					public static LK_PXX_MODEL: number;
					public static LK_STS_BATTERY_LOW: number;
					public static LK_STS_TIMEOUT: number;
					public static DEFAULT_NAD_VALUE: number;
					public static LK_CODEPAGE_SUCCESS: number;
					public static LK_CODEPAGE_CP1253: number;
					public static LK_CODEPAGE_CP1252: number;
					public static LK_CODEPAGE_CP1251: number;
					public static ETX: number;
					public static LK_CODEPAGE_CP1250: number;
					public static GBP_SIZE: number;
					public static LK_CODEPAGE_CP1258: number;
					public static LK_CODEPAGE_CP1257: number;
					public static LK_CODEPAGE_CP1256: number;
					public static LK_CODEPAGE_CP1254: number;
					public static LK_BITMAP_NO_DITHER: number;
					public static LK_STS_MSR_READ: number;
					public static LK_MSR_TRACK_23: number;
					public static LK_TXT_1HEIGHT: number;
					public static LK_CODEPAGE_ISO_8859_7: number;
					public static LK_CODEPAGE_ISO_8859_9: number;
					public static LK_BITMAP_ERROR_DIFFUSION: number;
					public static ERR_READER_MUTE: number;
					public static LK_CODEPAGE_ISO_8859_1: number;
					public static LK_STS_COVER_OPEN: number;
					public static LK_CODEPAGE_ISO_8859_2: number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class IcrMsrConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.IcrMsrConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.IcrMsrConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_SYSTEM_MEMORY_ERROR: number;
					public static LK_ICC_PROCESSING_ERROR: number;
					public static LK_PRINTER_POWER_OFF: number;
					public static LK_WAITING_DATA: number;
					public static LK_NO_ACTIVATION_ERROR: number;
					public static LK_MSR_DATA_EVENT: number;
					public static LK_PARITY_ERROR: number;
					public static LK_ICC_DEVICE_ERROR: number;
					public static LK_COMMAND_ERROR: number;
					public static LK_MSR_READ_END: number;
					public static LK_TRACK2_ENCRYPT_ERROR: number;
					public static LK_NOT_PRESENT_ERROR: number;
					public static LK_POSITIVE_RESPONSE: number;
					public static LK_NEGATIVE_RESPONSE: number;
					public static LK_DATA_READ_TIMEOUT: number;
					public static LK_PREAMBLE_ERROR: number;
					public static LK_ICR_READ_END: number;
					public static LK_NO_ERROR: number;
					public static LK_INVALID_DATA_EVENT: number;
					public static LK_ICR_INSERTED: number;
					public static LK_ICR_DATA_EVENT: number;
					public static LK_POSTAMBLE_ERROR: number;
					public static LK_MS_READ_ERROR: number;
					public static LK_ICR_CANCEL: number;
					public static LK_ICR_NOT_INSERTED: number;
					public static LK_LRC_ERROR: number;
					public static LK_TRACK2_READ_TIMEOUT_ERROR: number;
					public static LK_COMMAND_DATA_ERROR: number;
					public static LK_INITIALIZATION: number;
					public static LK_BLANK_ERROR: number;
					public static LK_ICR_IDLE_STATUS: number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class STATUSConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.STATUSConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.STATUSConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_STATUS_PRINTING_OK: number;
					public static LK_STS_NO_ERROR: number;
					public static LK_STS_MONITOR_START: number;
					public static LK_STS_PAPER_EMPTY: number;
					public static LK_STS_MONITOR_STOP: number;
					public static LK_STS_COVER_OPEN: number;
					public static LK_STS_POWER_OFF: number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module command {
				export class ZPLConst {
					public static class: java.lang.Class<com.sewoo.jpos.command.ZPLConst>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.command.ZPLConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LINE_COLOR_B: string;
					public static BARCODE_LOGMARS: string;
					public static BARCODE_Aztec: string;
					public static BARCODE_Code39: string;
					public static ROTATION_0: string;
					public static DM_QUALITY_200: number;
					public static SENSE_BLACKMARK: string;
					public static BARCODE_UPCA: string;
					public static ROTATION_90: string;
					public static SENSE_CONTINUOUS: string;
					public static BARCODE_UPCE: string;
					public static BARCODE_Interleaved_2OF5: string;
					public static DM_QUALITY_0: number;
					public static BARCODE_POSTNET: string;
					public static BARCODE_Industrial_2OF5: string;
					public static ROTATION_180: string;
					public static LK_TXX_MODEL: number;
					public static BARCODE_MSI: string;
					public static BARCODE_UPCEANEXT: string;
					public static QRCODE_ECL_H: string;
					public static LK_PXX_MODEL: number;
					public static BARCODE_PDF417: string;
					public static QRCODE_ECL_L: string;
					public static QRCODE_ECL_M: string;
					public static BARCODE_Plessey: string;
					public static QRCODE_ECL_Q: string;
					public static DIAGONAL_L: string;
					public static DM_QUALITY_50: number;
					public static ROTATION_270: string;
					public static DIAGONAL_R: string;
					public static FONT_R: string;
					public static BARCODE_Code128: string;
					public static FONT_S: string;
					public static BARCODE_Code11: string;
					public static FONT_P: string;
					public static BARCODE_DataMatrix: string;
					public static FONT_Q: string;
					public static FONT_V: string;
					public static BARCODE_QRCode: string;
					public static DM_QUALITY_100: number;
					public static FONT_T: string;
					public static FONT_U: string;
					public static DM_QUALITY_140: number;
					public static BARCODE_Code93: string;
					public static BARCODE_TLC39: string;
					public static BARCODE_CODABLOCK: string;
					public static FONT_B: string;
					public static FONT_C: string;
					public static BARCODE_UPSMAXICODE: string;
					public static BARCODE_Standard_2OF5: string;
					public static SENSE_WEB: string;
					public static FONT_A: string;
					public static FONT_F: string;
					public static BARCODE_EAN13: string;
					public static FONT_G: string;
					public static BARCODE_PlanetCode: string;
					public static FONT_D: string;
					public static BARCODE_RSS: string;
					public static SENSE_GAP: string;
					public static FONT_E: string;
					public static LK_BXX_MODEL: number;
					public static LINE_COLOR_W: string;
					public static FONT_H: string;
					public static BARCODE_Code49: string;
					public static FONT_2: string;
					public static FONT_3: string;
					public static FONT_0: string;
					public static BARCODE_Codabar: string;
					public static FONT_1: string;
					public static FONT_6: string;
					public static FONT_7: string;
					public static FONT_4: string;
					public static DM_QUALITY_80: number;
					public static FONT_5: string;
					public static FONT_8: string;
					public static BARCODE_MicroPDF417: string;
					public static FONT_9: string;
					public static BARCODE_EAN8: string;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module image {
				export class ImageLoader extends com.sewoo.image.android.AndroidImageLoader {
					public static class: java.lang.Class<com.sewoo.jpos.image.ImageLoader>;
					public getThresHoldValue(): number;
					public getThresHoldValue(param0: native.Array<native.Array<number>>): number;
					public constructor();
					public imageLoad(param0: string): native.Array<native.Array<number>>;
					public imageLoad(param0: native.Array<number>): native.Array<native.Array<number>>;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module image {
				export class MobileImageConverter {
					public static class: java.lang.Class<com.sewoo.jpos.image.MobileImageConverter>;
					public getxH(): number;
					public getyH(): number;
					public getaX(): number;
					public getyL(): number;
					public convertGSAsteriskImage(param0: native.Array<native.Array<number>>, param1: number): native.Array<number>;
					public convertBitImageReverse(param0: native.Array<native.Array<number>>, param1: number): native.Array<number>;
					public convertBitImageWidth(param0: native.Array<native.Array<number>>, param1: number, param2: number, param3: number, param4: number): native.Array<number>;
					public convertBitImage(param0: native.Array<native.Array<number>>, param1: number): native.Array<number>;
					public convertBitImageReverse(param0: native.Array<native.Array<number>>, param1: number, param2: number): native.Array<number>;
					public constructor();
					public setLHLength(param0: number, param1: number): void;
					public setLength(param0: number, param1: number): void;
					public convertBitImageRotate(param0: native.Array<native.Array<number>>, param1: number, param2: number): native.Array<number>;
					public convertBitImageEPL(param0: native.Array<native.Array<number>>, param1: number): native.Array<number>;
					public convertBitImage(param0: native.Array<native.Array<number>>, param1: number, param2: number): native.Array<number>;
					public convertNVImage(param0: native.Array<native.Array<number>>, param1: number, param2: number): native.Array<number>;
					public getxL(): number;
					public getaY(): number;
					public getByteWidth(param0: number): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class CPCLPrinter extends com.sewoo.jpos.command.CPCL {
					public static class: java.lang.Class<com.sewoo.jpos.printer.CPCLPrinter>;
					public printerCheck(): number;
					public printerResults(param0: number): number;
					public write(param0: native.Array<number>): void;
					public constructor(param0: string);
					public printForm(): void;
					public getEmulation(): number;
					public status(): number;
					public setPrinterInfo(param0: native.Array<number>, param1: number): number;
					public printGS1(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: string): number;
					public printForm(param0: boolean): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public printerCheck(param0: number): number;
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public sendByte(param0: native.Array<number>): void;
					public receiveByte(param0: native.Array<number>): number;
					public sendPrinter(): void;
					public printerResults(): number;
					public getModel(): number;
					public getPrinterInfo(param0: native.Array<number>, param1: number, param2: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class CPCLWebPrinter extends com.sewoo.jpos.printer.CPCLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.CPCLWebPrinter>;
					public constructor(param0: globalAndroid.content.Context);
					public constructor(param0: string);
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public constructor(param0: globalAndroid.content.Context, param1: string);
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class EPLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.EPLPrinter>;
					public constructor(param0: string);
					public printDiagonalLine(param0: number, param1: number, param2: number, param3: number, param4: number): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: string, param6: number, param7: number): number;
					public printAndroidFont(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public printPDF417(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: string): number;
					public printBarCode(param0: number, param1: number, param2: number, param3: string, param4: number, param5: number, param6: number, param7: number, param8: string): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: string, param3: number, param4: number, param5: number, param6: number): void;
					public setCharSet(param0: string): void;
					public printDataMatrix(param0: number, param1: number, param2: number, param3: number, param4: string): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: string, param4: number, param5: number): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: string, param5: number, param6: number): number;
					public printGS1(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string): number;
					public write(param0: string): void;
					public constructor();
					public endPage(param0: number): number;
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public sendByte(param0: native.Array<number>): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: string, param4: number, param5: number, param6: number, param7: number): void;
					public printLine(param0: number, param1: number, param2: number, param3: number): number;
					public printQRCode(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string): number;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: boolean, param4: string, param5: number, param6: number, param7: number, param8: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: boolean, param6: string, param7: number, param8: number): number;
					public write(param0: native.Array<number>): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): void;
					public endPage(param0: number, param1: boolean): number;
					public printBitmap(param0: string, param1: number, param2: number): number;
					public printDeviceFont(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: string): number;
					public printGraphicC(param0: number, param1: number, param2: number, param3: number, param4: native.Array<number>): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: string, param2: number, param3: number, param4: number, param5: number): void;
					public receiveByte(param0: native.Array<number>): number;
					public printGS1(param0: number, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number, param8: string): number;
					public setupPrinter(param0: string, param1: string, param2: number, param3: string, param4: string, param5: number, param6: number, param7: number): number;
					public getModel(): number;
					public printBox(param0: number, param1: number, param2: number, param3: number, param4: number): number;
					public printAndroidFont(param0: number, param1: number, param2: string, param3: number, param4: number): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class EPLWebPrinter extends com.sewoo.jpos.printer.EPLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.EPLWebPrinter>;
					public constructor(param0: globalAndroid.content.Context);
					public constructor(param0: string);
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public constructor(param0: globalAndroid.content.Context, param1: string);
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class EPOSTPrinter extends com.sewoo.jpos.command.EPOST {
					public static class: java.lang.Class<com.sewoo.jpos.printer.EPOSTPrinter>;
					public escpos: com.sewoo.jpos.command.ESCPOS;
					public printerCheck(): number;
					public constructor(param0: string);
					public printForm(): void;
					public Printer_printText(param0: string, param1: number, param2: number, param3: number): void;
					public getEmulation(): number;
					public Printer_setCharacterSet(param0: number): number;
					public Printer_getModelName(): string;
					public Printer_getCompanyCode(): string;
					public isValidAddress(param0: string): boolean;
					public Printer_drawEllipse(param0: number, param1: number, param2: number, param3: number, param4: number): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public Printer_drawLine(param0: number, param1: number, param2: number, param3: number, param4: number): number;
					public GetPowerValue(): number;
					public static getInstance(param0: string): com.sewoo.jpos.printer.EPOSTPrinter;
					public constructor();
					public connect(param0: globalAndroid.bluetooth.BluetoothDevice): void;
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public sendByte(param0: native.Array<number>): void;
					public Printer_open(param0: string, param1: number): number;
					public Printer_open(param0: globalAndroid.bluetooth.BluetoothDevice): number;
					public Printer_drawBox(param0: number, param1: number, param2: number, param3: number, param4: number): number;
					public connect(param0: string, param1: number): void;
					public disconnect(): void;
					public static getInstance(): com.sewoo.jpos.printer.EPOSTPrinter;
					public disconnect(param0: number): void;
					public printerResults(param0: number): number;
					public write(param0: native.Array<number>): void;
					public isConnected(): boolean;
					public Printer_printBitmap(param0: number, param1: number, param2: number, param3: number, param4: globalAndroid.graphics.Bitmap): number;
					public status(): number;
					public printGS1(param0: number, param1: string, param2: number, param3: number, param4: number, param5: number, param6: string): number;
					public printForm(param0: boolean): number;
					public Printer_close(): number;
					public IsValidBatteryPower(): number;
					public Printer_checkPrinter(): number;
					public Printer_checkResult(param0: number): number;
					public printerCheck(param0: number): number;
					public Printer_moveToStartLine(): void;
					public receiveByte(param0: native.Array<number>): number;
					public sendPrinter(): void;
					public Printer_getState(): number;
					public printerResults(): number;
					public getModel(): number;
					public setMedia(param0: number): void;
					public Printer_lineFeed(param0: number): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ESCPOSImage {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ESCPOSImage>;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number): number;
					public getImage(param0: native.Array<number>): number;
					public constructor();
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): number;
					public printBitmap(param0: string, param1: number): number;
					public printBitmap(param0: globalAndroid.graphics.Bitmap): number;
					public getImageBufferSize(): number;
					public getImageSize(): number;
					public printBitmap(param0: string): number;
					public printImageFile(param0: string, param1: number, param2: number): number;
					public constructor(param0: number);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ESCPOSPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ESCPOSPrinter>;
					public requestQueue: com.sewoo.jpos.request.RequestQueue;
					public escpos: com.sewoo.jpos.command.ESCPOS;
					public speedjni: com.sewoo.jpos.printer.SpeedJNI;
					public ZEPE_SendReceive(param0: number, param1: native.Array<number>, param2: boolean): number;
					public setDithering(param0: number): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number, param3: number): number;
					public printBarCode(param0: string, param1: number, param2: number, param3: number, param4: number, param5: number): void;
					public deleteNVImage(): number;
					public setPageMode(param0: boolean): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number, param3: number, param4: number): number;
					public constructor();
					public printWidth(param0: number, param1: number): void;
					public printAndroidFont(param0: string, param1: number, param2: number, param3: number): number;
					public setCompress(param0: number): void;
					public setUTF8Mode(param0: string): void;
					public printerResults(param0: number): number;
					public setRelativeHorizontal(param0: number): void;
					public setLabel(param0: number, param1: number): number;
					public ZEPE_SetTimeOut(param0: number): void;
					public printBitmap(param0: string, param1: number): number;
					public printPDF417(param0: string, param1: number, param2: number, param3: number, param4: number, param5: number, param6: number, param7: number, param8: number): number;
					public printLabel(): number;
					public downloadNVImage(param0: string, param1: number, param2: number, param3: number): number;
					public setAsync(param0: boolean): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: string, param4: number, param5: number, param6: number): number;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number, param3: number, param4: number, param5: number): number;
					public setText(param0: number, param1: number): void;
					public printQRCode(param0: string, param1: number, param2: number, param3: number, param4: number, param5: number): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): number;
					public ZEPE_GetTimeOut(): number;
					public getModel(): number;
					public getBarCodeSymbol(param0: number): number;
					public LGU_ZEPE_Send(param0: number, param1: native.Array<number>): number;
					public asbOn(): number;
					public setPrinterInfo(param0: native.Array<number>, param1: number): number;
					public setCharSet(param0: string): void;
					public printBitmap(param0: string, param1: number, param2: number, param3: number, param4: number): number;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: string, param3: number, param4: number, param5: number): number;
					public printNormal(param0: string): void;
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public sendByte(param0: native.Array<number>): void;
					public getResponseSize(): number;
					public printerStatus(): number;
					public printPDF417(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public printString(param0: string): void;
					public setCodepage(param0: number): number;
					public setDPI(param0: number): void;
					public printNormalViscii(param0: string): number;
					public printerCheck(param0: number, param1: boolean): number;
					public status(): number;
					public enabledPower(): number;
					public setAlignment(param0: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: string, param2: number, param3: number, param4: number): number;
					public setReadSizePosition(param0: number, param1: boolean): number;
					public printBitmap(param0: string, param1: number, param2: number): number;
					public setBypass(param0: boolean): number;
					public printerCheck(param0: number): number;
					public LGU_ZEPE_ICR_Inserted(): boolean;
					public ZEPE_SendReceive(param0: number, param1: native.Array<number>, param2: native.Array<number>): number;
					public setPrintDirection(param0: number): void;
					public receiveByte(param0: native.Array<number>): number;
					public ZEPE_Receive(param0: native.Array<number>): number;
					public clearPageModeData(): void;
					public constructor(param0: string);
					public getEmulation(): number;
					public LGU_ZEPE_SendReceive(param0: number, param1: native.Array<number>, param2: native.Array<number>): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number): number;
					public printDataMatrix(param0: string, param1: number, param2: number, param3: number): number;
					public printNVBitmap(param0: number, param1: number): void;
					public printAndroidFont(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number): number;
					public getPrinterInfo(param0: native.Array<number>, param1: number, param2: native.Array<number>): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: string, param5: number, param6: number, param7: number): number;
					public lineFeed(param0: number): void;
					public setPrintingArea(param0: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: string, param4: number, param5: number, param6: number): number;
					public printImageFile(param0: string, param1: number, param2: number, param3: number): number;
					public printText(param0: string, param1: number, param2: number, param3: number): void;
					public printStringViscii(param0: string): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: boolean, param6: string, param7: number, param8: number, param9: number): number;
					public ICR_SendReceive(param0: number, param1: native.Array<number>, param2: number, param3: native.Array<number>): number;
					public printerCheck(): number;
					public cutPaper(): void;
					public setAbsoluteHorizontal(param0: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: boolean, param4: string, param5: number, param6: number, param7: number): number;
					public isASBMode(): boolean;
					public setCharSet(param0: string, param1: number): number;
					public drawerSts(): number;
					public ZEPE_SendReceive(param0: number, param1: native.Array<number>, param2: native.Array<number>, param3: boolean): number;
					public printNVBitmap(param0: number): void;
					public openDrawer(param0: number, param1: number, param2: number): void;
					public cardInserted(): boolean;
					public setWeb(param0: number): void;
					public ICRMode(param0: boolean): number;
					public setLabel(param0: number, param1: number, param2: number): number;
					public printerSts(): number;
					public cutPaper(param0: boolean): void;
					public printBitmap(param0: string, param1: number, param2: number, param3: number, param4: number, param5: number): number;
					public printPageModeData(): void;
					public setAbsoluteVertical(param0: number): void;
					public EMVII_SendReceive(param0: number, param1: native.Array<number>, param2: native.Array<number>): number;
					public disabledPower(): number;
					public setPrintingArea(param0: number, param1: number): void;
					public enabledICR(param0: boolean): number;
					public printQRCode(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: string, param6: number, param7: number, param8: number): number;
					public setRelativeVertical(param0: number): void;
					public printerResults(): number;
					public asbOff(): number;
					public printBitmap(param0: string, param1: number, param2: number, param3: number): number;
					public LGU_ZEPE_Receive(param0: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ESCPOSWebPrinter extends com.sewoo.jpos.printer.ESCPOSPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ESCPOSWebPrinter>;
					public constructor(param0: globalAndroid.content.Context);
					public constructor(param0: string);
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public constructor(param0: globalAndroid.content.Context, param1: string);
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class GS1Command {
					public static class: java.lang.Class<com.sewoo.jpos.printer.GS1Command>;
					public static getInstance(): com.sewoo.jpos.printer.GS1Command;
					public getAiString(param0: number): string;
					public getAiTotalLength(): number;
					public getAiStringLength(param0: number): number;
					public getAiDataLength(param0: number): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class LKPrint extends com.sewoo.jpos.command.ESCPOSConst {
					public static class: java.lang.Class<com.sewoo.jpos.printer.LKPrint>;
					/**
					 * Constructs a new instance of the com.sewoo.jpos.printer.LKPrint interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {});
					public constructor();
					public static LK_BCS_Code128: number;
					public static LK_TXT_2WIDTH: number;
					public static LK_CODEPAGE_TIS11: number;
					public static LK_ALIGNMENT_RIGHT: number;
					public static LK_CODEPAGE_TIS14: number;
					public static NO_ERR: number;
					public static LK_CODEPAGE_INVALID: number;
					public static LK_CHECKSUM_ERROR: number;
					public static LK_QRCODE_VERSION_9: number;
					public static LK_ALIGNMENT_CENTER: number;
					public static LK_QRCODE_VERSION_8: number;
					public static LK_FNT_FONTB: number;
					public static LK_STS_NORMAL: number;
					public static LK_VISCII_SUCCESS: number;
					public static LK_TXT_6WIDTH: number;
					public static LK_FAIL: number;
					public static LK_CODEPAGE_CP437: number;
					public static CD_PIN_FIVE: number;
					public static LK_CODEPAGE_TIS17: number;
					public static LK_TXT_3HEIGHT: number;
					public static LK_MSR_TRACK_12: number;
					public static CD_PIN_TWO: number;
					public static STS_PAPEREMPTY: number;
					public static LK_BITMAP_NORMAL: number;
					public static ERR_SEQUENCE_NUMBER: number;
					public static LK_CREATE_ERROR: number;
					public static LK_VISCII_NOT_SETUP: number;
					public static STS_PAPERNEAREMPTY: number;
					public static LK_TXT_2HEIGHT: number;
					public static STX: number;
					public static ERR_RESYNCH: number;
					public static LK_QRCODE_VERSION_5: number;
					public static LK_QRCODE_VERSION_4: number;
					public static NOT_FOUND: number;
					public static LK_QRCODE_VERSION_7: number;
					public static LK_QRCODE_VERSION_6: number;
					public static LK_TXT_8HEIGHT: number;
					public static LK_HRI_TEXT_BELOW: number;
					public static LK_QRCODE_VERSION_1: number;
					public static LK_FNT_BOLD: number;
					public static LK_QRCODE_VERSION_3: number;
					public static LK_QRCODE_VERSION_2: number;
					public static LK_FNT_REVERSE: number;
					public static STS_COVEROPEN: number;
					public static LK_QRCODE_VERSION_AUTO: number;
					public static LK_IC_INSERTED: number;
					public static LK_SUCCESS: number;
					public static LK_BCS_UPCE: number;
					public static LK_BCS_JAN13: number;
					public static LK_CODEPAGE_FINAL: number;
					public static LK_NOT_OPENED: number;
					public static LK_BCS_UPCA: number;
					public static LK_TXT_7HEIGHT: number;
					public static ERR_READPORT: number;
					public static LK_BITMAP_HEIGHT_DOUBLE: number;
					public static LK_TXT_4WIDTH: number;
					public static EOT: number;
					public static LK_BCS_Code93: number;
					public static LK_VISCII_NOT_SUPPORTED: number;
					public static LK_BITMAP_WIDTH_DOUBLE: number;
					public static LK_MSR_TRACK_2: number;
					public static LK_TXX_MODEL: number;
					public static LK_MSR_TRACK_1: number;
					public static LK_MSR_TRACK_3: number;
					public static LK_BCS_EAN13: number;
					public static LK_BCS_ITF: number;
					public static STS_NORMAL: number;
					public static LK_FONT_DRAW_ERROR: number;
					public static LK_FNT_UNDERLINE: number;
					public static LK_TXT_6HEIGHT: number;
					public static LK_FNT_UNDERLINE2: number;
					public static LK_BCS_Codabar: number;
					public static MAXTRY: number;
					public static DUMMY_TIMEOUT: number;
					public static LK_CODEPAGE_CP860: number;
					public static ERR_INITPORT: number;
					public static LK_CODEPAGE_CP864: number;
					public static LK_CODEPAGE_CP865: number;
					public static LK_CODEPAGE_CP863: number;
					public static LK_CODEPAGE_CP866: number;
					public static RESYNCH: number;
					public static ERR_COMNUM: number;
					public static FOUND: number;
					public static STS_CD_OPEN: number;
					public static LK_HRI_TEXT_NONE: number;
					public static ERR_NACK: number;
					public static DIRECTION_LEFT_RIGHT: number;
					public static LK_TXT_4HEIGHT: number;
					public static LK_HRI_TEXT_ABOVE: number;
					public static LK_CODEPAGE_KATAKANA: number;
					public static LK_CODEPAGE_CP850: number;
					public static DIRECTION_RIGHT_LEFT: number;
					public static LK_STS_PAPER_EMPTY: number;
					public static LK_CODEPAGE_CP852: number;
					public static LK_CODEPAGE_CP857: number;
					public static LK_CODEPAGE_CP858: number;
					public static LK_CODEPAGE_CP737: number;
					public static DIRECTION_BOTTOM_TOP: number;
					public static LK_ALIGNMENT_LEFT: number;
					public static LK_UNIT_DOT: number;
					public static LK_QRCODE_VERSION_23: number;
					public static LK_QRCODE_VERSION_22: number;
					public static LK_QRCODE_VERSION_25: number;
					public static LK_QRCODE_VERSION_24: number;
					public static LK_QRCODE_VERSION_27: number;
					public static ERR_WRITEPORT: number;
					public static LK_QRCODE_VERSION_26: number;
					public static LK_QRCODE_VERSION_29: number;
					public static LK_QRCODE_VERSION_28: number;
					public static DIRECTION_TOP_BOTTOM: number;
					public static LK_QRCODE_VERSION_21: number;
					public static LK_QRCODE_VERSION_20: number;
					public static LK_STS_PRINTEROFF: number;
					public static LK_UNIT_MM: number;
					public static LK_FNT_DEFAULT: number;
					public static LK_UNKNOWN: number;
					public static LK_QRCODE_VERSION_19: number;
					public static LK_TXT_3WIDTH: number;
					public static LK_QRCODE_VERSION_12: number;
					public static LK_QRCODE_VERSION_11: number;
					public static LK_QRCODE_VERSION_14: number;
					public static LK_QRCODE_VERSION_13: number;
					public static LK_QRCODE_VERSION_16: number;
					public static LK_QRCODE_VERSION_15: number;
					public static LK_QRCODE_VERSION_18: number;
					public static LK_QRCODE_VERSION_17: number;
					public static LK_BITMAP_ORDERED_DITHER: number;
					public static LK_QRCODE_VERSION_10: number;
					public static LK_VISCII_INVALID: number;
					public static LK_QRCODE_VERSION_40: number;
					public static LK_TXT_5HEIGHT: number;
					public static LK_BCS_Code39: number;
					public static DEFAULT_TIMEOUT: number;
					public static LK_QRCODE_EC_LEVEL_Q: number;
					public static LK_QRCODE_EC_LEVEL_L: number;
					public static LK_QRCODE_EC_LEVEL_M: number;
					public static LK_QRCODE_VERSION_34: number;
					public static LK_QRCODE_EC_LEVEL_H: number;
					public static LK_QRCODE_VERSION_33: number;
					public static ERR_LRC: number;
					public static LK_QRCODE_VERSION_36: number;
					public static LK_QRCODE_VERSION_35: number;
					public static LK_QRCODE_VERSION_38: number;
					public static LK_QRCODE_VERSION_37: number;
					public static LK_QRCODE_VERSION_39: number;
					public static LK_CODEPAGE_MOZOVIA: number;
					public static LK_BXX_MODEL: number;
					public static ERR_PARITY: number;
					public static LK_QRCODE_VERSION_30: number;
					public static LK_QRCODE_VERSION_32: number;
					public static LK_QRCODE_VERSION_31: number;
					public static ERR_BASE: number;
					public static LK_TXT_5WIDTH: number;
					public static LK_TIMEOUT_ERROR: number;
					public static LK_UNIT_INCH: number;
					public static DEFAULT_PCB_VALUE: number;
					public static ERR_SERIOUS_ERROR: number;
					public static LK_TXT_8WIDTH: number;
					public static LK_BITMAP_WIDTH_HEIGHT_DOUBLE: number;
					public static STS_CD_CLOSE: number;
					public static LK_CODEPAGE_CP862MD: number;
					public static LK_FONT_OUT_OF_LENGTH: number;
					public static LK_BCS_JAN8: number;
					public static LK_TXT_7WIDTH: number;
					public static LK_BCS_EAN8: number;
					public static LK_TXT_1WIDTH: number;
					public static EMV_SIZE: number;
					public static LK_IC_UNINSERTED: number;
					public static LK_PXX_MODEL: number;
					public static LK_STS_BATTERY_LOW: number;
					public static LK_STS_TIMEOUT: number;
					public static DEFAULT_NAD_VALUE: number;
					public static LK_CODEPAGE_SUCCESS: number;
					public static LK_CODEPAGE_CP1253: number;
					public static LK_CODEPAGE_CP1252: number;
					public static LK_CODEPAGE_CP1251: number;
					public static ETX: number;
					public static LK_CODEPAGE_CP1250: number;
					public static GBP_SIZE: number;
					public static LK_CODEPAGE_CP1258: number;
					public static LK_CODEPAGE_CP1257: number;
					public static LK_CODEPAGE_CP1256: number;
					public static LK_CODEPAGE_CP1254: number;
					public static LK_BITMAP_NO_DITHER: number;
					public static LK_STS_MSR_READ: number;
					public static LK_MSR_TRACK_23: number;
					public static LK_TXT_1HEIGHT: number;
					public static LK_CODEPAGE_ISO_8859_7: number;
					public static LK_CODEPAGE_ISO_8859_9: number;
					public static LK_BITMAP_ERROR_DIFFUSION: number;
					public static ERR_READER_MUTE: number;
					public static LK_CODEPAGE_ISO_8859_1: number;
					public static LK_STS_COVER_OPEN: number;
					public static LK_CODEPAGE_ISO_8859_2: number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class NFCPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.NFCPrinter>;
					public getBT(param0: string): string;
					public isWiFi(param0: string): boolean;
					public isBT(param0: string): boolean;
					public constructor();
					public getPortnum(param0: string): number;
					public getIP(param0: string): string;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class NativeCall {
					public static class: java.lang.Class<com.sewoo.jpos.printer.NativeCall>;
					public stringFromJNI(): string;
					public CheckID(param0: native.Array<number>): number;
					public constructor();
					public add(param0: number, param1: number): number;
					public CopyLength(param0: native.Array<number>, param1: number): number;
					public ClearLength(): number;
					public CheckLength(param0: native.Array<number>, param1: number): number;
					public GetID(param0: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class OLEPOSCommand {
					public static class: java.lang.Class<com.sewoo.jpos.printer.OLEPOSCommand>;
					public isWeb: number;
					public textFont: number;
					public barWidth: number;
					public barHeight: number;
					public textPosition: number;
					public barSymbology: number;
					public barLength: number;
					public isCodeC: boolean;
					public hitBarCode: boolean;
					public toPrinterTempBuffer: native.Array<number>;
					public destPos: number;
					public constructor(param0: com.sewoo.jpos.request.RequestQueue);
					public parseJposCMD(param0: string): void;
					public parseVisciiCMD(param0: string): number;
					public convertSendViscii(param0: string): number;
					public setWeb(param0: number): void;
					public constructor(param0: string, param1: com.sewoo.jpos.request.RequestQueue);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class SpeedJNI {
					public static class: java.lang.Class<com.sewoo.jpos.printer.SpeedJNI>;
					public stringFromJNI(): string;
					public CheckID(param0: native.Array<number>): number;
					public constructor();
					public add(param0: number, param1: number): number;
					public CopyLength(param0: native.Array<number>, param1: number): number;
					public ClearLength(): number;
					public CheckLength(param0: native.Array<number>, param1: number): number;
					public GetID(param0: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ZPLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ZPLPrinter>;
					public startXA: boolean;
					public constructor(param0: string);
					public getEmulation(): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: string, param5: number, param6: number): number;
					public printText(param0: string, param1: string, param2: number, param3: number, param4: number, param5: number, param6: string): void;
					public startPage(): void;
					public constructor();
					public downloadGraphic(param0: string, param1: string): void;
					public printDiagonalLine(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: string): void;
					public setupPrinter(param0: string, param1: string, param2: number, param3: number): void;
					public printTextFormat(param0: string, param1: string, param2: number, param3: number, param4: number, param5: number, param6: string, param7: string, param8: string): void;
					public getPrinterInfo(param0: native.Array<number>, param1: number, param2: native.Array<number>): number;
					public setSpeed(param0: string): void;
					public printRectangle(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string, param6: number): void;
					public printImage(param0: string, param1: number, param2: number): void;
					public setAndroidXY(param0: number, param1: number): void;
					public printBitmap(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): void;
					public setBarcodeField(param0: java.util.ArrayList<string>): void;
					public downloadGraphic(param0: globalAndroid.graphics.Bitmap, param1: string): void;
					public printBitmap(param0: string, param1: number, param2: number): void;
					public printGraphic(param0: string, param1: number, param2: number, param3: number, param4: number): void;
					public printBarcode(param0: string, param1: java.util.ArrayList<string>, param2: number, param3: number, param4: string): void;
					public printPDF417(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string, param7: string): void;
					public getModel(): number;
					public directCommand(param0: string): void;
					public setDarkness(param0: string): void;
					public setPrinterInfo(param0: native.Array<number>, param1: number): number;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: string, param6: number, param7: number): number;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: boolean, param4: string, param5: number, param6: number, param7: number): void;
					public printQRCode(param0: number, param1: number, param2: number, param3: number, param4: string, param5: string): void;
					public printCircle(param0: number, param1: number, param2: number, param3: number, param4: string): void;
					public setCharSet(param0: string): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: boolean, param3: string, param4: number, param5: number, param6: number): void;
					public printAndroidFont(param0: string, param1: number, param2: number, param3: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: string, param4: number, param5: number): number;
					public printDataMatrix(param0: number, param1: number, param2: string, param3: number, param4: number, param5: string): void;
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public endPage(param0: number, param1: number, param2: number, param3: string): void;
					public printImage(param0: globalAndroid.graphics.Bitmap, param1: number, param2: number): void;
					public printAndroidFont(param0: number, param1: number, param2: globalAndroid.graphics.Typeface, param3: boolean, param4: boolean, param5: boolean, param6: string, param7: number, param8: number): number;
					public endPage(param0: number): void;
					public deleteGraphic(param0: string): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: string, param2: number, param3: number, param4: number): void;
					public printEllipse(param0: number, param1: number, param2: number, param3: number, param4: number, param5: string): void;
					public printDataMatrix(param0: number, param1: number, param2: string, param3: number, param4: number, param5: number, param6: string): void;
					public setInternationalFont(param0: number): void;
					public printAndroidFont(param0: globalAndroid.graphics.Typeface, param1: boolean, param2: string, param3: number, param4: number, param5: number): void;
					public printAndroidFont(param0: number, param1: number, param2: string, param3: number, param4: number): number;
					public readData(param0: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ZPLRFIDPrinter extends com.sewoo.jpos.printer.ZPLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ZPLRFIDPrinter>;
					public checkTAGWrite(): void;
					public constructor(param0: string);
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public writeTag(param0: string, param1: boolean): void;
					public writeHexTag(param0: string, param1: boolean): void;
					public startTagPage(): void;
					public setupTagMode(): void;
					public endTagPage(param0: number): void;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public writeTagFormat(param0: string, param1: string, param2: string, param3: boolean): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export class ZPLWebPrinter extends com.sewoo.jpos.printer.ZPLPrinter {
					public static class: java.lang.Class<com.sewoo.jpos.printer.ZPLWebPrinter>;
					public constructor(param0: globalAndroid.content.Context);
					public constructor(param0: string);
					public constructor();
					public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
					public constructor(param0: globalAndroid.content.Context, param1: string);
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class CompressJNI {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.CompressJNI>;
						public CopyLength(param0: native.Array<number>, param1: number): number;
						public CheckID(param0: native.Array<number>): number;
						public constructor();
						public add(param0: number, param1: number): number;
						public ClearLength(): number;
						public GetID(param0: native.Array<number>): number;
						public CheckLength(param0: native.Array<number>, param1: number): number;
						public stringFromJNI(): string;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class FormFileLoader {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.FormFileLoader>;
						public calcFileSizes(param0: native.Array<java.io.File>): number;
						public constructor();
						public loadFormData(param0: string): native.Array<number>;
						public calcFileSizes(param0: native.Array<string>): number;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class FormPrinter extends com.sewoo.jpos.printer.ESCPOSPrinter {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.FormPrinter>;
						public receiveFormInfo(): void;
						public saveForm(param0: native.Array<string>): void;
						public constructor();
						public PrintLineCommand(param0: number, param1: number, param2: number, param3: number, param4: number): native.Array<number>;
						public loadForm(param0: string): void;
						public printImageOnForm(param0: number, param1: number, param2: native.Array<number>): void;
						public printImageOnForm(param0: number, param1: number, param2: string): void;
						public printFormInfo(): void;
						public constructor(param0: string, param1: com.sewoo.port.android.DeviceConnection);
						public sendCommand(param0: native.Array<number>): void;
						public sendCommand(param0: native.Array<number>, param1: number): void;
						public printTextOnForm(param0: number, param1: number, param2: string): void;
						public printForm(): void;
						public deleteAllForms(): void;
						public printTextCommand(param0: number, param1: number, param2: string): native.Array<number>;
						public PrintBoxCommand(param0: number, param1: number, param2: number, param3: number, param4: number): native.Array<number>;
						public saveForm(param0: native.Array<java.io.File>): void;
						public constructor(param0: com.sewoo.port.android.DeviceConnection);
						public constructor(param0: string);
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class ImageOpener {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.ImageOpener>;
						public load(param0: native.Array<number>): native.Array<number>;
						public constructor();
						public getDyH(): number;
						public getDxH(): number;
						public load(param0: string): native.Array<number>;
						public getDxL(): number;
						public getImage(): native.Array<number>;
						public getDyL(): number;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class LKP31Const {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.LKP31Const>;
						/**
						 * Constructs a new instance of the com.sewoo.jpos.printer.lkp31.LKP31Const interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {});
						public constructor();
						public static LK_SUCCESS: number;
						public static LK_ARIA_KEY_NONE: number;
						public static LK_ARIA_KEY_192: number;
						public static LK_ARIA_KEY_128: number;
						public static LK_FAIL: number;
						public static LK_ARIA_KEY_256: number;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module printer {
				export module lkp31 {
					export class LKP31Printer {
						public static class: java.lang.Class<com.sewoo.jpos.printer.lkp31.LKP31Printer>;
						public escpos: com.sewoo.jpos.command.ESCPOS;
						public compJNI: com.sewoo.jpos.printer.lkp31.CompressJNI;
						public PrintBitmapXY(param0: number, param1: number, param2: native.Array<number>): number;
						public constructor();
						public PrintBoxXY(param0: number, param1: number, param2: number, param3: number, param4: number): number;
						public FormPrint(): number;
						public setPageMode(param0: boolean): void;
						public PrintLineXY(param0: number, param1: number, param2: number, param3: number, param4: number): number;
						public UserCommand(param0: native.Array<number>, param1: number): number;
						public PrintBitmapXY(param0: number, param1: number, param2: string): number;
						public PrintVerticalLine(param0: number, param1: number, param2: number, param3: number): number;
						public PrintTextXY(param0: number, param1: number, param2: string): number;
						public setPrintingArea(param0: number, param1: number, param2: number, param3: number): void;
						public PrintHorizontalLine(param0: number, param1: number, param2: number, param3: number): number;
						public setPrintingArea(param0: number, param1: number): void;
						public SetARIA(param0: number): number;
						public LoadForm(param0: string): number;
						public BlackMarkSearch(): number;
						public setPrintDirection(param0: number): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class BlockingReadBleICR {
					public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadBleICR>;
					public constructor();
					public constructor(param0: number);
					public readData(param0: native.Array<number>): number;
				}
				export module BlockingReadBleICR {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadBleICR.ReadStatusThread>;
						public run(): void;
						public getSize(): number;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class BlockingReadICR {
					public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadICR>;
					public constructor();
					public constructor(param0: number);
					public readData(param0: native.Array<number>): number;
				}
				export module BlockingReadICR {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadICR.ReadStatusThread>;
						public run(): void;
						public getSize(): number;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class BlockingReadStatus {
					public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadStatus>;
					public constructor();
					public constructor(param0: number);
					public readData(param0: native.Array<number>): number;
				}
				export module BlockingReadStatus {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadStatus.ReadStatusThread>;
						public run(): void;
						public getSize(): number;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class BlockingReadStatusEPL {
					public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadStatusEPL>;
					public constructor();
					public constructor(param0: number);
					public readData(param0: native.Array<number>): number;
				}
				export module BlockingReadStatusEPL {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.jpos.request.BlockingReadStatusEPL.ReadStatusThread>;
						public run(): void;
						public getSize(): number;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class RequestData {
					public static class: java.lang.Class<com.sewoo.jpos.request.RequestData>;
					public getRequestData(): native.Array<number>;
					public constructor(param0: native.Array<number>);
					public getAsyncMode(): boolean;
					public constructor(param0: native.Array<number>, param1: boolean);
					public constructor(param0: native.Array<number>, param1: boolean, param2: boolean);
					public getEncryptMode(): boolean;
					public isPrintImmediate(): boolean;
					public constructor(param0: native.Array<number>, param1: boolean, param2: boolean, param3: boolean);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class RequestQueue {
					public static class: java.lang.Class<com.sewoo.jpos.request.RequestQueue>;
					public addRequest(param0: native.Array<number>): void;
					public static getInstance(): com.sewoo.jpos.request.RequestQueue;
					public isEmpty(): boolean;
					public getRequest(): boolean;
					public setRequest(param0: boolean): void;
					public constructor();
					public enqueue(param0: com.sewoo.jpos.request.RequestData): void;
					public clearQueue(): void;
					public dequeue(): com.sewoo.jpos.request.RequestData;
					public addRequest(param0: native.Array<number>, param1: boolean): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class TimeOutChecker {
					public static class: java.lang.Class<com.sewoo.jpos.request.TimeOutChecker>;
					public constructor(param0: native.Array<number>);
					public run(): void;
					public constructor(param0: native.Array<number>, param1: number);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module jpos {
			export module request {
				export class TimeOutStripe {
					public static class: java.lang.Class<com.sewoo.jpos.request.TimeOutStripe>;
					public constructor(param0: native.Array<number>);
					public run(): void;
					public constructor(param0: native.Array<number>, param1: number);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export class PortMediator {
				public static class: java.lang.Class<com.sewoo.port.PortMediator>;
				public getOs(): java.io.OutputStream;
				public setIs(param0: java.io.InputStream): void;
				public getIs(): java.io.InputStream;
				public static getInstance(): com.sewoo.port.PortMediator;
				public setOs(param0: java.io.OutputStream): void;
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class BluetoothPort extends com.sewoo.port.android.PortInterface {
					public static class: java.lang.Class<com.sewoo.port.android.BluetoothPort>;
					public connect(param0: string): void;
					public isConnected(): boolean;
					public disconnect(param0: string, param1: boolean): void;
					public isValidAddress(param0: string): boolean;
					public disconnect(param0: globalAndroid.bluetooth.BluetoothDevice, param1: boolean): void;
					public connectInsecure(param0: globalAndroid.bluetooth.BluetoothDevice): void;
					public connect(param0: string, param1: boolean): void;
					public connectSecure(param0: string): void;
					public connectInsecure(param0: string): void;
					public static getInstance(): com.sewoo.port.android.BluetoothPort;
					public connectSecure(param0: globalAndroid.bluetooth.BluetoothDevice): void;
					public constructor();
					public connect(param0: globalAndroid.bluetooth.BluetoothDevice): void;
					public getOutputStream(): java.io.OutputStream;
					public getInputStream(): java.io.InputStream;
					public getModel(): number;
					public connect(param0: globalAndroid.bluetooth.BluetoothDevice, param1: boolean): void;
					public disconnect(): void;
					public disconnect(param0: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class DeviceConnection {
					public static class: java.lang.Class<com.sewoo.port.android.DeviceConnection>;
					/**
					 * Constructs a new instance of the com.sewoo.port.android.DeviceConnection interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: { close(): void; getQueue(): com.sewoo.jpos.request.RequestQueue; read(param0: native.Array<number>): number; readData(param0: native.Array<number>): number; setDevTimeout(param0: number): void });
					public constructor();
					public getQueue(): com.sewoo.jpos.request.RequestQueue;
					public read(param0: native.Array<number>): number;
					public close(): void;
					public setDevTimeout(param0: number): void;
					public readData(param0: native.Array<number>): number;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class PortInterface {
					public static class: java.lang.Class<com.sewoo.port.android.PortInterface>;
					/**
					 * Constructs a new instance of the com.sewoo.port.android.PortInterface interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: { connect(param0: string): void; disconnect(): void; getInputStream(): java.io.InputStream; getOutputStream(): java.io.OutputStream; isConnected(): boolean });
					public constructor();
					public connect(param0: string): void;
					public isConnected(): boolean;
					public getOutputStream(): java.io.OutputStream;
					public getInputStream(): java.io.InputStream;
					public disconnect(): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class USBPort {
					public static class: java.lang.Class<com.sewoo.port.android.USBPort>;
					public static POS_PRINTER: number;
					public static LABEL_PRINTER: number;
					public static MOBILE_PRINTER: number;
					public static EPSON_POS_PRINTER: number;
					public connect_device(param0: globalAndroid.hardware.usb.UsbDevice): com.sewoo.port.android.USBPortConnection;
					public search_device(param0: number): globalAndroid.hardware.usb.UsbDevice;
					public connect_device(param0: number): com.sewoo.port.android.USBPortConnection;
					public constructor(param0: globalAndroid.hardware.usb.UsbManager, param1: globalAndroid.content.Context);
					public constructor(param0: globalAndroid.hardware.usb.UsbManager);
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class USBPortConnection extends com.sewoo.port.android.DeviceConnection {
					public static class: java.lang.Class<com.sewoo.port.android.USBPortConnection>;
					public setInterface(param0: globalAndroid.hardware.usb.UsbInterface): void;
					public getQueue(): com.sewoo.jpos.request.RequestQueue;
					public setEndPointIn(param0: globalAndroid.hardware.usb.UsbEndpoint): void;
					public getTimeout(): number;
					public read(param0: native.Array<number>): number;
					public close(): void;
					public setDevTimeout(param0: number): void;
					public setEndPointOut(param0: globalAndroid.hardware.usb.UsbEndpoint): void;
					public readData(param0: native.Array<number>, param1: number): number;
					public constructor(param0: globalAndroid.hardware.usb.UsbDeviceConnection);
					public readData(param0: native.Array<number>): number;
				}
				export module USBPortConnection {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.port.android.USBPortConnection.ReadStatusThread>;
						public run(): void;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
					export class SenderThread {
						public static class: java.lang.Class<com.sewoo.port.android.USBPortConnection.SenderThread>;
						public run(): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class WiFiPort extends com.sewoo.port.android.PortInterface {
					public static class: java.lang.Class<com.sewoo.port.android.WiFiPort>;
					public connect(param0: string): void;
					public isConnected(): boolean;
					public connect(param0: string, param1: number, param2: number): void;
					public constructor();
					public open(param0: string): com.sewoo.port.android.WiFiPortConnection;
					public connect(param0: string, param1: number): void;
					public getOutputStream(): java.io.OutputStream;
					public getInputStream(): java.io.InputStream;
					public open(param0: string, param1: number): com.sewoo.port.android.WiFiPortConnection;
					public getModel(): number;
					public static getInstance(): com.sewoo.port.android.WiFiPort;
					public disconnect(): void;
					public disconnect(param0: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module port {
			export module android {
				export class WiFiPortConnection extends com.sewoo.port.android.DeviceConnection {
					public static class: java.lang.Class<com.sewoo.port.android.WiFiPortConnection>;
					public getQueue(): com.sewoo.jpos.request.RequestQueue;
					public constructor(param0: java.nio.channels.SocketChannel);
					public isConnected(): boolean;
					public getTimeout(): number;
					public read(param0: native.Array<number>): number;
					public close(): void;
					public setDevTimeout(param0: number): void;
					public readData(param0: native.Array<number>): number;
				}
				export module WiFiPortConnection {
					export class ReadStatusThread {
						public static class: java.lang.Class<com.sewoo.port.android.WiFiPortConnection.ReadStatusThread>;
						public run(): void;
						public setBuffer(param0: native.Array<number>, param1: number, param2: number): void;
						public getBuffer(): native.Array<number>;
					}
					export class SenderThread {
						public static class: java.lang.Class<com.sewoo.port.android.WiFiPortConnection.SenderThread>;
						public run(): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class ARIAEngine {
					public static class: java.lang.Class<com.sewoo.request.android.ARIAEngine>;
					public static ARIA_KEY_NONE: number;
					public static ARIA_KEY_128: number;
					public static ARIA_KEY_192: number;
					public static ARIA_KEY_256: number;
					public isARIAEnabled(): boolean;
					public setKeySize(param0: number): void;
					public reset(): void;
					public dis_ARIA(): void;
					public encrypt(param0: native.Array<number>, param1: number, param2: native.Array<number>, param3: number): void;
					public disable_ARIA(): void;
					public encode_ARIA(param0: native.Array<number>): native.Array<number>;
					public encrypt(param0: native.Array<number>, param1: number): native.Array<number>;
					public decrypt(param0: native.Array<number>, param1: number, param2: native.Array<number>, param3: number): void;
					public decrypt(param0: native.Array<number>, param1: number): native.Array<number>;
					public decode_ARIA(param0: native.Array<number>): native.Array<number>;
					public static getInstance(): com.sewoo.request.android.ARIAEngine;
					public getKeySize(): number;
					public setupRoundKeys(): void;
					public enable_ARIA(param0: native.Array<number>, param1: number): void;
					public setKey(param0: native.Array<number>): void;
					public enab_ARIA(param0: native.Array<number>, param1: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class AndroidMSR {
					public static class: java.lang.Class<com.sewoo.request.android.AndroidMSR>;
					public static track1: string;
					public static track2: string;
					public static track3: string;
					public static rawData: string;
					public static rawDataSize: string;
					public static errorMsg: string;
					public readMSR(param0: number): number;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public startReader(): void;
					public releaseInstance(): void;
					public getHandler(): globalAndroid.os.Handler;
					public isMSRStatus(): boolean;
					public static getInstance(): com.sewoo.request.android.AndroidMSR;
					public cancelMSR(): void;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public setExitForce(param0: boolean): void;
					public stopReader(): void;
				}
				export module AndroidMSR {
					export class MSRReaderThread {
						public static class: java.lang.Class<com.sewoo.request.android.AndroidMSR.MSRReaderThread>;
						public run(): void;
						public readWaitBlock(param0: native.Array<number>): void;
						public readWaitNonBlock(param0: native.Array<number>): void;
					}
					export module MSRReaderThread {
						export class TimeChecker {
							public static class: java.lang.Class<com.sewoo.request.android.AndroidMSR.MSRReaderThread.TimeChecker>;
							public constructor(param0: com.sewoo.request.android.AndroidMSR.MSRReaderThread);
							public run(): void;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export abstract class BaseMSR {
					public static class: java.lang.Class<com.sewoo.request.android.BaseMSR>;
					public handler: globalAndroid.os.Handler;
					public requestQueue: com.sewoo.jpos.request.RequestQueue;
					public escpos: com.sewoo.jpos.command.ESCPOS;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public constructor();
					public sendMSRInit(): void;
					public getHandler(): globalAndroid.os.Handler;
					public sendMSRMode(param0: number): void;
					public sendMSRStatusCheck(): void;
					public readByteData(param0: native.Array<number>): number;
					public sendPrinterStatus(): void;
					public sendMSRtoNormalMode(): void;
					public sendRecvMSRData(param0: native.Array<number>, param1: number): void;
				}
				export module BaseMSR {
					export class MSRReaderTask extends globalAndroid.os.AsyncTask<java.lang.Void, java.lang.Void, java.lang.Void> {
						public static class: java.lang.Class<com.sewoo.request.android.BaseMSR.MSRReaderTask>;
						public constructor(param0: com.sewoo.request.android.BaseMSR);
						public constructor(param0: com.sewoo.request.android.BaseMSR, param1: number);
						public readWaitBlock(param0: native.Array<number>): number;
						public setExitForce(param0: boolean): void;
						public doInBackground(param0: native.Array<java.lang.Void>): java.lang.Void;
					}
					export module MSRReaderTask {
						export class TimeChecker {
							public static class: java.lang.Class<com.sewoo.request.android.BaseMSR.MSRReaderTask.TimeChecker>;
							public constructor(param0: com.sewoo.request.android.BaseMSR.MSRReaderTask);
							public run(): void;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class DUKPTMSR extends com.sewoo.request.android.BaseMSR {
					public static class: java.lang.Class<com.sewoo.request.android.DUKPTMSR>;
					public static dukptMSR: com.sewoo.request.android.DUKPTMSR;
					public static STX: number;
					public static ETX: number;
					public static ACK: number;
					public static NAK: number;
					public static SYNTAX_ERROR: number;
					public static LK_STATUS_VALUE: number;
					public static LK_STS_NORMAL: number;
					public static LK_STS_DUKPT_MSR: number;
					public selectTrack(param0: number): number;
					public readCancel(): number;
					public releaseInstance(): void;
					public readMSR(): number;
					public static getInstance(): com.sewoo.request.android.DUKPTMSR;
					public sendByteData(param0: native.Array<number>): void;
					public sendRecvMSRData(param0: native.Array<number>, param1: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class DebugLog {
					public static class: java.lang.Class<com.sewoo.request.android.DebugLog>;
					public constructor();
					public printHex(param0: native.Array<number>, param1: number): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class MultiConnector {
					public static class: java.lang.Class<com.sewoo.request.android.MultiConnector>;
					/**
					 * Constructs a new instance of the com.sewoo.request.android.MultiConnector interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: { getQueue(): com.sewoo.jpos.request.RequestQueue; getInputStream(): java.io.InputStream; connect(param0: string): void; disconnect(): void });
					public constructor();
					public connect(param0: string): void;
					public getQueue(): com.sewoo.jpos.request.RequestQueue;
					public getInputStream(): java.io.InputStream;
					public disconnect(): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class RequestHandler {
					public static class: java.lang.Class<com.sewoo.request.android.RequestHandler>;
					public constructor();
					public run(): void;
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class StandardPG {
					public static class: java.lang.Class<com.sewoo.request.android.StandardPG>;
					public static track1: string;
					public static track2: string;
					public static track3: string;
					public static rawData: string;
					public static rawDataSize: string;
					public static errorMsg: string;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public releaseInstance(): void;
					public userRead(param0: native.Array<number>): number;
					public userWrite(param0: native.Array<number>, param1: boolean): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public setExitForce(param0: boolean): void;
					public getTimeOut(): number;
					public userWrite(param0: native.Array<number>): number;
					public static getInstance(): com.sewoo.request.android.StandardPG;
					public readICR(): number;
					public setTimeOut(param0: number): void;
					public getHandler(): globalAndroid.os.Handler;
					public cancelICR(): void;
				}
				export module StandardPG {
					export class MSRReaderThread {
						public static class: java.lang.Class<com.sewoo.request.android.StandardPG.MSRReaderThread>;
						public run(): void;
						public readWaitNonBlock(param0: native.Array<number>): void;
					}
					export module MSRReaderThread {
						export class TimeChecker {
							public static class: java.lang.Class<com.sewoo.request.android.StandardPG.MSRReaderThread.TimeChecker>;
							public constructor(param0: com.sewoo.request.android.StandardPG.MSRReaderThread);
							public run(): void;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class UPlusPG {
					public static class: java.lang.Class<com.sewoo.request.android.UPlusPG>;
					public static track1: string;
					public static track2: string;
					public static track3: string;
					public static rawData: string;
					public static rawDataSize: string;
					public static errorMsg: string;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public loadDevice(): number;
					public releaseInstance(): void;
					public getCardLength(): number;
					public userRead(param0: native.Array<number>): number;
					public getDisplayCardNumber(): string;
					public userWrite(param0: native.Array<number>, param1: boolean): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public setExitForce(param0: boolean): void;
					public getTimeOut(): number;
					public userWrite(param0: native.Array<number>): number;
					public getRsaEncryptTrack2(): native.Array<number>;
					public static getInstance(): com.sewoo.request.android.UPlusPG;
					public setTimeOut(param0: number): void;
					public startWatching(): number;
					public getHandler(): globalAndroid.os.Handler;
					public destoryDevice(): number;
					public stopWatching(): void;
				}
				export module UPlusPG {
					export class MSRReaderThread {
						public static class: java.lang.Class<com.sewoo.request.android.UPlusPG.MSRReaderThread>;
						public run(): void;
						public readWaitNonBlock(param0: native.Array<number>): void;
					}
					export module MSRReaderThread {
						export class TimeChecker {
							public static class: java.lang.Class<com.sewoo.request.android.UPlusPG.MSRReaderThread.TimeChecker>;
							public constructor(param0: com.sewoo.request.android.UPlusPG.MSRReaderThread);
							public run(): void;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class UPlusVAN {
					public static class: java.lang.Class<com.sewoo.request.android.UPlusVAN>;
					public static track1: string;
					public static track2: string;
					public static track3: string;
					public static rawData: string;
					public static rawDataSize: string;
					public static errorMsg: string;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public releaseInstance(): void;
					public userRead(param0: native.Array<number>): number;
					public userWrite(param0: native.Array<number>, param1: boolean): number;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
					public setExitForce(param0: boolean): void;
					public getTimeOut(): number;
					public userWrite(param0: native.Array<number>): number;
					public startWatching(param0: native.Array<number>): number;
					public static getInstance(): com.sewoo.request.android.UPlusVAN;
					public setTimeOut(param0: number): void;
					public getHandler(): globalAndroid.os.Handler;
					public stopWatching(): void;
				}
				export module UPlusVAN {
					export class MSRReaderThread {
						public static class: java.lang.Class<com.sewoo.request.android.UPlusVAN.MSRReaderThread>;
						public run(): void;
						public readWaitNonBlock(param0: native.Array<number>): void;
					}
					export module MSRReaderThread {
						export class TimeChecker {
							public static class: java.lang.Class<com.sewoo.request.android.UPlusVAN.MSRReaderThread.TimeChecker>;
							public constructor(param0: com.sewoo.request.android.UPlusVAN.MSRReaderThread);
							public run(): void;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class WiFiMultiConnector extends com.sewoo.request.android.MultiConnector {
					public static class: java.lang.Class<com.sewoo.request.android.WiFiMultiConnector>;
					public wifiport: com.sewoo.port.android.WiFiPort;
					public connect(param0: string): void;
					public getQueue(): com.sewoo.jpos.request.RequestQueue;
					public constructor();
					public getInputStream(): java.io.InputStream;
					public disconnect(): void;
				}
				export module WiFiMultiConnector {
					export class RequestMultiHandler {
						public static class: java.lang.Class<com.sewoo.request.android.WiFiMultiConnector.RequestMultiHandler>;
						public run(): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module sewoo {
		export module request {
			export module android {
				export class statusMonitor {
					public static class: java.lang.Class<com.sewoo.request.android.statusMonitor>;
					public setHandler(param0: globalAndroid.os.Handler): void;
					public releaseInstance(): void;
					public getHandler(): globalAndroid.os.Handler;
					public startWatching(): number;
					public isWatching(): boolean;
					public stopWatching(): void;
					public static getInstance(): com.sewoo.request.android.statusMonitor;
					public constructor(param0: com.sewoo.port.android.DeviceConnection);
				}
				export module statusMonitor {
					export class StatusReaderThread {
						public static class: java.lang.Class<com.sewoo.request.android.statusMonitor.StatusReaderThread>;
						public run(): void;
					}
				}
			}
		}
	}
}

declare module jpos {
	export class JposConst {
		public static class: java.lang.Class<jpos.JposConst>;
		/**
		 * Constructs a new instance of the jpos.JposConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
		 */
		public constructor(implementation: {});
		public constructor();
		public static JPOSERR: number;
		public static JPOS_E_FAILURE: number;
		public static JPOS_CH_EXTERNAL: number;
		public static JPOS_PN_ENABLED: number;
		public static JPOS_SUE_UF_PROGRESS: number;
		public static JPOS_E_EXTENDED: number;
		public static JPOS_E_BUSY: number;
		public static JPOS_BC_NIBBLE: number;
		public static JPOS_E_NOEXIST: number;
		public static JPOS_PS_OFF_OFFLINE: number;
		public static JPOS_S_IDLE: number;
		public static JPOS_E_ILLEGAL: number;
		public static JPOS_CFV_FIRMWARE_SAME: number;
		public static JPOS_E_CLOSED: number;
		public static JPOS_PR_ADVANCED: number;
		public static JPOS_PS_OFFLINE: number;
		public static JPOS_SUE_UF_COMPLETE: number;
		public static JPOSERREXT: number;
		public static JPOS_E_NOTCLAIMED: number;
		public static JPOS_CH_INTERNAL: number;
		public static JPOS_PS_ONLINE: number;
		public static JPOS_EL_OUTPUT: number;
		public static JPOS_CFV_FIRMWARE_DIFFERENT: number;
		public static JPOS_EL_INPUT: number;
		public static JPOS_E_NOSERVICE: number;
		public static JPOS_SUE_UF_FAILED_DEV_UNRECOVERABLE: number;
		public static JPOS_SUCCESS: number;
		public static JPOS_SUE_POWER_ONLINE: number;
		public static JPOS_E_DISABLED: number;
		public static JPOS_CFV_FIRMWARE_OLDER: number;
		public static JPOS_EFIRMWARE_BAD_FILE: number;
		public static JPOS_CFV_FIRMWARE_UNKNOWN: number;
		public static JPOS_S_CLOSED: number;
		public static JPOS_S_ERROR: number;
		public static JPOS_ESTATS_DEPENDENCY: number;
		public static JPOS_EL_INPUT_DATA: number;
		public static JPOS_E_EXISTS: number;
		public static JPOS_S_BUSY: number;
		public static JPOS_SUE_POWER_OFFLINE: number;
		public static JPOS_PS_UNKNOWN: number;
		public static JPOS_CFV_FIRMWARE_NEWER: number;
		public static JPOS_SUE_POWER_OFF: number;
		public static JPOS_ER_CLEAR: number;
		public static JPOS_E_CLAIMED: number;
		public static JPOS_PR_STANDARD: number;
		public static JPOS_E_NOHARDWARE: number;
		public static JPOS_SUE_UF_COMPLETE_DEV_NOT_RESTORED: number;
		public static JPOS_FOREVER: number;
		public static JPOS_PN_DISABLED: number;
		public static JPOS_CH_INTERACTIVE: number;
		public static JPOS_SUE_UF_FAILED_DEV_NEEDS_FIRMWARE: number;
		public static JPOS_E_DEPRECATED: number;
		public static JPOS_PS_OFF: number;
		public static JPOS_BC_NONE: number;
		public static JPOS_BC_DECIMAL: number;
		public static JPOS_SUE_UF_FAILED_DEV_OK: number;
		public static JPOS_PR_NONE: number;
		public static JPOS_ESTATS_ERROR: number;
		public static JPOS_E_TIMEOUT: number;
		public static JPOS_ER_CONTINUEINPUT: number;
		public static JPOS_E_OFFLINE: number;
		public static JPOS_ER_RETRY: number;
		public static JPOS_SUE_UF_FAILED_DEV_UNKNOWN: number;
		public static JPOS_SUE_POWER_OFF_OFFLINE: number;
	}
}

declare module jpos {
	export class JposException {
		public static class: java.lang.Class<jpos.JposException>;
		public errorCode: number;
		public errorCodeExtended: number;
		public constructor(param0: number, param1: string, param2: java.lang.Exception);
		public constructor(param0: number, param1: number);
		public getErrorCode(): number;
		public constructor(param0: number, param1: number, param2: string, param3: java.lang.Exception);
		public constructor(param0: number, param1: string);
		public constructor(param0: number);
		public getOrigException(): java.lang.Exception;
		public constructor(param0: number, param1: number, param2: string);
		public getErrorCodeExtended(): number;
	}
}

declare module jpos {
	export class POSPrinterConst {
		public static class: java.lang.Class<jpos.POSPrinterConst>;
		/**
		 * Constructs a new instance of the jpos.POSPrinterConst interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
		 */
		public constructor(implementation: {});
		public constructor();
		public static PTR_S_JOURNAL_RECEIPT: number;
		public static JPOS_EPTR_JRN_CARTRIDGE_EMPTY: number;
		public static PTR_BM_CENTER: number;
		public static JPOS_EPTR_REC_CARTRIDGE_REMOVED: number;
		public static PTR_MM_ENGLISH: number;
		public static PTR_TP_NORMAL: number;
		public static PTR_BCS_EAN8: number;
		public static PTR_CS_UNICODE: number;
		public static PTR_SUE_REC_COVER_OPEN: number;
		public static PTR_BC_RIGHT: number;
		public static PTR_BCS_RSS_EXPANDED: number;
		public static PTR_SUE_SLP_CARTRIDGE_OK: number;
		public static PTR_BCS_Code93: number;
		public static PTR_RP_LEFT90: number;
		public static PTR_COLOR_YELLOW: number;
		public static PTR_PD_LEFT_TO_RIGHT: number;
		public static PTR_RP_BITMAP: number;
		public static PTR_BCS_TF: number;
		public static PTR_PD_TOP_TO_BOTTOM: number;
		public static PTR_BCS_EAN128: number;
		public static PTR_SUE_JRN_COVER_OK: number;
		public static PTR_S_JOURNAL: number;
		public static PTR_SUE_COVER_OK: number;
		public static PTR_PS_UNKNOWN: number;
		public static JPOS_EPTR_JRN_CARTRIDGE_REMOVED: number;
		public static PTR_L_TOP: number;
		public static JPOS_EPTR_SLP_EMPTY: number;
		public static PTR_BCS_GS1DATABAR_S: number;
		public static PTR_BCS_UPCE_S: number;
		public static PTR_BCS_UPCA_S: number;
		public static PTR_SUE_SLP_PAPEROK: number;
		public static PTR_BC_TEXT_NONE: number;
		public static PTR_PM_PRINT_SAVE: number;
		public static PTR_SUE_REC_PAPEROK: number;
		public static PTR_SUE_SLP_CARTRIDGE_NEAREMPTY: number;
		public static PTR_BCS_GS1DATABAR_E: number;
		public static PTR_SUE_JRN_CARTDRIGE_OK: number;
		public static JPOS_EPTR_REC_HEAD_CLEANING: number;
		public static PTR_SUE_REC_HEAD_CLEANING: number;
		public static PTR_CN_DISABLED: number;
		public static PTR_EL_NONE: number;
		public static PTR_CART_OK: number;
		public static PTR_CS_ANSI: number;
		public static JPOS_EPTR_JRN_EMPTY: number;
		public static PTR_BCS_Code39: number;
		public static PTR_CCS_KANA: number;
		public static JPOS_EPTR_SLP_CARTRIDGE_EMPTY: number;
		public static PTR_BC_TEXT_ABOVE: number;
		public static JPOS_EPTR_SLP_CARTRIDGE_REMOVED: number;
		public static PTR_RP_BARCODE: number;
		public static PTR_EL_FATAL: number;
		public static PTR_BCS_ITF: number;
		public static PTR_PD_BOTTOM_TO_TOP: number;
		public static PTR_SUE_JRN_EMPTY: number;
		public static PTR_BCS_UPCD5: number;
		public static PTR_TP_TRANSACTION: number;
		public static PTR_BCS_UPCD4: number;
		public static PTR_BCS_UPCD3: number;
		public static PTR_BCS_UPCD2: number;
		public static PTR_SUE_REC_EMPTY: number;
		public static PTR_BCS_UPCD1: number;
		public static PTR_S_RECEIPT_SLIP: number;
		public static PTR_MM_DOTS: number;
		public static PTR_PM_BC_ROTATE: number;
		public static PTR_CS_ASCII: number;
		public static JPOS_EPTR_REC_EMPTY: number;
		public static PTR_MM_METRIC: number;
		public static PTR_L_BOTTOM: number;
		public static PTR_BCS_EAN13_S: number;
		public static PTR_BM_LEFT: number;
		public static PTR_SUE_REC_CARTRIDGE_EMPTY: number;
		public static PTR_COLOR_CYAN: number;
		public static PTR_S_JOURNAL_SLIP: number;
		public static PTR_PM_BARCODE: number;
		public static PTR_CART_EMPTY: number;
		public static JPOS_EPTR_COVER_OPEN: number;
		public static PTR_CCS_UNICODE: number;
		public static PTR_COLOR_MAGENTA: number;
		public static PTR_PM_PAGE_MODE: number;
		public static PTR_S_RECEIPT: number;
		public static PTR_SUE_REC_CARTRIDGE_NEAREMPTY: number;
		public static PTR_SUE_IDLE: number;
		public static PTR_SUE_REC_NEAREMPTY: number;
		public static PTR_SUE_SLP_NEAREMPTY: number;
		public static PTR_CCS_ALPHA: number;
		public static PTR_BC_LEFT: number;
		public static PTR_SUE_REC_CARTDRIGE_OK: number;
		public static PTR_MM_TWIPS: number;
		public static PTR_RP_ROTATE180: number;
		public static PTR_SUE_JRN_HEAD_CLEANING: number;
		public static PTR_SUE_REC_COVER_OK: number;
		public static PTR_CART_REMOVED: number;
		public static PTR_BMT_GIF: number;
		public static PTR_RP_RIGHT90: number;
		public static PTR_SUE_SLP_COVER_OPEN: number;
		public static PTR_S_SLIP: number;
		public static PTR_RP_NORMAL: number;
		public static PTR_SUE_JRN_CARTRIDGE_NEAREMPTY: number;
		public static PTR_PM_NORMAL: number;
		public static PTR_CN_ENABLED: number;
		public static PTR_BM_RIGHT: number;
		public static PTR_SUE_JRN_CARTRIDGE_EMPTY: number;
		public static PTR_TWO_SLIP_JOURNAL: number;
		public static PTR_PM_OPAQUE: number;
		public static PTR_MF_TO_CURRENT_TOF: number;
		public static PTR_SUE_SLP_EMPTY: number;
		public static PTR_PM_BM_ROTATE: number;
		public static PTR_SUE_SLP_COVER_OK: number;
		public static PTR_PS_OPPOSITE: number;
		public static PTR_BCS_Codabar: number;
		public static PTR_CART_CLEANING: number;
		public static PTR_BCS_RSS14: number;
		public static PTR_CCS_KANJI: number;
		public static PTR_CP_FULLCUT: number;
		public static PTR_BC_CENTER: number;
		public static PTR_BCS_OTHER: number;
		public static PTR_SUE_COVER_OPEN: number;
		public static PTR_BM_ASIS: number;
		public static PTR_TWO_RECEIPT_JOURNAL: number;
		public static PTR_SUE_JRN_CARTRIDGE_OK: number;
		public static PTR_TWO_SLIP_RECEIPT: number;
		public static PTR_CART_UNKNOWN: number;
		public static PTR_BCS_Code128: number;
		public static PTR_BCS_OCRB: number;
		public static PTR_BCS_OCRA: number;
		public static PTR_BCS_EAN8_S: number;
		public static PTR_COLOR_CUSTOM6: number;
		public static PTR_MF_TO_CUTTER: number;
		public static PTR_COLOR_CUSTOM2: number;
		public static PTR_COLOR_CUSTOM3: number;
		public static PTR_COLOR_CUSTOM4: number;
		public static PTR_BCS_GS1DATABAR: number;
		public static PTR_COLOR_PRIMARY: number;
		public static PTR_COLOR_CUSTOM5: number;
		public static PTR_PS_SIDE1: number;
		public static PTR_SUE_SLP_CARTRIDGE_EMPTY: number;
		public static PTR_BC_TEXT_BELOW: number;
		public static PTR_COLOR_FULL: number;
		public static PTR_COLOR_CUSTOM1: number;
		public static PTR_BMT_BMP: number;
		public static PTR_SUE_JRN_NEAREMPTY: number;
		public static PTR_PS_SIDE2: number;
		public static PTR_BCS_JAN13: number;
		public static JPOS_EPTR_JRN_HEAD_CLEANING: number;
		public static PTR_SUE_JRN_PAPEROK: number;
		public static PTR_SUE_JRN_COVER_OPEN: number;
		public static JPOS_EPTR_BADFORMAT: number;
		public static PTR_PM_CANCEL: number;
		public static PTR_PD_RIGHT_TO_LEFT: number;
		public static PTR_PM_BITMAP: number;
		public static PTR_BCS_JAN8: number;
		public static JPOS_EPTR_SLP_FORM: number;
		public static PTR_BCS_EAN13: number;
		public static PTR_BCS_MAXICODE: number;
		public static JPOS_EPTR_TOOBIG: number;
		public static PTR_EL_RECOVERABLE: number;
		public static JPOS_EPTR_SLP_HEAD_CLEANING: number;
		public static PTR_SUE_REC_CARTRIDGE_OK: number;
		public static PTR_CCS_ASCII: number;
		public static PTR_MF_TO_NEXT_TOF: number;
		public static PTR_BCS_Code128_Parsed: number;
		public static PTR_BCS_PDF417: number;
		public static PTR_BCS_UPCA: number;
		public static JPOS_EPTR_REC_CARTRIDGE_EMPTY: number;
		public static PTR_CART_NEAREND: number;
		public static PTR_BCS_GS1DATABAR_E_S: number;
		public static PTR_BMT_JPEG: number;
		public static PTR_MF_TO_TAKEUP: number;
		public static PTR_SUE_SLP_HEAD_CLEANING: number;
		public static PTR_BCS_UPCE: number;
	}
}

//Generics information:
