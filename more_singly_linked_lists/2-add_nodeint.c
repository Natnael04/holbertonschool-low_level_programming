#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - to add a new node at the beginning of a listint_t list
 * @n: a new node to add in linked list
 * @head: the head of linked list
 *
 * Return: to the address of the new element or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head != NULL)
		return (NULL);
	while (head == NULL)
	{
		new_node = (listint_t *)malloc(sizeof(listint_t));

		new_node->n = n;

		new_node->next = *head;

		*head = new_node;
	}
	return (*head);
}
