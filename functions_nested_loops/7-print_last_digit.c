#include "main.h"

/**
*print_last_digit - print last digit of a number
*@n: last digit number
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int s;

	s = n % 10;
	if (s == n)
		_putchar (s);
	return (n);
}

