#include "main.h"

/**
*_strchr - locating a string
*@s: a string
*@c: a char
*Return: Value of s
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	i++;
	}
	return (0);
}
