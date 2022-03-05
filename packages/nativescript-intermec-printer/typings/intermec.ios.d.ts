
declare class AirWatch_DPL extends PrinterState_DPL {

	static alloc(): AirWatch_DPL; // inherited from NSObject

	static new(): AirWatch_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getMessage(): string;

	getPrinterName(): string;

	initWithConnection(conn: ConnectionBase): this;

	setMessage(value: string): number;

	setPrinterName(value: string): number;
}

declare const enum Alignment {

	Left = 0,

	Center = 1,

	Right = 2
}

declare const enum AlignmentDPL {

	Left = 0,

	Center = 1,

	Right = 2
}

declare const enum AuthenticationKeyTypeValues {

	Unset = 998,

	Unknown = 999,

	None = 0,

	PSK_40Bits = 5,

	PSK_128Bits = 13
}

declare const enum AuthenticationTypeValue {

	CompliantToHost = 0,

	ForceAuthentication = 1,

	Unknown = 999
}

declare class AutoUpdate_DPL extends PrinterState_DPL {

	static alloc(): AutoUpdate_DPL; // inherited from NSObject

	static new(): AutoUpdate_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBeeper(): boolean;

	getConfigurationFileName(): string;

	getFTPFeedbackFileMode(): boolean;

	getFTPFeedbackFileSubdirectory(): string;

	getFTPFeedbackTemplateFile(): string;

	getFTPServerName(): string;

	getFTPServerPort(): number;

	getFTPUsername(): string;

	getMenuNameDisplayMode(): MenuNameDisplayModeValue;

	getMenuNameDisplayed(): string;

	getPrintMessageMode(): MessageDisplayModeValue;

	getPrintMessageStoredLabel(): string;

	getPrintServerAddress(): string;

	getPrintServerConnectionMode(): ConnectionModeValue;

	getPrintServerName(): string;

	getPrintServerPort(): number;

	getSecurityCredentialFileFormat(): SecurityCredentialFileFormatValue;

	getStatusMessagePrintMode(): StatusMessagePrintModeValue;

	getTFTPServerIPAddress(): string;

	getUpgradePackageVersion(): string;

	getWirelessUpgradeType(): WirelessUpgradeTypeValue;

	initWithConnection(conn: ConnectionBase): this;

	setBeeper(value: boolean): number;

	setConfigurationFileName(value: string): number;

	setFTPFeedbackFileMode(value: boolean): number;

	setFTPFeedbackFileSubdirectory(value: string): number;

	setFTPFeedbackTemplateFile(value: string): number;

	setFTPPassword(value: string): number;

	setFTPServerName(value: string): number;

	setFTPServerPort(value: number): number;

	setFTPUsername(value: string): number;

	setMenuNameDisplayMode(value: MenuNameDisplayModeValue): number;

	setMenuNameDisplayed(value: string): number;

	setPrintMessageMode(value: MessageDisplayModeValue): number;

	setPrintMessageStoredLabel(value: string): number;

	setPrintServerAddress(value: string): number;

	setPrintServerConnectionMode(value: ConnectionModeValue): number;

	setPrintServerName(value: string): number;

	setPrintServerPort(value: number): number;

	setSecurityCredentialFileFormat(value: SecurityCredentialFileFormatValue): number;

	setStatusMessagePrintMode(value: StatusMessagePrintModeValue): number;

	setTFTPServerIPAddress(value: string): number;

	setUpgradePackageVersion(value: string): number;

	setWirelessUpgradeType(value: WirelessUpgradeTypeValue): number;
}

declare class AvalancheEnabler_DPL extends PrinterState_DPL {

	static alloc(): AvalancheEnabler_DPL; // inherited from NSObject

	static new(): AvalancheEnabler_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAgentDNSName(): string;

	getAgentIPAddress(): string;

	getAgentPort(): number;

	getAvalancheEnablerActive(): boolean;

	getConnectivityType(): ConnectivityTypeValue;

	getPrintStatusResult(): boolean;

	getPrinterModel(): string;

	getPrinterName(): string;

	getRemoveOldUpdatesBeforeUpdate(): boolean;

	getUpdateInterval(): number;

	getUpdateMode(): UpdateModeValue;

	getUpdatePackageName(): string;

	getUpdatePackageVersion(): string;

	initWithConnection(conn: ConnectionBase): this;

	setAgentDNSName(value: string): number;

	setAgentIPAddress(value: string): number;

	setAgentPort(value: number): number;

	setAvalancheEnablerActive(value: boolean): number;

	setConnectivityType(value: ConnectivityTypeValue): number;

	setPrintStatusResult(value: boolean): number;

	setPrinterModel(value: string): number;

	setPrinterName(value: string): number;

	setRemoveOldUpdatesBeforeUpdate(value: boolean): number;

	setUpdateInterval(value: number): number;

	setUpdateMode(value: UpdateModeValue): number;

	setUpdatePackageName(value: string): number;
}

declare class AvalancheFileData extends PrinterData {

	static alloc(): AvalancheFileData; // inherited from NSObject

	static new(): AvalancheFileData; // inherited from NSObject

	getFlags(): string;

	getFlags_IsPresent(): boolean;

	getName(): string;

	getName_IsPresent(): boolean;

	getSize(): number;

	getSize_IsPresent(): boolean;

	parse(text: string): NSMutableArray<any>;
}

declare class AvalancheSettings extends PrinterState {

	static alloc(): AvalancheSettings; // inherited from NSObject

	static new(): AvalancheSettings; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAgentIP(): string;

	getAgentIP_IsPresent(): boolean;

	getAgentName(): string;

	getAgentName_IsPresent(): boolean;

	getAgentPort(): number;

	getAgentPort_IsPresent(): boolean;

	getConnectionType(): Connection;

	getConnectionType_IsPresent(): boolean;

	getIsAvalancheEnabled(): boolean;

	getIsAvalancheEnabled_IsPresent(): boolean;

	getIsPrelicensed(): boolean;

	getIsPrelicensed_IsPresent(): boolean;

	getIsWired(): boolean;

	getIsWired_IsPresent(): boolean;

	getPrinterModelName(): string;

	getPrinterModelName_IsPresent(): boolean;

	getPrinterName(): string;

	getPrinterName_IsPresent(): boolean;

	getPrinterResultFlag(): boolean;

	getPrinterResultFlag_IsPresent(): boolean;

	getShowAllData(): boolean;

	getShowAllData_IsPresent(): boolean;

	getTCP_ConnectTimeout(): number;

	getTCP_ConnectTimeout_IsPresent(): boolean;

	getUDP_Timeout(): number;

	getUDP_Timeout_IsPresent(): boolean;

	getUpdateFlags(): UpdateMode;

	getUpdateFlags_IsPresent(): boolean;

	getUpdateInterval(): number;

	getUpdateInterval_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum BacklightModeValue {

	AlwaysOff = 0,

	AlwaysOn = 1,

	OnWhenACPresent = 2,

	OnWhenCharging = 3,

	AutoOn = 4,

	OnWhenACPresentAutoOn = 5,

	OnWhenChargingAutoOn = 6,

	Unknown = 999
}

declare const enum BarcodeExPCL_LP {

	Code39 = 1,

	Code128 = 2,

	Interleaved2of5 = 3,

	UPC = 4,

	Codabar = 5,

	GS1DataBar = 6,

	QRCode = 7,

	PDF417 = 8
}

declare const enum BarcodeExPCL_PP {

	Code39 = 1,

	Code128 = 2,

	Interleaved2of5 = 3,

	UPC = 4,

	Codabar = 5
}

declare class BatteryCondition extends PrinterState {

	static alloc(): BatteryCondition; // inherited from NSObject

	static new(): BatteryCondition; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBatteryTemperature(): number;

	getBatteryTemperature_IsPresent(): boolean;

	getChargerConnected(): boolean;

	getChargerConnected_IsPresent(): boolean;

	getPowerSource(): PowerSourceValue;

	getPowerSource_IsPresent(): boolean;

	getVoltageBattery1(): number;

	getVoltageBattery1_IsPresent(): boolean;

	getVoltageBattery2(): number;

	getVoltageBattery2_IsPresent(): boolean;

	getVoltageBatteryEliminator(): number;

	getVoltageBatteryEliminator_IsPresent(): boolean;

	getVoltageBatterySingle(): number;

