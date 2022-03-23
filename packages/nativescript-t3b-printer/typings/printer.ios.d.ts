
declare class AsyncSocket extends NSObject {

	static CRData(): NSData;

	static CRLFData(): NSData;

	static LFData(): NSData;

	static ZeroData(): NSData;

	static alloc(): AsyncSocket; // inherited from NSObject

	static new(): AsyncSocket; // inherited from NSObject

	constructor(o: { delegate: any; });

	constructor(o: { delegate: any; userData: number; });

	acceptOnInterfacePortError(interface: string, port: number): boolean;

	acceptOnPortError(port: number): boolean;

	addRunLoopMode(runLoopMode: string): boolean;

	canSafelySetDelegate(): boolean;

	connectToAddressError(remoteAddr: NSData): boolean;

	connectToAddressViaInterfaceAddressWithTimeoutError(remoteAddr: NSData, interfaceAddr: NSData, timeout: number): boolean;

	connectToAddressWithTimeoutError(remoteAddr: NSData, timeout: number): boolean;

	connectToHostOnPortError(hostname: string, port: number): boolean;

	connectToHostOnPortWithTimeoutError(hostname: string, port: number, timeout: number): boolean;

	connectedAddress(): NSData;

	connectedHost(): string;

	connectedPort(): number;

	delegate(): any;

	description(): string;

	disconnect(): void;

	disconnectAfterReading(): void;

	disconnectAfterReadingAndWriting(): void;

	disconnectAfterWriting(): void;

	enablePreBuffering(): void;

	getCFReadStream(): NSInputStream;

	getCFSocket(): any;

	getCFWriteStream(): NSOutputStream;

	initWithDelegate(delegate: any): this;

	initWithDelegateUserData(delegate: any, userData: number): this;

	isConnected(): boolean;

	isIPv4(): boolean;

	isIPv6(): boolean;

	localAddress(): NSData;

	localHost(): string;

	localPort(): number;

	moveToRunLoop(runLoop: NSRunLoop): boolean;

	progressOfReadReturningTagBytesDoneTotal(tag: interop.Pointer | interop.Reference<number>, done: interop.Pointer | interop.Reference<number>, total: interop.Pointer | interop.Reference<number>): number;

	progressOfWriteReturningTagBytesDoneTotal(tag: interop.Pointer | interop.Reference<number>, done: interop.Pointer | interop.Reference<number>, total: interop.Pointer | interop.Reference<number>): number;

	readDataToDataWithTimeoutBufferBufferOffsetMaxLengthTag(data: NSData, timeout: number, buffer: NSMutableData, offset: number, length: number, tag: number): void;

	readDataToDataWithTimeoutBufferBufferOffsetTag(data: NSData, timeout: number, buffer: NSMutableData, offset: number, tag: number): void;

	readDataToDataWithTimeoutMaxLengthTag(data: NSData, timeout: number, length: number, tag: number): void;

	readDataToDataWithTimeoutTag(data: NSData, timeout: number, tag: number): void;

	readDataToLengthWithTimeoutBufferBufferOffsetTag(length: number, timeout: number, buffer: NSMutableData, offset: number, tag: number): void;

	readDataToLengthWithTimeoutTag(length: number, timeout: number, tag: number): void;

	readDataWithTimeoutBufferBufferOffsetMaxLengthTag(timeout: number, buffer: NSMutableData, offset: number, length: number, tag: number): void;

	readDataWithTimeoutBufferBufferOffsetTag(timeout: number, buffer: NSMutableData, offset: number, tag: number): void;

	readDataWithTimeoutTag(timeout: number, tag: number): void;

	removeRunLoopMode(runLoopMode: string): boolean;

	runLoopModes(): NSArray<any>;

	setDelegate(delegate: any): void;

	setRunLoopModes(runLoopModes: NSArray<any> | any[]): boolean;

	setUserData(userData: number): void;

	startTLS(tlsSettings: NSDictionary<any, any>): void;

	unreadData(): NSData;

	userData(): number;

