#include "main.h"

/**
* int_islower(int c) - no desc
*
* Return: 1 if is lowercase or 0 if is uppercase
*/

int _islower(int c)
{
	int lower = 0;
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}
	return (lower);
}
