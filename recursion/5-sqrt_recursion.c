#include "main.h"

/**
*find - help locat the square root of n
*@start: an int
*@end: an int
*@n: an int
*Return: int
*/

int find(int n, int start, int end)
{
	int mid, square;

	if (end < start)
	{
		return (-1);
	}

	mid = (start + end) / 2;
	square = mid * mid;

	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}
	else
	{
		return (sqrt_helper(n, start, mid - 1));
	}
}

/**
*_sqrt_recursion - recursively locating the square of n
*@n: an int
*Return: int
*/

int _sqrt_recursion(int n)

{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (sqrt_helper(n, 1, n));
	}
}
