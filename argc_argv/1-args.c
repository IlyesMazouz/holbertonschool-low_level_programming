#include "stdio.h"

/**
*main - counting the number of arguments in the programme
*@argc: an int
*@argv: an array
*Return: (0)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
