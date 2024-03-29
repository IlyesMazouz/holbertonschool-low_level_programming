#include "main.h"

/**
*clear_bit -  a function that sets the value of a bit to 0 at a given index
*@n: a pointer
*@index: an unsigned int
*Return: (1)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;
		*n &= ~mask;
		return (1);
}
