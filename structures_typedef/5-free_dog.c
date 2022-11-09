#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - to frees dogs
 * @d: a variable to initialize
 *
 * Return
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
