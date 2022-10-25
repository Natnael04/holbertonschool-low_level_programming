#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - to creates an array of chars initializes with a specific char
 * @size: size of array to be created
 * @c: char to initialize array
 *
 * Return: pointer to an array or null if malloc fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);

}
