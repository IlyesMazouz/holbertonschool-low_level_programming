#include "dog.h"

/**
*init_dog - initializing a variable of type struct dog
*@d: a pointer
*@name: a pointer
*@age: a float
*@owner: a pointer
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
		d->name = name;
		d->age = age;
		d->owner = owner;
}
