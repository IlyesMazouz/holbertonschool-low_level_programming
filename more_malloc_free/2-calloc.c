#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
**_calloc - allocating a memory for an array
*@nmemb: an unsigned int
*@size: an unsigned int
*Return: value of ptr
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int full_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	full_size = nmemb * size;
	ptr = malloc(full_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, full_size);
	return (ptr);
}
