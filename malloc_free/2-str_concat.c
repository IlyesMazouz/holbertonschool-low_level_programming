#include "main.h"
#include "string.h"
#include "stdlib.h"

/**
**str_concat - allocating memory area of a new string
*@s1: a string
*@s2: a string
*Return: value of s3
*/

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int len1, len2, lenr, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	lenr = len1 + len2 + 1;

	s3 = malloc(lenr * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] =! '\0';
	return (s3);
}
