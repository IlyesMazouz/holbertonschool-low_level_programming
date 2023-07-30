#include "search_algos.h"

/**
*linear_search - Searches for a value in an array of integers using the Linear search algorithm
*@array: Pointer to the first element of the array to search in
*@size: Number of elements in the array
*@value: The value to search for
*Return: The first index where the value is located, or (-1) on failure
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array)
    {
        while (i <= size - 1)
        {
            if (value == array[i])
            {
                printf("Value checked array[%lu] = [%d]\n", i, array[i]);
                return (i);
            }

            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            i++;
        }
    }

    return (-1);
}
