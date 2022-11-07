#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - to execute a function
 * @array: an array
 * @size: a size of the array
 * @action: a pointer to the function
 *
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
