#include "main.h"
#include "math.h"

/**
*_pow_recursion - making cool math stuff
*@x: an integer
*@y: an integer
*Return: value of y ^ x
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
