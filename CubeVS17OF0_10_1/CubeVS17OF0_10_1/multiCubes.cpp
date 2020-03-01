#include "multiCubes.h"
#include "./src/ofApp.h"

multiCubes::multiCubes() {

}

void multiCubes::generate_cubes(int s) {

	int l = 0;
	_size = s;

	// Allocate memory
	cb = new cubes**[s];
	for (int i = 0; i < s; ++i) {
		cb[i] = new cubes*[s];

		for (int j = 0; j < s; ++j)
			cb[i][j] = new cubes[s];
	}


	for (int i = 0; i < cubeSize; i++)
		for (int j = 0; j < cubeSize; j++)
			for (int k = 0; k < cubeSize; k++) {
				cb[i][j][k].cubes_set(i, j, k, 10);
				cb[i][j][k].index = l++;
				
			}
}

void multiCubes::show() {
	ofTranslate(-getDimension()/2, -getDimension() / 2, -getDimension() / 2);
	for (int i = 0; i < cubeSize; i++)
		for (int j = 0; j < cubeSize; j++)
			for (int k = 0; k < cubeSize; k++) {
				ofSetColor((i * 100) + 55, (j * 100) + 55, (k * 100) + 55);
				ofFill();
				ofDrawBox((i*singleCubeSize) + (offset*i), (j * singleCubeSize) + (offset*j), (k * singleCubeSize) + (offset*k), singleCubeSize);
			}

}

float multiCubes::getDimension() {
	cubeDimension = ((cubeSize*singleCubeSize) + ((cubeSize - 1)*(offset))) - singleCubeSize;
	return cubeDimension;
}

void multiCubes::begin(int cubeSize_, int offset_, int singleCubeSize_) {
	cubeSize = cubeSize_;
	offset = offset_;
	singleCubeSize = singleCubeSize_;
}

void multiCubes::rotateX() {

}

void multiCubes::rotateY() {

}

void multiCubes::rotateZ() {

}