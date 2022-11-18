#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - to add a new node at the end of a listint_t list
 * @head: the head of a linked list
 * @n: elements of linked list
 *
 * Return: the address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		listint_t *lastNode = *head;

		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
	return (*head);
}
