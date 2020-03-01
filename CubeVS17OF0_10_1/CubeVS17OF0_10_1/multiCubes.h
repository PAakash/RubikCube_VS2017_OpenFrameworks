#pragma once

#ifndef MULTICUBES_H_
#define MULTICUBES_H_

#include "./cubes.h"

class multiCubes {

private:
	float _size;
	float cubeDimension;
	int cubeSize;
	int offset;
	int singleCubeSize;
	int index;
	cubes*** cb;

public:
	
	multiCubes();
	void begin(int, int, int);
	void generate_cubes(int);
	void show();
	float getDimension();
	void rotateX();
	void rotateY();
	void rotateZ();
};

#endif