	writeDataWithTimeoutTag(data: NSData, timeout: number, tag: number): void;
}

interface AsyncSocketDelegate {

	onSocketDidAcceptNewSocket?(sock: AsyncSocket, newSocket: AsyncSocket): void;

	onSocketDidConnectToHostPort?(sock: AsyncSocket, host: string, port: number): void;

	onSocketDidDisconnect?(sock: AsyncSocket): void;

	onSocketDidReadDataWithTag?(sock: AsyncSocket, data: NSData, tag: number): void;

	onSocketDidReadPartialDataOfLengthTag?(sock: AsyncSocket, partialLength: number, tag: number): void;

	onSocketDidSecure?(sock: AsyncSocket): void;

	onSocketDidWriteDataWithTag?(sock: AsyncSocket, tag: number): void;

	onSocketDidWritePartialDataOfLengthTag?(sock: AsyncSocket, partialLength: number, tag: number): void;

	onSocketShouldTimeoutReadWithTagElapsedBytesDone?(sock: AsyncSocket, tag: number, elapsed: number, length: number): number;

	onSocketShouldTimeoutWriteWithTagElapsedBytesDone?(sock: AsyncSocket, tag: number, elapsed: number, length: number): number;

	onSocketWantsRunLoopForNewSocket?(sock: AsyncSocket, newSocket: AsyncSocket): NSRunLoop;

	onSocketWillConnect?(sock: AsyncSocket): boolean;

	onSocketWillDisconnectWithError?(sock: AsyncSocket, err: NSError): void;
}
declare var AsyncSocketDelegate: {

	prototype: AsyncSocketDelegate;
};

declare const enum AsyncSocketError {

	CFSocketError = -1,

	NoError = 0,

	CanceledError = 1,

	ConnectTimeoutError = 2,

	ReadMaxedOutError = 3,

	ReadTimeoutError = 4,

	WriteTimeoutError = 5
}

declare var AsyncSocketErrorDomain: string;

declare var AsyncSocketException: string;

declare class AsyncUdpSocket extends NSObject {

	static alloc(): AsyncUdpSocket; // inherited from NSObject

	static new(): AsyncUdpSocket; // inherited from NSObject

	constructor(o: { IPv4: void; });

	constructor(o: { IPv6: void; });

	constructor(o: { delegate: any; });

	constructor(o: { delegate: any; userData: number; });

	bindToAddressPortError(localAddr: string, port: number): boolean;

	bindToPortError(port: number): boolean;

	close(): void;

	closeAfterReceiving(): void;

	closeAfterSending(): void;

	closeAfterSendingAndReceiving(): void;

	connectToAddressError(remoteAddr: NSData): boolean;

	connectToHostOnPortError(host: string, port: number): boolean;

	connectedHost(): string;

	connectedPort(): number;

	delegate(): any;

	enableBroadcastError(flag: boolean): boolean;

	initIPv4(): this;

	initIPv6(): this;

	initWithDelegate(delegate: any): this;

	initWithDelegateUserData(delegate: any, userData: number): this;

	isClosed(): boolean;

	isConnected(): boolean;

	isIPv4(): boolean;

	isIPv6(): boolean;

	joinMulticastGroupError(group: string): boolean;

	joinMulticastGroupWithAddressError(group: string, interface: string): boolean;

	localHost(): string;

	localPort(): number;

	maxReceiveBufferSize(): number;

	maximumTransmissionUnit(): number;

	moveToRunLoop(runLoop: NSRunLoop): boolean;

	receiveWithTimeoutTag(timeout: number, tag: number): void;

	runLoopModes(): NSArray<any>;

	sendDataToAddressWithTimeoutTag(data: NSData, remoteAddr: NSData, timeout: number, tag: number): boolean;

	sendDataToHostPortWithTimeoutTag(data: NSData, host: string, port: number, timeout: number, tag: number): boolean;

	sendDataWithTimeoutTag(data: NSData, timeout: number, tag: number): boolean;

	setDelegate(delegate: any): void;

