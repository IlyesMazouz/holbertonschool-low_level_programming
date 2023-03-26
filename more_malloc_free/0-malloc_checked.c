#include "main.h"
#include "stdlib.h"

/**
**malloc_checked - allocating memory and exiting upon failure
*@b: an unsigned int
*Return: value of i
*/

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
