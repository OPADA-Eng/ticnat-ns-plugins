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
		name: 'nativescript-searchable-select'
	},
	{
		name: 'nativescript-sewoo-printer'
	},
	{
		name: 'nativescript-woosim-printer'
	}
];
}