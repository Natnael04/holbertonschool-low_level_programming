#include <stdio.h>
#include "dog.h"

/**
 * print_dog - to print a variable type struct dog
 * @d: to print a struct dog
 *
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)/n");
	else
		printf("Name: %s/n", d->name);
	if (d->age < 0)
		printf("Age: (nil)/n");
	else
		printf("Age: %d/n", d->age < 0);
	if (d->owner == NULL)
		printf("Owner: (nil)/n");
	else
		printf("Owner: %s/n", d->owner);

}
