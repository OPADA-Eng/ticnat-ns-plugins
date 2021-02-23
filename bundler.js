/*
 * This script will download a package (and all of its dependencies) from the
 * online NPM registry, then create a gzip'd tarball containing that package
 * and all of its dependencies. This archive can then be copied to a machine
 * without internet access and installed using npm.
 *
 * The idea is pretty simple:
 *  - npm install [package]
 *  - rewrite [package]/package.json to copy dependencies to bundleDependencies
 *  - npm pack [package]
 *
 *  It is necessary to do this (intead of using pac) because when npm installs
 *  a module, it will actually strip out the node_modules folder from the
 *  tarball unless bundleDependencies is set.
 *
 *  Author: Jack Gill (https://github.com/jackgill)
 *  Date: 11/27/2013
 *  License: MIT License (see end of file)
 */

var fs = require('fs');
var cp = require('child_process');
var path = require('path');

if (process.argv.length != 3) {
	console.log('Usage: %s [package name]', process.argv[1]);
	process.exit(0);
}

var packageName = process.argv[2];

// Copy dependencies to bundleDependencies
function rewritePackageJSON(fileName) {
	var contents = fs.readFileSync(fileName);
	var json = JSON.parse(contents);
	if (json.dependencies) {
		json.bundleDependencies = Object.keys(json.dependencies);
		fs.writeFileSync(fileName, JSON.stringify(json, null, 2));
	}
}

// Install the package from the online registry
cp.exec('npm install ' + packageName, function (err, stdout, stderr) {
	console.log(stdout);
	console.error(stderr);

	if (err) {
		console.log('Error executing npm install: ', err);
		process.exit(0);
	}

	// Set bundleDependencies for the package
	rewritePackageJSON(path.join('node_modules', packageName, 'package.json'));

	// Create a new .tgz file which bundles all dependencies
	cp.exec('npm pack ' + path.join('node_modules', packageName), function (err, stdout, stderr) {
		console.log(stdout);
		console.error(stderr);

		if (err) {
			console.log('Error executing npm pack: ', err);
		} else {
			console.log('Bundled package ' + packageName);
		}
	});
});

/*
   The MIT License (MIT)
Copyright (c) 2013 Jack Gill
Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/