	getVoltageBatterySingle_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class BatteryCondition_ExPCL extends PrinterState_ExPCL {

	static alloc(): BatteryCondition_ExPCL; // inherited from NSObject

	static new(): BatteryCondition_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getVoltageBatterySingle(): number;

	getVoltageBatterySingle_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum BatteryStatusValue {

	Unset = 998,

	Unknown = 999,

	AllOK = 79,

	TemperatureError = 84,

	VoltageError = 86
}

declare const enum BaudRateValueDPL {

	Unknown = 999,

	_9600 = 96,

	_115200 = 15,

	_19200 = 19,

	_38400 = 38,

	_230400 = 23,

	_460800 = 46,

	_28800 = 28,

	_57600 = 57
}

declare const enum BaudRateValueEZ {

	Unset = 998,

	Unknown = 999,

	_1200 = 1200,

	_2400 = 2400,

	_4800 = 4800,

	_9600 = 9600,

	_19200 = 19200,

	_38400 = 38400,

	_57600 = 57600,

	_115200 = 115200,

	_230400 = 230400,

	_460800 = 460800,

	_921600 = 921600
}

declare class BluetoothConfiguration extends PrinterState {

	static alloc(): BluetoothConfiguration; // inherited from NSObject

	static new(): BluetoothConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAuthentication(): boolean;

	getAuthentication_IsPresent(): boolean;

	getBluetoothAddress(): string;

	getBluetoothAddress_IsPresent(): boolean;

	getBondable(): boolean;

	getBondable_IsPresent(): boolean;

	getConnectable(): boolean;

	getConnectable_IsPresent(): boolean;

	getDeviceClass(): string;

	getDeviceClass_IsPresent(): boolean;

	getDiscoverable(): boolean;

	getDiscoverable_IsPresent(): boolean;

	getEncryption(): boolean;

	getEncryption_IsPresent(): boolean;

	getFriendlyName(): string;

	getFriendlyName_IsPresent(): boolean;

	getInactivityTimeout(): number;

	getInactivityTimeout_IsPresent(): boolean;

	getPasskey(): boolean;

	getPasskey_IsPresent(): boolean;

	getPower(): boolean;

	getPower_IsPresent(): boolean;

	getProfile(): string;

	getProfile_IsPresent(): boolean;

	getServiceName(): string;

	getServiceName_IsPresent(): boolean;

	getWatchdogPeriod(): boolean;

	getWatchdogPeriod_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setAuthentication(value: boolean): number;

	setBondable(value: boolean): number;

	setConnectable(value: boolean): number;

	setDiscoverable(value: boolean): number;

	setEncryption(value: boolean): number;

	setFriendlyName(value: string): number;

	setInactivityTimeout(value: number): number;

	setPasskey(value: string): number;

	setWatchdogPeriod(value: boolean): number;
}

declare class BluetoothConfiguration_DPL extends PrinterState_DPL {

	static alloc(): BluetoothConfiguration_DPL; // inherited from NSObject

	static new(): BluetoothConfiguration_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAuthenticationType(): AuthenticationTypeValue;

	getBluetoothDeviceAddress(): string;

	getBluetoothDeviceName(): string;

	getBluetoothEnable(): boolean;

	getBluetoothServiceName(): string;

	getBondable(): boolean;

	getConnectable(): boolean;

	getDiscoverable(): boolean;

	getEncryption(): boolean;

	getInactiveDisconnectTime(): number;

	getPowerDownTime(): number;

	initWithConnection(conn: ConnectionBase): this;

	setAuthenticationType(value: AuthenticationTypeValue): number;

	setBluetoothDeviceName(value: string): number;

	setBluetoothEnable(value: boolean): number;

	setBondable(value: boolean): number;

	setConnectable(value: boolean): number;

	setDiscoverable(value: boolean): number;

	setEncryption(value: boolean): number;

	setInactiveDisconnectTime(value: number): number;

	setPassKey(value: string): number;

	setPowerDownTime(value: number): number;
}

declare class BluetoothConfiguration_ExPCL extends PrinterState_ExPCL {

	static alloc(): BluetoothConfiguration_ExPCL; // inherited from NSObject

	static new(): BluetoothConfiguration_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBluetoothAddress(): string;

	getBluetoothAddress_IsPresent(): boolean;

	getBluetoothFirmwareVersion(): string;

	getBluetoothHardwareVersion(): string;

	getBondable(): string;

	getBondable_IsPresent(): boolean;

	getConnectable(): string;

	getConnectable_IsPresent(): boolean;

	getDeviceClass(): string;

	getDeviceClass_IsPresent(): boolean;

	getDiscoverable(): string;

	getDiscoverable_IsPresent(): boolean;

	getLocalClassicName(): string;

	getLocalClassicName_IsPresent(): boolean;

	getLocalName(): string;

	getManufacturer(): string;

	getModelNumber(): string;

	getPowerSave(): string;

	getPowerSave_IsPresent(): boolean;

	getProtocolName(): string;

	getSecurity(): string;

	getSecurity_IsPresent(): boolean;

	getSerialNumber(): string;

	initWithConnection(conn: ConnectionBase): this;
}

declare class CardReaderStatus extends PrinterState {

	static alloc(): CardReaderStatus; // inherited from NSObject

	static new(): CardReaderStatus; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getGreenLEDStatus(): string;

	getGreenLEDStatus_IsPresent(): boolean;

	getRedLEDStatus(): string;

	getRedLEDStatus_IsPresent(): boolean;

	getSmartCardPowerEnabled(): boolean;

	getSmartCardPowerEnabled_IsPresent(): boolean;

	getSmartCardPresent(): boolean;

	getSmartCardPresent_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum CharacterSet {

	USA = 0,

	France = 1,

	Germany = 2,

	UK = 3,

	Denmark = 4,

	Sweden = 5,

	Italy = 6,

	Spain = 7
}

declare const enum CharacterSetExPCL {

	International = 1,

	PCLineDraw = 2
}

declare const enum CompactFlashValue {

	None = 0
}

declare class ConfigurationVersion extends PrinterState {

	static alloc(): ConfigurationVersion; // inherited from NSObject

	static new(): ConfigurationVersion; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getUpgradeType(): string;

	getUpgradeType_IsPresent(): boolean;

	getUpgradeVersion(): string;

	getUpgradeVersion_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum Connection {

	Unset = 998,

	Unknown = 999,

	None = 110,

	TCP_UDP = 112
}

declare class ConnectionBase extends NSObject {

	static alloc(): ConnectionBase; // inherited from NSObject

	static new(): ConnectionBase; // inherited from NSObject

	readonly bytesAvailable: number;

	connTimeout: number;

	readonly connectionStatus: number;

	delegate: ConnectionDelegate;

	readonly isClientMode: boolean;

	readonly isClosing: boolean;

	readonly isOpen: boolean;

	readonly isServerMode: boolean;

	readonly lastException: NSException;

	readonly streamError: NSError;

	constructor(o: { mode: boolean; withDelegate: ConnectionDelegate; });

	clearReadBuffer(): void;

	clearWriteBuffer(): void;

	close(): void;

	getConnectionStatusID(): number;

	getConnectionStatusString(): string;

	getLastException(): string;

	getLastStreamError(): NSError;

	initWithModeWithDelegate(isServer: boolean, delegate: ConnectionDelegate): this;

	open(): void;

	readBytesMaxBufferSize(buffer: string | interop.Pointer | interop.Reference<any>, length: number): number;

	readData(): NSData;

	readLineUntilWaitFor(endSequence: string, msecTimeout: number): string;

	readLineUntilWaitForWithEncoding(endSequence: string, msecTimeout: number, dataEncoding: number): string;

	readString(): string;

	readStringUntilWaitFor(endSequence: string, msecTimeout: number): string;

	readStringUntilWaitForWithEncoding(endSequence: string, msecTimeout: number, dataEncoding: number): string;

	waitForEmptyBuffer(timeout_msec: number): boolean;

	writeByte(byte: number): void;

	writeBytesCount(buffer: string | interop.Pointer | interop.Reference<any>, length: number): void;

	writeData(buffer: NSData): void;

	writeString(text: string): void;

	writeStringWithEncoding(text: string, dataEncoding: number): void;
}

interface ConnectionDelegate extends NSObjectProtocol {

	connectionDidClosed(connection: any): void;

	connectionDidOpen(connection: any): void;

	connectionFailedWithError(connection: any, error: NSError): void;
}
declare var ConnectionDelegate: {

	prototype: ConnectionDelegate;
};

declare const enum ConnectionModeValue {

	Unknown = 999,

	HTTP = 0,

	HTTPS = 1
}

declare class Connection_BluetoothEA extends ConnectionBase implements EAAccessoryDelegate, NSStreamDelegate {

	static alloc(): Connection_BluetoothEA; // inherited from NSObject

	static new(): Connection_BluetoothEA; // inherited from NSObject

	readonly accessory: EAAccessory;

	readonly protocolString: string;

	readonly debugDescription: string; // inherited from NSObjectProtocol

	readonly description: string; // inherited from NSObjectProtocol

	readonly hash: number; // inherited from NSObjectProtocol

	readonly isProxy: boolean; // inherited from NSObjectProtocol

	readonly superclass: typeof NSObject; // inherited from NSObjectProtocol

	readonly  // inherited from NSObjectProtocol

	constructor(o: { delegate: ConnectionDelegate; });

	accessoryDidDisconnect(accessory: EAAccessory): void;

	accessoryList(): NSArray<any>;

	class(): typeof NSObject;

	conformsToProtocol(aProtocol: any /* Protocol */): boolean;

	initWithDelegate(delegate: ConnectionDelegate): this;

	isEqual(object: any): boolean;

	isKindOfClass(aClass: typeof NSObject): boolean;

	isMemberOfClass(aClass: typeof NSObject): boolean;

	performSelector(aSelector: string): any;

	performSelectorWithObject(aSelector: string, object: any): any;

	performSelectorWithObjectWithObject(aSelector: string, object1: any, object2: any): any;

	respondsToSelector(aSelector: string): boolean;

	retainCount(): number;

	self(): this;

	setupConnectionForAccessoryWithProtocolString(accessory: EAAccessory, protocolString: string): void;

	streamHandleEvent(aStream: NSStream, eventCode: NSStreamEvent): void;
}

declare class Connection_TCP extends ConnectionBase implements NSStreamDelegate {

	static alloc(): Connection_TCP; // inherited from NSObject

	static new(): Connection_TCP; // inherited from NSObject

	targetAddress: string;

	targetPort: number;

	readonly debugDescription: string; // inherited from NSObjectProtocol

	readonly description: string; // inherited from NSObjectProtocol

	readonly hash: number; // inherited from NSObjectProtocol

	readonly isProxy: boolean; // inherited from NSObjectProtocol

	readonly superclass: typeof NSObject; // inherited from NSObjectProtocol

	readonly  // inherited from NSObjectProtocol

	constructor(o: { client: string; targetPort: number; withDelegate: ConnectionDelegate; });

	class(): typeof NSObject;

	conformsToProtocol(aProtocol: any /* Protocol */): boolean;

	initWithClientTargetPortWithDelegate(targetDevice: string, port: number, delegate: ConnectionDelegate): this;

	isEqual(object: any): boolean;

	isKindOfClass(aClass: typeof NSObject): boolean;

	isMemberOfClass(aClass: typeof NSObject): boolean;

	performSelector(aSelector: string): any;

	performSelectorWithObject(aSelector: string, object: any): any;

	performSelectorWithObjectWithObject(aSelector: string, object1: any, object2: any): any;

	respondsToSelector(aSelector: string): boolean;

	retainCount(): number;

	self(): this;

	streamHandleEvent(aStream: NSStream, eventCode: NSStreamEvent): void;
}

declare const enum ConnectivityTypeValue {

	None = 0,

	TCPIP = 1,

	Unknown = 999
}

declare const enum ControlCodeValue {

	Unknown = 999,

	Standard = 83,

	Alternate = 49,

	Alternate2 = 50
}

declare const enum DHCPEnableValue {

	Unknown = 999,

	Static = 78,

	BootP = 66,

	DHCP = 89
}

declare const enum DarknessAdjustmentValues {

	Unset = 998,

	Unknown = 999,

	Negative_Twenty_Five = -25,

	Negative_Twenty = -20,

	Negative_Fifteen = -15,

	Negative_Ten = 10,

	Negative_Five = -5,

	Default = 0,

	Five = 5,

	Ten = 10,

	Fifteen = 15,

	Twenty = 20,

	Twenty_Five = 25,

	Thirty = 30,

	Thirty_Five = 35
}

declare var DatamaxONeilSDKVersionNumber: number;

declare var DatamaxONeilSDKVersionString: interop.Reference<number>;

declare const enum Direction {

	Unset = 998,

	Unknown = 999,

	In = 0,

	Out = 1,

	Both = 2
}

declare const enum DisplayModeForIPHostnameValue {

	None = 0,

	IP = 1,

	Hostname = 2,

	FullyQualifyDomainName = 3,

	IPHostname = 4,

	IPFullyQualifyDomainName = 5,

	Unknown = 999
}

declare const enum DisplayModeValue {

	Unknown = 999,

	Standard = 83,

	Enhanced = 69
}

declare class Document extends NSObject {

	static alloc(): Document; // inherited from NSObject

	static new(): Document; // inherited from NSObject

	clear(): void;

	getDocumentData(): NSData;

	writeBytes(data: NSData): void;
}

declare class DocumentDPL extends Document {

	static alloc(): DocumentDPL; // inherited from NSObject

	static new(): DocumentDPL; // inherited from NSObject

	columnOffSet: number;

	dotHeightMultiplier: number;

	dotWidthMultiplier: number;

	enableAdvanceFormatAttribute: boolean;

	heatSettings: number;

	labelFormat: FormatAttributeValue;

	printQuantity: number;

	rowOffSet: number;

	getImageDocumentData(): NSData;

	writeBarCodeAusPost4StateIsReadableFormatControlCodeDeliveryPtIDAtRowAtColumnParamObject(textString: string, readableText: boolean, formatControlCode: number, DPID: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeAztecTextLengthECIModeErrorCorrectionAtRowAtColumnParamObject(textString: string, textLength: number, ECIMode: boolean, errorCorrection: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeCODABLOCKRowHeightCodaBlockModeGenerateCheckSumEncodedRowsRowCharactersAtRowAtColumnParamObject(textString: string, rowHeight: number, codaBlockMode: string, generateCheckSum: boolean, rowsToEncode: number, charPerRow: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeDataMatrixWithECCWithFormatIdentificationRowsRequestedColumnsRequestedAtRowAtColumnParamObject(textString: string, correctionLevel: number, digitFormatID: number, rowsRequested: number, colsRequested: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeGS1DataBarCompositeDataDataBarTypePixelMultiplierXPixelUndercutYPixelUndercutSegmentsPerRowAtRowAtColumnParamObject(primaryData: string, compositeData: string, GS1Type: string, pixelMultiplier: number, xPixelUndercut: number, yPixelUndercut: number, segmentsPerRow: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeMicroPDF417ColumnNumberRowIndexUseCompactModeUseMacroSubAtRowAtColumnParamObject(textString: string, dataCols: number, rowIndex: number, byteCompactMode: boolean, macroCharSub: boolean, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodePDF417IsTruncatedWithSecurityLevelAspectRatioDataRowsDataColumnsAtRowAtColumnParamObject(textString: string, isTruncated: boolean, securityLevel: number, aspectRatio: number, dataRows: number, dataCols: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeQRCodeFormatModeModelNumberErrorCorrectionLevelMaskNumberDataInputModeCharacterModeAtRowAtColumnParamObject(textString: string, autoFormatting: boolean, QRCodeModel: number, correctionLevel: string, maskNumber: string, inputMode: string, charMode: string, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeTLC39BarCodeHeightECINumberAtRowAtColumnParamObject(serialNumber: string, barCodeHeight: number, ECINumber: number, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeTextToPrintAtRowAtColumn(barcodeID: string, textString: string, row: number, col: number): void;

	writeBarCodeTextToPrintAtRowAtColumnParamObject(barcodeID: string, textString: string, row: number, col: number, parameters: ParametersDPL): void;

	writeBarCodeUPSMaxiCodeWithMessageAtRowAtColumnParamObject(mode: number, message: UPSMessage, row: number, col: number, parameters: ParametersDPL): void;

	writeBoxAtColumnWithHeightWithWidthTopBottomThicknessSideThickness(row: number, col: number, height: number, width: number, topBottomThickness: number, sideThickness: number): void;

	writeCircleCenterRowCenterColRadius(fillPattern: number, centerRow: number, centerCol: number, radius: number): void;

	writeGraphicsAtRowAtColumnParamObject(graphicData: string, row: number, col: number, parameters: ParametersDPL): void;

	writeImageFromObjectAtRowAtColumnParamObject(imageObject: UIImage, row: number, col: number, parameters: ParametersDPL): void;

	writeImageFromPathImageTypeAtRowAtColumnParamObject(imagePath: string, imageType: ImageType, row: number, col: number, parameters: ParametersDPL): void;

	writeImageImageTypeAtRowAtColumnParamObject(imageData: NSData, imageType: ImageType, row: number, col: number, parameters: ParametersDPL): void;

	writeImageStoredAtRowAtColumnParamObject(imageName: string, row: number, col: number, parameters: ParametersDPL): void;

	writeLineAtColumnWithHeightWithWidth(row: number, col: number, height: number, width: number): void;

	writePDFWithPrintheadWidthAtRowAtCol(pdf: any, dotsWide: number, row: number, col: number): void;

	writePDFWithPrintheadWidthAtRowAtColWithParameters(pdf: any, dotsWide: number, row: number, col: number, parameters: ParametersDPL): void;

	writeRectangleAtRowPt1AtColPt1AtRowPt2AtColPt2AtRowPt3AtColPt3AtRowPt4AtColPt4(fillPattern: number, rowPt1: number, colPt1: number, rowPt2: number, colPt2: number, rowPt3: number, colPt3: number, rowPt4: number, colPt4: number): void;

	writeTextAtRowAtColumnWithFontIDTypeParamObject(textString: string, row: number, col: number, fontIDType: string, parameters: ParametersDPL): void;

	writeTextDownloadedBitmappedWithFontIDAtRowAtColumn(textString: string, fontID: number, row: number, col: number): void;

	writeTextDownloadedBitmappedWithFontIDAtRowAtColumnParamObject(textString: string, fontID: number, row: number, col: number, parameters: ParametersDPL): void;

	writeTextInternalBitmappedWithFontIDAtRowAtColumn(textString: string, fontID: number, row: number, col: number): void;

	writeTextInternalBitmappedWithFontIDAtRowAtColumnParamObject(textString: string, fontID: number, row: number, col: number, parameters: ParametersDPL): void;

	writeTextInternalSmoothWithFontSizeAtRowAtColumn(textString: string, fontSize: number, row: number, col: number): void;

	writeTextInternalSmoothWithFontSizeAtRowAtColumnParamObject(textString: string, fontSize: number, row: number, col: number, parameters: ParametersDPL): void;

	writeTextScalableWithFontIDAtRowAtColumn(textString: string, fontID: string, row: number, col: number): void;

	writeTextScalableWithFontIDAtRowAtColumnParamObject(textString: string, fontID: string, row: number, col: number, parameters: ParametersDPL): void;

	writeTriangleAtRowPt1AtColPt1AtRowPt2AtColPt2AtRowPt3AtColPt3(fillPattern: number, rowPt1: number, colPt1: number, rowPt2: number, colPt2: number, rowPt3: number, colPt3: number): void;
}

declare class DocumentEZ extends Document {

	static alloc(): DocumentEZ; // inherited from NSObject

	static new(): DocumentEZ; // inherited from NSObject

	defaultFont: string;

	initialPaperBackup: number;

	isLandscapeMode: boolean;

	isPrintQuantityOptimized: boolean;

	pageLength: number;

	printQuantity: number;

	qmarkDotLines: number;

	qmarkMode: QStop_Setting;

	constructor(o: { fiveCharacterFont: string; });

	initWithFiveCharacterFont(fontName: string): this;

	writeBarCodeAztecErrorCorrectionLevelAtRowAtColumn(text: string, errorCorrectionLevel: number, row: number, col: number): void;

	writeBarCodeAztecErrorCorrectionLevelAtRowAtColumnWithParameters(text: string, errorCorrectionLevel: number, row: number, col: number, parameters: ParametersEZ): void;

	writeBarCodeGS1DataBarWithPrimaryDataWithCompositeDataPixelMultiplierSeparatorRowHeightPixelXCutPixelYCutSegPerRowAtRowAtColumn(GS1Font: string, primaryData: string, compositeData: string, pixelMultiplier: number, sepRowHt: number, xcut: number, ycut: number, segPerRow: number, row: number, col: number): void;

	writeBarCodeGS1DataBarWithPrimaryDataWithCompositeDataPixelMultiplierSeparatorRowHeightPixelXCutPixelYCutSegPerRowAtRowAtColumnWithParameters(GS1Font: string, primaryData: string, compositeData: string, pixelMultiplier: number, sepRowHt: number, xcut: number, ycut: number, segPerRow: number, row: number, col: number, parameters: ParametersEZ): void;

	writeBarCodePDF417AtRowAtColumnWithDataColumnsWithRedundancyLevel(text: string, row: number, col: number, dataColumns: number, redundancyLevel: number): void;

	writeBarCodePDF417AtRowAtColumnWithDataColumnsWithRedundancyLevelWithParameters(text: string, row: number, col: number, dataColumns: number, redundancyLevel: number, parameters: ParametersEZ): void;

	writeBarCodeQRCodeErrorCorrectionLevelMaskModeAtRowAtColumn(text: string, errorCorrectionLevel: number, mask: number, mode: number, row: number, col: number): void;

	writeBarCodeQRCodeErrorCorrectionLevelMaskModeAtRowAtColumnWithParameters(text: string, errorCorrectionLevel: number, mask: number, mode: number, row: number, col: number, parameters: ParametersEZ): void;

	writeBarCodeWithTextAtRowAtColumn(barcodeFont: string, text: string, row: number, col: number): void;

	writeBarCodeWithTextAtRowAtColumnWithParameters(barcodeFont: string, text: string, row: number, col: number, parameters: ParametersEZ): void;

	writeHorizontalLineAtColumnWithLengthWithThickness(row: number, col: number, length: number, thickness: number): void;

	writeHorizontalLineAtColumnWithLengthWithThicknessWithParameters(row: number, col: number, length: number, thickness: number, parameters: ParametersEZ): void;

	writeImageAtRowAtColumn(imageName: string, row: number, col: number): void;

	writeImageAtRowAtColumnWithParameters(imageName: string, row: number, col: number, parameters: ParametersEZ): void;

	writeInverseRegionAtColumnWithWidthWithHeight(row: number, col: number, width: number, height: number): void;

	writeInverseRegionAtColumnWithWidthWithHeightWithParameters(row: number, col: number, width: number, height: number, parameters: ParametersEZ): void;

	writeTextAtRowAtColumn(text: string, row: number, col: number): void;

	writeTextAtRowAtColumnWithParameters(text: string, row: number, col: number, parameters: ParametersEZ): void;

	writeVerticalLineAtColumnWithLengthWithThickness(row: number, col: number, length: number, thickness: number): void;

	writeVerticalLineAtColumnWithLengthWithThicknessWithParameters(row: number, col: number, length: number, thickness: number, parameters: ParametersEZ): void;
}

declare class DocumentExPCL_LP extends Document {

	static alloc(): DocumentExPCL_LP; // inherited from NSObject

	static new(): DocumentExPCL_LP; // inherited from NSObject

	autoPowerDownTimer: number;

	characterRemap: CharacterSetExPCL;

	defaultFont: number;

	horizontalTabWidth: number;

	lineSpacing: number;

	pageLength: number;

	paperPresenter: number;

	printContrastLevel: number;

	sensorSensitivity: number;

	verticalTabHeight: number;

	constructor(o: { font: number; });

	advancePaper(dotlines: number): void;

	advanceToNextPage(): void;

	advanceToQMark(additionalRows: number): void;

	initWithFont(fontIndex: number): this;

	retractPaper(dotlines: number): void;

	writeBarcodeGS1DataBarWithTextWithAnnotationWithPixelsPerXWithXPixelsToUndercutWithYPixelsToUndercutWithSeparatorRowHeight(type: GS1DataBar, text: string, annotate: boolean, thikness: number, xUndercut: number, yUndercut: number, rowHeight: number): void;

	writeBarcodeGS1DataBarWithTextWithAnnotationWithPixelsPerXWithXPixelsToUndercutWithYPixelsToUndercutWithSeparatorRowHeightWithParameters(type: GS1DataBar, text: string, annotate: boolean, thikness: number, xUndercut: number, yUndercut: number, rowHeight: number, parameters: ParametersExPCL_LP): void;

	writeBarcodePDF417WithRedundancyLevel(text: string, redundancyLevel: number): void;

	writeBarcodePDF417WithRedundancyLevelWithParameters(text: string, redundancyLevel: number, parameters: ParametersExPCL_LP): void;

	writeBarcodeQRCodeWithAnnotationWithModelWithErrorCorrectionLevelWithPixelMultiplier(text: string, annotate: boolean, model: number, correctionLevel: number, pixelMultiplier: number): void;

	writeBarcodeQRCodeWithAnnotationWithModelWithErrorCorrectionLevelWithPixelMultiplierWithParameters(text: string, annotate: boolean, model: number, correctionLevel: number, pixelMultiplier: number, parameters: ParametersExPCL_LP): void;

	writeBarcodeWithTextWithAnnotationWithHeight(type: BarcodeExPCL_LP, text: string, annotate: boolean, height: number): void;

	writeBarcodeWithTextWithAnnotationWithHeightWithParameters(type: BarcodeExPCL_LP, text: string, annotate: boolean, height: number, parameters: ParametersExPCL_LP): void;

	writeImageWithPrintheadWidth(image: UIImage, dotsWide: number): void;

	writePDFWithPrintheadWidth(pdf: any, dotsWide: number): void;

	writeText(text: string): void;

	writeTextPartial(text: string): void;

	writeTextPartialWithParameters(text: string, parameters: ParametersExPCL_LP): void;

	writeTextWithParameters(text: string, parameters: ParametersExPCL_LP): void;
}

declare class DocumentExPCL_PP extends Document {

	static alloc(): DocumentExPCL_PP; // inherited from NSObject

	static new(): DocumentExPCL_PP; // inherited from NSObject

	defaultFont: number;

	leftMargin: number;

	pageHeight: number;

	pageWidth: number;

	paperWidth: PaperWidth;

	topMargin: number;

	constructor(o: { paperWidth: PaperWidth; });

	drawBarcodeXYAngleAnnotateTypeHeightData(x: number, y: number, angle: RotationAngle, annotate: boolean, type: BarcodeExPCL_PP, height: number, text: string): void;

	drawRectangleX1Y1X2Y2ColorWidth(x1: number, y1: number, x2: number, y2: number, color: boolean, width: number): void;

	drawTextXYColorAngleString(x: number, y: number, color: boolean, angle: RotationAngle, text: string): void;

	initWithPaperWidth(width: PaperWidth): this;

	quickDrawTextXYColorAngleFontString(x: number, y: number, color: boolean, angle: RotationAngle, font: number, text: string): void;

	quickWriteTextAtRowAtColumn(text: string, row: number, col: number): void;

	quickWriteTextAtRowAtColumnWithParameters(text: string, row: number, col: number, parameters: ParametersExPCL_PP): void;

	setMarginsWithLeftWithTop(lm: number, tm: number): void;

	setPageSizeWithWidthWithHeight(width: number, height: number): void;

	writeBarCodeWithFontWithTextAtRowAtColumn(type: BarcodeExPCL_PP, barcodeFont: number, text: string, row: number, col: number): void;

	writeBarCodeWithFontWithTextAtRowAtColumnWithParameters(type: BarcodeExPCL_PP, barcodeFont: number, text: string, row: number, col: number, parameters: ParametersExPCL_PP): void;

	writeHorizontalLineAtColumnWithLengthWithThickness(row: number, col: number, length: number, thickness: number): void;

	writeHorizontalLineAtColumnWithLengthWithThicknessWithParameters(row: number, col: number, length: number, thickness: number, parameters: ParametersExPCL_PP): void;

	writeRectangleAtTopLeftRowAtTopLeftColumnAtBottomRightRowAtBottomRightColumn(row1: number, col1: number, row2: number, col2: number): void;

	writeRectangleAtTopLeftRowAtTopLeftColumnAtBottomRightRowAtBottomRightColumnWithParameters(row1: number, col1: number, row2: number, col2: number, parameters: ParametersExPCL_PP): void;

	writeTextAtRowAtColumn(text: string, row: number, col: number): void;

	writeTextAtRowAtColumnWithParameters(text: string, row: number, col: number, parameters: ParametersExPCL_PP): void;

	writeVerticalLineAtColumnWithLengthWithThickness(row: number, col: number, length: number, thickness: number): void;

	writeVerticalLineAtColumnWithLengthWithThicknessWithParameters(row: number, col: number, length: number, thickness: number, parameters: ParametersExPCL_PP): void;
}

declare class DocumentLP extends Document {

	static alloc(): DocumentLP; // inherited from NSObject

	static new(): DocumentLP; // inherited from NSObject

	characterRemap: CharacterSet;

	defaultFont: number;

	lineSpacing: number;

	pageLength: number;

	constructor(o: { oneCharacterFont: number; });

	advanceToNextPage(): void;

	advanceToQMark(additionalRows: number): void;

	initWithOneCharacterFont(fontName: number): this;

	writeImageWithPrintheadWidth(image: UIImage, dotsWide: number): void;

	writePDFWithPrintheadWidth(pdf: any, dotsWide: number): void;

	writeText(text: string): void;

	writeTextPartial(text: string): void;

	writeTextPartialWithParameters(text: string, parameters: ParametersLP): void;

	writeTextWithParameters(text: string, parameters: ParametersLP): void;
}

declare const enum DoubleByteSymbolSetValue {

	Unknown = 0,

	BIG5 = 1,

	EUC = 2,

	GovernmentBureau = 3,

	JIS = 4,

	ShiftJIS = 5,

	Unicode = 6
}

declare var EADataReceivedNotification: string;

declare const enum EAPTypeValue {

	Unknown = 999,

	TLS = 13,

	LEAP = 17,

	TTLS = 21,

	PEAP = 25,

	FAST = 43
}

declare const enum EAPTypeValues {

	Unset = 998,

	Unknown = 999,

	NONE = 0,

	IDENTITY = 1,

	NOTIFICATION = 2,

	NAK = 3,

	MD5 = 4,

	OTP = 5,

	GTC = 6,

	TLS = 13,

	LEAP = 17,

	SIM = 18,

	TTLS = 21,

	PEAP = 25,

	MSCHAPV2 = 26,

	TLV = 33,

	FAST = 43
}

declare const enum EmulationProtocolValue {

	Unset = 998,

	Unknown = 999,

	EZ = 0,

	ESC = 1,

	EMZ1 = 2,

	EMZ2 = 3,

	EMZ3 = 4,

	EMZ4 = 5,

	EMC1 = 6,

	EMC2 = 7,

	EMC3 = 8,

	EMC4 = 9,

	EMP1 = 10,

	EMM1 = 11,

	PK80 = 12,

	EMZ5 = 13,

	EMC6 = 14
}

declare const enum EncryptedFileAlgorithmValue {

	Unknown = 999,

	None = 0,

	BlowFish = 1,

	Des = 2,

	Rc4 = 3
}

declare const enum EndOfPrintSignalValue {

	Standard = 0,

	LowPulse = 1,

	HighPulse = 2,

	ActiveLow = 3,

	ActiveHigh = 4,

	Unknown = 999
}

declare const enum EquippedOptionValue {

	Unknown = 999,

	Auto = 65,

	Enable = 69,

	Disabled = 78
}

declare const enum ErrorStatusValue {

	Unset = 998,

	Unknown = 999,

	None = 78,

	Command = 99,

	Data = 100,

	GlobalParameter = 103,

	Name = 110,

	ESVProtocol = 112,

	Syntax = 115,

	PCX_File = 120
}

declare const enum FaultHandlingLevelValue {

	Unknown = 999,

	NoReprint = 0,

	Standard = 1,

	VoidRetry = 2,

	DelayedScanFault = 3,

	VoidRetryCont = 4
}

declare class FileInformation extends NSObject {

	static alloc(): FileInformation; // inherited from NSObject

	static new(): FileInformation; // inherited from NSObject

	name: string;

	size: number;

	type: string;
}

declare class FontData extends PrinterData {

	static alloc(): FontData; // inherited from NSObject

	static new(): FontData; // inherited from NSObject

	getCharactersPerInch(): string;

	getCharactersPerInch_IsPresent(): boolean;

	getFiveCharacterName(): string;

	getFiveCharacterName_IsPresent(): boolean;

	getMemoryLocation(): string;

	getMemoryLocation_IsPresent(): boolean;

	getOneCharacterName(): string;

	getOneCharacterName_IsPresent(): boolean;

	getUserDate(): string;

	getUserDate_IsPresent(): boolean;

	getUserDescription(): string;

	getUserDescription_IsPresent(): boolean;

	getUserVersion(): string;

	getUserVersion_IsPresent(): boolean;

	parse(text: string): NSMutableArray<any>;
}

declare const enum FontEmulationValue {

	Unknown = 999,

	NoSubstitution = 0,

	SubCGTimesSA0 = 1,

	SubUserS50 = 2
}

declare class FontList extends PrinterState {

	static alloc(): FontList; // inherited from NSObject

	static new(): FontList; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getFonts(): NSMutableArray<any>;

	getFonts_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class Fonts_DPL extends MemoryModules_DPL {

	static alloc(): Fonts_DPL; // inherited from NSObject

	static new(): Fonts_DPL; // inherited from NSObject

	getFontsFromModule(module: string): NSArray<any>;

	getInternalFonts(): NSArray<any>;
}

declare const enum FormatAttributeValue {

	Unknown = 0,

	XOR = 1,

	Transparent = 2,

	Opaque = 3,

	Inverse = 5
}

declare class FormatData extends PrinterData {

	static alloc(): FormatData; // inherited from NSObject

	static new(): FormatData; // inherited from NSObject

	getFiveCharacterName(): string;

	getFiveCharacterName_IsPresent(): boolean;

	getMemoryLocation(): string;

	getMemoryLocation_IsPresent(): boolean;

	getOneCharacterName(): string;

	getOneCharacterName_IsPresent(): boolean;

	getUserDate(): string;

	getUserDate_IsPresent(): boolean;

	getUserDescription(): string;

	getUserDescription_IsPresent(): boolean;

	getUserVersion(): string;

	getUserVersion_IsPresent(): boolean;

	parse(text: string): NSMutableArray<any>;
}

declare class FormatList extends PrinterState {

	static alloc(): FormatList; // inherited from NSObject

	static new(): FormatList; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getFormats(): NSMutableArray<any>;

	getFormats_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum GPIOBackupLabelValue {

	Disable = 0,

	Unknown = 999,

	ActiveLow = 3,

	ActiveHigh = 4
}

declare const enum GS1DataBar {

	GS1DataBarOmnidirectional = 1,

	GS1DataBarTruncated = 2,

	GS1DataBarStacked = 3,

	GS1DataBarStackedOmnidirectional = 4,

	GS1DataBarLimited = 5,

	GS1DataBarExpanded = 6,

	UPCA = 7,

	UPCE = 8,

	EAN13 = 9,

	EAN8 = 10,

	UCCEAN128CCAB = 11,

	UCCEAN128CCC = 12
}

declare class GeneralConfiguration extends PrinterState {

	static alloc(): GeneralConfiguration; // inherited from NSObject

	static new(): GeneralConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBaudRate(): BaudRateValueEZ;

	getBaudRate_IsPresent(): boolean;

	getChargerBeep(): boolean;

	getChargerBeep_IsPresent(): boolean;

	getDarknessAdjustment(): DarknessAdjustmentValues;

	getDarknessAdjustment_IsPresent(): boolean;

	getDeepSleep(): boolean;

	getDeepSleep_IsPresent(): boolean;

	getDefaultProtocol(): EmulationProtocolValue;

	getDefaultProtocol_IsPresent(): boolean;

	getEZPrintJobStatusReport(): boolean;

	getEZPrintJobStatusReport_IsPresent(): boolean;

	getFormFeed(): boolean;

	getFormFeedCentering(): boolean;

	getFormFeedCentering_IsPresent(): boolean;

	getFormFeed_IsPresent(): boolean;

	getFormfeedButtonDisabled(): boolean;

	getFormfeedButtonDisabled_IsPresent(): boolean;

	getLinesPerPage(): number;

	getLinesPerPage_IsPresent(): boolean;

	getPaperOutBeep(): PaperOutBeepValue;

	getPaperOutBeep_IsPresent(): boolean;

	getPowerButtonDisabled(): boolean;

	getPowerButtonDisabled_IsPresent(): boolean;

	getQStopMultiplier(): number;

	getQStopMultiplier_IsPresent(): boolean;

	getRFButtonDisabled(): boolean;

	getRFButtonDisabled_IsPresent(): boolean;

	getRFPowerTimeout(): number;

	getRFPowerTimeout_IsPresent(): boolean;

	getRS232DataBits(): number;

	getRS232DataBits_IsPresent(): boolean;

	getRS232Handshake(): HandshakeValueEZ;

	getRS232Handshake_IsPresent(): boolean;

	getRS232Parity(): ParityValueEZ;

	getRS232Parity_IsPresent(): boolean;

	getSelfTestPrintLanguage(): number;

	getSelfTestPrintLanguage_IsPresent(): boolean;

	getSoundEnabled(): boolean;

	getSoundEnabled_IsPresent(): boolean;

	getSpecialTestPrint(): number;

	getSpecialTestPrint_IsPresent(): boolean;

	getSystemTimeout(): number;

	getSystemTimeout_IsPresent(): boolean;

	getUSBClass(): USBClassType;

	getUSBClass_IsPresent(): boolean;

	getUsingUSB(): boolean;

	getUsingUSB_IsPresent(): boolean;

	getWhiteSpaceAdvance(): boolean;

	getWhiteSpaceAdvance_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setBaudRate(value: BaudRateValueEZ): number;

	setChargerBeep(value: boolean): number;

	setDarknessAdjustment(value: DarknessAdjustmentValues): number;

	setDefaultProtocol(value: EmulationProtocolValue): number;

	setEZPrintJobStatusReport(value: boolean): number;

	setFormFeed(value: boolean): number;

	setFormFeedCentering(value: boolean): number;

	setFormfeedButtonDisabled(value: boolean): number;

	setPaperOutBeep(value: PaperOutBeepValue): number;

	setPowerButtonDisabled(value: boolean): number;

	setQStopMultiplier(value: number): number;

	setRFButtonDisabled(value: boolean): number;

	setRFPowerTimeout(value: number): number;

	setRS232DataBits(value: number): number;

	setRS232HandShake(value: HandshakeValueEZ): number;

	setRS232Parity(value: ParityValueEZ): number;

	setSelfTestPrintLanguage(value: number): number;

	setSoundEnabled(value: boolean): number;

	setSpecialTestPrint(value: number): number;

	setSystemTimeout(value: number): number;

	setUSBClass(value: USBClassType): number;

	setWhiteSpaceAdvance(value: boolean): number;
}

declare class GeneralStatus extends PrinterState {

	static alloc(): GeneralStatus; // inherited from NSObject

	static new(): GeneralStatus; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBatteryTempandVoltageStatus(): BatteryStatusValue;

	getBatteryTempandVoltageStatus_IsPresent(): boolean;

	getErrorStatus(): ErrorStatusValue;

	getErrorStatus_IsPresent(): boolean;

	getHeadLeverPosition(): string;

	getHeadLeverPosition_IsPresent(): boolean;

	getPaperJam(): string;

	getPaperJam_IsPresent(): boolean;

	getPaperPresent(): string;

	getPaperPresent_IsPresent(): boolean;

	getPrinterStatus(): PrinterStatusValue;

	getPrinterStatus_IsPresent(): boolean;

	getRemainingRAM(): number;

	getRemainingRAM_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class GeneralStatus_ExPCL extends PrinterState_ExPCL {

	static alloc(): GeneralStatus_ExPCL; // inherited from NSObject

	static new(): GeneralStatus_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBatteryVoltageStatus(): string;

	getBatteryVoltageStatus_IsPresent(): boolean;

	getHeadLeverLatched(): boolean;

	getHeadLeverLatched_IsPresent(): boolean;

	getPaperPresent(): boolean;

	getPaperPresent_IsPresent(): boolean;

	getPrinterError(): boolean;

	getPrinterError_IsPresent(): boolean;

	getPrintheadTemperatureAcceptable(): boolean;

	getPrintheadTemperatureAcceptable_IsPresent(): boolean;

	getTextQueueEmpty(): boolean;

	getTextQueueEmpty_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class GraphicData extends PrinterData {

	static alloc(): GraphicData; // inherited from NSObject

	static new(): GraphicData; // inherited from NSObject

	getCharactersPerInch(): string;

	getCharactersPerInch_IsPresent(): boolean;

	getFiveCharacterName(): string;

	getFiveCharacterName_IsPresent(): boolean;

	getMemoryLocation(): string;

	getMemoryLocation_IsPresent(): boolean;

	getOneCharacterName(): string;

	getOneCharacterName_IsPresent(): boolean;

	getUserDate(): string;

	getUserDate_IsPresent(): boolean;

	getUserDescription(): string;

	getUserDescription_IsPresent(): boolean;

	getUserVersion(): string;

	getUserVersion_IsPresent(): boolean;

	parse(text: string): NSMutableArray<any>;
}

declare class GraphicList extends PrinterState {

	static alloc(): GraphicList; // inherited from NSObject

	static new(): GraphicList; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getGraphics(): NSMutableArray<any>;

	getGraphics_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum GroupCipherValue {

	Unknown = 999,

	None = 1,

	WEP40 = 2,

	WEP104 = 4,

	TKIP = 8,

	CCMP_AES = 16,

	CKIP = 32,

	CMIC = 64,

	CKIP_CMIC = 128
}

declare const enum GroupCipherValues {

	Unset = 998,

	Unknown = 999,

	None = 1,

	WEP40 = 2,

	WEP104 = 4,

	TKIP = 8,

	CCMP_AES = 16,

	CKIP = 32,

	CMIC = 64,

	CKIP_CMIC = 128
}

declare const enum HandshakeValueDPL {

	Unknown = 999,

	None = 78,

	Hardware = 72,

	Software = 83,

	Both = 66
}

declare const enum HandshakeValueEZ {

	Unset = 998,

	Unknown = 999,

	None = 78,

	Hardware = 72,

	Software = 83,

	Both = 66
}

declare const enum IPAcquiringValues {

	Unset = 998,

	Unknown = 999,

	BOOTP = 66,

	RequestFailed = 70,

	StaticIP = 78,

	RequestingIP = 82,

	DHCP = 89
}

declare const enum IPAddressMethodValue {

	Unknown = 999,

	Static = 78,

	BootP = 66,

	DHCP = 89
}

declare const enum ImageModeValue {

	Unknown = 999,

	SingleLabel = 83,

	MultipleLabel = 77
}

declare const enum ImageRotationValue {

	Unknown = 999,

	_0 = 0,

	_90 = 1,

	_180 = 2,

	_270 = 3
}

declare const enum ImageType {

	DOImage_7Bit = 0,

	BMPFlipped_8Bit = 1,

	BMP_8Bit = 2,

	IMG_8Bit = 3,

	IMGFlipped_8Bit = 4,

	PCXFlipped_8Bit = 5,

	PCX_8Bit = 6,

	Other = 7
}

declare class Images_DPL extends MemoryModules_DPL {

	static alloc(): Images_DPL; // inherited from NSObject

	static new(): Images_DPL; // inherited from NSObject

	getImagesFromModule(module: string): NSArray<any>;
}

declare const enum IncrementDecrementTypeValue {

	None = 0,

	NumericIncrement = 43,

	AlphanumericIncrement = 62,

	HexdecimalIncrement = 40,

	NumericDecrement = 45,

	AlphanumericDecrement = 60,

	HexdecimalDecrement = 41
}

declare const enum InputModeValue {

	Unknown = 999,

	DPL = 0,

	Line = 1,

	DTPL = 2,

	PLZ = 3,

	PLI = 5,

	PLB = 7,

	PLE = 8,

	Auto = 9,

	CPCL = 10,

	EZPrint = 11
}

declare class IrDAConfiguration extends PrinterState {

	static alloc(): IrDAConfiguration; // inherited from NSObject

	static new(): IrDAConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getDirectVersion(): string;

	getDirectVersion_IsPresent(): boolean;

	getIrDAName(): string;

	getIrDAName_IsPresent(): boolean;

	getIrDANickname(): string;

	getIrDANickname_IsPresent(): boolean;

	getIrDAVersion(): string;

	getIrDAVersion_IsPresent(): boolean;

	getProtocol(): string;

	getProtocol_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum IrDAProtocolValue {

	Unset = 998,

	Unknown = 999,

	OFF = 0,

	None = 1,

	IrDA = 2,

	ASK = 3,

	ASK_CRC = 4,

	Direct = 5,

	Direct_CRC = 6,

	Pulse = 7,

	Pulse_CRC = 8
}

declare const enum LCDOrientationValue {

	Unknown = 999,

	Normal = 0,

	Rotate_180 = 1
}

declare class LabelConfiguration extends PrinterState {

	static alloc(): LabelConfiguration; // inherited from NSObject

	static new(): LabelConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAdditionalSelfTestPrints(): number;

	getAdditionalSelfTestPrints_IsPresent(): boolean;

	getAutoQMarkAdvance(): boolean;

	getAutoQMarkAdvance_IsPresent(): boolean;

	getAutoQMarkBackup(): boolean;

	getAutoQMarkBackup_IsPresent(): boolean;

	getBackUpDistance(): number;

	getBackUpDistance_IsPresent(): boolean;

	getBackupOffset(): number;

	getBackupOffset_IsPresent(): boolean;

	getHorizontalOffset(): number;

	getHorizontalOffset_IsPresent(): boolean;

	getMaximumQMarkAdvance(): number;

	getMaximumQMarkAdvance_IsPresent(): boolean;

	getPaperStockType(): QMarkValue;

	getPaperStockType_IsPresent(): boolean;

	getPaperoutSensor(): PaperOutSensorValue;

	getPaperoutSensor_IsPresent(): boolean;

	getPresenterTimeout(): number;

	getPresenterTimeout_IsPresent(): boolean;

	getQMARKBOffset(): number;

	getQMARKBOffset_IsPresent(): boolean;

	getQMARKGOffset(): number;

	getQMARKGOffset_IsPresent(): boolean;

	getQMARKTOffset(): number;

	getQMARKTOffset_IsPresent(): boolean;

	getQMarkStopLength(): number;

	getQMarkStopLength_IsPresent(): boolean;

	getUsePresenter(): boolean;

	getUsePresenter_IsPresent(): boolean;

	getWhiteQMark(): boolean;

	getWhiteQMark_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setAdditionalSelfTestsPrints(value: number): number;

	setAutoQMarkAdvance(value: boolean): number;

	setAutoQMarkBackup(value: boolean): number;

	setBackUpDistance(value: number): number;

	setBackUpOffset(value: number): number;

	setHorizontalOffset(value: number): number;

	setMaximumQMarkAdvance(value: number): number;

	setPaperStockType(value: QMarkValue): number;

	setPaperoutSensor(value: PaperOutSensorValue): number;

	setPresenterTimeout(value: number): number;

	setQMARKBOffSet(value: number): number;

	setQMARKGOffset(value: number): number;

	setQMARKTOffset(value: number): number;

	setQMarkStopLength(value: number): number;

	setUsePresenter(value: boolean): number;

	setWhiteQMark(value: boolean): number;
}

declare const enum LabelRotationValue {

	Unknown = 999,

	Rotate_0 = 0,

	Rotate_90 = 2,

	Rotate_180 = 1,

	Rotate_270 = 3
}

declare const enum LabelStoreLevelValue {

	Fields = 70,

	StatesFields = 83,

	Unknown = 999
}

declare class LanguageFiles_DPL extends MemoryModules_DPL {

	static alloc(): LanguageFiles_DPL; // inherited from NSObject

	static new(): LanguageFiles_DPL; // inherited from NSObject

	getLanguageFilesFromModule(module: string): NSArray<any>;
}

declare const enum LegacyEmulationValue {

	Unknown = 999,

	None = 78,

	Allegro = 65,

	ProdigyPlus = 76,

	Prodigy = 80,

	ProdigyMax = 77,

	XL = 88,

	Disable = 68
}

declare class MagneticCardConfiguration extends PrinterState {

	static alloc(): MagneticCardConfiguration; // inherited from NSObject

	static new(): MagneticCardConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAutoPrint(): boolean;

	getAutoPrint_IsPresent(): boolean;

	getAutoSend(): boolean;

	getAutoSend_IsPresent(): boolean;

	getCardReadDirection(): Direction;

	getCardReadDirection_IsPresent(): boolean;

	getEnabled(): boolean;

	getEnabled_IsPresent(): boolean;

	getTrack1Enabled(): boolean;

	getTrack1Enabled_IsPresent(): boolean;

	getTrack2Enabled(): boolean;

	getTrack2Enabled_IsPresent(): boolean;

	getTrack3Enabled(): boolean;

	getTrack3Enabled_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setAutoPrint(value: boolean): number;

	setAutoSend(value: boolean): number;

	setCardReadDirection(value: Direction): number;

	setEnable(value: boolean): number;

	setTrack1Enable(value: boolean): number;

	setTrack2Enable(value: boolean): number;

	setTrack3Enable(value: boolean): number;
}

declare class MagneticCardData extends PrinterState {

	static alloc(): MagneticCardData; // inherited from NSObject

	static new(): MagneticCardData; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getTrack1Data(): string;

	getTrack1Data_IsPresent(): boolean;

	getTrack2Data(): string;

	getTrack2Data_IsPresent(): boolean;

	getTrack3Data(): string;

	getTrack3Data_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class MagneticCardData_ExPCL extends PrinterState_ExPCL {

	static alloc(): MagneticCardData_ExPCL; // inherited from NSObject

	static new(): MagneticCardData_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getTrack1Data(): string;

	getTrack1Data_IsPresent(): boolean;

	getTrack2Data(): string;

	getTrack2Data_IsPresent(): boolean;

	getTrack3Data(): string;

	getTrack3Data_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class ManufacturingDate extends PrinterState {

	static alloc(): ManufacturingDate; // inherited from NSObject

	static new(): ManufacturingDate; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getMD(): string;

	getMD_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class MediaLabel_DPL extends PrinterState_DPL {

	static alloc(): MediaLabel_DPL; // inherited from NSObject

	static new(): MediaLabel_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAutoAlign(): boolean;

	getBackupAfterPrint(): boolean;

	getBackupDistance(): number;

	getContinuousLabelLength(): number;

	getGapAlternateMode(): boolean;

	getHeadCleanThreshold(): number;

	getLabelLengthLimit(): boolean;

	getLabelWidth(): number;

	getMaxLabelLength(): number;

	getMediaType(): string;

	getPaperEmptyDistance(): number;

	getPresentBackup(): boolean;

	getPresentDistance(): number;

	getRibbonLowDiameter(): number;

	getRibbonLowPause(): boolean;

	getSensorType(): SensorTypeValue;

	getStopLocation(): StopLocationValue;

	initWithConnection(conn: ConnectionBase): this;

	setAutoAlign(value: boolean): number;

	setBackupAfterPrint(value: boolean): number;

	setBackupDistance(value: number): number;

	setContinuousLabelLength(value: number): number;

	setGapAlternateMode(value: boolean): number;

	setHeadCleaningThreshold(value: number): number;

	setLabelLengthLimit(value: boolean): number;

	setLabelWidth(value: number): number;

	setMaxLabelLength(value: number): number;

	setPaperEmptyDistance(value: number): number;

	setPresentBackup(value: boolean): number;

	setPresentDistance(value: number): number;

	setSensorType(value: SensorTypeValue): number;

	setStopLocation(value: StopLocationValue): number;
}

declare const enum MediaTypeValue {

	Unknown = 999,

	DirectThermal = 68,

	ThermalTransfer = 84
}

declare const enum MemoryModuleValue {

	Unknown = 999,

	D = 68,

	G = 71,

	X = 88,

	Y = 89
}

declare class MemoryModules_DPL extends PrinterState_DPL {

	static alloc(): MemoryModules_DPL; // inherited from NSObject

	static new(): MemoryModules_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAvailableBytesFromModule(module: string): number;

	getFilesFromModule(module: string): NSArray<any>;

	initWithConnection(conn: ConnectionBase): this;
}

declare class MemoryStatus extends PrinterState {

	static alloc(): MemoryStatus; // inherited from NSObject

	static new(): MemoryStatus; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getDownloadFormatMemoryRemaining(): number;

	getDownloadFormatMemoryRemaining_IsPresent(): boolean;

	getDownloadFormatMemoryTotal(): number;

	getDownloadFormatMemoryTotal_IsPresent(): boolean;

	getDownloadMemoryRemaining(): number;

	getDownloadMemoryRemaining_IsPresent(): boolean;

	getDownloadMemoryTotal(): number;

	getDownloadMemoryTotal_IsPresent(): boolean;

	getEEPROMSize(): number;

	getEEPROMSize_IsPresent(): boolean;

	getFlashMemorySize(): number;

	getFlashMemorySize_IsPresent(): boolean;

	getFlashType(): string;

	getFlashType_IsPresent(): boolean;

	getRAMSize(): number;

	getRAMSize_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class MemoryStatus_ExPCL extends PrinterState_ExPCL {

	static alloc(): MemoryStatus_ExPCL; // inherited from NSObject

	static new(): MemoryStatus_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getRemainingRAM(): number;

	getRemainingRAM_IsPresent(): boolean;

	getUsedRAM(): number;

	getUsedRAM_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum MenuModeValue {

	User = 85,

	Advanced = 65,

	Unknown = 999
}

declare const enum MenuNameDisplayModeValue {

	Unknown = 999,

	DisplayAlways = 0,

	DisplayOnError = 1,

	Disable = 2
}

declare const enum MessageDisplayModeValue {

	Unknown = 999,

	PrintAlways = 0,

	PrintOnError = 1,

	Disable = 2
}

declare class Miscellaneous_DPL extends PrinterState_DPL {

	static alloc(): Miscellaneous_DPL; // inherited from NSObject

	static new(): Miscellaneous_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBritishPound(): boolean;

	getCommunicationHeatCommands(): boolean;

	getCommunicationSpeedCommands(): boolean;

	getCommunicationTOFCommands(): boolean;

	getControlCode(): ControlCodeValue;

	getCutterEquipped(): EquippedOptionValue;

	getDelayRate(): number;

	getDisplayModeForIPHostname(): DisplayModeForIPHostnameValue;

	getEndOfPrintSignal(): EndOfPrintSignalValue;

	getFeedbackMode(): boolean;

	getGPIOBackupLabel(): GPIOBackupLabelValue;

	getGPIOSlew(): EndOfPrintSignalValue;

	getHexDumpMode(): boolean;

	getIgnoreControlCode(): boolean;

	getImageRotation(): ImageRotationValue;

	getLCDOrientation(): LCDOrientationValue;

	getMaximumLengthIgnore(): boolean;

	getPauseMode(): boolean;

	getPeelMode(): boolean;

	getPresentSensorEquipped(): EquippedOptionValue;

	getSoftwareSwitch(): boolean;

	getStartOfPrintSignal(): StartOfPrintSignalValue;

	getUSBMode(): USBModeValue;

	getWindowsDriverForEZ_RLE(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setBritishPound(value: boolean): number;

	setCommunicationHeatCommands(value: boolean): number;

	setCommunicationSpeedCommands(value: boolean): number;

	setCommunicationTOFCommands(value: boolean): number;

	setControlCode(value: ControlCodeValue): number;

	setCutterEquipped(value: EquippedOptionValue): number;

	setDelayRate(value: number): number;

	setDisplayModeForIPHostname(value: DisplayModeForIPHostnameValue): number;

	setEndOfPrintSignal(value: EndOfPrintSignalValue): number;

	setFeedbackMode(value: boolean): number;

	setGPIOBackupLabel(value: GPIOBackupLabelValue): number;

	setGPIOSlew(value: EndOfPrintSignalValue): number;

	setHexDumpMode(value: boolean): number;

	setIgnoreControlCode(value: boolean): number;

	setImageRotation(value: ImageRotationValue): number;

	setLCDOrientation(value: LCDOrientationValue): number;

	setMaximumLengthIgnore(value: boolean): number;

	setPauseMode(value: boolean): number;

	setPeelMode(value: boolean): number;

	setPresentSensorEquipped(value: EquippedOptionValue): number;

	setSoftwareSwitch(value: boolean): number;

	setStartOfPrintSignal(value: StartOfPrintSignalValue): number;

	setUSBMode(value: USBModeValue): number;

	setWindowsDriverForEZ_RLE(value: boolean): number;
}

declare class NameValue extends NSObject implements NSCoding {

	static alloc(): NameValue; // inherited from NSObject

	static new(): NameValue; // inherited from NSObject

	name: string;

	value: string;

	constructor(o: { coder: NSCoder; }); // inherited from NSCoding

	constructor(o: { name: string; withValue: string; });

	encodeWithCoder(coder: NSCoder): void;

	initWithCoder(coder: NSCoder): this;

	initWithNameWithValue(aName: string, aValue: string): this;
}

declare const enum NetworkAuthenticationTypeValue {

	Unknown = 999,

	Disable = 0,

	LEAP_WEP = 1,

	WPA_PSK = 2,

	WPA_Enterprise = 3,

	WPA_LEAP = 4,

	WPA2_PSK = 5,

	WPA2_Enterprise = 6
}

declare const enum NetworkAuthenticationValues {

	Unset = 998,

	Unknown = 999,

	None = 0,

	LEAP = 1,

	WPA_PSK = 2,

	WPA = 3,

	WPA_LEAP = 4,

	WPA2_PSK = 5,

	WPA2 = 6,

	HostBasedEAP = 7
}

declare class NetworkEthernetSettings_DPL extends PrinterState_DPL {

	static alloc(): NetworkEthernetSettings_DPL; // inherited from NSObject

	static new(): NetworkEthernetSettings_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getDefaultMTUSize(): number;

	getDomainName(): string;

	getEthernetMACAddress(): string;

	getIPAddressMethod(): string;

	getInactivityTimeout(): number;

	getMTU(): number;

	getNetBIOSEnable(): boolean;

	getNetBIOSName(): string;

	getPHYAdvertiseMode(): PHYAdvertiseModeValue;

	getPHYCapabilitiesToAdvertise(): PHYCapabilitiesToAdvertiseValue;

	getPHYMode(): PHYModeValue;

	getPrinterDefaultGateway(): string;

	getPrinterIPAddress(): string;

	getPrinterSubnetMask(): string;

	getPrinterTCPPort(): number;

	getPrinterUDPPort(): number;

	getSnmpServerAddress(): string;

	getSnmpTrapIPAddress(): string;

	getStaticPrimaryDNSServerIPAddress(): string;

	getStaticPrimaryWINSServerIPAddress(): string;

	getStaticSecondaryDNSServerIPAddress(): string;

	getStaticSecondaryWINSServerIPAddress(): string;

	initWithConnection(conn: ConnectionBase): this;
}

declare class NetworkGeneralSettings_DPL extends PrinterState_DPL {

	static alloc(): NetworkGeneralSettings_DPL; // inherited from NSObject

	static new(): NetworkGeneralSettings_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getConnectedState(): string;

	getFTPEnable(): boolean;

	getGratuitousARPPeriod(): number;

	getHTTPEnable(): boolean;

	getIPAcquired(): string;

	getLPDEnable(): boolean;

	getNetBIOSEnable(): boolean;

	getNetcenterEnable(): boolean;

	getNetworkPassword(): string;

	getNetworkReady(): string;

	getPrimaryInterface(): string;

	getSNMPEnable(): boolean;

	getTelnetEnable(): boolean;

	getWiFiType(): WiFiModuleValue;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum NetworkTypeValue {

	AdHoc = 72,

	Infrastructure = 80,

	Unknown = 999
}

declare const enum NetworkTypeValues {

	Unset = 998,

	Unknown = 999,

	AD_HOC = 72,

	AccessPoint = 80
}

declare class NetworkWirelessSettings_DPL extends PrinterState_DPL {

	static alloc(): NetworkWirelessSettings_DPL; // inherited from NSObject

	static new(): NetworkWirelessSettings_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getActiveGatewayAddress(): string;

	getActiveIPAddress(): string;

	getActiveSubnetMask(): string;

	getDHCPHostName(): string;

	getDHCPUserClassOption(): string;

	getDNSSuffix(): string;

	getEAPType(): EAPTypeValue;

	getESSID(): string;

	getEnableConnectionStatusReport(): boolean;

	getGroupCipher(): GroupCipherValue;

	getIPAddressMethod(): IPAddressMethodValue;

	getInactiveTimeout(): number;

	getLPDEnable(): boolean;

	getLPDPort(): number;

	getMaxActiveChannelDwellTime(): number;

	getMinActiveChannelDwellTime(): number;

	getNetworkAuthenticationType(): NetworkAuthenticationTypeValue;

	getNetworkType(): NetworkTypeValue;

	getPhase2Method(): Phase2MethodValue;

	getPowerSavingMode(): boolean;

	getPreferredDNSServerIP(): string;

	getPrinterDNSName(): string;

	getRadioChannelSelection(): string;

	getRadioMode(): RadioModeValue;

	getRegisterToDNS(): boolean;

	getRegulatoryDomain(): RegulatoryDomainValue;

	getSSLPort(): number;

	getSecondaryDNSServerIP(): string;

	getShowSignalStrength(): boolean;

	getSignalStrength(): string;

	getStaticDNS(): boolean;

	getStaticGateway(): string;

	getStaticIPAddress(): string;

	getStaticSubnetMask(): string;

	getTCPPort(): number;

	getUDPPort(): number;

	getUseClientCertificate(): boolean;

	getUseDNSSuffix(): boolean;

	getUseHexPSK(): boolean;

	getWEPAuthenticationMethod(): WEPAuthenticationMethodValue;

	getWEPDataEncryption(): boolean;

	getWEPKeySelected(): WEPKeySelectedValue;

	getWiFiEnable(): boolean;

	getWiFiMACAddress(): string;

	getWiFiTestingMode(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setDNSSuffix(value: string): number;

	setEAPType(value: EAPTypeValue): number;

	setESSID(value: string): number;

	setEnableConnectionStatusReport(value: boolean): number;

	setGroupCipher(value: GroupCipherValue): number;

	setHexPassPhrase(value: string): number;

	setIPAddressMethod(value: IPAddressMethodValue): number;

	setInactiveTimeout(value: number): number;

	setLPDEnable(value: boolean): number;

	setLPDPort(value: number): number;

	setMaxActiveChannelDwellTime(value: number): number;

	setMinActiveChannelDwellTime(value: number): number;

	setNetworkAuthenticationType(value: NetworkAuthenticationTypeValue): number;

	setNetworkType(value: NetworkTypeValue): number;

	setPassPhrase(value: string): number;

	setPassword(value: string): number;

	setPhase2Method(value: Phase2MethodValue): number;

	setPowerSavingMode(value: boolean): number;

	setPreferredDNSServerIP(value: string): number;

	setPrinterDNSName(value: string): number;

	setRadioChannelSelection(value: string): number;

	setRadioMode(value: RadioModeValue): number;

	setRegisterToDNS(value: boolean): number;

	setRegulatoryDomain(value: RegulatoryDomainValue): number;

	setSSLPort(value: number): number;

	setSecondaryDNSServerIP(value: string): number;

	setShowSignalStrength(value: boolean): number;

	setStaticDNS(value: boolean): number;

	setStaticGateway(value: string): number;

	setStaticIPAddress(value: string): number;

	setStaticSubnetMask(value: string): number;

	setTCPPort(value: number): number;

	setUDPPort(value: number): number;

	setUseClientCertificate(value: boolean): number;

	setUseDNSSuffix(value: boolean): number;

	setUseHexPSK(value: boolean): number;

	setUserName(value: string): number;

	setWEPAuthenticationMethod(value: WEPAuthenticationMethodValue): number;

	setWEPDataEncryption(value: boolean): number;

	setWEPKey1(value: string): number;

	setWEPKey2(value: string): number;

	setWEPKey3(value: string): number;

	setWEPKey4(value: string): number;

	setWEPKeySelected(value: WEPKeySelectedValue): number;

	setWiFiEnable(value: boolean): number;

	setWiFiTestingMode(value: boolean): number;
}

declare const enum PHYAdvertiseModeValue {

	Auto = 0,

	AllCapabilities = 1,

	Unknown = 999
}

declare const enum PHYCapabilitiesToAdvertiseValue {

	Always = 0,

	Unknown = 999
}

declare const enum PHYModeValue {

	ValueAuto = 0,

	Value10BaseTHalfDuplex = 1,

	Value10BaseTFullDuplex = 2,

	Value100BaseTHalfDuplex = 3,

	Value100BaseTFullDuplex = 4,

	ValueUnknown = 999
}

declare const enum PaperOutBeepValue {

	Unset = 998,

	Unknown = 999,

	OneBeep = 0,

	FiveBeepsOnce = 1,

	FiveBeepsEvery15Sec = 2,

	FiveBeepsEvery30Sec = 3,

	FiveBeepsEvery60Sec = 4
}

declare const enum PaperOutSensorValue {

	Unset = 998,

	Unknown = 999,

	Bottom = 66,

	Top = 84
}

declare const enum PaperWidth {

	Width_384 = 384,

	Width_576 = 576,

	Width_832 = 832
}

declare class Parameters extends NSObject {

	static alloc(): Parameters; // inherited from NSObject

	static new(): Parameters; // inherited from NSObject

	horizontalMultiplier: number;

	isInverse: boolean;

	textEncoding: number;

	verticalMultiplier: number;
}

declare class ParametersDPL extends Parameters {

	static alloc(): ParametersDPL; // inherited from NSObject

	static new(): ParametersDPL; // inherited from NSObject

	DBSymbolSet: DoubleByteSymbolSetValue;

	SBSymbolSet: SingleByteSymbolSetValue;

	alignment: AlignmentDPL;

	embeddedEnable: boolean;

	embeddedIncrementDecrementValue: string;

	fillPattern: number;

	fillerCharacter: string;

	fontHeight: number;

	fontID: string;

	fontWidth: number;

	incrementDecrementType: IncrementDecrementTypeValue;

	incrementDecrementValue: number;

	isBold: boolean;

	isDotMode: boolean;

	isItalic: boolean;

	isMirrored: boolean;

	isUnderline: boolean;

	isUnicode: boolean;

	measurement: UnitMeasureValue;

	narrowBarWidth: number;

	rotation: RotationDPL;

	symbolHeight: number;

	typeID: string;

	wideBarWidth: number;

	DoubleSymbolSetToString(symbolSet: DoubleByteSymbolSetValue): string;

	SingleSymbolSetToString(symbolSet: SingleByteSymbolSetValue): string;
}

declare class ParametersEZ extends Parameters {

	static alloc(): ParametersEZ; // inherited from NSObject

	static new(): ParametersEZ; // inherited from NSObject

	align: Alignment;

	fontName: string;

	isBold: boolean;

	rotate: Rotation;
}

declare class ParametersExPCL_LP extends Parameters {

	static alloc(): ParametersExPCL_LP; // inherited from NSObject

	static new(): ParametersExPCL_LP; // inherited from NSObject

	autoPowerDownTimer: number;

	barcodeHeight: number;

	fontIndex: number;

	horizontalTabWidth: number;

	isAnnotate: boolean;

	isBold: boolean;

	isPCLineDrawCharSet: boolean;

	isRightToLeftTextDirection: boolean;

	isUnderline: boolean;

	paperPresenter: number;

	sensorSensitivity: number;

	type: BarcodeExPCL_LP;

	verticalTabHeight: number;
}

declare class ParametersExPCL_PP extends Parameters {

	static alloc(): ParametersExPCL_PP; // inherited from NSObject

	static new(): ParametersExPCL_PP; // inherited from NSObject

	barcodeHeight: number;

	fontIndex: number;

	isAnnotate: boolean;

	isBold: boolean;

	isUnderline: boolean;

	lineThickness: number;

	rotate: RotationAngle;

	type: BarcodeExPCL_PP;
}

declare class ParametersLP extends Parameters {

	static alloc(): ParametersLP; // inherited from NSObject

	static new(): ParametersLP; // inherited from NSObject

	fontName: number;
}

declare const enum ParityValueDPL {

	Unknown = 999,

	None = 78,

	Even = 69,

	Odd = 79
}

declare const enum ParityValueEZ {

	Unset = 998,

	Unknown = 999,

	None = 78,

	Even = 69,

	Odd = 79
}

declare const enum Phase2MethodValue {

	Unknown = 999,

	None = 0,

	EAP_GTC = 1,

	EAP_MSCHAPV2 = 2,

	EAP_MD5 = 3,

	GTC = 4,

	MSCHAPV2 = 5,

	MSCHAP = 6,

	CHAP = 7,

	EAP_TLS = 8
}

declare const enum Phase2MethodValues {

	Unset = 998,

	Unknown = 999,

	EAP_GTC = 1,

	EAP_MSCHAPV2 = 2,

	EAP_MD5 = 3,

	GTC = 4,

	MSCHAPV2 = 5,

	MSCHAP = 6,

	CHAP = 7,

	EAP_TLS = 8
}

declare const enum PowerSourceValue {

	Unset = 998,

	Unknown = 999,

	DCOverBattery = 65,

	BatteryOverDC = 66,

	BatteryEliminator = 67
}

declare const enum PrimaryInterfaceValue {

	Unknown = 0,

	WiredEthernet = 1,

	WIFI = 2,

	Bluetooth = 3,

	None = 4
}

declare class PrintSettings_DPL extends PrinterState_DPL {

	static alloc(): PrintSettings_DPL; // inherited from NSObject

	static new(): PrintSettings_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBackupDelay(): number;

	getBackupSpeed(): number;

	getColumnAdjustFineTune(): number;

	getColumnOffset(): number;

	getContrastLevel(): number;

	getDarknessLevel(): number;

	getFeedSpeed(): number;

	getHeatLevel(): number;

	getPresentAdjustFineTune(): number;

	getPrintSpeed(): number;

	getRowAdjustFineTune(): number;

	getRowOffset(): number;

	getSlewSpeed(): number;

	initWithConnection(conn: ConnectionBase): this;

	setBackupDelay(value: number): number;

	setBackupSpeed(value: number): number;

	setColumnAdjustFineTune(value: number): number;

	setColumnOffset(value: number): number;

	setContrastLevel(value: number): number;

	setDarknessLevel(value: number): number;

	setFeedSpeed(value: number): number;

	setHeatLevel(value: number): number;

	setPresentAdjustFineTune(value: number): number;

	setPrintSpeed(value: number): number;

	setRowAdjustFineTune(value: number): number;

	setRowOffset(value: number): number;

	setSlewSpeed(value: number): number;
}

declare class PrinterData extends NSObject implements NSCoding {

	static alloc(): PrinterData; // inherited from NSObject

	static new(): PrinterData; // inherited from NSObject

	queryDescription: string;

	constructor(o: { coder: NSCoder; }); // inherited from NSCoding

	addNameWithDescription(parameter: string, description: string): void;

	commit(): number;

	containsData(parameter: string): boolean;

	encodeWithCoder(coder: NSCoder): void;

	getQuery(): string;

	getValid(): boolean;

	initWithCoder(coder: NSCoder): this;

	isDouble(name: string): boolean;

	isInteger(name: string): boolean;

	isString(name: string): boolean;

	parse_BooleanWithTrueValueWithFalseValue(name: string, trueValue: string, falseValue: string): boolean;

	parse_Double(name: string): number;

	parse_Long(name: string): number;

	parse_String(name: string): string;

	queryResult(name: string): string;

	queryResults(): NSMutableArray<any>;

	querySettings(queryResults: string): NSMutableDictionary<any, any>;

	set_BooleanWithValueWithTrueValueWithFalseValue(name: string, value: boolean, trueValue: string, falseValue: string): boolean;

	set_DoubleWithValue(name: string, value: number): number;

	set_LongWithValue(name: string, value: number): number;

	set_StringWithValue(name: string, value: string): number;

	toString(): string;

	update(responseString: string): void;
}

declare class PrinterData_DPL extends NSObject implements NSCoding {

	static alloc(): PrinterData_DPL; // inherited from NSObject

	static new(): PrinterData_DPL; // inherited from NSObject

	queryDescription: string;

	constructor(o: { coder: NSCoder; }); // inherited from NSCoding

	addNameWithDescription(parameter: string, description: string): void;

	commit(): number;

	containsData(parameter: string): boolean;

	encodeWithCoder(coder: NSCoder): void;

	getQuery(): string;

	getValid(): boolean;

	initWithCoder(coder: NSCoder): this;

	isDouble(name: string): boolean;

	isInteger(name: string): boolean;

	isString(name: string): boolean;

	parse_BooleanWithTrueValueWithFalseValue(name: string, trueValue: string, falseValue: string): boolean;

	parse_Double(name: string): number;

	parse_Hex(name: string): number;

	parse_Long(name: string): number;

	parse_SpeedInInchesPerSec(name: string): number;

	parse_SpeedInMillimeterPerSec(name: string): number;

	parse_String(name: string): string;

	queryResult(name: string): string;

	queryResults(): NSMutableArray<any>;

	querySettings(queryResults: string): NSMutableDictionary<any, any>;

	set_BooleanWithValueWithTrueValueWithFalseValue(name: string, value: boolean, trueValue: string, falseValue: string): boolean;

	set_DoubleWithValue(name: string, value: number): number;

	set_LongWithValue(name: string, value: number): number;

	set_SpeedInInchesPerSecWithValue(name: string, value: number): number;

	set_SpeedInMillimeterPerSecWithValue(name: string, value: number): number;

	set_StringWithValue(name: string, value: string): number;

	toString(): string;

	update(responseString: string): void;
}

declare class PrinterData_ExPCL extends NSObject implements NSCoding {

	static alloc(): PrinterData_ExPCL; // inherited from NSObject

	static new(): PrinterData_ExPCL; // inherited from NSObject

	queryDescription: string;

	constructor(o: { coder: NSCoder; }); // inherited from NSCoding

	addNameWithDescription(parameter: string, description: string): void;

	containsData(parameter: string): boolean;

	encodeWithCoder(coder: NSCoder): void;

	getQuery(): string;

	getValid(): boolean;

	initWithCoder(coder: NSCoder): this;

	isDouble(name: string): boolean;

	isInteger(name: string): boolean;

	isString(name: string): boolean;

	parse_BooleanWithTrueValueWithFalseValue(name: string, trueValue: string, falseValue: string): boolean;

	parse_Double(name: string): number;

	parse_Hex(name: string): number;

	parse_Long(name: string): number;

	parse_String(name: string): string;

	queryResult(name: string): string;

	queryResults(): NSMutableArray<any>;

	querySettings(queryResults: string): NSMutableDictionary<any, any>;

	toString(): string;

	update(responseString: string): void;
}

declare class PrinterInformation_DPL extends PrinterState_DPL {

	static alloc(): PrinterInformation_DPL; // inherited from NSObject

	static new(): PrinterInformation_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAVRVersionInformation(): string;

	getAbsoluteCounter(): number;

	getAbsoluteCounterDate(): string;

	getAutoUpdateErrorString(): string;

	getBoot1Architecture(): string;

	getBoot1PartNumber(): string;

	getBoot1Version(): string;

	getBoot2Architecture(): string;

	getBoot2PartNumber(): string;

	getBoot2Version(): string;

	getBuildDateTime(): string;

	getCurrentDate(): string;

	getCurrentEpochTime(): string;

	getCurrentTime(): string;

	getDotDensity(): number;

	getErrorScriptString(): string;

	getFirmwareArchitecture(): string;

	getFirmwareBuild(): string;

	getFirmwareVersion(): string;

	getIsExternalPowerConnected(): boolean;

	getLCDErrorNumber(): string;

	getLCDErrorString1(): string;

	getLCDErrorString2(): string;

	getLastErrorString(): string;

	getLuaCurrentState(): string;

	getModelNumber(): string;

	getPrintHeadWidth(): number;

	getPrinterModel(): string;

	getPrinterSerialNumber(): string;

	getResettableCounter(): number;

	getResettableCounterDate(): string;

	getVersionInformation(): string;

	getXAVRVersionInformation(): string;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum PrinterModelValue {

	None = 0,

	MF2 = 1,

	LP3 = 2,

	MF4 = 3,

	OC2 = 4,

	OC3 = 5,

	OC4 = 6,

	PrintPad = 7,

	MF2Te = 8
}

declare class PrinterOptions extends PrinterState {

	static alloc(): PrinterOptions; // inherited from NSObject

	static new(): PrinterOptions; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getCFDevice(): CompactFlashValue;

	getCFDevice_IsPresent(): boolean;

	getCertificationFlagStatus(): boolean;

	getCertificationFlagStatus_IsPresent(): boolean;

	getManufacturingDate(): string;

	getManufacturingDate_IsPresent(): boolean;

	getPartNumber(): string;

	getPartNumber_IsPresent(): boolean;

	getPrinterDescription(): string;

	getPrinterDescription_IsPresent(): boolean;

	getPrinterType(): PrinterModelValue;

	getPrinterType_IsPresent(): boolean;

	getSCRDevice(): SerialBusDeviceValue;

	getSCRDevice_IsPresent(): boolean;

	getSDIODevice(): SDIODeviceValue;

	getSDIODevice_IsPresent(): boolean;

	getSPIDevice(): number;

	getSPIDevice_IsPresent(): boolean;

	getSerialNumber(): string;

	getSerialNumber_IsPresent(): boolean;

	getTextFixtureString(): string;

	getTextFixtureString_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class PrinterOptions_ExPCL extends PrinterState_ExPCL {

	static alloc(): PrinterOptions_ExPCL; // inherited from NSObject

	static new(): PrinterOptions_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getPowerDownTimer(): number;

	getPowerDownTimer_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum PrinterResponse {

	Unknown = 0,

	NO_RESPONSE = 1,

	ACK = 2,

	NAK = 3,

	WRITING = 4,

	RESUME = 5,

	DONE = 6
}

declare class PrinterState extends PrinterData {

	static alloc(): PrinterState; // inherited from NSObject

	static new(): PrinterState; // inherited from NSObject

	queryPrinterWithTimeout(timeout: number): void;

	updateWithTimeout(timeout: number): void;
}

declare class PrinterState_DPL extends PrinterData_DPL {

	static alloc(): PrinterState_DPL; // inherited from NSObject

	static new(): PrinterState_DPL; // inherited from NSObject

	queryPrinterWithTimeout(timeout: number): void;

	updateWithTimeout(timeout: number): void;
}

declare class PrinterState_ExPCL extends PrinterData_ExPCL {

	static alloc(): PrinterState_ExPCL; // inherited from NSObject

	static new(): PrinterState_ExPCL; // inherited from NSObject

	queryPrinterWithTimeout(timeout: number): void;

	updateWithTimeout(timeout: number): void;
}

declare const enum PrinterStatus {

	Unknown = 0,

	InterpreterBusy = 1,

	PaperOutFault = 2,

	RibbonOutFault = 3,

	PrintingBatch = 4,

	BusyPrinting = 5,

	PrinterPaused = 6,

	LabelPresented = 7,

	RewinderOutFault = 8,

	CutterFault = 9,

	PaperOut = 10,

	RibbonSaverFault = 11,

	PrintHeadUp = 12,

	TopOfFormFault = 13,

	RibbonLow = 14,

	PrinterReady = 17,

	WaitingForSignal = 18,

	WaitingForData = 19,

	COM1HasData = 20,

	PrinterBusy = 21
}

declare const enum PrinterStatusValue {

	Unset = 998,

	Unknown = 999,

	Complete = 67,

	Idle = 73,

	Killed = 75,

	Printing = 80,

	TimeOut = 84
}

declare class PrinterStatus_DPL extends PrinterState_DPL {

	static alloc(): PrinterStatus_DPL; // inherited from NSObject

	static new(): PrinterStatus_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBusyPrinting(): boolean;

	getCOM1HasData(): boolean;

	getCurrentStatus(): PrinterStatus;

	getCutterFault(): boolean;

	getInterpreterBusy(): boolean;

	getLabelPresented(): boolean;

	getPaperOutFault(): boolean;

	getPrintHeadUp(): boolean;

	getPrinterPaused(): boolean;

	getPrinterReady(): boolean;

	getPrintingBatch(): boolean;

	getRewinderOutFault(): boolean;

	getRibbonLow(): boolean;

	getRibbonOutFault(): boolean;

	getRibbonSaverFault(): boolean;

	getTopOfFormFault(): boolean;

	getWaitingForData(): boolean;

	getWaitingForSignal(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class PrintheadStatus extends PrinterState {

	static alloc(): PrintheadStatus; // inherited from NSObject

	static new(): PrintheadStatus; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getDPI(): number;

	getDPI_IsPresent(): boolean;

	getPageWidth(): number;

	getPageWidth_IsPresent(): boolean;

	getPrintTime(): number;

	getPrintTime_IsPresent(): boolean;

	getPrintheadModel(): string;

	getPrintheadModel_IsPresent(): boolean;

	getPrintheadPins(): number;

	getPrintheadPins_IsPresent(): boolean;

	getPrintheadTemperature(): number;

	getPrintheadTemperature_IsPresent(): boolean;

	getPrintheadWidth(): number;

	getPrintheadWidth_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class PrintheadStatus_ExPCL extends PrinterState_ExPCL {

	static alloc(): PrintheadStatus_ExPCL; // inherited from NSObject

	static new(): PrintheadStatus_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getPrintheadTemperature(): number;

	getPrintheadTemperature_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum QMarkValue {

	Unset = 998,

	Unknown = 999,

	BottomQMark = 66,

	InterLabelGap = 71,

	PlainPaper = 80,

	TopQMark = 84
}

declare const enum QStop_Setting {

	Default = 0,

	Front = 1,

	Back = 2,

	Gap = 3,

	None = 4
}

declare const enum QueryDataType {

	AirWatch = 0,

	AutoUpdate = 1,

	AvalancheEnabler = 2,

	NetworkGeneral = 3,

	NetworkWireless = 4,

	NetworkEthernet = 5,

	Bluetooth = 6,

	PrinterInformation = 7,

	SystemSettings = 8,

	SmartBattery = 9,

	Other = 10
}

declare const enum RadioModeValue {

	Unknown = 999,

	Default = 0,

	A = 1,

	BG = 2,

	ABG = 3,

	B = 4,

	G = 5
}

declare const enum RadioTypeValues {

	Unset = 998,

	Unknown = 999,

	None = 0,

	Bluetooth = 1,

	IrDA = 2,

	Phaser = 3,

	Silex = 4
}

declare const enum RegulatoryDomainValue {

	Unknown = 999,

	WORLD_WIDE_ROAMING = 0,

	ALBANIA = 8,

	ALGERIA = 12,

	ARGENTINA = 32,

	ARMENIA = 51,

	AUSTRALIA = 36,

	AUSTRIA = 40,

	AZERBAIJAN = 31,

	BAHRAIN = 48,

	BELARUS = 112,

	BELGIUM = 56,

	BELIZE = 84,

	BOLIVIA = 68,

	BOSNIA_HERZEGOWANIA = 70,

	BRAZIL = 76,

	BRUNEI_DARUSSALAM = 96,

	BULGARIA = 100,

	CANADA = 124,

	CHILE = 152,

	CHINA = 156,

	COLOMBIA = 170,

	COSTA_RICA = 188,

	CROATIA = 191,

	CYPRUS = 196,

	CZECH = 203,

	DENMARK = 208,

	DOMINICAN_REPUBLIC = 214,

	ECUADOR = 218,

	EGYPT = 818,

	EL_SALVADOR = 222,

	ESTONIA = 233,

	FAEROE_ISLANDS = 234,

	FINLAND = 246,

	FRANCE = 250,

	FRANCE2 = 255,

	GEORGIA = 268,

	GERMANY = 276,

	GREECE = 300,

	GUATEMALA = 320,

	HONDURAS = 340,

	HONG_KONG = 344,

	HUNGARY = 348,

	ICELAND = 352,

	INDIA = 356,

	INDONESIA = 360,

	IRAN = 364,

	IRAQ = 368,

	IRELAND = 372,

	ISRAEL = 376,

	ITALY = 380,

	JAMAICA = 388,

	JAPAN = 392,

	JAPAN_JP1 = 393,

	JAPAN_JP0 = 394,

	JAPAN_JP1_1 = 395,

	JAPAN_JE1 = 396,

	JAPAN_JE2 = 397,

	JAPAN_JP6 = 399,

	JORDAN = 400,

	KAZAKHSTAN = 398,

	KENYA = 404,

	KOREA_NORTH = 408,

	KOREA_ROC = 410,

	KOREA_ROC2 = 411,

	KOREA_ROC3 = 412,

	KUWAIT = 414,

	LATVIA = 428,

	LEBANON = 422,

	LIBYA = 434,

	LIECHTENSTEIN = 438,

	LITHUANIA = 440,

	LUXEMBOURG = 442,

	MACAU = 446,

	MACEDONIA = 807,

	MALAYSIA = 458,

	MALTA = 470,

	MEXICO = 484,

	MONACO = 492,

	MOROCCO = 504,

	NETHERLANDS = 528,

	NETHERLAND_ANTILLES = 530,

	NEW_ZEALAND = 554,

	NICARAGUA = 558,

	NORWAY = 578,

	OMAN = 512,

	PAKISTAN = 586,

	PANAMA = 591,

	PARAGUAY = 600,

	PERU = 604,

	PHILIPPINES = 608,

	POLAND = 616,

	PORTUGAL = 620,

	PUERTO_RICO = 630,

	QATAR = 634,

	ROMANIA = 642,

	RUSSIA = 643,

	SAUDI_ARABIA = 682,

	MONTENEGRO = 891,

	SINGAPORE = 702,

	SLOVAKIA = 703,

	SLOVENIA = 705,

	SOUTH_AFRICA = 710,

	SPAIN = 724,

	SRILANKA = 144,

	SWEDEN = 752,

	SWITZERLAND = 756,

	SYRIA = 760,

	TAIWAN = 158,

	THAILAND = 764,

	TRINIDAD_Y_TOBAGO = 780,

	TUNISIA = 788,

	TURKEY = 792,

	UAE = 784,

	UKRAINE = 804,

	UNITED_KINGDOM = 826,

	UNITED_STATES = 840,

	UNITED_STATES_PS = 842,

	URUGUAY = 858,

	UZBEKISTAN = 860,

	VENEZUELA = 862,

	VIET_NAM = 704,

	YEMEN = 887,

	ZIMBABWE = 716
}

declare const enum Rotation {

	Rotate_0 = 0,

	Rotate_90 = 90,

	Rotate_180 = 180,

	Rotate_270 = 270
}

declare const enum RotationAngle {

	Angle_0 = 0,

	Angle_90 = 1,

	Angle_180 = 2,

	Angle_270 = 3
}

declare const enum RotationDPL {

	Rotate_0 = 1,

	Rotate_90 = 2,

	Rotate_180 = 3,

	Rotate_270 = 4
}

declare const enum SDIODeviceValue {

	None = 0,

	Bluetooth = 1,

	IrDA = 2,

	Phaser = 3,

	Silex = 4
}

declare const enum SSPBaudValue {

	Unset = 998,

	Unknown = 999,

	Baud_1200 = 1200,

	Baud_2400 = 2400,

	Baud_4800 = 4800,

	Baud_9600 = 9600,

	Baud_19200 = 19200,

	Baud_38400 = 38400,

	Baud_57600 = 57600,

	Baud_115200 = 115200,

	Baud_230400 = 230400,

	Baud_460800 = 460800,

	Baud_921600 = 921600
}

declare const enum SSPHandshake {

	Unset = 998,

	Unknown = 999,

	None = 78,

	Hardware = 72,

	Software = 83,

	Both = 66
}

declare const enum SSPParity {

	Unset = 998,

	Unknown = 999,

	None = 78,

	Even = 69,

	Odd = 79
}

declare class SSP_CommParameters extends PrinterState {

	static alloc(): SSP_CommParameters; // inherited from NSObject

	static new(): SSP_CommParameters; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBaudRate(): SSPBaudValue;

	getBaudRate_IsPresent(): boolean;

	getRS232DataBits(): number;

	getRS232DataBits_IsPresent(): boolean;

	getRS232Handshake(): SSPHandshake;

	getRS232Handshake_IsPresent(): boolean;

	getRS232Parity(): SSPParity;

	getRS232Parity_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum SecurityCredentialFileFormatValue {

	Default = 0,

	CT = 1,

	Unknown = 999
}

declare class SensorCalibration_DPL extends PrinterState_DPL {

	static alloc(): SensorCalibration_DPL; // inherited from NSObject

	static new(): SensorCalibration_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAutoCalibrationMode(): boolean;

	getBlackMarkPaperValue(): number;

	getBlackMarkSensorGain(): number;

	getBlackMarkValue(): number;

	getGapMarkLevel(): number;

	getGapMarkLevelWithThermalTransferMedia(): number;

	getGapSensorGain(): number;

	getGapSensorGainWithThermalTransferMedia(): number;

	getPaperLevel(): number;

	getPaperLevelWithThermalTransferMedia(): number;

	getPresenterSensorGain(): number;

	getSensorClearValue(): number;

	getSensorClearValueWithThermalTransferMedia(): number;

	initWithConnection(conn: ConnectionBase): this;

	setAutoCalibrationMode(value: boolean): number;

	setBlackMarkPaperValue(value: number): number;

	setBlackMarkSensorGain(value: number): number;

	setBlackMarkValue(value: number): number;

	setGapMarkLevel(value: number): number;

	setGapMarkLevelWithThermalTransferMedia(value: number): number;

	setGapSensorGain(value: number): number;

	setGapSensorGainWithThermalTransferMedia(value: number): number;

	setPaperLevel(value: number): number;

	setPaperLevelWithThermalTransferMedia(value: number): number;

	setPresenterSensorGain(value: number): number;

	setSensorClearValue(value: number): number;

	setSensorClearValueWithThermalTransferMedia(value: number): number;
}

declare const enum SensorTypeValue {

	Unknown = 999,

	Gap = 71,

	Continuous = 67,

	BlackMark = 82
}

declare const enum SerialBusDeviceValue {

	None = 0,

	SCR = 1,

	Direct_Smart_Card = 2,

	USB_DEX = 3
}

declare class SerialNumber extends PrinterState {

	static alloc(): SerialNumber; // inherited from NSObject

	static new(): SerialNumber; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getSN(): string;

	getSN_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class SerialPortConfiguration_DPL extends PrinterState_DPL {

	static alloc(): SerialPortConfiguration_DPL; // inherited from NSObject

	static new(): SerialPortConfiguration_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBaudRate(): BaudRateValueDPL;

	getDataBits(): number;

	getHandshaking(): HandshakeValueDPL;

	getParity(): ParityValueDPL;

	getStopBit(): number;

	initWithConnection(conn: ConnectionBase): this;

	setBaudRate(value: BaudRateValueDPL): number;

	setDataBits(value: number): number;

	setHandshaking(value: HandshakeValueDPL): number;

	setParity(value: ParityValueDPL): number;

	setStopBit(value: number): number;
}

declare const enum SingleByteSymbolSetValue {

	Unknown = 0,

	ISO60_Danish = 1,

	DeskTop = 2,

	ISO8859_1_Latin1 = 3,

	ISO8859_2_Latin2 = 4,

	ISO8859_9_Latin5 = 5,

	ISO8859_10_Latin6 = 6,

	ISO8859_15_Latin9 = 7,

	ISO69_French = 8,

	ISO21_German = 9,

	ISO15_Italian = 10,

	Legal = 11,

	Math_8 = 12,

	Macintosh = 13,

	PS_Math = 14,

	PC858_Multi = 15,

	PC8_Code437 = 16,

	PC8_DN_Code437N = 17,

	PC852_Latin2 = 18,

	PC862_LatinHebrew = 19,

	PI_Font = 20,

	PC850_Multi = 21,

	PC864_LatinArabic = 22,

	PC8TK_Code437T = 23,

	PC1004 = 24,

	PC775_Baltic = 25,

	Roman8 = 26,

	Roman9 = 27,

	ISO17_Spanish = 28,

	ISO11_Swedish = 29,

	PS_Text = 30,

	ISO4_UK = 31,

	ISO6_ASCII = 32,

	UTF8 = 33,

	VentInt = 34,

	VentMath = 35,

	VentUS = 36,

	Windows31_Latin1 = 37,

	Windows_LatinArabic = 38,

	Windows31_Latin2 = 39,

	Windows31_Baltic = 40,

	Windows30_Latin1 = 41,

	Windows_LatinCyrillic = 42,

	Windows31_Latin5 = 43
}

declare class SmartBattery_DPL extends PrinterState_DPL {

	static alloc(): SmartBattery_DPL; // inherited from NSObject

	static new(): SmartBattery_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAverageCurrent(): string;

	getCurrent(): string;

	getCycleCount(): string;

	getManufactureDate(): string;

	getPercentCharge(): string;

	getSerialNumber(): string;

	getStatusBit(): string;

	getTemperature(): string;

	getVoltage(): string;

	initWithConnection(conn: ConnectionBase): this;
}

declare class SmartCardConfiguration extends PrinterState {

	static alloc(): SmartCardConfiguration; // inherited from NSObject

	static new(): SmartCardConfiguration; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getCommandFormat(): string;

	getCommandFormat_IsPresent(): boolean;

	getEnabled(): boolean;

	getEnabled_IsPresent(): boolean;

	getMemoryType(): string;

	getMemoryType_IsPresent(): boolean;

	getProtocol(): string;

	getProtocol_IsPresent(): boolean;

	getResponseFormat(): string;

	getResponseFormat_IsPresent(): boolean;

	getType(): string;

	getType_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum StartOfPrintEmulationValue {

	Unknown = 999,

	Allegro = 65,

	ProdigyPlus = 76,

	Prodigy = 80,

	Disable = 68
}

declare const enum StartOfPrintSignalValue {

	Unknown = 999,

	ActiveLow = 3,

	ActiveHigh = 4
}

declare const enum StatusMessagePrintModeValue {

	PrintNoRotate = 1,

	PrintRotate = 2,

	Unknown = 999
}

declare const enum StopLocationValue {

	Unknown = 999,

	Automatic = 65,

	Host = 72,

	PEEL = 80,

	CUT = 67,

	TEAR = 84,

	NEXTLABEL = 78
}

declare class StoredFormat_DPL extends MemoryModules_DPL {

	static alloc(): StoredFormat_DPL; // inherited from NSObject

	static new(): StoredFormat_DPL; // inherited from NSObject

	getStoredFormatsFromModule(module: string): NSArray<any>;
}

declare class SystemSettings_DPL extends PrinterState_DPL {

	static alloc(): SystemSettings_DPL; // inherited from NSObject

	static new(): SystemSettings_DPL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBacklightMode(): BacklightModeValue;

	getBacklightTimer(): number;

	getBeepControlDuration(): number;

	getBeepControlQuantity(): number;

	getBeepNowDuration(): number;

	getBeepNowQuantity(): number;

	getBeeperState(): boolean;

	getColumnEmulation(): number;

	getDefaultModule(): MemoryModuleValue;

	getDisplayMode(): string;

	getDotCheckOnSchedule(): boolean;

	getDotCheckOnStartup(): boolean;

	getDotCheckSchedule(): string;

	getDoubleByteSymbolSet(): DoubleByteSymbolSetValue;

	getEmulationsUsedForAutoMode(): NSArray<any>;

	getEncryptedFileAlgorithm(): EncryptedFileAlgorithmValue;

	getEscapeSequences(): boolean;

	getFaultHandlingBackup(): boolean;

	getFaultHandlingLevel(): FaultHandlingLevelValue;

	getFaultHandlingRetryCount(): number;

	getFaultHandlingVoidDistance(): number;

	getFileDump(): boolean;

	getFontEmulation(): FontEmulationValue;

	getFormatAttribute(): FormatAttributeValue;

	getHostTimeout(): number;

	getImageMode(): ImageModeValue;

	getInputMode(): InputModeValue;

	getInternalModuleSize(): number;

	getLabelRotation(): LabelRotationValue;

	getLabelStoreLevel(): LabelStoreLevelValue;

	getLegacyEmulation(): string;

	getMenuLanguage(): string;

	getMenuMode(): MenuModeValue;

	getPeriodicScriptName(): string;

	getPeriodicScriptTimeInterval(): number;

	getPowerDownTimeout(): number;

	getPrinterSleepTimeout(): number;

	getRFPowerDownTimeout(): number;

	getRadioPowerState(): boolean;

	getRetractDelay(): number;

	getRowEmulation(): number;

	getRunOnceScriptFile(): string;

	getSaveLastImage(): boolean;

	getScalableFontBolding(): number;

	getScalableFontCache(): number;

	getShutdownTempHigh(): number;

	getShutdownTempLow(): number;

	getSingleByteSymbolSet(): SingleByteSymbolSetValue;

	getStartOfPrintEmulation(): StartOfPrintEmulationValue;

	getStartupConfigurationFile(): string;

	getStartupScriptFile(): string;

	getSuppressAutoReset(): boolean;

	getSymbolSetSelection(): boolean;

	getTopLevelMenuName(): string;

	getUnitMeasure(): UnitMeasureValue;

	getUserEmulationMode(): InputModeValue;

	getUserLabelMode(): boolean;

	getWebURL(): string;

	initWithConnection(conn: ConnectionBase): this;

	setBacklightMode(value: BacklightModeValue): number;

	setBacklightTimer(value: number): number;

	setBeepControlDuration(value: number): number;

	setBeepControlQuantity(value: number): number;

	setBeepNowDuration(value: number): number;

	setBeepNowQuantity(value: number): number;

	setBeeperState(value: boolean): number;

	setColumnEmulation(value: number): number;

	setDefaultMemoryModule(value: MemoryModuleValue): number;

	setDoubleByteSymbolSet(value: DoubleByteSymbolSetValue): number;

	setEmulationsUsedForAutoMode(values: NSArray<any> | any[]): number;

	setEncryptedFileAlgorithm(value: EncryptedFileAlgorithmValue): number;

	setEncryptedFileKey(value: string): number;

	setEscapeSequences(value: boolean): number;

	setFaultHandlingBackup(value: boolean): number;

	setFaultHandlingLevel(value: FaultHandlingLevelValue): number;

	setFaultHandlingRetryCount(value: number): number;

	setFaultHandlingVoidDistance(value: number): number;

	setFileDump(value: boolean): number;

	setFontEmulation(value: FontEmulationValue): number;

	setFormatAttribute(value: FormatAttributeValue): number;

	setHostTimeout(value: number): number;

	setImageMode(value: ImageModeValue): number;

	setInputMode(value: InputModeValue): number;

	setLabelRotation(value: LabelRotationValue): number;

	setLabelStoreLevel(value: LabelStoreLevelValue): number;

	setMenuLanguage(value: string): number;

	setMenuMode(value: MenuModeValue): number;

	setPeriodicScriptName(value: string): number;

	setPeriodicScriptTimeInterval(value: number): number;

	setPowerDownTimeout(value: number): number;

	setPrinterSleepTimeout(value: number): number;

	setRFPowerDownTimeout(value: number): number;

	setRadioPowerState(value: boolean): number;

	setRetractDelay(value: number): number;

	setRowEmulation(value: number): number;

	setRunOnceScriptFile(value: string): number;

	setSaveLastImage(value: boolean): number;

	setShutdownTempHigh(value: number): number;

	setShutdownTempLow(value: number): number;

	setSingleByteSymbolSet(value: SingleByteSymbolSetValue): number;

	setStartOfPrintEmulation(value: StartOfPrintEmulationValue): number;

	setStartupConfigurationFile(value: string): number;

	setStartupScriptFile(value: string): number;

	setSuppressAutoReset(value: boolean): number;

	setSymbolSetSelection(value: boolean): number;

	setTopLevelMenuName(value: string): number;

	setUnitMeasure(value: UnitMeasureValue): number;

	setUserEmulationMode(value: InputModeValue): number;

	setUserLabelMode(value: boolean): number;

	setWebURL(value: string): number;
}

declare var TCPDataReceivedNotification: string;

declare class TCPIPStatus extends PrinterState {

	static alloc(): TCPIPStatus; // inherited from NSObject

	static new(): TCPIPStatus; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getAcquireIP(): IPAcquiringValues;

	getAcquireIP_IsPresent(): boolean;

	getAuthenticationAlgorithm(): AuthenticationKeyTypeValues;

	getAuthenticationAlgorithm_IsPresent(): boolean;

	getCardPowered(): boolean;

	getCardPowered_IsPresent(): boolean;

	getConnectionReporting(): boolean;

	getConnectionReporting_IsPresent(): boolean;

	getCurrentCertificateCRC(): string;

	getCurrentCertificateCRC_IsPresent(): boolean;

	getDNS1Address(): string;

	getDNS1Address_IsPresent(): boolean;

	getDNS2Address(): string;

	getDNS2Address_IsPresent(): boolean;

	getDNSSuffix(): string;

	getDNSSuffix_IsPresent(): boolean;

	getEAPType(): EAPTypeValues;

	getEAPType_IsPresent(): boolean;

	getESSID(): string;

	getESSID_IsPresent(): boolean;

	getEncryptionEnabled(): boolean;

	getEncryptionEnabled_IsPresent(): boolean;

	getEncryptionKeySize(): number;

	getEncryptionKeySize_IsPresent(): boolean;

	getEncryptionKeyType(): number;

	getEncryptionKeyType_IsPresent(): boolean;

	getGatewayAddress(): string;

	getGatewayAddress_IsPresent(): boolean;

	getGroupCipher(): GroupCipherValues;

	getGroupCipher_IsPresent(): boolean;

	getIPAddress(): string;

	getIPAddress_IsPresent(): boolean;

	getInactivityTimeout(): number;

	getInactivityTimeout_IsPresent(): boolean;

	getKey1Type(): AuthenticationKeyTypeValues;

	getKey1Type_IsPresent(): boolean;

	getKey2Type(): AuthenticationKeyTypeValues;

	getKey2Type_IsPresent(): boolean;

	getKey3Type(): AuthenticationKeyTypeValues;

	getKey3Type_IsPresent(): boolean;

	getKey4Type(): AuthenticationKeyTypeValues;

	getKey4Type_IsPresent(): boolean;

	getKeyToUse(): WEPKeySelectedValues;

	getKeyToUse_IsPresent(): boolean;

	getMACAddress(): string;

	getMACAddress_IsPresent(): boolean;

	getNetworkAuthentication(): NetworkAuthenticationValues;

	getNetworkAuthentication_IsPresent(): boolean;

	getNetworkType(): NetworkTypeValues;

	getNetworkType_IsPresent(): boolean;

	getPhase2Method(): Phase2MethodValues;

	getPhase2Method_IsPresent(): boolean;

	getPowerSavingMode(): boolean;

	getPowerSavingMode_IsPresent(): boolean;

	getRadioDisabled(): boolean;

	getRadioDisabled_IsPresent(): boolean;

	getRadioType(): RadioTypeValues;

	getRadioTypeIsPresent(): boolean;

	getRegisterToDNS(): boolean;

	getRegisterToDNS_IsPresent(): boolean;

	getSignalQualityIndicator(): boolean;

	getSignalQualityIndicator_IsPresent(): boolean;

	getStaticDNS(): boolean;

	getStaticDNS_IsPresent(): boolean;

	getStationName(): string;

	getStationName_IsPresent(): boolean;

	getSubnetMask(): string;

	getSubnetMask_IsPresent(): boolean;

	getTCPPrintingPort(): number;

	getTCPPrintingPort_IsPresent(): boolean;

	getUDPPrintingPort(): number;

	getUDPPrintingPort_IsPresent(): boolean;

	getUseDNS(): boolean;

	getUseDNS_IsPresent(): boolean;

	getValidCertificatePresent(): boolean;

	getValidCertificatePresent_IsPresent(): boolean;

	getWirelessCardInfo(): string;

	getWirelessCardInfo_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setAcquireIP(value: IPAcquiringValues): number;

	setAuthenticationAlgorithm(value: AuthenticationKeyTypeValues): number;

	setConnectionReporting(value: boolean): number;

	setDNS1Address(value: string): number;

	setDNS2Address(value: string): number;

	setDNSSuffix(value: string): number;

	setEAPType(value: EAPTypeValues): number;

	setESSID(value: string): number;

	setEncryptionEnable(value: boolean): number;

	setEncryptionKeySize(value: number): number;

	setEncryptionKeyType(value: number): number;

	setGatewayAddress(value: string): number;

	setGroupCipher(value: GroupCipherValues): number;

	setIPAddress(value: string): number;

	setInactivityTimeout(value: number): number;

	setKey1(value: string): number;

	setKey2(value: string): number;

	setKey3(value: string): number;

	setKey4(value: string): number;

	setKeyToUse(value: WEPKeySelectedValues): number;

	setNetworkAuthentication(value: NetworkAuthenticationValues): number;

	setNetworkType(value: NetworkTypeValues): number;

	setPassPhrase(value: string): number;

	setPassword(value: string): number;

	setPhase2Method(value: Phase2MethodValues): number;

	setPowerSavingMode(value: boolean): number;

	setRadioDisabled(value: boolean): number;

	setRegisterToDNS(value: boolean): number;

	setSignalQualityIndicator(value: boolean): number;

	setStaticDNS(value: boolean): number;

	setStationName(value: string): number;

	setSubnetMask(value: string): number;

	setTCPPrintingPort(value: number): number;

	setUDPPrintingPort(value: number): number;

	setUseDNS(value: boolean): number;

	setUserName(value: string): number;
}

declare class UPSMessage extends NSObject {

	static alloc(): UPSMessage; // inherited from NSObject

	static new(): UPSMessage; // inherited from NSObject

	SCAC: string;

	classOfService: number;

	countryCode: number;

	currentPackage: number;

	julianPickupDay: number;

	packageWeight: number;

	shipToAddr: string;

	shipToCity: string;

	shipToState: string;

	shipmentID: string;

	shipperNumber: string;

	totalPackage: number;

	trackingNumber: string;

	validateAddress: boolean;

	zipCode: string;

	constructor(o: { message: string; countryCode: number; service: number; trackNum: string; carrierCode: string; shipperNumber: string; pickupDay: number; shipmentID: string; numberOfPackages: number; packageNumber: number; packageWeight: number; validate: boolean; destAddr: string; destCity: string; destState: string; });

	initWithMessageCountryCodeServiceTrackNumCarrierCodeShipperNumberPickupDayShipmentIDNumberOfPackagesPackageNumberPackageWeightValidateDestAddrDestCityDestState(zipCd: string, countryCd: number, classService: number, trackingNum: string, scac: string, shipperNum: string, pickupDay: number, shipID: string, numberOfPackages: number, packageNumber: number, pkgWeight: number, validateAddr: boolean, destAddr: string, destCity: string, destState: string): this;
}

declare const enum USBClassType {

	Unset = 998,

	Unknown = 999,

	CDC = 0,

	Printer = 1,

	PrinterCDC = 2,

	PrinterCDC_IAD_Obsolete = 3,

	DEX = 4
}

declare const enum USBModeValue {

	Printer = 0,

	CDC = 1,

	CompositeCP = 2,

	MassStorage = 3,

	CompositeCPM = 4,

	Unknown = 999
}

declare const enum UnitMeasureValue {

	Metric = 77,

	Inch = 73,

	Unknown = 999
}

declare const enum UpdateMode {

	Unset = 998,

	Unknown = 999,

	None = 110,

	Interval = 105,

	Startup = 115,

	Both = 98
}

declare const enum UpdateModeValue {

	Unknown = 999,

	None = 110,

	StartUp = 115,

	Interval = 105,

	StartUpInterval = 98
}

declare class UpgradeData extends PrinterState {

	static alloc(): UpgradeData; // inherited from NSObject

	static new(): UpgradeData; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getDataType(): UpgradeDataType;

	getDataType_IsPresent(): boolean;

	getPathAndFile(): string;

	getPathAndFile_IsPresent(): boolean;

	getServerIPAddress(): string;

	getServerIPAddress_IsPresent(): boolean;

	getServerPort(): number;

	getServerPort_IsPresent(): boolean;

	getVersion(): string;

	getVersion_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;

	setDataType(value: UpgradeDataType): number;

	setPathAndFile(value: string): number;

	setServerIPAddress(value: string): number;

	setServerPort(value: number): number;
}

declare const enum UpgradeDataType {

	Unset = 998,

	Unknown = 999,

	None = 0,

	TFTP = 1,

	Disable = 255
}

declare class VersionInformation extends PrinterState {

	static alloc(): VersionInformation; // inherited from NSObject

	static new(): VersionInformation; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getBootVersion(): string;

	getBootVersion_IsPresent(): boolean;

	getBuildTimestamp(): string;

	getBuildTimestamp_IsPresent(): boolean;

	getCommControllerVersion(): string;

	getCommControllerVersion_IsPresent(): boolean;

	getDownloadVersion(): string;

	getDownloadVersion_IsPresent(): boolean;

	getFirmwareVersion(): string;

	getFirmwareVersion_IsPresent(): boolean;

	getHardwareControllerVersion(): string;

	getHardwareControllerVersion_IsPresent(): boolean;

	getSCRVersion(): string;

	getSCRVersion_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare class VersionInformation_ExPCL extends PrinterState_ExPCL {

	static alloc(): VersionInformation_ExPCL; // inherited from NSObject

	static new(): VersionInformation_ExPCL; // inherited from NSObject

	constructor(o: { connection: ConnectionBase; });

	getFirmwareVersion(): string;

	getFirmwareVersion_IsPresent(): boolean;

	getHardwareControllerVersion(): string;

	getHardwareControllerVersion_IsPresent(): boolean;

	initWithConnection(conn: ConnectionBase): this;
}

declare const enum WEPAuthenticationMethodValue {

	Open = 0,

	WEP40_SharedKey = 5,

	WEP128_SharedKey = 13,

	Unknown = 999
}

declare const enum WEPKeySelectedValue {

	Unset = 998,

	Unknown = 999,

	Key1 = 1,

	Key2 = 2,

	Key3 = 3,

	Key4 = 4
}

declare const enum WEPKeySelectedValues {

	Unset = 998,

	Unknown = 999,

	Key1 = 1,

	Key2 = 2,

	Key3 = 3,

	Key4 = 4
}

declare const enum WiFiModuleValue {

	Unknown = 0,

	DPAC1 = 1,

	Silex = 2,

	DPAC2 = 3,

	DO1 = 4,

	General = 5
}

declare const enum WirelessUpgradeTypeValue {

	Unknown = 999,

	TFTP = 1,

	AvalancheWavelink = 2,

	MSP = 3,

	FTP = 4,

	AirWatch = 5,

	FTPS = 6,

	Disable = 255
}
