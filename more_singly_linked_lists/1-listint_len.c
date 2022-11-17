#include <stdio.h>
#include "lists.h"

/**
 * listint_len - to print all element of a lists
 * @h: the head of the linked list
 *
 * Return: the number of elements in a linked listint_t list
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != 0)
	{
		node++;
		h = h->next;
	}
	return (node);
}
