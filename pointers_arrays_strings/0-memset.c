#include "main.h"

/**
*_memset - filling a memory
*@s: a string
*@b: a char
*@n: unsi int
*Return: value of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
