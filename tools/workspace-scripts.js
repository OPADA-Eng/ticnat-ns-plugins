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
          script: 'nx clean demo',
          description: '⚆  Clean  🧹',
        },
        ios: {
          script: 'nx debug demo ios',
          description: '⚆  Run iOS  ',
        },
        android: {
          script: 'nx debug demo android',
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
      // @ticnat/nativescript-woosim-printer
      'nativescript-woosim-printer': {
        build: {
          script: 'nx run nativescript-woosim-printer:build.all',
          description: '@ticnat/nativescript-woosim-printer: Build',
        },
      },
      // @ticnat/nativescript-x-printer-bt
      'nativescript-x-printer-bt': {
        build: {
          script: 'nx run nativescript-x-printer-bt:build.all',
          description: '@ticnat/nativescript-x-printer-bt: Build',
        },
      },
      // @ticnat/nativescript-t3b-printer
      'nativescript-t3b-printer': {
        build: {
          script: 'nx run nativescript-t3b-printer:build.all',
          description: '@ticnat/nativescript-t3b-printer: Build',
        },
      },
      // @ticnat/nativescript-socketmobile
      'nativescript-socketmobile': {
        build: {
          script: 'nx run nativescript-socketmobile:build.all',
          description: '@ticnat/nativescript-socketmobile: Build',
        },
      },
      // @ticnat/nativescript-sewoo-printer
      'nativescript-sewoo-printer': {
        build: {
          script: 'nx run nativescript-sewoo-printer:build.all',
          description: '@ticnat/nativescript-sewoo-printer: Build',
        },
      },
      // @ticnat/nativescript-searchable-select
      'nativescript-searchable-select': {
        build: {
          script: 'nx run nativescript-searchable-select:build.all',
          description: '@ticnat/nativescript-searchable-select: Build',
        },
      },
      // @ticnat/nativescript-intermec-printer
      'nativescript-intermec-printer': {
        build: {
          script: 'nx run nativescript-intermec-printer:build.all',
          description: '@ticnat/nativescript-intermec-printer: Build',
        },
      },
      // @ticnat/nativescript-image-cache
      'nativescript-image-cache': {
        build: {
          script: 'nx run nativescript-image-cache:build.all',
          description: '@ticnat/nativescript-image-cache: Build',
        },
      },
      // @ticnat/nativescript-page-to-pdf
      'nativescript-page-to-pdf': {
        build: {
          script: 'nx run nativescript-page-to-pdf:build.all',
          description: '@ticnat/nativescript-page-to-pdf: Build',
        },
      },
      'build-all': {
        script: 'nx run-many --target=build.all --all',
        description: 'Build all packages',
      },
    },
    '⚡': {
      script: `npx cowsay "Focus only on source you care about for efficiency ⚡"`,
      description: '_____________  Focus (VS Code supported)  _____________',
    },
    focus: {
      'nativescript-woosim-printer': {
        script: 'nx run nativescript-woosim-printer:focus',
        description: 'Focus on @ticnat/nativescript-woosim-printer',
      },
      'nativescript-x-printer-bt': {
        script: 'nx run nativescript-x-printer-bt:focus',
        description: 'Focus on @ticnat/nativescript-x-printer-bt',
      },
      'nativescript-t3b-printer': {
        script: 'nx run nativescript-t3b-printer:focus',
        description: 'Focus on @ticnat/nativescript-t3b-printer',
      },
      'nativescript-socketmobile': {
        script: 'nx run nativescript-socketmobile:focus',
        description: 'Focus on @ticnat/nativescript-socketmobile',
      },
      'nativescript-sewoo-printer': {
        script: 'nx run nativescript-sewoo-printer:focus',
        description: 'Focus on @ticnat/nativescript-sewoo-printer',
      },
      'nativescript-searchable-select': {
        script: 'nx run nativescript-searchable-select:focus',
        description: 'Focus on @ticnat/nativescript-searchable-select',
      },
      'nativescript-intermec-printer': {
        script: 'nx run nativescript-intermec-printer:focus',
        description: 'Focus on @ticnat/nativescript-intermec-printer',
      },
      'nativescript-image-cache': {
        script: 'nx run nativescript-image-cache:focus',
        description: 'Focus on @ticnat/nativescript-image-cache',
      },
      'nativescript-page-to-pdf': {
        script: 'nx run nativescript-page-to-pdf:focus',
        description: 'Focus on @ticnat/nativescript-page-to-pdf',
      },
      reset: {
        script: 'nx g @nativescript/plugin-tools:focus-packages',
        description: 'Reset Focus',
      },
    },
    '.....................': {
      script: `npx cowsay "That's all for now folks ~"`,
      description: '.....................',
    },
  },
};
