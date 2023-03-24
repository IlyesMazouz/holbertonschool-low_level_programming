#include "main.h"

/**
*int _islower(int c)
*@c: an int
*Return: 0 if succes
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
