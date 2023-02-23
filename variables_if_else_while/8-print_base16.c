#include <stdio.h>

/**
* main - Entry point
*
* Return: Alwyas 0 (Success)
**/

int main(void)
{
	char a;
	char b;

	for (a = '1'; a <= '9'; a++)
	putchar(a);
	for (b = 'a'; b <= 'f'; b++)
	putchar(b);
	putchar('\n');
	return (0);
}
