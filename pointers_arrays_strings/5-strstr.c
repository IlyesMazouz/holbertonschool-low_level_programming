#include "main.h"
#include "stddef.h"

/**
*_strstr - a function that locates a substring
*@haystack: a string
*@needle: a string
*Return: value of haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
	for (b = 0; needle[b] != '\0'; b++)
	{
	if (haystack[a + b] != needle[b])
	{
	break;
	}
	else if (needle[b + 1] == '\0')
	{
	return (haystack + a);
	}
	}
	}
	return (NULL);
}
