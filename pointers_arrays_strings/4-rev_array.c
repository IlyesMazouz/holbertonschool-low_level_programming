#include "main.h"
#include "stdio.h"

/**
*reverse_array - reversing an array of int
*@a: an array
*@n: an int
*/

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
