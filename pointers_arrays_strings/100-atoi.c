#include "main.h"

/**
*_atoi - converting a string to integers
*@s: a string
*Return: value value of result
*/

int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + (s[i] - '0');
		}
	else if (s[i] == '-')
	{
		sign *= -1;
	}
	else if (s[i] == '+')
	{

	}
	else if (result == 0)
	{
		continue;
	}
	else
	{
		break;
	}
	}
	result *= sign;
	return (result);
}
