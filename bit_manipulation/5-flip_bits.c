#include "main.h"

/**
*flip_bits - function that returns number of bits to get from number to another
*@n: an unsigned long integer
*@m: an unsigned long integer
*Return: value of count
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result != 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
