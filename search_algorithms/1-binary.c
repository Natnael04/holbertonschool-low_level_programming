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
int binary_search(int *array, size_t size, int value) {
    int left, right, mid;
    
    if (array == NULL) {
        return -1;
    }

    left = 0;
    right = size - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;

        printf("Searching subarray: ");
        {
            int i;
            for (i = left; i <= right; i++) {
                printf("%d ", array[i]);
            }
        }
        printf("\n");

        if (array[mid] == value) {
            return mid;
        } else if (array[mid] < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}
