#include "main.h"

/**
*get_bit - a function that prints the value of a bit at a given index
*@n: an unsigned long int
*@index: an unsigned int
*Return: value of bit at index
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
