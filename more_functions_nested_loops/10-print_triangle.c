#include "main.h"

/**
*print_triangle - printing a triangle
*@size: an integer
*/

void print_triangle(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size - i; n++)
			_putchar(' ');
		for (n = 0; n <= i; n++)
			_putchar('#');
	_putchar('\n');
	}
}
