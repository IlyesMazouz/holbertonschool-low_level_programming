#include "stdio.h"
#include "stdlib.h"
#include "ctype.h"

/**
*main - a program that adds positive numbers
*@argc: an int
*@argv: an array
*Return: (0)
*/

int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("error\n");
			return (1);
		}
			}
	sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}


