#include "main.h"
#include "string.h"

/**
*_strlen_recursion - recursioning the lenght of a string
*@s: a string
*Return: value of strlen
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	else
	return (1 + _strlen_recursion(s + 1));
}
