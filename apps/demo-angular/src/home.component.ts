import { Component } from '@angular/core';

@Component({
	selector: 'demo-home',
	templateUrl: 'home.component.html',
})
export class HomeComponent {
	demos = [
		{
			name: 'nativescript-image-cache',
		},
		{
			name: 'nativescript-intermec-printer',
		},
		{
			name: 'nativescript-searchable-select',
		},
		{
			name: 'nativescript-woosim-printer',
		},
	];
}
