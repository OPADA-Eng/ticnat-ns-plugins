
declare class SKTAppInfo extends NSObject {

	static alloc(): SKTAppInfo; // inherited from NSObject

	static new(): SKTAppInfo; // inherited from NSObject

	AppID: string;

	AppKey: string;

	DeveloperID: string;

	mainBundle: NSBundle;

	verifyWithBundleId(bundleId: string): boolean;
}

declare class SKTCapture extends NSObject {

	static alloc(): SKTCapture; // inherited from NSObject

	static canConnectToBarcodeScannersWithBundle(bundle: NSBundle): boolean;

	static new(): SKTCapture; // inherited from NSObject

	readonly guid: string;

	constructor(o: { delegate: SKTCaptureDelegate; });

	closeWithCompletionHandler(block: (p1: SKTCaptureErrors) => void): void;

	didReceiveEventWithHandleWithResult(event: SKTCaptureEvent, handle: interop.Pointer | interop.Reference<any>, result: SKTCaptureErrors): void;

	getPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;

	initWithDelegate(delegate: SKTCaptureDelegate): this;

	openDeviceWithGuidCompletionHandler(guid: string, block: (p1: SKTCaptureErrors, p2: SKTCapture) => void): void;

	openWithAppInfoCompletionHandler(appInfo: SKTAppInfo, block: (p1: SKTCaptureErrors) => void): void;

	setDelegate(delegate: SKTCaptureDelegate): void;

	setPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;
}

declare const enum SKTCaptureButtonsState {

	None = 0,

	Left = 1,

	Right = 2,

	Middle = 4,

	Power = 8,

	RingDetach = 16
}

declare const enum SKTCaptureConnectBeepConfig {

	NoBeep = 0,

	Beep = 1
}

declare const enum SKTCaptureConnectReason {

	Unknown = 0,

	PowerOn = 1,

	Barcode = 2,

	UserAction = 3,

	HostChange = 4,

	Retry = 5
}

declare const enum SKTCaptureDataConfirmation {

	ModeOff = 0,

	ModeDevice = 1,

	ModeCapture = 2,

	ModeApp = 3
}

declare const enum SKTCaptureDataConfirmationBeep {

	None = 0,

	Good = 1,

	Bad = 2
}

declare const enum SKTCaptureDataConfirmationLed {

	None = 0,

	Green = 1,

	Red = 2
}

declare const enum SKTCaptureDataConfirmationRumble {

	None = 0,

	Good = 1,

	Bad = 2
}

declare const enum SKTCaptureDataFormat {

	Raw = 0,

	Packet = 1,

	IdOnly = 2,

	TagTypeAndId = 10,

	DataOnly = 4,

	TagTypeAndData = 12
}

declare class SKTCaptureDataSource extends NSObject {

	static alloc(): SKTCaptureDataSource; // inherited from NSObject

	static new(): SKTCaptureDataSource; // inherited from NSObject

	Flags: SKTCaptureDataSourceFlags;

	ID: SKTCaptureDataSourceID;

	Name: string;

	Status: SKTCaptureDataSourceStatus;
}

declare const enum SKTCaptureDataSourceFlags {

	Status = 1,

	Param = 2
}

