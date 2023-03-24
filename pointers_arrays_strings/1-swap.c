#include "main.h"

/**
*swap_int - swapping integers
*@a: an int
*@b: an int
*/

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
