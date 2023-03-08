#include "main.h"
#include "string.h"

/**
*puts_half - printing half a string
*@str: a string
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int a, z;

	if (len % 2 == 0)
		z = len / 2;
	else
		z = (len + 1) / 2;
	for (a = z; a < len; a++)
		_putchar (str[a]);
	_putchar ('\n');

}
