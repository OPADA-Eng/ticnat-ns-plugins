import { Component } from '@angular/core';

@Component({
	selector: 'demo-home',
	templateUrl: 'home.component.html',
})
export class HomeComponent {
	demos = [
	{
		name: 'nativescript-image-cache'
	},
	{
		name: 'nativescript-intermec-printer'
	},
	{
		name: 'nativescript-searchable-select'
	},
	{
		name: 'nativescript-sewoo-printer'
	},
	{
		name: 'nativescript-socketmobile'
	},
	{
		name: 'nativescript-t3b-printer'
	},
	{
		name: 'nativescript-woosim-printer'
	}
];
}