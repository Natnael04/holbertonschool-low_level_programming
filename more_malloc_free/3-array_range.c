#include "main.h"
#include <stdlib.h>

/**
 * array_range - to create an array of integer
 * @min: first string of array
 * @max: second string of array
 *
 * Return: the pointer to the  newly created array or NULL if  fails
 */
int *array_range(int min, int max)
{
	int i, l;
	int *p;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	p = malloc(sizeof(int) * l);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < l; i++, min++)
	{
		p[i] = min;
	}
	return (p);

}