declare const enum SKTCaptureDataSourceID {

	NotSpecified = 0,

	SymbologyAustraliaPost = 1,

	SymbologyAztec = 2,

	SymbologyBooklandEan = 3,

	SymbologyBritishPost = 4,

	SymbologyCanadaPost = 5,

	SymbologyChinese2of5 = 6,

	SymbologyCodabar = 7,

	SymbologyCodablockA = 8,

	SymbologyCodablockF = 9,

	SymbologyCode11 = 10,

	SymbologyCode39 = 11,

	SymbologyCode39Extended = 12,

	SymbologyCode39Trioptic = 13,

	SymbologyCode93 = 14,

	SymbologyCode128 = 15,

	SymbologyDataMatrix = 16,

	SymbologyDutchPost = 17,

	SymbologyEan8 = 18,

	SymbologyEan13 = 19,

	SymbologyEan128 = 20,

	SymbologyEan128Irregular = 21,

	SymbologyEanUccCompositeAB = 22,

	SymbologyEanUccCompositeC = 23,

	SymbologyGs1Databar = 24,

	SymbologyGs1DatabarLimited = 25,

	SymbologyGs1DatabarExpanded = 26,

	SymbologyInterleaved2of5 = 27,

	SymbologyIsbt128 = 28,

	SymbologyJapanPost = 29,

	SymbologyMatrix2of5 = 30,

	SymbologyMaxicode = 31,

	SymbologyMsi = 32,

	SymbologyPdf417 = 33,

	SymbologyPdf417Micro = 34,

	SymbologyPlanet = 35,

	SymbologyPlessey = 36,

	SymbologyPostnet = 37,

	SymbologyQRCode = 38,

	SymbologyStandard2of5 = 39,

	SymbologyTelepen = 40,

	SymbologyTlc39 = 41,

	SymbologyUpcA = 42,

	SymbologyUpcE0 = 43,

	SymbologyUpcE1 = 44,

	SymbologyUspsIntelligentMail = 45,

	SymbologyDirectPartMarking = 46,

	SymbologyHanXin = 47,

	SymbologyDotCode = 48,

	LastSymbologyID = 49,

	TagTypeISO14443TypeA = 256,

	TagTypeISO14443TypeB = 257,

	TagTypeFelica = 258,

	TagTypeISO15693 = 259,

	TagTypeNXPICODE1 = 260,

	TagTypeInsideSecurePicoTag = 261,

	TagTypeInnovisionTopazJewel = 262,

	TagTypeThinfilmNFCBarcode = 263,

	TagTypeSTMicroElectronicsSR = 264,

	TagTypeASKCTS256BOrCTS512B = 265,

	TagTypeNFCForum = 266,

	TagTypeInnovatronRadioProtocol = 267,

	TagTypeLastTagType = 268
}

declare const enum SKTCaptureDataSourceStatus {

	Disable = 0,

	Enable = 1,

	NotSupported = 2
}

declare class SKTCaptureDecodedData extends NSObject {

	static alloc(): SKTCaptureDecodedData; // inherited from NSObject

	static new(): SKTCaptureDecodedData; // inherited from NSObject

	DataSourceID: SKTCaptureDataSourceID;

	DataSourceName: string;

	DecodedData: NSData;

	stringFromDecodedData(): string;
}

interface SKTCaptureDelegate extends NSObjectProtocol {

	didReceiveEventForCaptureWithResult(event: SKTCaptureEvent, capture: SKTCapture, result: SKTCaptureErrors): void;
}
declare var SKTCaptureDelegate: {

	prototype: SKTCaptureDelegate;
};

declare const enum SKTCaptureDeletePairing {

	Current = 0,

	All = 1
}

declare const enum SKTCaptureDeviceDataAcknowledgment {

	Off = 0,

	On = 1
}

declare class SKTCaptureDeviceInfo extends NSObject {

	static alloc(): SKTCaptureDeviceInfo; // inherited from NSObject

	static new(): SKTCaptureDeviceInfo; // inherited from NSObject

	DeviceType: SKTCaptureDeviceType;

	Guid: string;

	Handle: interop.Pointer | interop.Reference<any>;

	Name: string;
}

declare const enum SKTCaptureDeviceType {

	None = 0,

	Scanner7 = 196609,

	Scanner7x = 196610,

	Scanner7xi = 196612,

	Scanner9 = 196611,

	SoftScan = 5,

	ScannerS800 = 196614,

	ScannerS850 = 196615,

	ScannerS840 = 196616,

	ScannerD700 = 196617,

	ScannerD730 = 196618,

	ScannerD740 = 196619,

	ScannerD750 = 196620,

	ScannerD760 = 196621,

	ScannerS700 = 196622,

	ScannerS730 = 196623,

	ScannerS740 = 196624,

	ScannerS750 = 196625,

	ScannerS760 = 196626,

	ScannerS860 = 196627,

	ScannerD790 = 196628,

	ScannerD600 = 327701,

	ScannerS550 = 327702,

	BtUnknown = 196631,

	DeviceManagerBle = 17104896
}

