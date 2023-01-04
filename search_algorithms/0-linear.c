#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - search for a value in an array of integer
 * @array: a pointer to the first element
 * @size: the number of element in array
 * @value: the value to search for
 *
 * Return: the first index and if it is not present in array NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; i < ((int)size); i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		}

	}
	return (-1);
}
