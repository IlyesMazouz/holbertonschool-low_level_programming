#include <stdio.h>

/**
* main - Entry point
*
* Return: Alwyas 0 (Success)
*/

int main(void)
{
	int c;

	for (c = '0'; c <= '8'; c++)
	{
		putchar (c);
		putchar (',');
		putchar (' ');
	}
	putchar ('9');
	putchar('\n');
	return (0);
}
