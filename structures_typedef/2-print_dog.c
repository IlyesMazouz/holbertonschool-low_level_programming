#include "dog.h"
#include "stdlib.h"
#include "stdio.h"

/**
*print_dog - print the elements of struc dog
*@d: a pointer
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("name: ");
	if (d->name == NULL)
		printf("nill\n");
	else
		printf ("%s\n", d->name);

	printf("age: ");
	if (d->age == 0)
		printf("nil\n");
	else
		printf("%f\n", d->age);

	printf("owner: ");
	if (d->owner == NULL)
		printf("nil\n");
	else
		printf("%s\n", d->owner);
}
