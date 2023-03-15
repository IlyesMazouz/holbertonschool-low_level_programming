#include "stdio.h"
#include "main.h"

/**
*string_toupper - swtching charachter from lowercase to uppercase
*@a: a pointer
*Return: value of a
*/

char *string_toupper(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		if (a[b] >= 'a' && a[b] <= 'z')
		a[b] = a[b] - 32;
	b++;
	}
	return (a);
}
