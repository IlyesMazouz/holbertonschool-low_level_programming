#include "main.h"
#include "stdlib.h"

/**
**array_range - allocating a memory of an array integers
*@min: an integer
*@max: an integer
*Return: value of arr
*/

int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	arr[i] = min + i;
	return (arr);
}
