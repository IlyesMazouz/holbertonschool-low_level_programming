#include "main.h"

/**
*int _isalpha(int c) - no desc
*
* Return: 1 or 0 in otherwise.
*/

int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
					letter = 1;
		}
	}
	return (letter);
}
