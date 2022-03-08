import { Observable, EventData, Page } from '@nativescript/core';
import { DemoSharedNativescriptSocketmobile } from '@demo/shared';
import { Socketmobile } from '@ticnat/nativescript-socketmobile';
var page;
export function navigatingTo(args: EventData) {
	page = <Page>args.object;
	page.bindingContext = new DemoModel();
}

export class DemoModel extends Observable {
	public socket;
	public appInfo = {
		AppID: '',
		AppKey: '',
		DeveloperID: ''
	}
	public scannedText = '';
	constructor() {
		super();
		// SingleEntry config for testing
		this.appInfo.AppKey = "MCwCFAcji6oT1soQeryg+x4Eh65bGNx2AhRtuPKEJ7aHWXKvv8hNVB291CYztQ==";
		this.appInfo.DeveloperID = "bb57d8e1-f911-47ba-b510-693be162686a";
		this.appInfo.AppID = "ios:com.socketmobile.SingleEntry";
		this.socket = new Socketmobile(this.appInfo.AppKey, this.appInfo.DeveloperID, this.appInfo.AppID);
	}

	public initScanner(args) {
		this.socket.didReceiveDecodedData = (data: string, device, result) => {
			this.set('scannedText', data);
		}
		this.socket.listenerStarted = () => {
			console.log("listener started");
		};
		this.socket.initScanner();
	}
}
