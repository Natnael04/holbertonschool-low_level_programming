#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - to frees a listint_t list
 * @head: the head of a linked list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *newFree, *nodeFree;

	nodeFree = *head;

	while (nodeFree)
	{
		newFree = nodeFree->next;
		free(nodeFree);
		nodeFree = newFree;
	}
	*head = NULL;
}
