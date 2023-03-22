#include "main.h"

/**
*check_prime_number - helping to check if int is a prime num
*@a: an int
*@b: an int
*Return: value of int
*/

int check_prime_number(int a, int b)
{
	if (b <= 1)
		return (0);

	if (b <= a)
		return (1);

	if (b % a == 0)
		return (0);
	return (check_prime_number(a + 1, b));
}

/**
*is_prime_number - checking if int is a prime num
*@n: an int
*Return: value of n
*/

int is_prime_number(int n)
{
	return (check_prime_number(2, n));
}
