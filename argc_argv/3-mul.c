#include "stdio.h"
#include "stdlib.h"

/**
*main - multiplying the number of arguemnts
*@argc: an int
*@argv: an array
*Return: (0)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