declare const enum SKTCaptureDeviceTypeClasses {

	DeviceClass = 0,

	DeviceManagerClass = 1
}

declare const enum SKTCaptureDeviceTypeInterfaces {

	None = 0,

	SD = 1,

	CF = 2,

	Bluetooth = 3,

	Serial = 4,

	Ble = 5
}

declare const enum SKTCaptureDisconnect {

	StartProfile = 0,

	DisableRadio = 1
}

declare const enum SKTCaptureErrors {

	E_WAITTIMEOUT = 1,

	E_ALREADYDONE = 2,

	E_PENDING = 3,

	E_STILLPENDING = 4,

	E_CREATED = 5,

	E_NOERROR = 0,

	E_TESTFAILED = -1,

	E_NOTENOUGHMEMORY = -2,

	E_UNABLECREATELOCK = -3,

	E_UNABLELOCK = -4,

	E_UNABLEUNLOCK = -5,

	E_LISTEMPTY = -6,

	E_UNABLECREATEEVENT = -7,

	E_UNABLESETEVENT = -8,

	E_UNABLERESETEVENT = -9,

	E_EVENTNOTCREATED = -10,

	E_INVALIDHANDLE = -11,

	E_UNABLECREATETHREAD = -12,

	E_THREADALREADYCREATED = -13,

	E_THREADSTILLRUNNING = -14,

	E_NOTSUPPORTED = -15,

	E_PENDINGOPERATIONNOTCOMPLETED = -16,

	E_NOTFOUND = -17,

	E_INVALIDPARAMETER = -18,

	E_NOTINITIALIZED = -19,

	E_TIMEOUTOUTOFRANGE = -20,

	E_UNABLEINITIALIZE = -21,

	E_UNABLEDEINITIALIZE = -22,

	E_UNKNOWNCONFIGURATION = -23,

	E_INVALIDCONFIGURATION = -24,

	E_ALREADYEXISTING = -25,

	E_BUFFERTOOSMALL = -26,

	E_UNABLEOPENDEVICE = -27,

	E_UNABLECONFIGUREDEVICE = -28,

	E_UNABLECONVERTSTRING = -29,

	E_UNABLECOPYSTRING = -30,

	E_DEVICENOTOPEN = -31,

	E_NOTAVAILABLE = -32,

	E_UNABLEWRITEFILE = -33,

	E_UNABLEREADFILE = -34,

	E_WAITFAILED = -35,

	E_INVALIDCHECKSUM = -36,

	E_COMMANDDENIED = -37,

	E_COMMUNICATIONERROR = -38,

	E_RECEIVEUNEXPECTEDCOMMAND = -39,

	E_UNABLECREATEGUID = -40,

	E_INVALIDVALUE = -41,

	E_REQUESTTIMEDOUT = -42,

	E_INVALIDOPERATION = -43,

	E_WRONGPROTOCOL = -44,

	E_QUEUERESETED = -45,

	E_EXCEEDINGMTUSIZE = -46,

	E_NOTHINGTOLISTEN = -47,

	E_OUTDATEDVERSION = -48,

	E_INVALIDXMLTAG = -49,

	E_UNABLEREGISTERFORHIDCHANGES = -50,

	E_UNABLERETRIEVEMESSAGE = -51,

	E_SYNTAXERROR = -52,

	E_UNABLEOPENFILE = -53,

	E_UNABLERETRIEVEPATH = -54,

	E_UNABLECREATEDIRECTORY = -55,

	E_UNABLEDELETEFILE = -56,

	E_UNABLEDELETEDIRECTORY = -57,

	E_UNABLEREADMODEMSTATUS = -60,

	E_UNABLEGETCLASSDEVICES = -61,

	E_UNABLEGETDEVICEINTERFACE = -62,

	E_FILENOTFOUND = -63,

	E_FILEACCESSDENIED = -64,

	E_UNABLEREADHIDINFO = -70,

	E_CONFLICTPROFILE = -80,

	E_DELETECURRENTPROFILE = -81,

	E_UNABLEINITIALIZEDATAEDITING = -82,

	E_UNKNOWNDATAEDITINGOPERATION = -83,

	E_INCORRECTNUMBEROFPARAMETERS = -84,

	E_INVALIDFORMAT = -85,

	E_INVALIDVERSION = -86,

	E_SERVICENOTCOMMUNICATING = -87,

	E_OVERLAYVIEWNOTSET = -90,

	E_CANCEL = -91,

	E_EXPIRED = -92,

	E_INVALIDAPPINFO = -93
}

