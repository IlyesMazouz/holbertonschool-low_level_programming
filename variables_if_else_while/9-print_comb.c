#include <stdio.h>

/**
* main - Entry point
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int c;
	int fI = 1;

	for (c = '0'; c <= '9'; c++)
	{
		if (fI != 1)
		{
			putchar (',');
			putchar (' ');
		}
		putchar(c);
		fI = 0;
	}
	putchar('\n');
	return (0);
}
