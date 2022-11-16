#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - to add a new node at the bedinning of a list_t list
 * @head: the original linked list
 * @str: the string to add to the node
 *
 * Return: the address of new list or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (head != NULL && str != NULL)
	{
		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = *head;

		*head = temp;
		return (temp);
	}
	return (0);
}
