import { Observable } from '@nativescript/core';
export enum PaperSizes {
	'FourInch' = 832,
	'ThreeInch' = 576,
	'TwoInch' = 384,
}
export class SewooPrinterCommon extends Observable {
	public paperSize: number = PaperSizes.FourInch;
	public charset: string = '';
	public debug: boolean = false;
	constructor() {
		super();
	}
}