	setMaxReceiveBufferSize(max: number): void;

	setRunLoopModes(runLoopModes: NSArray<any> | any[]): boolean;

	setUserData(userData: number): void;

	userData(): number;
}

interface AsyncUdpSocketDelegate {

	onUdpSocketDidClose?(sock: AsyncUdpSocket): void;

	onUdpSocketDidNotReceiveDataWithTagDueToError?(sock: AsyncUdpSocket, tag: number, error: NSError): void;

	onUdpSocketDidNotSendDataWithTagDueToError?(sock: AsyncUdpSocket, tag: number, error: NSError): void;

	onUdpSocketDidReceiveDataWithTagFromHostPort?(sock: AsyncUdpSocket, data: NSData, tag: number, host: string, port: number): boolean;

	onUdpSocketDidSendDataWithTag?(sock: AsyncUdpSocket, tag: number): void;
}
declare var AsyncUdpSocketDelegate: {

	prototype: AsyncUdpSocketDelegate;
};

declare const enum AsyncUdpSocketError {

	CFSocketError = -1,

	NoError = 0,

	BadParameter = 1,

	IPv4Unavailable = 2,

	IPv6Unavailable = 3,

	SendTimeoutError = 4,

	ReceiveTimeoutError = 5
}

declare var AsyncUdpSocketErrorDomain: string;

declare var AsyncUdpSocketException: string;

declare class BLEManager extends NSObject implements CBCentralManagerDelegate, CBPeripheralDelegate {

	static alloc(): BLEManager; // inherited from NSObject

	static new(): BLEManager; // inherited from NSObject

	static sharedBLEManager(): BLEManager;

	RSSIArray: NSMutableArray<any>;

	commandBuffer: NSMutableArray<any>;

	connectBlock: (p1: boolean) => void;

	connectStatu: boolean;

	connectedPeripherals: NSMutableArray<any>;

	dataArray: NSMutableArray<any>;

	delegate: BLEManagerDelegate;

	isAutoDisconnect: boolean;

	isConnected: boolean;

	readonly isScaning: boolean;

	manager: CBCentralManager;

	peripheral: CBPeripheral;

	peripherals: NSMutableArray<any>;

	receiveBlock: (p1: CBCharacteristic) => void;

	scanBlock: (p1: NSArray<any>) => void;

	writePeripheral: CBPeripheral;

	readonly debugDescription: string; // inherited from NSObjectProtocol

	readonly description: string; // inherited from NSObjectProtocol

	readonly hash: number; // inherited from NSObjectProtocol

	readonly isProxy: boolean; // inherited from NSObjectProtocol

	readonly superclass: typeof NSObject; // inherited from NSObjectProtocol

	readonly  // inherited from NSObjectProtocol

	ClearBuffer(): void;

	GetBuffer(): NSArray<any>;

	MSetCommandMode(Mode: number): void;

	SendCommandBuffer(): void;

	centralManagerConnectionEventDidOccurForPeripheral(central: CBCentralManager, event: CBConnectionEvent, peripheral: CBPeripheral): void;

	centralManagerDidConnectPeripheral(central: CBCentralManager, peripheral: CBPeripheral): void;

	centralManagerDidDisconnectPeripheralError(central: CBCentralManager, peripheral: CBPeripheral, error: NSError): void;

	centralManagerDidDiscoverPeripheralAdvertisementDataRSSI(central: CBCentralManager, peripheral: CBPeripheral, advertisementData: NSDictionary<string, any>, RSSI: number): void;

	centralManagerDidFailToConnectPeripheralError(central: CBCentralManager, peripheral: CBPeripheral, error: NSError): void;

	centralManagerDidUpdateANCSAuthorizationForPeripheral(central: CBCentralManager, peripheral: CBPeripheral): void;

	centralManagerDidUpdateState(central: CBCentralManager): void;

	centralManagerWillRestoreState(central: CBCentralManager, dict: NSDictionary<string, any>): void;

	class(): typeof NSObject;

