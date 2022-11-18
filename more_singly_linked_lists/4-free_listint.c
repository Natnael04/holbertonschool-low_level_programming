#include <stdio.h>
#include "lists.h"

/**
 * free_listint - to frees a listint_t list
 * @head: the head of the linked list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
