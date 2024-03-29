#include "main.h"

/**
*binary_to_uint - converting binairy numbers to unsigned integers
*@b: a pointer
*Return: value of num
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			num <<= 1;
		}
		else if (b[i] == '1')
		{
			num <<= 1;
			num |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (num);
}
