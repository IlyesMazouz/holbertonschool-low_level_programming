#include "stdio.h"

/**
*main - function for Fizz Buzz
*Return: 0 allways succes
*/
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
