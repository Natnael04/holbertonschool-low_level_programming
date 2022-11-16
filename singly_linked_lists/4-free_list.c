#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - tp frees a list_t list
 * @head: the head of the link
 *
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