declare class SKTCaptureEvent extends NSObject {

	static alloc(): SKTCaptureEvent; // inherited from NSObject

	static new(): SKTCaptureEvent; // inherited from NSObject

	Data: SKTCaptureEventData;

	ID: SKTCaptureEventID;
}

declare class SKTCaptureEventData extends NSObject {

	static alloc(): SKTCaptureEventData; // inherited from NSObject

	static new(): SKTCaptureEventData; // inherited from NSObject

	ArrayValue: NSData;

	ByteValue: number;

	DecodedData: SKTCaptureDecodedData;

	DeviceInfo: SKTCaptureDeviceInfo;

	StringValue: string;

	Type: SKTCaptureEventDataType;

	ULongValue: number;
}

declare const enum SKTCaptureEventDataType {

	None = 0,

	Byte = 1,

	Ulong = 2,

	Array = 3,

	String = 4,

	DecodedData = 5,

	DeviceInfo = 6,

	LastID = 7
}

declare const enum SKTCaptureEventID {

	NotInitialized = 0,

	DeviceArrival = 1,

	DeviceRemoval = 2,

	Terminate = 3,

	Error = 4,

	DecodedData = 5,

	Power = 6,

	Buttons = 7,

	BatteryLevel = 8,

	ListenerStarted = 9,

	DeviceOwnership = 10,

	DeviceManagerArrival = 11,

	DeviceManagerRemoval = 12,

	DeviceDiscovered = 13,

	DiscoveryEnd = 14,

	LastID = 15
}

declare const enum SKTCaptureFlash {

	Off = 0,

	On = 1
}

declare class SKTCaptureHelper extends NSObject {

	static alloc(): SKTCaptureHelper; // inherited from NSObject

	static new(): SKTCaptureHelper; // inherited from NSObject

	static sharedInstance(): SKTCaptureHelper;

	closeWithCompletionHandler(block: (p1: SKTCaptureErrors) => void): void;

	getConfirmationModeWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureDataConfirmation) => void): void;

	getDevicesList(): NSArray<any>;

	getDispatchQueue(): NSObject;

	getPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;

	getSoftScanStatusWithConfirmationHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureSoftScan) => void): void;

	getVersionWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureVersion) => void): void;

	openWithAppInfoCompletionHandler(appInfo: SKTAppInfo, block: (p1: SKTCaptureErrors) => void): void;

	popDelegate(delegate: SKTCaptureHelperDelegate): boolean;

	pushDelegate(delegate: SKTCaptureHelperDelegate): boolean;

	setConfirmationModeCompletionHandler(confirmationMode: SKTCaptureDataConfirmation, block: (p1: SKTCaptureErrors) => void): void;

	setDispatchQueue(queue: NSObject): void;

	setPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;

	setSoftScanStatusCompletionHandler(status: SKTCaptureSoftScan, block: (p1: SKTCaptureErrors) => void): void;
}

interface SKTCaptureHelperDelegate extends NSObjectProtocol {

	didChangeBatteryLevelForDeviceWithResult?(batteryPercentage: number, device: SKTCaptureHelperDevice, result: SKTCaptureErrors): void;