	conformsToProtocol(aProtocol: any /* Protocol */): boolean;

	connectPeripheral(peripheral: CBPeripheral): void;

	connectPeripheralCompletion(peripheral: CBPeripheral, callBack: (p1: boolean) => void): void;

	disconnectPeripheral(peripheral: CBPeripheral): void;

	disconnectRootPeripheral(): void;

	isEqual(object: any): boolean;

	isKindOfClass(aClass: typeof NSObject): boolean;

	isLECapableHardware(): boolean;

	isMemberOfClass(aClass: typeof NSObject): boolean;

	performSelector(aSelector: string): any;

	performSelectorWithObject(aSelector: string, object: any): any;

	performSelectorWithObjectWithObject(aSelector: string, object1: any, object2: any): any;

	peripheralDidDiscoverCharacteristicsForServiceError(peripheral: CBPeripheral, service: CBService, error: NSError): void;

	peripheralDidDiscoverDescriptorsForCharacteristicError(peripheral: CBPeripheral, characteristic: CBCharacteristic, error: NSError): void;

	peripheralDidDiscoverIncludedServicesForServiceError(peripheral: CBPeripheral, service: CBService, error: NSError): void;

	peripheralDidDiscoverServices(peripheral: CBPeripheral, error: NSError): void;

	peripheralDidModifyServices(peripheral: CBPeripheral, invalidatedServices: NSArray<CBService> | CBService[]): void;

	peripheralDidOpenL2CAPChannelError(peripheral: CBPeripheral, channel: CBL2CAPChannel, error: NSError): void;

	peripheralDidReadRSSIError(peripheral: CBPeripheral, RSSI: number, error: NSError): void;

	peripheralDidUpdateName(peripheral: CBPeripheral): void;

	peripheralDidUpdateNotificationStateForCharacteristicError(peripheral: CBPeripheral, characteristic: CBCharacteristic, error: NSError): void;

	peripheralDidUpdateRSSIError(peripheral: CBPeripheral, error: NSError): void;

	peripheralDidUpdateValueForCharacteristicError(peripheral: CBPeripheral, characteristic: CBCharacteristic, error: NSError): void;

	peripheralDidUpdateValueForDescriptorError(peripheral: CBPeripheral, descriptor: CBDescriptor, error: NSError): void;

	peripheralDidWriteValueForCharacteristicError(peripheral: CBPeripheral, characteristic: CBCharacteristic, error: NSError): void;

	peripheralDidWriteValueForDescriptorError(peripheral: CBPeripheral, descriptor: CBDescriptor, error: NSError): void;

	peripheralIsReadyToSendWriteWithoutResponse(peripheral: CBPeripheral): void;

	reConnectPeripheral(peripheral: CBPeripheral): void;

	reScan(): void;

	respondsToSelector(aSelector: string): boolean;

	retainCount(): number;

	self(): this;

	sendCommand(data: NSData): void;

	sendDataWithPeripheralWithStringCoding(peripheral: CBPeripheral, dataString: string, EncodingType: number): void;

	startScan(): void;

	startScanWithIntervalCompletion(scanInterval: number, callBack: (p1: NSArray<any>) => void): void;

	stopScan(): void;

	writeCommadnToPrinterWthitData(data: NSData): void;

	writeCommadnToPrinterWthitDataWithResponse(data: NSData, block: (p1: CBCharacteristic) => void): void;
}

interface BLEManagerDelegate extends NSObjectProtocol {

	BLEManagerDelegateConnectPeripheral(BLEmanager: BLEManager, peripheral: CBPeripheral): void;

	BLEManagerDelegateDidFailToConnectPeripheralError(BLEmanager: BLEManager, peripheral: CBPeripheral, error: NSError): void;

	BLEManagerDelegateDidWriteValueForCharacteristicError(BLEmanager: BLEManager, character: CBCharacteristic, error: NSError): void;

	BLEManagerDelegateDisconnectPeripheralIsAutoDisconnect(BLEmanager: BLEManager, peripheral: CBPeripheral, isAutoDisconnect: boolean): void;

