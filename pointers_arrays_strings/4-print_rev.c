#include "main.h"

/**
*print_rev - printing in reverse
*@s: char
*/

void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
		r++;
	for (r--; r >= 0; r--)
		_putchar (s[r]);
	_putchar ('\n');
}