	didChangeButtonsStateForDevice?(buttonsState: SKTCaptureButtonsState, device: SKTCaptureHelperDevice): void;

	didChangePowerStateForDevice?(powerState: SKTCapturePowerState, device: SKTCaptureHelperDevice): void;

	didDiscoverDeviceFromDeviceManager?(device: string, deviceManager: SKTCaptureHelperDeviceManager): void;

	didDiscoveryEndWithResultFromDeviceManager?(result: SKTCaptureErrors, deviceManager: SKTCaptureHelperDeviceManager): void;

	didNotifyArrivalForDeviceManagerWithResult?(deviceManager: SKTCaptureHelperDeviceManager, result: SKTCaptureErrors): void;

	didNotifyArrivalForDeviceWithResult?(device: SKTCaptureHelperDevice, result: SKTCaptureErrors): void;

	didNotifyRemovalForDeviceManagerWithResult?(deviceManager: SKTCaptureHelperDeviceManager, result: SKTCaptureErrors): void;

	didNotifyRemovalForDeviceWithResult?(device: SKTCaptureHelperDevice, result: SKTCaptureErrors): void;

	didReceiveDecodedDataFromDeviceWithResult?(decodedData: SKTCaptureDecodedData, device: SKTCaptureHelperDevice, result: SKTCaptureErrors): void;

	didReceiveErrorWithMessage?(error: SKTCaptureErrors, message: string): void;

	didTerminateWithResult?(result: SKTCaptureErrors): void;

	listenerDidStart?(): void;
}
declare var SKTCaptureHelperDelegate: {

	prototype: SKTCaptureHelperDelegate;
};

declare class SKTCaptureHelperDevice extends NSObject {

	static alloc(): SKTCaptureHelperDevice; // inherited from NSObject

	static new(): SKTCaptureHelperDevice; // inherited from NSObject

	batteryLevel: string;

	readonly deviceType: SKTCaptureDeviceType;

	readonly friendlyName: string;

	readonly guid: string;

	constructor(o: { deviceInfo: SKTCaptureDeviceInfo; });

	getBatteryLevelWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: number) => void): void;

	getBluetoothAddressWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: NSArray<any>) => void): void;

	getButtonsStateWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureButtonsState) => void): void;

	getDataAcknowledgmentWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureDeviceDataAcknowledgment) => void): void;

	getDataFormatWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureDataFormat) => void): void;

	getDataSourceInfoCompletionHandler(dataSourceId: SKTCaptureDataSourceID, block: (p1: SKTCaptureErrors, p2: SKTCaptureDataSource) => void): void;

	getDecodeActionWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureLocalDecodeAction) => void): void;

	getDeviceSpecificCommandCompletionHandler(command: NSData, block: (p1: SKTCaptureErrors, p2: NSData) => void): void;

	getDispatchQueue(): NSObject;

	getFirmwareVersionWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureVersion) => void): void;

	getFriendlyNameWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: string) => void): void;

	getNotificationsWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureNotifications) => void): void;

	getPostambleWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: string) => void): void;

	getPowerStateWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCapturePowerState) => void): void;

	getPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;

	getStandConfigWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureStandConfig) => void): void;

	getTypeWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: SKTCaptureDeviceType) => void): void;

	initWithDeviceInfo(deviceInfo: SKTCaptureDeviceInfo): this;

	setDataAcknowledgmentCompletionHandler(dataAcknowledgment: SKTCaptureDeviceDataAcknowledgment, block: (p1: SKTCaptureErrors) => void): void;

	setDataConfirmationWithLedWithBeepWithRumbleCompletionHandler(led: SKTCaptureDataConfirmationLed, beep: SKTCaptureDataConfirmationBeep, rumble: SKTCaptureDataConfirmationRumble, block: (p1: SKTCaptureErrors) => void): void;

	setDataFormatCompletionHandler(dataFormat: SKTCaptureDataFormat, block: (p1: SKTCaptureErrors) => void): void;

	setDataSourceInfoCompletionHandler(dataSource: SKTCaptureDataSource, block: (p1: SKTCaptureErrors) => void): void;

	setDecodeActionCompletionHandler(decodeAction: SKTCaptureLocalDecodeAction, block: (p1: SKTCaptureErrors) => void): void;

	setDispatchQueue(queue: NSObject): void;

	setFriendlyNameCompletionHandler(name: string, block: (p1: SKTCaptureErrors) => void): void;

	setNotificationsCompletionHandler(notifications: SKTCaptureNotifications, block: (p1: SKTCaptureErrors) => void): void;

	setOverlayViewCompletionHandler(overlay: NSDictionary<any, any>, block: (p1: SKTCaptureErrors) => void): void;

	setPostambleCompletionHandler(postamble: string, block: (p1: SKTCaptureErrors) => void): void;

	setPropertyCompletionHandler(property: SKTCaptureProperty, block: (p1: SKTCaptureErrors, p2: SKTCaptureProperty) => void): void;

	setStandConfigCompletionHandler(config: SKTCaptureStandConfig, block: (p1: SKTCaptureErrors) => void): void;

	setTriggerCompletionHandler(trigger: SKTCaptureTrigger, block: (p1: SKTCaptureErrors) => void): void;
}