	BLEManagerDelegateUpdatePeripheralListRSSIList(BLEmanager: BLEManager, peripherals: NSArray<any> | any[], RSSIArr: NSArray<any> | any[]): void;
}
declare var BLEManagerDelegate: {

	prototype: BLEManagerDelegate;
};

declare const enum BmpType {

	Dithering = 0,

	Threshold = 1
}

declare class ImageTranster extends NSObject {

	static ImagedataAndTypeAndPaperHeight(mImage: UIImage, bmptype: BmpType, paperheight: number): NSData;

	static alloc(): ImageTranster; // inherited from NSObject

	static new(): ImageTranster; // inherited from NSObject

	static rasterImagedataAndTypeAndPrintRasterTypeAndPaperHeight(mIamge: UIImage, bmptype: BmpType, type: PrintRasterType, paperheight: number): NSData;
}

declare class MBLEManager extends NSObject {

	static alloc(): MBLEManager; // inherited from NSObject

	static new(): MBLEManager; // inherited from NSObject

	static sharedInstance(): MBLEManager;

	delegate: MBLEManagerDelegate;

	manager: BLEManager;

	writePeripheral: CBPeripheral;

	MClearBuffer(): void;

	MGetBuffer(): NSArray<any>;

	MSendCommandBuffer(): void;

	MSetCommandMode(Mode: boolean): void;

	MSetDataCodingType(codingType: number): void;

	MWriteCommandWithData(data: NSData): void;

	MWriteCommandWithDataCallBack(data: NSData, block: (p1: CBCharacteristic) => void): void;

	MconnectDevice(peripheral: CBPeripheral): void;

	MdisconnectRootPeripheral(): void;

	MsendDataToPeripheralDataString(peripheral: CBPeripheral, dataStr: string): void;

	MstartScan(): void;

	MstopScan(): void;
}

interface MBLEManagerDelegate extends NSObjectProtocol {

	MdidConnectPeripheral(peripheral: CBPeripheral): void;

	MdidDisconnectPeripheralIsAutoDisconnect(peripheral: CBPeripheral, isAutoDisconnect: boolean): void;

	MdidFailToConnectPeripheralError(peripheral: CBPeripheral, error: NSError): void;

	MdidUpdatePeripheralListRSSIList(peripherals: NSArray<any> | any[], rssiList: NSArray<any> | any[]): void;

	MdidWriteValueForCharacteristicError(character: CBCharacteristic, error: NSError): void;
}
declare var MBLEManagerDelegate: {

	prototype: MBLEManagerDelegate;
};

declare class MCommand extends NSObject {

	static CancelChineseCharModel(): NSData;

	static alloc(): MCommand; // inherited from NSObject

	static allowOrForbidPressButton(n: number): NSData;

	static canclePrintDataByPageModel(): NSData;

	static cancleUserDefinedCharacters(n: number): NSData;

	static checkLableAndGap(): NSData;

	static creatCashBoxContorPulseWithMAndT1AndT2(m: number, t1: number, t2: number): NSData;

	static defineUserDefinedCharactersWithMAndNLAndNHAndBytes(m: number, nL: number, nH: number, bytes: string | interop.Pointer | interop.Reference<any>): NSData;

	static definedDownLoadBmpByTypeAndPaperHeight(image: UIImage, bmptype: BmpType, paperheight: number): NSData;

	static definedFlashBmpWithNAndBmpAndBmpTypeAndPrintTypeAndPaperHeight(n: number, image: UIImage, bmptype: BmpType, type: PrintRasterType, paperheight: number): NSData;

	static definedUserDefinedChineseCharWithCMitionAndNsdata(c2: number, bytes: string | interop.Pointer | interop.Reference<any>): NSData;

	static endOfLabel(): NSData;

	static executeMacrodeCommandWithRAndTAndM(r: number, t: number, m: number): NSData;

	static executePrintDataSavaByTeansformToHex(): NSData;

	static horizontalMition(): NSData;

