#include "cubes.h"

cubes::cubes()
{
	x = 0;
	y = 0;
	z = 0;
	len = 10;
}

void cubes::cubes_set(int a, int b, int c, int h)
{
	x = a;
	y = b;
	z = c;
	len = h;
}
