#include "stdio.h"
#include "main.h"
#include "string.h"

/**
*_strncat - adding a number of charachters to a string
*@dest: string
*@src: string
*@n: int
*Return: value of dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