	static initializePrinter(): NSData;

	static new(): MCommand; // inherited from NSObject

	static openCashBoxRealTimeWithMAndT(m: number, t: number): NSData;

	static openOrCloseAutoReturnPrintState(n: number): NSData;

	static openOrCloseLableModelInRecep(model: boolean): NSData;

	static print93BarcodeWithMAndNAndContentUseEnCodeing(m: number, n: number, content: string, strEnCoding: number): NSData;

	static printAdnFeed(n: number): NSData;

	static printAndBackStandardModel(): NSData;

	static printAndFeedForwardWhitN(n: number): NSData;

	static printAndFeedLine(): NSData;

	static printAndTabs(): NSData;

	static printBarcodeWithMAndContentUseEnCodeing(m: number, content: string, strEncoding: number): NSData;

	static printBarcodeWithMAndNAndContentUseEnCodeing(m: number, n: number, content: string, strEncoding: number): NSData;

	static printBmpInFLASHWithNAndM(n: number, m: number): NSData;

	static printDownLoadBmp(m: number): NSData;

	static printPdf417InStore(): NSData;

	static printQRCodeLevelCodeUseEnCodeing(n: number, errLevel: number, code: string, strEncoding: number): NSData;

	static printRasteBmpWithMAndImageAndTypeAndPaperHeight(m: PrintRasterType, image: UIImage, type: BmpType, paperheight: number): NSData;

	static printTheQRcodeInStore(): NSData;

	static printUnderPageModel(): NSData;

	static printcodaBarcodeWithMAndContentUseEnCodeing(m: number, content: string, strEncoding: number): NSData;

	static printcodaUPCEWithMAndContentUseEnCodeing(m: number, content: string, strEncoding: number): NSData;

	static printerOrderBuzzingAndWaringLightWithMAndTAndN(m: number, t: number, n: number): NSData;

	static printerOrderBuzzingHintWithResAndTime(n: number, t: number): NSData;

	static requestRealTimeForPrint(n: number): NSData;

	static returnState(n: number): NSData;

	static selectAlignment(n: number): NSData;

	static selectBmpModelWithMAndnLAndnHAndNSData(m: number, nL: number, nH: number, data: NSData): NSData;

	static selectCharacterCodePage(n: number): NSData;

	static selectCharacterSize(n: number): NSData;

	static selectChineseCharacterModel(): NSData;

	static selectCutPageModelAndCutpage(m: number): NSData;

	static selectCutPageModelAndCutpageWithMAndN(m: number, n: number): NSData;

	static selectFont(n: number): NSData;

	static selectHRICharactersPrintMition(n: number): NSData;

	static selectHRIFont(n: number): NSData;

	static selectInternationCharacterSets(n: number): NSData;

	static selectOrCancelChineseCharDoubleWH(n: number): NSData;

	static selectOrCancelChineseCharUnderLineModel(n: number): NSData;

	static selectOrCancleBoldModel(n: number): NSData;

	static selectOrCancleCW90(n: number): NSData;

	static selectOrCancleConvertPrintModel(n: number): NSData;

	static selectOrCancleCustomChar(n: number): NSData;

	static selectOrCancleDoublePrintModel(n: number): NSData;

	static selectOrCancleInvertPrintModel(n: number): NSData;

	static selectOrCancleUnderLineModel(n: number): NSData;

	static selectPagemodel(): NSData;

	static selectPrintDirectionUnderPageModel(n: number): NSData;

	static selectPrintModel(n: number): NSData;

	static selectPrintTransducerOutPutPageOutSignal(n: number): NSData;

	static selectPrintTransducerStopPrint(n: number): NSData;

	static selectPrinter(n: number): NSData;

	static selectStabdardModel(): NSData;

	static sendDataToStoreAreaWitQrcodeConentUsEnCoding(str: string, strEnCoding: number): NSData;

	static sendRealTimeStatus(n: number): NSData;

	static setAbsoluteMitionUnderPageModelWithnLAndnH(nL: number, nH: number): NSData;

