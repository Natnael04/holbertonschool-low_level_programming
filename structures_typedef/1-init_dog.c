#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - to initialize a variable of type struct dog
 *@d: to initialize the dog
 *@name: the name of dog
 *@age: the age of dog
 *@owner: the owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
