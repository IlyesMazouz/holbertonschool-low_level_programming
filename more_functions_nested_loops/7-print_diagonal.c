#include "main.h"

/**
*print_diagonal - printing diagonal lines
*@n: int
*/

void print_diagonal(int n)
{
	int m = 0;
	int i;

	if (n > 0)
	for (; m < n; m++)
	{
		for (i = 0; i < m; i++)
			_putchar (' ');
		_putchar ('\\');
	_putchar ('\n');
	}
	else
	_putchar ('\n');
}
