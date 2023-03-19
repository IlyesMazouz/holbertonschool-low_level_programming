#include "main.h"

/**
*_strspn - calculating the lenght of a prefix substring
*@s: a string
*@accept: a string
*Return: value of n
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
	}
		}
	if (accept[j] == '\0')
		break;
			}
	return (n);
}
