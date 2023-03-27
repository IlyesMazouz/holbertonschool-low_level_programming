#ifndef DOG_H
#define DOG_H

/**
*struct dog - defining a new structure named dog
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

dog_t my_dog(char *name, float age, char *owner);

#endif

