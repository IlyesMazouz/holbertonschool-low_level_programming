#include "main.h"

/**
*_isupper - cheking the uppercase
*@c: int
*Return: value of c
*/

int _isupper(int c)
{

	if (c == 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