declare class SKTCaptureHelperDeviceManager extends SKTCaptureHelperDevice {

	static alloc(): SKTCaptureHelperDeviceManager; // inherited from NSObject

	static new(): SKTCaptureHelperDeviceManager; // inherited from NSObject

	getDeviceUniqueIdentifierFromDeviceGuidCompletionHandler(deviceGuid: string, block: (p1: SKTCaptureErrors, p2: string) => void): void;

	getFavoriteDevicesWithCompletionHandler(block: (p1: SKTCaptureErrors, p2: string) => void): void;

	setFavoriteDevicesCompletionHandler(favorites: string, block: (p1: SKTCaptureErrors) => void): void;

	startDiscoveryWithTimeoutCompletionHandler(timeInSeconds: number, block: (p1: SKTCaptureErrors) => void): void;
}

declare const enum SKTCaptureLocalDecodeAction {

	None = 0,

	Beep = 1,

	Flash = 2,

	Rumble = 4
}

declare const enum SKTCaptureNotifications {

	None = 0,

	ScanButtonPress = 1,

	ScanButtonRelease = 2,

	PowerButtonPress = 4,

	PowerButtonRelease = 8,

	PowerState = 16,

	BatteryLevelChange = 32
}

declare var SKTCaptureObjCVersionNumber: number;

declare var SKTCaptureObjCVersionString: interop.Reference<number>;

declare const enum SKTCapturePowerState {

	Unknown = 0,

	OnBattery = 1,

	OnCradle = 2,

	OnAc = 4
}

declare const enum SKTCaptureProfileConfig {

	None = 0,

	Acceptor = 1,

	Initiator = 2
}

declare const enum SKTCaptureProfileSelect {

	None = 0,

	Spp = 1,

	Hid = 2
}

declare class SKTCaptureProperty extends NSObject {

	static alloc(): SKTCaptureProperty; // inherited from NSObject

	static new(): SKTCaptureProperty; // inherited from NSObject

	ArrayValue: NSData;

	ByteValue: number;

	Context: interop.Pointer | interop.Reference<any>;

	DataSource: SKTCaptureDataSource;

	ID: SKTCapturePropertyID;

	Object: NSObject;

	StringValue: string;

	Type: SKTCapturePropertyType;

	ULongValue: number;

	Version: SKTCaptureVersion;
}

