#include "main.h"

/**
*_isupper - cheking the uppercase
*@c: int
*Return: value of c
*/

int _isupper(int c)
{

	if (c > 64 && c <= 90)
		return (1);
	else
		return (0);
}
