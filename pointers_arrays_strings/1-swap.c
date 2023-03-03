#include "main.h"

/**
*swap_int - swapping integers
*@a: int
*@b: int
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
