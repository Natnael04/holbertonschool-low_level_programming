#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - a new struct we create
 * @name: the name of struct parameter
 * @age: the age of struct parameter
 * @owner: the owner of struct parameter
 *
 * Return: NULL if the function fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int nlen, olen, i;
	dog_t *doggy;

	nlen = olen = 0;
	while (name[nlen++])
		;
	while (owner[olen++])
		;
	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
	{
		return (NULL);
	}

	doggy->name = malloc(nlen * sizeof(doggy->name));
	if (doggy == NULL)
	{
		free(doggy->name)
			;
		return (NULL);
	}
	for (i = 0; i < nlen; i++)
		doggy->name[i] = name[i];

	doggy->age = age;

	doggy->owner = malloc(olen * sizeof(doggy->owner));
	if (doggy == NULL)
	{
		free(doggy->owner)
			;
		return (NULL);
	}
	for (i = 0; i < olen; i++)
		doggy->owner[i] = owner[i];
	return (doggy);
}
