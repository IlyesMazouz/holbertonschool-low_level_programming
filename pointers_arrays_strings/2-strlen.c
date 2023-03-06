#include "main.h"

/**
*_strlen - calculate the lenght of a string
*@s: string
*Return: value of l
*/

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);

}
