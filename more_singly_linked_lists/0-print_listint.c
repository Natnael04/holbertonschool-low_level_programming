#include <stdio.h>
#include "lists.h"

/**
 * print_listint - to print all element of a list
 * @h: the head of the link list
 *
 * Return: the number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
	}
	return (node);
}
