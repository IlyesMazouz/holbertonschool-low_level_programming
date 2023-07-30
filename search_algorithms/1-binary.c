#include "search_algos.h"

/**
 *binary_search - Searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *@array: Pointer to the first element of the array to search in
 *@size: Number of elements in the array
 *@value: The value to search for
 *Return: The index where the value is located, or -1 on failure
 */

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle, i;

	left = 0;
	right = (int)size - 1;
	while (left <= right)
	{
		printf("Searching in array: %d", array[left]);
		for (i = left + 1; i <= right; i++)
			printf(", %d", array[i]);
		printf("\n");

		middle = left + (right - left) / 2;

		if (value == array[middle])
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}

	return (-1);
}