declare const enum SKTCapturePropertyID {

	Abort = -2146435072,

	Version = -2147418111,

	InterfaceVersion = -2147418112,

	Configuration = -2141913085,

	DataConfirmationMode = -2147352572,

	DataConfirmationAction = -2147287035,

	MonitorMode = -2145124346,

	SoftScanStatus = -2147352569,

	VersionDevice = 65536,

	DeviceType = 65538,

	DeviceSpecific = 4456451,

	DataSourceDevice = 7798788,

	TriggerDevice = 1179653,

	ApplyConfigDevice = 1048582,

	PreambleDevice = 327687,

	PostambleDevice = 327688,

	CapabilitiesDevice = 2162697,

	ChangeIdDevice = 65546,

	DataFormatDevice = 131083,

	FriendlyNameDevice = 327936,

	SecurityModeDevice = 131329,

	PinCodeDevice = 1376514,

	DeletePairingBondingDevice = 1179907,

	RestoreFactoryDefaultsDevice = 1048836,

	SetPowerOffDevice = 1048837,

	ButtonsStatusDevice = 65798,

	SoundConfigDevice = 2359559,

	TimersDevice = 262408,

	LocalAcknowledgmentDevice = 131337,

	DataConfirmationDevice = 1245450,

	BatteryLevelDevice = 65803,

	LocalDecodeActionDevice = 131340,

	BluetoothAddressDevice = 65805,

	StatisticCountersDevice = 65806,

	RumbleConfigDevice = 2359567,

	ProfileConfigDevice = 262416,

	DisconnectDevice = 1179921,

	DataStoreDevice = 4456722,

	NotificationsDevice = 196883,

	ConnectReasonDevice = 65812,

	PowerStateDevice = 65813,

	StartUpRoleSPPDevice = 131350,

	ConnectionBeepConfigDevice = 131351,

	FlashDevice = 131352,

	OverlayViewDevice = 590105,

	StandConfigDevice = 196890,

	StartDiscovery = 1245696,

	Favorite = 328193,

	UniqueDeviceIdentifier = 5308930
}

declare const enum SKTCapturePropertyType {

	None = 0,

	NotApplicable = 1,

	Byte = 2,

	Ulong = 3,

	Array = 4,

	String = 5,

	Version = 6,

	DataSource = 7,

	Enum = 8,

	Object = 9,

	LastType = 10
}

declare const enum SKTCaptureRumbleActionType {

	GoodScan = 0,

	GoodScanLocal = 1,

	BadScan = 2,

	BadScanLocal = 3
}

declare const enum SKTCaptureSecurityMode {

	None = 0,

	Authentication = 1,

	AuthenticationEncryption = 2
}

declare const enum SKTCaptureSoftScan {

	Enable = 0,

	Disable = 1,

	NotSupported = 2,

	Supported = 3
}

declare var SKTCaptureSoftScanBackgroundColor: string;

declare var SKTCaptureSoftScanCamera: string;

declare var SKTCaptureSoftScanCancelButton: string;

declare var SKTCaptureSoftScanContext: string;

declare var SKTCaptureSoftScanDirectionText: string;

declare var SKTCaptureSoftScanFlashButton: string;

declare var SKTCaptureSoftScanFlashButtonId: string;

declare var SKTCaptureSoftScanLayoutId: string;

declare var SKTCaptureSoftScanTextColor: string;

declare var SKTCaptureSoftScanViewFinderId: string;

declare const enum SKTCaptureSoundActionType {

	GoodScan = 0,

	GoodScanLocal = 1,

	BadScan = 2,

	BadScanLocal = 3
}

declare const enum SKTCaptureSoundFrequency {

	None = 0,

	Low = 1,

	Medium = 2,

	High = 3,

	Last = 4
}

declare const enum SKTCaptureStandConfig {

	MobileMode = 0,

	KioskMode = 1,

	DetectMode = 2,

	AutoMode = 3
}

declare const enum SKTCaptureStartUpRole {

	SPPAcceptor = 0,

	SPPLastRole = 1
}

