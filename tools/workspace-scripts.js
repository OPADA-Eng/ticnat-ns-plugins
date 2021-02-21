const npsUtils = require('nps-utils');

module.exports = {
	message: 'NativeScript Plugins ~ made with ❤️  Choose a command to start...',
	pageSize: 32,
	scripts: {
		default: 'nps-i',
		nx: {
			script: 'nx',
			description: 'Execute any command with the @nrwl/cli',
		},
		format: {
			script: 'nx format:write',
			description: 'Format source code of the entire workspace (auto-run on precommit hook)',
		},
		'🔧': {
			script: `npx cowsay "NativeScript plugin demos make developers 😊"`,
			description: '_____________  Apps to demo plugins with  _____________',
		},
		// demos
		apps: {
			'...Vanilla...': {
				script: `npx cowsay "Nothing wrong with vanilla 🍦"`,
				description: ` 🔻 Vanilla`,
			},
			demo: {
				clean: {
					script: 'nx run demo:clean',
					description: '⚆  Clean  🧹',
				},
				ios: {
					script: 'nx run demo:ios',
					description: '⚆  Run iOS  ',
				},
				android: {
					script: 'nx run demo:android',
					description: '⚆  Run Android  🤖',
				},
			},
			'...Angular...': {
				script: `npx cowsay "Test all the Angles!"`,
				description: ` 🔻 Angular`,
			},
			'demo-angular': {
				clean: {
					script: 'nx run demo-angular:clean',
					description: '⚆  Clean  🧹',
				},
				ios: {
					script: 'nx run demo-angular:ios',
					description: '⚆  Run iOS  ',
				},
				android: {
					script: 'nx run demo-angular:android',
					description: '⚆  Run Android  🤖',
				},
			},
		},
		'⚙️': {
			script: `npx cowsay "@ticnat/* packages will keep your ⚙️ cranking"`,
			description: '_____________  @ticnat/*  _____________',
		},
		// packages
		// build output is always in dist/packages
		'@ticnat': {
			// @ticnat/nativescript-searchable-select
			'nativescript-searchable-select': {
				build: {
					script: 'nx run nativescript-searchable-select:build.all',
					description: '@ticnat/nativescript-searchable-select: Build',
				},
			},
			// @ticnat/nativescript-woosim-printer
			'nativescript-woosim-printer': {
				build: {
					script: 'nx run nativescript-woosim-printer:build.all',
					description: '@ticnat/nativescript-woosim-printer: Build',
				},
			},
			// @ticnat/nativescript-intermec-printer
			'nativescript-intermec-printer': {
				build: {
					script: 'nx run nativescript-intermec-printer:build.all',
					description: '@ticnat/nativescript-intermec-printer: Build',
				},
			},
			'build-all': {
				script: 'nx run all:build',
				description: 'Build all packages',
			},
		},
		'⚡': {
			script: `npx cowsay "Focus only on source you care about for efficiency ⚡"`,
			description: '_____________  Focus (VS Code supported)  _____________',
		},
		focus: {
			'nativescript-searchable-select': {
				script: 'nx run nativescript-searchable-select:focus',
				description: 'Focus on @ticnat/nativescript-searchable-select',
			},
			'nativescript-woosim-printer': {
				script: 'nx run nativescript-woosim-printer:focus',
				description: 'Focus on @ticnat/nativescript-woosim-printer',
			},
			'nativescript-intermec-printer': {
				script: 'nx run nativescript-intermec-printer:focus',
				description: 'Focus on @ticnat/nativescript-intermec-printer',
			},
			reset: {
				script: 'nx run all:focus',
				description: 'Reset Focus',
			},
		},
		'.....................': {
			script: `npx cowsay "That's all for now folks ~"`,
			description: '.....................',
		},
	},
};
