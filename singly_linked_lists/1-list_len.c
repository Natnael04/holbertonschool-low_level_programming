#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - show the number of elements of a list
 * @h: a linked list
 *
 *Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
