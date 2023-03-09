#include "main.h"
#include "stdio.h"

/**
*_strcpy - copiying a string to a buffer
*@dest: pointer
*@src: pointer
*Return: value of *dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	dest[i] = '\0';
	return (dest);
}
