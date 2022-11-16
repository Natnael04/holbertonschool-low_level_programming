#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - to add a new node at the end of a list_t list
 * @head: the original linked list
 * @str: new linked list
 *
 * Return: the address of the new listor NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = (list_t *)malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);

	while (temp->next)
	{
		temp = temp->next;
		if (*head == NULL)
		{
		*head = temp = new;
		}
		else
		{
		temp = *head;
		temp->next = new;
		temp = new;
		}
	}
		return (temp);

}