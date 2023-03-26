#include "main.h"
#include "stdlib.h"
#include "string.h"

/**
**string_nconcat -
*@s1: a pointer
*@s2: a pointer
*@n: an unsigned int
*Return: value of s3
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 >= n)
	{
		len2 = n;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	memcpy(s3, s1, len1);
	memcpy(s3 + len1, s2, len2);
	s3[len1 + len2] = '\0';
	return (s3);
}
