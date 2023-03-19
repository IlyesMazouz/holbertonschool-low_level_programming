#include "main.h"

/**
*_memcpy - copiying a memory area
*@dest: a string
*@src: a string
*@n: unis int
*Return: value of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	src[i] = dest[i];
	i++;
	}
	return (dest);
}
