declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class CaptureClient implements com.socketmobile.capture.rpc.RpcClient.Listener, com.socketmobile.capture.client.DeviceClient.StateListener {
					public static class: java.lang.Class<com.socketmobile.capture.client.CaptureClient>;
					public onNotification(param0: com.socketmobile.capture.Notification): void;
					public newDefaultRpcClient(): com.socketmobile.capture.rpc.RpcClient;
					public onDeviceStateChange(param0: com.socketmobile.capture.client.DeviceClient, param1: com.socketmobile.capture.client.DeviceState): void;
					public isConnected(): boolean;
					public connect(param0: com.socketmobile.capture.client.ConnectionCallback): void;
					public constructor(param0: com.socketmobile.capture.client.Configuration);
					public onDisconnected(): void;
					public constructor(param0: com.socketmobile.capture.AppKey);
					public connect(param0: number, param1: com.socketmobile.capture.client.ConnectionCallback): void;
					public setListener(param0: com.socketmobile.capture.client.CaptureClient.Listener): void;
					public onConnected(): void;
					public isUsingEmbeddedCapture(): boolean;
					public getDevices(): java.util.Collection<com.socketmobile.capture.client.DeviceClient>;
					public disconnect(): void;
					public onError(param0: com.socketmobile.capture.jrpc.RpcError): void;
					public onConnectionFailure(param0: com.socketmobile.capture.jrpc.RpcError): void;
				}
				export module CaptureClient {
					export class Listener {
						public static class: java.lang.Class<com.socketmobile.capture.client.CaptureClient.Listener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.CaptureClient$Listener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onDeviceStateEvent(param0: com.socketmobile.capture.client.DeviceStateEvent): void;
							onData(param0: com.socketmobile.capture.client.DataEvent): void;
							onError(param0: com.socketmobile.capture.CaptureError): void;
						});
						public constructor();
						public onDeviceStateEvent(param0: com.socketmobile.capture.client.DeviceStateEvent): void;
						public onData(param0: com.socketmobile.capture.client.DataEvent): void;
						public onError(param0: com.socketmobile.capture.CaptureError): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class Configuration {
					public static class: java.lang.Class<com.socketmobile.capture.client.Configuration>;
					public enableLogging(param0: java.util.logging.Level): com.socketmobile.capture.client.Configuration;
					public constructor();
					public setContext(param0: any): com.socketmobile.capture.client.Configuration;
					public appKey(param0: com.socketmobile.capture.AppKey): com.socketmobile.capture.client.Configuration;
				}
				export module Configuration {
					export class Final {
						public static class: java.lang.Class<com.socketmobile.capture.client.Configuration.Final>;
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class ConnectionCallback {
					public static class: java.lang.Class<com.socketmobile.capture.client.ConnectionCallback>;
					/**
					 * Constructs a new instance of the com.socketmobile.capture.client.ConnectionCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {
						onConnectionStateChanged(param0: com.socketmobile.capture.client.ConnectionState): void;
					});
					public constructor();
					public onConnectionStateChanged(param0: com.socketmobile.capture.client.ConnectionState): void;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class ConnectionState {
					public static class: java.lang.Class<com.socketmobile.capture.client.ConnectionState>;
					public static DISCONNECTED: number;
					public static DISCONNECTING: number;
					public static CONNECTING: number;
					public static CONNECTED: number;
					public static READY: number;
					public isReady(): boolean;
					public intValue(): number;
					public transitionTo(param0: number): com.socketmobile.capture.client.ConnectionState;
					public isConnected(): boolean;
					public constructor();
					public isDisconnecting(): boolean;
					public transitionTo(param0: number, param1: com.socketmobile.capture.CaptureError): com.socketmobile.capture.client.ConnectionState;
					public isDisconnected(): boolean;
					public copyWith(param0: com.socketmobile.capture.CaptureError): com.socketmobile.capture.client.ConnectionState;
					public hasError(): boolean;
					public getError(): com.socketmobile.capture.CaptureError;
					public isConnecting(): boolean;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class DataEvent {
					public static class: java.lang.Class<com.socketmobile.capture.client.DataEvent>;
					public getDevice(): com.socketmobile.capture.client.DeviceClient;
					public constructor(param0: com.socketmobile.capture.client.DeviceClient, param1: com.socketmobile.capture.types.DecodedData);
					public getData(): com.socketmobile.capture.types.DecodedData;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class DeviceClient {
					public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient>;
					public static NONE: com.socketmobile.capture.client.DeviceClient;
					public subscribe(param0: com.socketmobile.capture.client.DeviceClient.EventListener): void;
					public sendSpecificCommand(param0: native.Array<number>, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public constructor(param0: com.socketmobile.capture.types.Device, param1: com.socketmobile.capture.rpc.RpcClient, param2: com.socketmobile.capture.client.DeviceClient.StateListener);
					public triggerFeedback(param0: number): void;
					public acceptData(): void;
					public getDeviceGuid(): string;
					public trigger(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public disableLocalAcknowledgment(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public getProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public enableDataSource(param0: number, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public rejectData(): void;
					public close(): void;
					public disableDataSource(param0: number, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public getBatteryLevel(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public getPowerState(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public setProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public open(): void;
					public getFirmwareVersion(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public enableLocalAcknowledgment(param0: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
					public getDataSourceStatus(param0: number, param1: com.socketmobile.capture.client.callbacks.PropertyCallback): void;
				}
				export module DeviceClient {
					export class BatteryLevelListener extends com.socketmobile.capture.client.DeviceClient.EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.BatteryLevelListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$BatteryLevelListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onBatteryLevelChanged(param0: number): void;
						});
						public constructor();
						public onBatteryLevelChanged(param0: number): void;
					}
					export class ButtonEvent {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.ButtonEvent>;
						public static UP: number;
						public static DOWN: number;
						public static TRIGGER: number;
						public static POWER: number;
						public toString(): string;
					}
					export abstract class ButtonListener extends com.socketmobile.capture.client.DeviceClient.ButtonStateListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.ButtonListener>;
						public constructor();
						public onButton(param0: number): void;
						public onButtonEvent(param0: com.socketmobile.capture.client.DeviceClient.ButtonEvent): void;
					}
					export class ButtonStateListener implements com.socketmobile.capture.client.DeviceClient.PowerButtonListener, com.socketmobile.capture.client.DeviceClient.TriggerButtonListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.ButtonStateListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$ButtonStateListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onButton(param0: number): void;
						});
						public constructor();
						public onButton(param0: number): void;
					}
					export class DataListener extends com.socketmobile.capture.client.DeviceClient.EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.DataListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$DataListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onData(param0: com.socketmobile.capture.types.DecodedData): void;
						});
						public constructor();
						public onData(param0: com.socketmobile.capture.types.DecodedData): void;
					}
					export class EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.EventListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$EventListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
						});
						public constructor();
					}
					export abstract class OmniListener extends com.socketmobile.capture.client.DeviceClient.ButtonListener implements com.socketmobile.capture.client.DeviceClient.BatteryLevelListener, com.socketmobile.capture.client.DeviceClient.DataListener, com.socketmobile.capture.client.DeviceClient.PowerStateListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.OmniListener>;
						public constructor();
						public onBatteryLevelChanged(param0: number): void;
						public onData(param0: com.socketmobile.capture.types.DecodedData): void;
						public onPowerStateChanged(param0: number): void;
						public onButton(param0: number): void;
					}
					export class PowerButtonListener extends com.socketmobile.capture.client.DeviceClient.EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.PowerButtonListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$PowerButtonListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
						});
						public constructor();
					}
					export class PowerStateListener extends com.socketmobile.capture.client.DeviceClient.EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.PowerStateListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$PowerStateListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onPowerStateChanged(param0: number): void;
						});
						public constructor();
						public onPowerStateChanged(param0: number): void;
					}
					export class StateListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.StateListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$StateListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onDeviceStateChange(param0: com.socketmobile.capture.client.DeviceClient, param1: com.socketmobile.capture.client.DeviceState): void;
						});
						public constructor();
						public onDeviceStateChange(param0: com.socketmobile.capture.client.DeviceClient, param1: com.socketmobile.capture.client.DeviceState): void;
					}
					export class TriggerButtonListener extends com.socketmobile.capture.client.DeviceClient.EventListener {
						public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClient.TriggerButtonListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.DeviceClient$TriggerButtonListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
						});
						public constructor();
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class DeviceClientList {
					public static class: java.lang.Class<com.socketmobile.capture.client.DeviceClientList>;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class DeviceState {
					public static class: java.lang.Class<com.socketmobile.capture.client.DeviceState>;
					public static GONE: number;
					public static AVAILABLE: number;
					public static OPEN: number;
					public static READY: number;
					public intValue(): number;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class DeviceStateEvent {
					public static class: java.lang.Class<com.socketmobile.capture.client.DeviceStateEvent>;
					public getDevice(): com.socketmobile.capture.client.DeviceClient;
					public constructor(param0: com.socketmobile.capture.client.DeviceClient, param1: com.socketmobile.capture.client.DeviceState);
					public isFrom(param0: com.socketmobile.capture.client.DeviceClient): boolean;
					public getState(): com.socketmobile.capture.client.DeviceState;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class MultiSetCallback extends com.socketmobile.capture.client.callbacks.PropertyCallback {
					public static class: java.lang.Class<com.socketmobile.capture.client.MultiSetCallback>;
					public constructor(param0: number, param1: com.socketmobile.capture.client.callbacks.PropertyCallback);
					public onComplete(param0: com.socketmobile.capture.CaptureError, param1: com.socketmobile.capture.Property): void;
				}
				export module MultiSetCallback {
					export class CompleteParams {
						public static class: java.lang.Class<com.socketmobile.capture.client.MultiSetCallback.CompleteParams>;
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export class PropertyCallbackAdapter {
					public static class: java.lang.Class<com.socketmobile.capture.client.PropertyCallbackAdapter>;
					public onResponse(param0: com.socketmobile.capture.jrpc.RpcResponse): void;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module client {
				export module callbacks {
					export class PropertyCallback {
						public static class: java.lang.Class<com.socketmobile.capture.client.callbacks.PropertyCallback>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.client.callbacks.PropertyCallback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onComplete(param0: com.socketmobile.capture.CaptureError, param1: com.socketmobile.capture.Property): void;
						});
						public constructor();
						public onComplete(param0: com.socketmobile.capture.CaptureError, param1: com.socketmobile.capture.Property): void;
					}
				}
			}
		}
	}
}



declare module com {
	export module socketmobile {
		export module capture {
			export module rpc {
				export abstract class BaseRpcClient implements com.socketmobile.capture.rpc.RpcClient, com.socketmobile.capture.rpc.RpcTransport.Listener {
					public static class: java.lang.Class<com.socketmobile.capture.rpc.BaseRpcClient>;
					public getDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public transportConnectionFailure(): void;
					public closeDevice(param0: number, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public constructor(param0: com.socketmobile.capture.rpc.RpcTransport, param1: com.socketmobile.capture.jrpc.RpcFormatter, param2: com.socketmobile.capture.rpc.RpcClient.Listener);
					public openDevice(param0: string, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public connect(param0: com.socketmobile.capture.AppKey): void;
					public setProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public isConnected(): boolean;
					public getProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public transportReceivedNotification(param0: string): void;
					public setDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public disconnect(): void;
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module rpc {
				export class RpcClient {
					public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcClient>;
					/**
					 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcClient interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {
						connect(param0: com.socketmobile.capture.AppKey): void;
						isConnected(): boolean;
						disconnect(): void;
						getProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						setProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						openDevice(param0: string, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						closeDevice(param0: number, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						getDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						setDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					});
					public constructor();
					public getDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public closeDevice(param0: number, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public openDevice(param0: string, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public connect(param0: com.socketmobile.capture.AppKey): void;
					public isConnected(): boolean;
					public setProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public getProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public setDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					public disconnect(): void;
				}
				export module RpcClient {
					export class Listener {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcClient.Listener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcClient$Listener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onConnected(): void;
							onNotification(param0: com.socketmobile.capture.Notification): void;
							onError(param0: com.socketmobile.capture.jrpc.RpcError): void;
							onDisconnected(): void;
							onConnectionFailure(param0: com.socketmobile.capture.jrpc.RpcError): void;
						});
						public constructor();
						public onDisconnected(): void;
						public onError(param0: com.socketmobile.capture.jrpc.RpcError): void;
						public onNotification(param0: com.socketmobile.capture.Notification): void;
						public onConnected(): void;
						public onConnectionFailure(param0: com.socketmobile.capture.jrpc.RpcError): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module rpc {
				export class RpcTransport {
					public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcTransport>;
					/**
					 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcTransport interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
					 */
					public constructor(implementation: {
						send(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Callback): void;
						subscribe(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Listener): void;
						unsubscribe(): void;
					});
					public constructor();
					public send(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Callback): void;
					public subscribe(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Listener): void;
					public unsubscribe(): void;
				}
				export module RpcTransport {
					export class Callback {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcTransport.Callback>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcTransport$Callback interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							onResponse(param0: string): void;
							onError(): void;
						});
						public constructor();
						public onError(): void;
						public onResponse(param0: string): void;
					}
					export class ConnectionFailureListener {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcTransport.ConnectionFailureListener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcTransport$ConnectionFailureListener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							transportConnectionFailure(): void;
						});
						public constructor();
						public transportConnectionFailure(): void;
					}
					export class Listener extends com.socketmobile.capture.rpc.RpcTransport.ConnectionFailureListener {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.RpcTransport.Listener>;
						/**
						 * Constructs a new instance of the com.socketmobile.capture.rpc.RpcTransport$Listener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
						 */
						public constructor(implementation: {
							transportReceivedNotification(param0: string): void;
							transportConnectionFailure(): void;
						});
						public constructor();
						public transportReceivedNotification(param0: string): void;
						public transportConnectionFailure(): void;
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module rpc {
				export module http {
					export class HttpRpcClient extends com.socketmobile.capture.rpc.BaseRpcClient {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcClient>;
						public disconnect(): void;
						public setDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						public connect(param0: com.socketmobile.capture.AppKey): void;
						public transportReceivedNotification(param0: string): void;
						public setProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						public isConnected(): boolean;
						public closeDevice(param0: number, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						public getDeviceProperty(param0: number, param1: com.socketmobile.capture.Property, param2: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						public getProperty(param0: com.socketmobile.capture.Property, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
						public openDevice(param0: string, param1: com.socketmobile.capture.jrpc.RpcRequest.Callback): void;
					}
					export module HttpRpcClient {
						export class Builder {
							public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcClient.Builder>;
							public constructor();
							public setTransport(param0: com.socketmobile.capture.rpc.http.HttpRpcTransport): com.socketmobile.capture.rpc.http.HttpRpcClient.Builder;
							public setListener(param0: com.socketmobile.capture.rpc.RpcClient.Listener): com.socketmobile.capture.rpc.http.HttpRpcClient.Builder;
							public setFormatter(param0: com.socketmobile.capture.jrpc.RpcFormatter): com.socketmobile.capture.rpc.http.HttpRpcClient.Builder;
							public build(): com.socketmobile.capture.rpc.http.HttpRpcClient;
						}
					}
				}
			}
		}
	}
}

declare module com {
	export module socketmobile {
		export module capture {
			export module rpc {
				export module http {
					export class HttpRpcTransport extends com.socketmobile.capture.rpc.RpcTransport {
						public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport>;
						public send(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Callback): void;
						public subscribe(param0: string, param1: com.socketmobile.capture.rpc.RpcTransport.Listener): void;
						public unsubscribe(): void;
					}
					export module HttpRpcTransport {
						export class Builder {
							public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport.Builder>;
							public constructor();
							public build(): com.socketmobile.capture.rpc.http.HttpRpcTransport;
							public setEndpoint(param0: java.net.URL): com.socketmobile.capture.rpc.http.HttpRpcTransport.Builder;
						}
						export class Consumer extends com.socketmobile.capture.rpc.http.HttpRpcTransport.Wait.Listener {
							public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport.Consumer>;
							public onResponse(param0: string): void;
							public onError(): void;
						}
						export class Ok {
							public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport.Ok>;
						}
						export class Wait {
							public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport.Wait>;
							public run(): void;
						}
						export module Wait {
							export class Listener {
								public static class: java.lang.Class<com.socketmobile.capture.rpc.http.HttpRpcTransport.Wait.Listener>;
								/**
								 * Constructs a new instance of the com.socketmobile.capture.rpc.http.HttpRpcTransport$Wait$Listener interface with the provided implementation. An empty constructor exists calling super() when extending the interface class.
								 */
								public constructor(implementation: {
									onResponse(param0: string): void;
									onError(): void;
								});
								public constructor();
								public onError(): void;
								public onResponse(param0: string): void;
							}
						}
					}
				}
			}
		}
	}
}



declare module com {
	export module socketmobile {
		export module utils {
			export class LogExceptionRunnable {
				public static class: java.lang.Class<com.socketmobile.utils.LogExceptionRunnable>;
				public run(): void;
				public constructor(param0: java.lang.Runnable);
			}
		}
	}
}

//Generics information:

