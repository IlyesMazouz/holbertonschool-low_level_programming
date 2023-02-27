#include "main.h"

/**
*times_table - times table
*
*/

void jack_bauer(void)
{
	int n, m;

	for (n = 0; n < 9; n++)
	{
		for (m = 0; m < 9; m++)
		{
			_putchar ((n * m) + '0');
			_putchar (',');
			_putchar (' ');
			_putchar ('\n');

		}
	}
}
