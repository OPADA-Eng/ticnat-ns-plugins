
declare var Obada_ObjcVersionNumber: number;

declare var Obada_ObjcVersionString: interop.Reference<number>;

declare class PrinterManager extends NSObject {

	static alloc(): PrinterManager; // inherited from NSObject

	static new(): PrinterManager; // inherited from NSObject

	getName(): string;
}
