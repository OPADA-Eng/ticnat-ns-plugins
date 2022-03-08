
declare class MWIFIManager extends NSObject {

	static alloc(): MWIFIManager; // inherited from NSObject

	static new(): MWIFIManager; // inherited from NSObject

	static shareWifiManager(): MWIFIManager;

	callBack: (p1: boolean) => void;

	callBackBlock: (p1: NSData) => void;

	commandBuffer: NSMutableArray<any>;

	connectOK: boolean;

	delegate: MWIFIManagerDelegate;

	hostStr: string;

	isAutoDisconnect: boolean;

	port: number;

	MClearBuffer(): void;

	MConnectWithHostPortCompletion(hostStr: string, port: number, block: (p1: boolean) => void): void;

	MDisConnect(): void;

	MGetBuffer(): NSArray<any>;

	MSendCommandBuffer(): void;

	MSendMSGWith(str: string): void;

	MSetCommandMode(Mode: boolean): void;

	MWriteCommandWithData(data: NSData): void;

	MWriteCommandWithDataWithResponse(data: NSData, block: (p1: NSData) => void): void;
}

interface MWIFIManagerDelegate extends NSObjectProtocol {

	MWIFIManagerDidConnectedToHostPort(manager: MWIFIManager, host: string, port: number): void;

	MWIFIManagerDidDisconnected(manager: MWIFIManager): void;

	MWIFIManagerDidReadDataTag(manager: MWIFIManager, data: NSData, tag: number): void;

	MWIFIManagerDidWriteDataWithTag(manager: MWIFIManager, tag: number): void;

	MWIFIManagerWillDisconnectWithError(manager: MWIFIManager, error: NSError): void;
}
declare var MWIFIManagerDelegate: {

	prototype: MWIFIManagerDelegate;
};

declare var Obada_ObjcVersionNumber: number;

declare var Obada_ObjcVersionString: interop.Reference<number>;

declare class PrinterManager extends NSObject {

	static alloc(): PrinterManager; // inherited from NSObject

	static new(): PrinterManager; // inherited from NSObject

	getWifiObj(): MWIFIManager;
}

declare const SocketOfflineByServer: number;

declare const SocketOfflineByUser: number;
