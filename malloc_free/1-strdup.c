#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
**_strdup - duplicating a string
*@str: a pointer
*Return: value of str
*/

char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == 0)
	{
		return (NULL);
	}
	while (str[len])
	len++;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