	static setAbsolutePrintMitionWithNLAndNH(nL: number, nH: number): NSData;

	static setBarcodeHeight(n: number): NSData;

	static setBarcoeWidth(n: number): NSData;

	static setCharRightSpace(n: number): NSData;

	static setChineseCharLeftAndRightSpaceWithN1AndN2(n1: number, n2: number): NSData;

	static setChineseCharacterModel(n: number): NSData;

	static setDefultLineSpace(n: number): NSData;

	static setErrorCorrectionLevelForQrcode(n: number): NSData;

	static setHorizontalAndVerticalMoveUnitWithXAndY(x: number, y: number): NSData;

	static setHorizontalTabsMition(data: NSData): NSData;

	static setLableWidth(width: number): NSData;

	static setLeftSpaceWithnLAndnH(nL: number, nH: number): NSData;

	static setPdf417Columns(n: number): NSData;

	static setPrintAreaUnderPageModelWithxLAndxHAndyLAndyHAnddxLAnddxHAnddyLAnddyK(xL: number, xH: number, yL: number, yH: number, dxL: number, dxH: number, dyL: number, dyH: number): NSData;

	static setPrintAreaWidthWithnLAndnH(nL: number, nH: number): NSData;

	static setQRcodeUnitsize(n: number): NSData;

	static setRelativeHorizontalPrintMitionWithnLAndnH(nL: number, nH: number): NSData;

	static setTempData(): NSData;

	static setTempData2(): NSData;

	static setVertivalRelativeMitionUnderPageModelWithNLAndNH(nL: number, nH: number): NSData;

	static setpdf417RowHeight(n: number): NSData;

	static setpdf417WidthOfModule(n: number): NSData;

	static startOrStopMacrodeFinition(): NSData;

	static storethepdf417WithpLAndpHAndContentUsEnCoding(pL: number, pH: number, content: string, strEnCoding: number): NSData;
}

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

declare const enum PrintRasterType {

	RasterNolmorWH = 0,

	RasterDoubleWidth = 1,

	RasterDoubleHeight = 2,

	RasterDoubleWH = 3
}

declare class PrinterManager extends NSObject {

	static alloc(): PrinterManager; // inherited from NSObject

	static new(): PrinterManager; // inherited from NSObject

	convertImageToBmp(image: UIImage): NSData;

	getWifiObj(): MWIFIManager;
}

declare const SocketOfflineByServer: number;

declare const SocketOfflineByUser: number;

declare class TscCommand extends NSObject {

	static alloc(): TscCommand; // inherited from NSObject

	static autoDetectWithXAndY(x: number, y: number): NSData;

	static backFeed(n: number): NSData;

	static barWithXAndYAndWidthAndHeigt(x: number, y: number, w: number, h: number): NSData;

	static barcodeWithXAndYAndCodeTypeAndHeightAndHunabReadableAndRotationAndNarrowAndWideAndContentUsStrEnCoding(x: number, y: number, codetype: string, height: number, readable: number, rotation: number, narrow: number, wide: number, content: string, strEnCoding: number): NSData;

	static bitmapWithXAndYAndModeAndImageAndBmpTypeAndPaperHeight(x: number, y: number, mode: number, image: UIImage, bmptype: BmpType, paperheight: number): NSData;

	static blineBydotWithMAndN(m: number, n: number): NSData;

	static blineByinchWithMAndN(m: number, n: number): NSData;

	static blineBymmWithMAndN(m: number, n: number): NSData;

	static blinedDetectWithXAndY(x: number, y: number): NSData;

	static blockWithXAndYAndWidthAndHeightAndFontAndRotationAndX_mulAndY_mulAndContenUsStrEnCoding(x: number, y: number, width: number, height: number, font: string, rotaion: number, x_mul: number, y_mul: number, content: string, strEnCoding: number): NSData;

	static boxWithXAndYAndEndXAndEndYAndThickness(x: number, y: number, x_end: number, y_end: number, thickness: number): NSData;

