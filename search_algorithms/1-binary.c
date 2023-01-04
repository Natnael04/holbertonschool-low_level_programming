#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - search for a value in a sorted array of integers
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: the number of elements in array
 *
 * Return: the index or -1 if the array is not present
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int j = size - 1;
	int mid;

	while(i < j)
	{
		mid = ((i + j)/2);
		if (value == array[mid])
			return mid;
		else if (value < array[mid])
			j = (mid - 1);
		else
			j = (mid + 1);
	}
	return -1;
}
