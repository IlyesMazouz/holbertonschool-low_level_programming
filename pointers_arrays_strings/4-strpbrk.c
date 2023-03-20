#include "main.h"
#include "stddef.h"

/**
*_strpbrk - a function that searches a string for any of a set of bytes
*@s: a string
*@accept: a string
*Return: value of s
*/

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
	}
		}
			}
	return (NULL);
}
