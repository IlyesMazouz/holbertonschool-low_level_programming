#include "stdio.h"
#include "main.h"
#include "string.h"

/**
*_strcmp - comparing two strings
*@s1: a string
*@s2: a string
*Return: (0)
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
	{
		return (s1[a] - s2[a]);
	}
		a++;
	}

	return (0);

}
