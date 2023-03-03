#include "main.h"

/**
*print_square - printing square
*@size: int
*/
void print_square(int size)
{
	int squa, squi;

	if (size > 0)
		for (squa = 0; squa < size; squa++)
		{
			for (squi = 0; squi < size; squi++)
				_putchar ('#');
			_putchar ('\n');
		}
	else
		_putchar ('\n');
}
