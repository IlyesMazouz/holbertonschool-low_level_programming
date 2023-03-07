#include "main.h"
#include "string.h"

/**
*rev_string - reversing a string
*@s: a string
*/

void rev_string(char *s)
{
	int len = strlen(s);
	int a = 0, z = len - 1;
	char res;

	while (a < z)
	{

		res = s[a];
		s[a] = s[z];
		s[z] = res;
		a++;
		z--;
	}
}
