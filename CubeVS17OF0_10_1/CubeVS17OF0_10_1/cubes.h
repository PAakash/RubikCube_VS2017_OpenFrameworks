#ifndef CUBES_H_
#define CUBES_H_

class cubes {

private:
	int x, y, z;
	int len;

public:
	int index;
	cubes();							// Null constructor
	void cubes_set(int, int, int, int);	// Specific constructor
};

#endif