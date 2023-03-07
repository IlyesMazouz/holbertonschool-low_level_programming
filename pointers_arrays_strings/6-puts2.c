#include "main.h"
#include "string.h"

/**
*puts2 - printing pair numbers only
*@str: string
*/

void puts2(char *str)
{
	int n;
	int len = strlen(str);

	for (n = 0; n < len; n += 2)
		_putchar (str[n]);
	_putchar ('\n');
}