	static checkPrinterStatusByPort4000(): NSData;

	static checkPrinterStatusByPort9100(): NSData;

	static cls(): NSData;

	static codaBlockFModeWithXAndYAndRotationAndContent(x: number, y: number, rotation: number, content: string): NSData;

	static codePage(str: string): NSData;

	static country(countryCoding: string): NSData;

	static cut(): NSData;

	static delay(ms: number): NSData;

	static density(n: number): NSData;

	static direction(n: number): NSData;

	static display(str: string): NSData;

	static dmateixWithXAndYAndWidthAndHeightAndContentUsStrEnCoding(x: number, y: number, width: number, height: number, content: string, strEnCoding: number): NSData;

	static download(filename: string): NSData;

	static downloadAndPath(filename: string, url: NSURL): NSData;

	static downloadAndSizeAndConten(filename: string, size: number, content: string): NSData;

	static ellipseWithXAndYAndWidthAndHeightAndThickness(x: number, y: number, width: number, height: number, thickness: number): NSData;

	static eoj(): NSData;

	static eop(): NSData;

	static eraseWithXAndYAndWidthAndHeight(x: number, y: number, width: number, height: number): NSData;

	static feed(n: number): NSData;

	static files(): NSData;

	static formFeed(): NSData;

	static gapBydotWithWidthAndHeight(m: number, n: number): NSData;

	static gapByinchWithWidthAndHeight(m: number, n: number): NSData;

	static gapBymmWithWidthAndHeight(m: number, n: number): NSData;

	static gapDetect(): NSData;

	static gapDetectWithXAndY(x: number, y: number): NSData;

	static home(): NSData;

	static initialPrinter(): NSData;

	static kill(filename: string): NSData;

	static limitFeedBydot(n: number): NSData;

	static limitFeedByinch(n: number): NSData;

	static limitFeedBymm(n: number): NSData;

	static move(): NSData;

	static new(): TscCommand; // inherited from NSObject

	static offSetBydotWithM(m: number): NSData;

	static offSetByinchWithM(m: number): NSData;

	static offSetBymmWithM(m: number): NSData;

	static pdf417WithXAndYAndWidthAndHeightAndRotateAndContentUsStrEnCoding(x: number, y: number, width: number, height: number, rotate: number, content: string, strEnCoding: number): NSData;

	static print(m: number): NSData;

	static printWithMAndN(m: number, n: number): NSData;

	static pubBmpWithXAndYAndFileNameAndContrast(x: number, y: number, filename: string, contrast: number): NSData;

	static putBmpWithXAndYAndFileName(x: number, y: number, filename: string): NSData;

	static putPcxWithXAndYAndFileName(x: number, y: number, filename: string): NSData;

	static qrCodeWithXAndYAndEccLevelAndCellWidthAndModeAndRotationAndContentUsStrEnCoding(x: number, y: number, ecclevel: string, cellwidth: number, mode: string, rotation: number, content: string, strEnCoding: number): NSData;

	static referenceWithXAndY(x: number, y: number): NSData;

	static reverseWithXAndYAndWidthAndHeight(x: number, y: number, width: number, height: number): NSData;

	static run(filename: string): NSData;

	static selfTest(page: string): NSData;

	static shift(n: number): NSData;

	static sizeBydotWithWidthAndHeight(m: number, n: number): NSData;

	static sizeByinchWithWidthAndHeight(m: number, n: number): NSData;

	static sizeBymmWithWidthAndHeight(m: number, n: number): NSData;

	static soundWithLevelAndInterval(level: number, interval: number): NSData;

	static speed(n: number): NSData;

	static textWithXAndYAndFontAndRotationAndX_mulAndY_mulAndContentUsStrEnCoding(x: number, y: number, font: string, rotation: number, x_mul: number, y_mul: number, content: string, strEnCoding: number): NSData;
}

declare class libMPrinter extends NSObject {

	static alloc(): libMPrinter; // inherited from NSObject

	static new(): libMPrinter; // inherited from NSObject
}
