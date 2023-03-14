#include "stdio.h"
#include "main.h"
#include "string.h"

/**
*_strncpy - copiying a string
*@dest: a string
*@src: a string
*@n: integer
*Return: value of dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
