#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - to delete the head node of a listint_t linked list
 * @head: the head of linked list
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n = 0;

	if (head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		n = temp->n;
		free(temp);
	}
	return (n);
}