declare const enum SKTCaptureStatisticCounters {

	CounterSkip = 0,

	CounterUnknown = 1,

	CounterConnect = 2,

	CounterDisconnect = 3,

	CounterUnbond = 4,

	CounterFactoryReset = 5,

	CounterScans = 6,

	CounterScanButtonUp = 7,

	CounterScanButtonDown = 8,

	CounterPowerButtonUp = 9,

	CounterPowerButtonDown = 10,

	CounterPowerOnACTimeInMinutes = 11,

	CounterPowerOnBatTimeInMinutes = 12,

	CounterRfcommSend = 13,

	CounterRfcommReceive = 14,

	CounterRfcommReceiveDiscarded = 15,

	CounterUartSend = 16,

	CounterUartReceive = 17,

	CounterUartReceiveDiscarded = 18,

	CounterButtonLeftPress = 19,

	CounterButtonLeftRelease = 20,

	CounterButtonRightPress = 21,

	CounterButtonRightRelease = 22,

	CounterRingUnitDetachEvents = 23,

	CounterRingUnitAttachEvents = 24,

	CounterDecodedBytes = 25,

	CounterAbnormalShutDowns = 26,

	CounterBatteryChargeCycles = 27,

	CounterBatteryChangeCount = 28,

	CounterPowerOn = 29,

	CounterPowerOff = 30,

	CounterStandModeChange = 31,

	CounterLast = 32
}

declare const enum SKTCaptureTimer {

	TriggerAutoLockTimeout = 1,

	PowerOffDisconnected = 2,

	PowerOffConnected = 4
}

declare const enum SKTCaptureTrigger {

	Start = 1,

	Stop = 2,

	Enable = 3,

	Disable = 4,

	ContinuousScan = 5
}

declare class SKTCaptureVersion extends NSObject {

	static alloc(): SKTCaptureVersion; // inherited from NSObject

	static new(): SKTCaptureVersion; // inherited from NSObject

	Build: number;

	Day: number;

	Hour: number;

	Major: number;

	Middle: number;

	Minor: number;

	Minute: number;

	Month: number;

	Year: number;
}

declare class SKTHelper extends NSObject {

	static IsRingDetachedFromButtonsStatus(buttonsStatus: number): number;

	static alloc(): SKTHelper; // inherited from NSObject

	static detachRing(detached: number): number;

	static getCurrentLevelFromBatteryLevel(batteryLevel: number): number;

	static getDataComfirmationWithReserveWithRumbleWithBeepWithLed(reserved: number, rumble: number, beep: number, led: number): number;

	static getMaximumLevelFromBatteryLevel(batteryLevel: number): number;

	static getMinimumLevelFromBatteryLevel(batteryLevel: number): number;

	static getPowerStateFromPower(powerStatus: number): number;

	static isCaptureFromPropertyId(propId: number): number;

	static isLeftPressedFromButtonsStatus(buttonsStatus: number): number;

	static isMiddlePressedFromButtonsStatus(buttonsStatus: number): number;

	static isPowerPressedFromButtonsStatus(buttonsStatus: number): number;

	static isRightPressedFromButtonsStatus(buttonsStatus: number): number;

	static new(): SKTHelper; // inherited from NSObject

	static pressLeftButton(pressed: number): number;

	static pressMiddleButton(pressed: number): number;

	static pressPowerButton(pressed: number): number;

	static pressRightButton(pressed: number): number;

	static retrieveBeepFromDataConfirmation(dataConfirmation: number): number;

	static retrieveGetTypeFromPropertyId(propId: number): number;

	static retrieveGroupIdFromPropertyId(propId: number): number;

	static retrieveIdFromPropertId(propId: number): number;

	static retrieveLedFromDataConfirmation(dataConfirmation: number): number;

	static retrieveRumbleFromDataConfirmation(dataConfirmation: number): number;

	static retrieveSetTypeFromPropertyId(propId: number): number;

	static setCurLevelForBatteryLevel(curLevel: number): number;

	static setMaxLevelForBatteryLevel(maxLevel: number): number;

	static setMinLevelForBatteryLevel(minLevel: number): number;

	static setPowerState(powerState: number): number;
}
